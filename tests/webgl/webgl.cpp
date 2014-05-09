/*
 * Copyright 2013 Leaning Technologies
 *
 * Partially adapted from http://learningwebgl.com/blog/?p=28
 * 		     and http://net.tutsplus.com/tutorials/webgl-essentials-part-i/
 */

#include <duetto/client.h>
#include <duetto/clientlib.h>
#include <duetto/webgl.h>

using namespace client;

void MakePerspective(float* matrix, double FOV, double AspectRatio, double Closest, double Farest)
{
	double YLimit = Closest * client::Math.tan(FOV * client::Math.get_PI() / 360);
	double A = -( Farest + Closest ) / ( Farest - Closest );
	double B = -2 * Farest * Closest / ( Farest - Closest );
	double C = (2 * Closest) / ( (YLimit * AspectRatio) * 2 );
	double D = (2 * Closest) / ( YLimit * 2 );

	double f = client::Math.tan(FOV * client::Math.get_PI() / 360);

	matrix[0] = C;
	matrix[1] = 0;
	matrix[2] = 0;
	matrix[3] = 0;

	matrix[4] = 0;
	matrix[5] = D;
	matrix[6] = 0;
	matrix[7] = 0;

	matrix[8] = 0;
	matrix[9] = 0;
	matrix[10] = A;
	matrix[11] = -1;

	matrix[12] = 0;
	matrix[13] = 0;
	matrix[14] = B;
	matrix[15] = 0;
}

void MakeIdentity(float* matrix)
{
	matrix[0]=1;
	matrix[1]=0;
	matrix[2]=0;
	matrix[3]=0;

	matrix[4]=0;
	matrix[5]=1;
	matrix[6]=0;
	matrix[7]=0;

	matrix[8]=0;
	matrix[9]=0;
	matrix[10]=1;
	matrix[11]=0;

	matrix[12]=0;
	matrix[13]=0;
	matrix[14]=0;
	matrix[15]=1;
}

void Translate(float* matrix, float x, float y, float z)
{
	float nx=matrix[0]*x + matrix[4]*y + matrix[8]*z + matrix[12];
	float ny=matrix[1]*x + matrix[5]*y + matrix[9]*z + matrix[13];
	float nz=matrix[2]*x + matrix[6]*y + matrix[10]*z + matrix[14];
	float nw=matrix[3]*x + matrix[7]*y + matrix[11]*z + matrix[15];

	matrix[12]=nx;
	matrix[13]=ny;
	matrix[14]=nz;
	matrix[15]=nw;
}

WebGLRenderingContext* gl;
int vertexPositionAttribute;
int vertexColorAttribute;
WebGLBuffer* positionBuf;
WebGLBuffer* colorBuf;
WebGLUniformLocation* mvMatrixUniform;
float mvMatrix[16];
double lastTime;

void drawCallback() [[client]]
{
	requestAnimationFrame(duetto::Callback(drawCallback));

	gl->clearColor(0,0,0,1);
	gl->clear(gl->get_COLOR_BUFFER_BIT());

	gl->bindBuffer(gl->get_ARRAY_BUFFER(), positionBuf);
	gl->vertexAttribPointer(vertexPositionAttribute, 3, gl->get_FLOAT(), false, 0, 0);
	gl->bindBuffer(gl->get_ARRAY_BUFFER(), colorBuf);
	gl->vertexAttribPointer(vertexColorAttribute, 4, gl->get_FLOAT(), false, 0, 0);

	gl->drawArrays(gl->get_TRIANGLES(), 0, 3);

	double currentTime=client::Date::now();
	Translate(mvMatrix, 0, (currentTime-lastTime)/1000, 0);
	lastTime=currentTime;
	gl->uniformMatrix4fv(mvMatrixUniform, false, duetto::MakeTypedArray(mvMatrix));
}

void loadCallback() [[client]]
{
	auto canvas=static_cast<HTMLCanvasElement*>(document.getElementById("glcanvas"));
	gl=static_cast<WebGLRenderingContext*>(canvas->getContext("experimental-webgl"));
	WebGLUniformLocation* pMatrixUniform;
	WebGLProgram* program=gl->createProgram();
	WebGLShader* pShader=gl->createShader(gl->get_FRAGMENT_SHADER());
	WebGLShader* vShader=gl->createShader(gl->get_VERTEX_SHADER());

	// Compile the vertex shader
	gl->shaderSource(vShader,"attribute vec3 aVertexPosition;\
			attribute vec4 aVertexColor;\
			uniform mat4 uMVMatrix;\
			uniform mat4 uPMatrix;\
			varying vec4 vColor;\
			void main(void) {\
				gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);\
				vColor = aVertexColor;\
			}");
	gl->compileShader(vShader);

	// Compile the pixel shader
	gl->shaderSource(pShader,"precision mediump float;\
			varying vec4 vColor;\
			void main(void) {\
				gl_FragColor = vColor;\
			}");
	gl->compileShader(pShader);

	gl->attachShader(program, vShader);
	gl->attachShader(program, pShader);
	gl->linkProgram(program);

	gl->useProgram(program);

	vertexPositionAttribute=gl->getAttribLocation(program, "aVertexPosition");
	gl->enableVertexAttribArray(vertexPositionAttribute);

	vertexColorAttribute=gl->getAttribLocation(program, "aVertexColor");
	gl->enableVertexAttribArray(vertexColorAttribute);

	pMatrixUniform = gl->getUniformLocation(program, "uPMatrix");
	mvMatrixUniform = gl->getUniformLocation(program, "uMVMatrix");

	positionBuf=gl->createBuffer();
	gl->bindBuffer(gl->get_ARRAY_BUFFER(), positionBuf);
	float vertices[] = {0.0,  1.0,  -6.0, -1.0, -1.0,  -6.0, 1.0, -1.0, -6.0};
	gl->bufferData(gl->get_ARRAY_BUFFER(), duetto::MakeTypedArray(vertices), gl->get_STATIC_DRAW());

	colorBuf=gl->createBuffer();
	gl->bindBuffer(gl->get_ARRAY_BUFFER(), colorBuf);
	float colors[] = {1.0,  0.0,  0.0, 1.0,
			0.0, 1.0, 0.0, 1.0,
			0.0, 0.0, 1.0, 1.0};
	gl->bufferData(gl->get_ARRAY_BUFFER(), duetto::MakeTypedArray(colors), gl->get_STATIC_DRAW());

	float pMatrix[16];
	MakePerspective(pMatrix, 45, 1, 0.1, 100);

	MakeIdentity(mvMatrix);
	lastTime=client::Date::now();

	gl->uniformMatrix4fv(pMatrixUniform, false, duetto::MakeTypedArray(pMatrix));
	gl->uniformMatrix4fv(mvMatrixUniform, false, duetto::MakeTypedArray(mvMatrix));

	drawCallback();
}

int webMain() [[client]]
{
	document.addEventListener("DOMContentLoaded",duetto::Callback(loadCallback));
	return 0;
}
