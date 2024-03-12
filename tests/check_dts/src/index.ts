import ts from "typescript";

const program = ts.createProgram([process.argv[2]], {
  target: ts.ScriptTarget.ES2015,
  module: ts.ModuleKind.CommonJS,
  esModuleInterop: true,
  skipLibCheck: false,
  strict: true,
});

const diagnostics = ts.getPreEmitDiagnostics(program);

console.log(diagnostics.length);
