/****************************************************************
 *
 * Copyright (C) 2013-2016 Alessandro Pignotti <alessandro@leaningtech.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 ***************************************************************/

#ifndef _CHEERP_CLIENTLIB_acc90e6e
#define _CHEERP_CLIENTLIB_acc90e6e
#include "types.h"

#include <utility>

namespace [[cheerp::genericjs]] client
{
	class PropertyDescriptor;
	class PropertyDescriptorMap;
	class IArguments;
	class Math;
	class Date;
	class RegExpExecArray;
	class RegExp;
	class Error;
	class EvalError;
	class RangeError;
	class ReferenceError;
	class SyntaxError;
	class TypeError;
	class URIError;
	class JSON;
	class ArrayBuffer;
	class ArrayBufferView;
	class Int8Array;
	class Uint8Array;
	class Int16Array;
	class Uint16Array;
	class Int32Array;
	class Uint32Array;
	class Float32Array;
	class Float64Array;
	class DataView;
	class PositionOptions;
	class NavigatorID;
	class EventTarget;
	class Node;
	class NodeSelector;
	class ElementTraversal;
	class Element;
	class ElementCSSInlineStyle;
	class MSEventAttachmentTarget;
	class MSNodeExtensions;
	class HTMLElement;
	class MSDataBindingTableExtensions;
	class MSDataBindingExtensions;
	class DOML2DeprecatedBackgroundStyle;
	class DOML2DeprecatedBackgroundColorStyle;
	class HTMLTableElement;
	class TreeWalker;
	class GetSVGDocument;
	class SVGPathSeg;
	class SVGPathSegCurvetoQuadraticRel;
	class Performance;
	class Event;
	class UIEvent;
	class CompositionEvent;
	class WindowTimers;
	class SVGElement;
	class SVGStylable;
	class SVGLangSpace;
	class SVGFitToViewBox;
	class SVGExternalResourcesRequired;
	class SVGMarkerElement;
	class CSSStyleDeclaration;
	class SVGLocatable;
	class SVGTransformable;
	class SVGTests;
	class SVGGElement;
	class MSCSSProperties;
	class MSStyleCSSProperties;
	class NavigatorOnLine;
	class NavigatorContentUtils;
	class MSNavigatorExtensions;
	class NavigatorGeolocation;
	class MSNavigatorDoNotTrack;
	class NavigatorStorageUtils;
	class Navigator;
	class SVGPathSegCurvetoCubicSmoothAbs;
	class SVGZoomEvent;
	class HTMLTableAlignment;
	class HTMLTableCellElement;
	class HTMLTableDataCellElement;
	class HTMLBaseElement;
	class ClientRect;
	class PositionErrorCallback;
	class DOMImplementation;
	class SVGUnitTypes;
	class HTMLNextIdElement;
	class SVGPathSegMovetoRel;
	class SVGLineElement;
	class DOML2DeprecatedTextFlowControl;
	class HTMLParagraphElement;
	class MSHTMLCollectionExtensions;
	class HTMLCollection;
	class HTMLAreasCollection;
	class SVGDescElement;
	class SVGPathSegCurvetoQuadraticSmoothRel;
	class DOML2DeprecatedListSpaceReduction;
	class MSScriptHost;
	class SVGClipPathElement;
	class MouseEvent;
	class RangeException;
	class SVGTextContentElement;
	class SVGTextPositioningElement;
	class DOML2DeprecatedMarginStyle;
	class DOML2DeprecatedBorderStyle;
	class DOML2DeprecatedAlignmentStyle;
	class MSDataBindingRecordSetExtensions;
	class HTMLAppletElement;
	class TextMetrics;
	class DocumentEvent;
	class DOML2DeprecatedListNumberingAndBulletStyle;
	class HTMLOListElement;
	class SVGPathSegLinetoVerticalRel;
	class SVGAnimatedString;
	class CharacterData;
	class Text;
	class CDATASection;
	class StyleMedia;
	class HTMLSelectElement;
	class TextRange;
	class HTMLBlockElement;
	class StyleSheet;
	class CSSStyleSheet;
	class MSSelection;
	class HTMLMetaElement;
	class SVGURIReference;
	class SVGPatternElement;
	class SVGAnimatedAngle;
	class Selection;
	class SVGScriptElement;
	class HTMLDDElement;
	class MSDataBindingRecordSetReadonlyExtensions;
	class CSSRule;
	class CSSStyleRule;
	class NodeIterator;
	class SVGZoomAndPan;
	class SVGViewElement;
	class LinkStyle;
	class HTMLLinkElement;
	class DOML2DeprecatedColorProperty;
	class DOML2DeprecatedSizeProperty;
	class HTMLFontElement;
	class SVGTitleElement;
	class ControlRangeCollection;
	class MSNamespaceInfo;
	class WindowSessionStorage;
	class SVGAnimatedTransformList;
	class HTMLTableCaptionElement;
	class HTMLOptionElement;
	class HTMLMapElement;
	class HTMLMenuElement;
	class MouseWheelEvent;
	class SVGPointList;
	class SVGAnimatedLengthList;
	class WindowLocalStorage;
	class MSWindowExtensions;
	class Window;
	class SVGAnimatedPreserveAspectRatio;
	class MSSiteModeEvent;
	class StyleSheetPageList;
	class MSImageResourceExtensions;
	class MSResourceMetadata;
	class HTMLImageElement;
	class HTMLAreaElement;
	class SVGAngle;
	class HTMLButtonElement;
	class HTMLSourceElement;
	class CanvasGradient;
	class KeyboardEvent;
	class Document;
	class MessageEvent;
	class HTMLScriptElement;
	class HTMLTableRowElement;
	class RenderingContext;
	class CanvasRenderingContext2D;
	class MSCSSRuleList;
	class SVGPathSegLinetoHorizontalAbs;
	class SVGPathSegArcAbs;
	class SVGTransformList;
	class HTMLHtmlElement;
	class SVGPathSegClosePath;
	class HTMLFrameElement;
	class SVGAnimatedLength;
	class SVGAnimatedPoints;
	class SVGDefsElement;
	class HTMLQuoteElement;
	class CSSMediaRule;
	class WindowModal;
	class XMLHttpRequest;
	class HTMLTableHeaderCellElement;
	class HTMLDListElement;
	class SVGPathSegLinetoHorizontalRel;
	class SVGEllipseElement;
	class SVGAElement;
	class HTMLFrameSetElement;
	class Screen;
	class Coordinates;
	class EventListener;
	class DataTransfer;
	class FocusEvent;
	class Range;
	class SVGPoint;
	class MSPluginsCollection;
	class SVGAnimatedNumberList;
	class SVGSVGElement;
	class HTMLLabelElement;
	class HTMLLegendElement;
	class HTMLDirectoryElement;
	class SVGAnimatedInteger;
	class SVGTextElement;
	class SVGTSpanElement;
	class HTMLLIElement;
	class SVGPathSegLinetoVerticalAbs;
	class MSStorageExtensions;
	class SVGStyleElement;
	class MSCurrentStyleCSSProperties;
	class Storage;
	class HTMLIFrameElement;
	class TextRangeCollection;
	class HTMLBodyElement;
	class DocumentType;
	class SVGGradientElement;
	class SVGRadialGradientElement;
	class MutationEvent;
	class DragEvent;
	class HTMLTableSectionElement;
	class HTMLInputElement;
	class HTMLAnchorElement;
	class HTMLParamElement;
	class SVGImageElement;
	class SVGAnimatedNumber;
	class PerformanceTiming;
	class HTMLPreElement;
	class EventException;
	class SVGMetadataElement;
	class SVGPathSegArcRel;
	class SVGPathSegMovetoAbs;
	class SVGStringList;
	class XDomainRequest;
	class SVGLength;
	class SVGPolygonElement;
	class HTMLPhraseElement;
	class SVGPathSegCurvetoCubicRel;
	class MSEventObj;
	class HTMLCanvasElement;
	class Location;
	class HTMLTitleElement;
	class HTMLStyleElement;
	class PerformanceEntry;
	class SVGTransform;
	class WheelEvent;
	class SVGNumber;
	class SVGAnimatedPathData;
	class SVGPathElement;
	class MSCompatibleInfo;
	class SVGAnimatedRect;
	class CSSNamespaceRule;
	class SVGPathSegList;
	class HTMLUnknownElement;
	class HTMLMediaElement;
	class HTMLAudioElement;
	class PositionError;
	class SVGElementInstance;
	class MSNamespaceInfoCollection;
	class SVGCircleElement;
	class StyleSheetList;
	class CSSImportRule;
	class CustomEvent;
	class HTMLBaseFontElement;
	class HTMLTextAreaElement;
	class Geolocation;
	class MSWindowModeless;
	class HTMLMarqueeElement;
	class SVGRect;
	class History;
	class SVGPathSegCurvetoCubicAbs;
	class SVGPathSegCurvetoQuadraticAbs;
	class TimeRanges;
	class SVGPathSegLinetoAbs;
	class HTMLModElement;
	class SVGMatrix;
	class MSPopupWindow;
	class BeforeUnloadEvent;
	class SVGUseElement;
	class ImageData;
	class HTMLTableColElement;
	class SVGException;
	class SVGLinearGradientElement;
	class SVGAnimatedEnumeration;
	class HTMLUListElement;
	class SVGRectElement;
	class ErrorEventHandler;
	class HTMLDivElement;
	class NamedNodeMap;
	class MediaList;
	class SVGPathSegCurvetoQuadraticSmoothAbs;
	class SVGPathSegCurvetoCubicSmoothRel;
	class SVGLengthList;
	class ProcessingInstruction;
	class MSBehaviorUrnsCollection;
	class CSSFontFaceRule;
	class TextEvent;
	class DocumentFragment;
	class SVGPolylineElement;
	class Position;
	class BookmarkCollection;
	class PerformanceMark;
	class CSSPageRule;
	class HTMLBRElement;
	class HTMLSpanElement;
	class HTMLHeadElement;
	class HTMLHeadingElement;
	class HTMLFormElement;
	class DOMParser;
	class MSMimeTypesCollection;
	class SVGTextPathElement;
	class HTMLDTElement;
	class NodeList;
	class XMLSerializer;
	class PerformanceMeasure;
	class NodeFilter;
	class SVGNumberList;
	class MediaError;
	class HTMLFieldSetElement;
	class HTMLBGSoundElement;
	class Comment;
	class PerformanceResourceTiming;
	class CanvasPattern;
	class HTMLHRElement;
	class HTMLObjectElement;
	class HTMLEmbedElement;
	class StorageEvent;
	class HTMLOptGroupElement;
	class HTMLIsIndexElement;
	class SVGPathSegLinetoRel;
	class DOMException;
	class SVGAnimatedBoolean;
	class MSCompatibleInfoCollection;
	class SVGSwitchElement;
	class SVGPreserveAspectRatio;
	class Attr;
	class PerformanceNavigation;
	class SVGStopElement;
	class PositionCallback;
	class SVGSymbolElement;
	class SVGElementInstanceList;
	class CSSRuleList;
	class HTMLVideoElement;
	class ClientRectList;
	class SVGMaskElement;
	class External;
	class ObjectURLOptions;
	class MSGestureEvent;
	class ErrorEvent;
	class SVGFilterElement;
	class TrackEvent;
	class SVGFEMergeNodeElement;
	class SVGFilterPrimitiveStandardAttributes;
	class SVGFEFloodElement;
	class MSGesture;
	class TextTrackCue;
	class MSBaseReader;
	class MSStreamReader;
	class DOMTokenList;
	class SVGComponentTransferFunctionElement;
	class SVGFEFuncAElement;
	class SVGFETileElement;
	class SVGFEBlendElement;
	class MessageChannel;
	class SVGFEMergeElement;
	class TransitionEvent;
	class MediaQueryList;
	class DOMError;
	class CloseEvent;
	class WebSocket;
	class SVGFEPointLightElement;
	class ProgressEvent;
	class IDBObjectStore;
	class SVGFEGaussianBlurElement;
	class IDBVersionChangeEvent;
	class IDBIndex;
	class FileList;
	class IDBCursor;
	class SVGFESpecularLightingElement;
	class Blob;
	class File;
	class URL;
	class IDBCursorWithValue;
	class XMLHttpRequestEventTarget;
	class IDBEnvironment;
	class AudioTrackList;
	class SVGFEMorphologyElement;
	class SVGFEFuncRElement;
	class WindowTimersExtension;
	class SVGFEDisplacementMapElement;
	class AnimationEvent;
	class MSRangeCollection;
	class SVGFEDistantLightElement;
	class SVGFEFuncBElement;
	class IDBKeyRange;
	class WindowConsole;
	class IDBTransaction;
	class AudioTrack;
	class SVGFEConvolveMatrixElement;
	class TextTrackCueList;
	class CSSKeyframesRule;
	class SVGFETurbulenceElement;
	class TextTrackList;
	class SVGFEFuncGElement;
	class SVGFEColorMatrixElement;
	class Console;
	class SVGFESpotLightElement;
	class WindowBase64;
	class IDBDatabase;
	class DOMStringList;
	class IDBRequest;
	class IDBOpenDBRequest;
	class HTMLProgressElement;
	class MSLaunchUriCallback;
	class SVGFEOffsetElement;
	class MSUnsafeFunctionCallback;
	class TextTrack;
	class MediaQueryListListener;
	class MessagePort;
	class FileReader;
	class BlobPropertyBag;
	class ApplicationCache;
	class FrameRequestCallback;
	class PopStateEvent;
	class CSSKeyframeRule;
	class MSFileSaver;
	class MSStream;
	class MSBlobBuilder;
	class DOMSettableTokenList;
	class IDBFactory;
	class MSPointerEvent;
	class MSManipulationEvent;
	class FormData;
	class HTMLDataListElement;
	class SVGFEImageElement;
	class AbstractWorker;
	class SVGFECompositeElement;
	class ValidityState;
	class HTMLTrackElement;
	class MSApp;
	class SVGFEComponentTransferElement;
	class SVGFEDiffuseLightingElement;
	class MSCSSMatrix;
	class Worker;
	class ExceptionInformation;
	class StoreExceptionsInformation;
	class StoreSiteSpecificExceptionsInformation;
	class ConfirmSiteSpecificExceptionsInformation;
	class AlgorithmParameters;
	class MutationObserverInit;
	class MsZoomToOptions;
	class DeviceAccelerationDict;
	class DeviceRotationRateDict;
	class Algorithm;
	class MSExecAtPriorityFunctionCallback;
	class MSGraphicsTrust;
	class SubtleCrypto;
	class RandomSource;
	class Crypto;
	class VideoPlaybackQuality;
	class GlobalEventHandlers;
	class Key;
	class DeviceAcceleration;
	class HTMLAllCollection;
	class AesGcmEncryptResult;
	class NavigationEvent;
	class NavigationCompletedEvent;
	class MutationRecord;
	class MimeTypeArray;
	class KeyOperation;
	class DOMStringMap;
	class DeviceOrientationEvent;
	class MSMediaKeys;
	class MSMediaKeyMessageEvent;
	class MSHTMLWebViewElement;
	class SourceBuffer;
	class MSInputMethodContext;
	class DeviceRotationRate;
	class PluginArray;
	class MSMediaKeyError;
	class Plugin;
	class MediaSource;
	class SourceBufferList;
	class XMLDocument;
	class DeviceMotionEvent;
	class MimeType;
	class PointerEvent;
	class MSDocumentExtensions;
	class MutationObserver;
	class MSWebViewAsyncOperation;
	class ScriptNotifyEvent;
	class PerformanceNavigationTiming;
	class MSMediaKeyNeededEvent;
	class LongRunningScriptDetectedEvent;
	class MSAppView;
	class PerfWidgetExternal;
	class PageTransitionEvent;
	class MutationCallback;
	class HTMLDocument;
	class KeyPair;
	class MSMediaKeySession;
	class UnviewableContentIdentifiedEvent;
	class CryptoOperation;
	class OES_texture_float;
	class WEBGL_compressed_texture_s3tc;
	class OES_standard_derivatives;
	class OES_texture_float_linear;
	class EXT_texture_filter_anisotropic;
	class PropertyDescriptor: public Object{
	public:
		bool get_configurable();
		void set_configurable(bool);
		bool get_enumerable();
		void set_enumerable(bool);
		Object* get_value();
		void set_value(Object*);
		bool get_writable();
		void set_writable(bool);
		Object* get();
		void set(Object* v);
	};

	class PropertyDescriptorMap: public Object{
	public:
	};

	class IArguments: public Object{
	public:
		double get_length();
		void set_length(double);
		Function* get_callee();
		void set_callee(Function*);
	};

	class Math: public Object{
	public:
		double get_E();
		double get_LN10();
		double get_LN2();
		double get_LOG2E();
		double get_LOG10E();
		double get_PI();
		double get_SQRT1_2();
		double get_SQRT2();
		double abs(double x);
		double acos(double x);
		double asin(double x);
		double atan(double x);
		double atan2(double y, double x);
		double ceil(double x);
		double cos(double x);
		double exp(double x);
		double floor(double x);
		double log(double x);
		template<typename... Args> double max(Args&&... values) { return max(static_cast<double>(std::forward<Args>(values))...); }
		double max();
		template<typename... Args> double min(Args&&... values) { return min(static_cast<double>(std::forward<Args>(values))...); }
		double min();
		double pow(double x, double y);
		double random();
		double round(double x);
		double sin(double x);
		double sqrt(double x);
		double tan(double x);
	private:
		template<typename... Args> double max(double, Args&&... values);
		template<typename... Args> double min(double, Args&&... values);
	};

	class Date: public Object{
	public:
		String* toString();
		String* toDateString();
		String* toTimeString();
		String* toLocaleString();
		String* toLocaleDateString();
		String* toLocaleTimeString();
		double valueOf();
		double getTime();
		double getFullYear();
		double getUTCFullYear();
		double getMonth();
		double getUTCMonth();
		double getDate();
		double getUTCDate();
		double getDay();
		double getUTCDay();
		double getHours();
		double getUTCHours();
		double getMinutes();
		double getUTCMinutes();
		double getSeconds();
		double getUTCSeconds();
		double getMilliseconds();
		double getUTCMilliseconds();
		double getTimezoneOffset();
		double setTime(double time);
		double setMilliseconds(double ms);
		double setUTCMilliseconds(double ms);
		double setSeconds(double sec);
		double setSeconds(double sec, double ms);
		double setUTCSeconds(double sec);
		double setUTCSeconds(double sec, double ms);
		double setMinutes(double min);
		double setMinutes(double min, double sec);
		double setMinutes(double min, double sec, double ms);
		double setUTCMinutes(double min);
		double setUTCMinutes(double min, double sec);
		double setUTCMinutes(double min, double sec, double ms);
		double setHours(double hours);
		double setHours(double hours, double min);
		double setHours(double hours, double min, double sec);
		double setHours(double hours, double min, double sec, double ms);
		double setUTCHours(double hours);
		double setUTCHours(double hours, double min);
		double setUTCHours(double hours, double min, double sec);
		double setUTCHours(double hours, double min, double sec, double ms);
		double setDate(double date);
		double setUTCDate(double date);
		double setMonth(double month);
		double setMonth(double month, double date);
		double setUTCMonth(double month);
		double setUTCMonth(double month, double date);
		double setFullYear(double year);
		double setFullYear(double year, double month);
		double setFullYear(double year, double month, double date);
		double setUTCFullYear(double year);
		double setUTCFullYear(double year, double month);
		double setUTCFullYear(double year, double month, double date);
		String* toUTCString();
		String* toISOString();
		String* toJSON();
		String* toJSON(Object* key);
		Date();
		Date(double value);
		Date(const String& value);
		Date(double year, double month);
		Date(double year, double month, double date);
		Date(double year, double month, double date, double hours);
		Date(double year, double month, double date, double hours, double minutes);
		Date(double year, double month, double date, double hours, double minutes, double seconds);
		Date(double year, double month, double date, double hours, double minutes, double seconds, double ms);
		Date* get_prototype();
		void set_prototype(Date*);
		static double parse(const String& s) [[cheerp::static]];
		static double UTC(double year, double month) [[cheerp::static]];
		static double UTC(double year, double month, double date) [[cheerp::static]];
		static double UTC(double year, double month, double date, double hours) [[cheerp::static]];
		static double UTC(double year, double month, double date, double hours, double minutes) [[cheerp::static]];
		static double UTC(double year, double month, double date, double hours, double minutes, double seconds) [[cheerp::static]];
		static double UTC(double year, double month, double date, double hours, double minutes, double seconds, double ms) [[cheerp::static]];
		static double now() [[cheerp::static]];
	};

	class RegExpExecArray: public Object{
	public:
		double get_length();
		void set_length(double);
		double get_index();
		void set_index(double);
		String* get_input();
		void set_input(const String&);
		String* toString();
		String* toLocaleString();
		template<typename... Args> Array* concat(Args&&... items) { return concat(static_cast<Array*>(std::forward<Args>(items))...); }
		Array* concat();
		String* join();
		String* join(const String& separator);
		String* pop();
		template<typename... Args> double push(Args&&... items) { return push(static_cast<const String&>(std::forward<Args>(items))...); }
		double push();
		Array* reverse();
		String* shift();
		Array* slice();
		Array* slice(double start);
		Array* slice(double start, double end);
		Array* sort();
		Array* sort(EventListener* compareFn);
		Array* splice(double start);
		template<typename... Args> Array* splice(double start, double deleteCount, Args&&... items) { return splice(start, deleteCount, static_cast<const String&>(std::forward<Args>(items))...); }
		Array* splice(double start, double deleteCount);
		template<typename... Args> double unshift(Args&&... items) { return unshift(static_cast<const String&>(std::forward<Args>(items))...); }
		double unshift();
		double indexOf(const String& searchElement);
		double indexOf(const String& searchElement, double fromIndex);
		double lastIndexOf(const String& searchElement);
		double lastIndexOf(const String& searchElement, double fromIndex);
		bool every(EventListener* callbackfn);
		bool every(EventListener* callbackfn, Object* thisArg);
		bool some(EventListener* callbackfn);
		bool some(EventListener* callbackfn, Object* thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(EventListener* callbackfn, Object* thisArg);
		Array* map(EventListener* callbackfn);
		Array* map(EventListener* callbackfn, Object* thisArg);
		Array* filter(EventListener* callbackfn);
		Array* filter(EventListener* callbackfn, Object* thisArg);
		Object* reduce(EventListener* callbackfn);
		Object* reduce(EventListener* callbackfn, Object* initialValue);
		Object* reduceRight(EventListener* callbackfn);
		Object* reduceRight(EventListener* callbackfn, Object* initialValue);
	private:
		template<typename... Args> Array* concat(Array*, Args&&... items);
		template<typename... Args> double push(const String&, Args&&... items);
		template<typename... Args> Array* splice(double start, double deleteCount, const String&, Args&&... items);
		template<typename... Args> double unshift(const String&, Args&&... items);
	};

	class RegExp: public Object{
	public:
		RegExpExecArray* exec(const String& string);
		bool test(const String& string);
		String* get_source();
		void set_source(const String&);
		bool get_global();
		void set_global(bool);
		bool get_ignoreCase();
		void set_ignoreCase(bool);
		bool get_multiline();
		void set_multiline(bool);
		double get_lastIndex();
		void set_lastIndex(double);
		RegExp* compile();
		RegExp(const String& pattern);
		RegExp(const String& pattern, const String& flags);
		String* get_$1();
		String* get_$2();
		String* get_$3();
		String* get_$4();
		String* get_$5();
		String* get_$6();
		String* get_$7();
		String* get_$8();
		String* get_$9();
		String* get_lastMatch();
		void set_lastMatch(const String&);
	};

	class Error: public Object{
	public:
		String* get_name();
		void set_name(const String&);
		String* get_message();
		void set_message(const String&);
		Error();
		Error(const String& message);
		Error* get_prototype();
		void set_prototype(Error*);
	};

	class EvalError: public Error {
	public:
		EvalError();
		EvalError(const String& message);
		EvalError* get_prototype();
		void set_prototype(EvalError*);
	};

	class RangeError: public Error {
	public:
		RangeError();
		RangeError(const String& message);
		RangeError* get_prototype();
		void set_prototype(RangeError*);
	};

	class ReferenceError: public Error {
	public:
		ReferenceError();
		ReferenceError(const String& message);
		ReferenceError* get_prototype();
		void set_prototype(ReferenceError*);
	};

	class SyntaxError: public Error {
	public:
		SyntaxError();
		SyntaxError(const String& message);
		SyntaxError* get_prototype();
		void set_prototype(SyntaxError*);
	};

	class TypeError: public Error {
	public:
		TypeError();
		TypeError(const String& message);
		TypeError* get_prototype();
		void set_prototype(TypeError*);
	};

	class URIError: public Error {
	public:
		URIError();
		URIError(const String& message);
		URIError* get_prototype();
		void set_prototype(URIError*);
	};

	class JSON: public Object{
	public:
		Object* parse(const String& text);
		Object* parse(const String& text, EventListener* reviver);
		String* stringify(Object* value);
		String* stringify(double value);
		String* stringify(Object* value, EventListener* replacer);
		String* stringify(Object* value, Array* replacer);
		String* stringify(Object* value, EventListener* replacer, Object* space);
		String* stringify(Object* value, Array* replacer, Object* space);
	};

	class ArrayBuffer: public Object{
	public:
		double get_byteLength();
		void set_byteLength(double);
		ArrayBuffer* get_prototype();
		void set_prototype(ArrayBuffer*);
		ArrayBuffer(double byteLength);
		ArrayBuffer* slice();
		ArrayBuffer* slice(int start);
	};

	class ArrayBufferView: public Object{
	public:
		ArrayBuffer* get_buffer();
		void set_buffer(ArrayBuffer*);
		double get_byteOffset();
		void set_byteOffset(double);
		double get_byteLength();
		void set_byteLength(double);
	};

	class Int8Array: public ArrayBufferView {
	public:
		double get_length();
		void set_length(double);
		double get(double index);
		void set(double index, double value);
		void set(Int8Array* array);
		void set(Int8Array* array, double offset);
		void set(Array* array);
		void set(Array* array, double offset);
		Int8Array* subarray(double begin);
		Int8Array* subarray(double begin, double end);
		Int8Array* get_prototype();
		void set_prototype(Int8Array*);
		Int8Array(double length);
		Int8Array(Int8Array* array);
		Int8Array(Array* array);
		Int8Array(ArrayBuffer* buffer);
		Int8Array(ArrayBuffer* buffer, double byteOffset);
		Int8Array(ArrayBuffer* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		char& operator[](int index)
		{
			return __builtin_cheerp_make_regular<char>(this, 0)[index];
		}
		char operator[](int index) const
		{
			return __builtin_cheerp_make_regular<char>(this, 0)[index];
		}
	};

	class Uint8Array: public ArrayBufferView {
	public:
		double get_length();
		void set_length(double);
		double get(double index);
		void set(double index, double value);
		void set(Uint8Array* array);
		void set(Uint8Array* array, double offset);
		void set(Array* array);
		void set(Array* array, double offset);
		Uint8Array* subarray(double begin);
		Uint8Array* subarray(double begin, double end);
		Uint8Array* get_prototype();
		void set_prototype(Uint8Array*);
		Uint8Array(double length);
		Uint8Array(Uint8Array* array);
		Uint8Array(Array* array);
		Uint8Array(ArrayBuffer* buffer);
		Uint8Array(ArrayBuffer* buffer, double byteOffset);
		Uint8Array(ArrayBuffer* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		unsigned char& operator[](int index)
		{
			return __builtin_cheerp_make_regular<unsigned char>(this, 0)[index];
		}
		unsigned char operator[](int index) const
		{
			return __builtin_cheerp_make_regular<unsigned char>(this, 0)[index];
		}
	};

	class Int16Array: public ArrayBufferView {
	public:
		double get_length();
		void set_length(double);
		double get(double index);
		void set(double index, double value);
		void set(Int16Array* array);
		void set(Int16Array* array, double offset);
		void set(Array* array);
		void set(Array* array, double offset);
		Int16Array* subarray(double begin);
		Int16Array* subarray(double begin, double end);
		Int16Array* get_prototype();
		void set_prototype(Int16Array*);
		Int16Array(double length);
		Int16Array(Int16Array* array);
		Int16Array(Array* array);
		Int16Array(ArrayBuffer* buffer);
		Int16Array(ArrayBuffer* buffer, double byteOffset);
		Int16Array(ArrayBuffer* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		short& operator[](int index)
		{
			return __builtin_cheerp_make_regular<short>(this, 0)[index];
		}
		short operator[](int index) const
		{
			return __builtin_cheerp_make_regular<short>(this, 0)[index];
		}
	};

	class Uint16Array: public ArrayBufferView {
	public:
		double get_length();
		void set_length(double);
		double get(double index);
		void set(double index, double value);
		void set(Uint16Array* array);
		void set(Uint16Array* array, double offset);
		void set(Array* array);
		void set(Array* array, double offset);
		Uint16Array* subarray(double begin);
		Uint16Array* subarray(double begin, double end);
		Uint16Array* get_prototype();
		void set_prototype(Uint16Array*);
		Uint16Array(double length);
		Uint16Array(Uint16Array* array);
		Uint16Array(Array* array);
		Uint16Array(ArrayBuffer* buffer);
		Uint16Array(ArrayBuffer* buffer, double byteOffset);
		Uint16Array(ArrayBuffer* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		unsigned short& operator[](int index)
		{
			return __builtin_cheerp_make_regular<unsigned short>(this, 0)[index];
		}
		unsigned short operator[](int index) const
		{
			return __builtin_cheerp_make_regular<unsigned short>(this, 0)[index];
		}
	};

	class Int32Array: public ArrayBufferView {
	public:
		double get_length();
		void set_length(double);
		double get(double index);
		void set(double index, double value);
		void set(Int32Array* array);
		void set(Int32Array* array, double offset);
		void set(Array* array);
		void set(Array* array, double offset);
		Int32Array* subarray(double begin);
		Int32Array* subarray(double begin, double end);
		Int32Array* get_prototype();
		void set_prototype(Int32Array*);
		Int32Array(double length);
		Int32Array(Int32Array* array);
		Int32Array(Array* array);
		Int32Array(ArrayBuffer* buffer);
		Int32Array(ArrayBuffer* buffer, double byteOffset);
		Int32Array(ArrayBuffer* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		int& operator[](int index)
		{
			return __builtin_cheerp_make_regular<int>(this, 0)[index];
		}
		int operator[](int index) const
		{
			return __builtin_cheerp_make_regular<int>(this, 0)[index];
		}
	};

	class Uint32Array: public ArrayBufferView {
	public:
		double get_length();
		void set_length(double);
		double get(double index);
		void set(double index, double value);
		void set(Uint32Array* array);
		void set(Uint32Array* array, double offset);
		void set(Array* array);
		void set(Array* array, double offset);
		Uint32Array* subarray(double begin);
		Uint32Array* subarray(double begin, double end);
		Uint32Array* get_prototype();
		void set_prototype(Uint32Array*);
		Uint32Array(double length);
		Uint32Array(Uint32Array* array);
		Uint32Array(Array* array);
		Uint32Array(ArrayBuffer* buffer);
		Uint32Array(ArrayBuffer* buffer, double byteOffset);
		Uint32Array(ArrayBuffer* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		unsigned int& operator[](int index)
		{
			return __builtin_cheerp_make_regular<unsigned int>(this, 0)[index];
		}
		unsigned int operator[](int index) const
		{
			return __builtin_cheerp_make_regular<unsigned int>(this, 0)[index];
		}
	};

	class Float32Array: public ArrayBufferView {
	public:
		double get_length();
		void set_length(double);
		double get(double index);
		void set(double index, double value);
		void set(Float32Array* array);
		void set(Float32Array* array, double offset);
		void set(Array* array);
		void set(Array* array, double offset);
		Float32Array* subarray(double begin);
		Float32Array* subarray(double begin, double end);
		Float32Array* get_prototype();
		void set_prototype(Float32Array*);
		Float32Array(double length);
		Float32Array(Float32Array* array);
		Float32Array(Array* array);
		Float32Array(ArrayBuffer* buffer);
		Float32Array(ArrayBuffer* buffer, double byteOffset);
		Float32Array(ArrayBuffer* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		float& operator[](int index)
		{
			return __builtin_cheerp_make_regular<float>(this, 0)[index];
		}
		float operator[](int index) const
		{
			return __builtin_cheerp_make_regular<float>(this, 0)[index];
		}
	};

	class Float64Array: public ArrayBufferView {
	public:
		double get_length();
		void set_length(double);
		double get(double index);
		void set(double index, double value);
		void set(Float64Array* array);
		void set(Float64Array* array, double offset);
		void set(Array* array);
		void set(Array* array, double offset);
		Float64Array* subarray(double begin);
		Float64Array* subarray(double begin, double end);
		Float64Array* get_prototype();
		void set_prototype(Float64Array*);
		Float64Array(double length);
		Float64Array(Float64Array* array);
		Float64Array(Array* array);
		Float64Array(ArrayBuffer* buffer);
		Float64Array(ArrayBuffer* buffer, double byteOffset);
		Float64Array(ArrayBuffer* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		double& operator[](int index)
		{
			return __builtin_cheerp_make_regular<double>(this, 0)[index];
		}
		double operator[](int index) const
		{
			return __builtin_cheerp_make_regular<double>(this, 0)[index];
		}
	};

	class DataView: public ArrayBufferView {
	public:
		double getInt8(double byteOffset);
		double getUint8(double byteOffset);
		double getInt16(double byteOffset);
		double getInt16(double byteOffset, bool littleEndian);
		double getUint16(double byteOffset);
		double getUint16(double byteOffset, bool littleEndian);
		double getInt32(double byteOffset);
		double getInt32(double byteOffset, bool littleEndian);
		double getUint32(double byteOffset);
		double getUint32(double byteOffset, bool littleEndian);
		double getFloat32(double byteOffset);
		double getFloat32(double byteOffset, bool littleEndian);
		double getFloat64(double byteOffset);
		double getFloat64(double byteOffset, bool littleEndian);
		void setInt8(double byteOffset, double value);
		void setUint8(double byteOffset, double value);
		void setInt16(double byteOffset, double value);
		void setInt16(double byteOffset, double value, bool littleEndian);
		void setUint16(double byteOffset, double value);
		void setUint16(double byteOffset, double value, bool littleEndian);
		void setInt32(double byteOffset, double value);
		void setInt32(double byteOffset, double value, bool littleEndian);
		void setUint32(double byteOffset, double value);
		void setUint32(double byteOffset, double value, bool littleEndian);
		void setFloat32(double byteOffset, double value);
		void setFloat32(double byteOffset, double value, bool littleEndian);
		void setFloat64(double byteOffset, double value);
		void setFloat64(double byteOffset, double value, bool littleEndian);
		DataView* get_prototype();
		void set_prototype(DataView*);
		DataView(ArrayBuffer* buffer);
		DataView(ArrayBuffer* buffer, double byteOffset);
		DataView(ArrayBuffer* buffer, double byteOffset, double length);
	};

	class PositionOptions: public Object{
	public:
		bool get_enableHighAccuracy();
		void set_enableHighAccuracy(bool);
		double get_timeout();
		void set_timeout(double);
		double get_maximumAge();
		void set_maximumAge(double);
	};

	class NavigatorID: public Object{
	public:
		String* get_appVersion();
		void set_appVersion(const String&);
		String* get_appName();
		void set_appName(const String&);
		String* get_userAgent();
		void set_userAgent(const String&);
		String* get_platform();
		void set_platform(const String&);
		String* get_product();
		void set_product(const String&);
		String* get_vendor();
		void set_vendor(const String&);
	};

	class EventTarget: public Object{
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool useCapture);
		bool dispatchEvent(Event* evt);
	};

	class Node: public EventTarget {
	public:
		double get_nodeType();
		void set_nodeType(double);
		Node* get_previousSibling();
		void set_previousSibling(Node*);
		String* get_localName();
		void set_localName(const String&);
		String* get_namespaceURI();
		void set_namespaceURI(const String&);
		String* get_textContent();
		void set_textContent(const String&);
		Node* get_parentNode();
		void set_parentNode(Node*);
		Node* get_nextSibling();
		void set_nextSibling(Node*);
		String* get_nodeValue();
		void set_nodeValue(const String&);
		Node* get_lastChild();
		void set_lastChild(Node*);
		NodeList* get_childNodes();
		void set_childNodes(NodeList*);
		String* get_nodeName();
		void set_nodeName(const String&);
		Document* get_ownerDocument();
		void set_ownerDocument(Document*);
		NamedNodeMap* get_attributes();
		void set_attributes(NamedNodeMap*);
		Node* get_firstChild();
		void set_firstChild(Node*);
		String* get_prefix();
		void set_prefix(const String&);
		Node* removeChild(Node* oldChild);
		Node* appendChild(Node* newChild);
		bool isSupported(const String& feature, const String& version);
		bool isEqualNode(Node* arg);
		String* lookupPrefix(const String& namespaceURI);
		bool isDefaultNamespace(const String& namespaceURI);
		double compareDocumentPosition(Node* other);
		void normalize();
		bool isSameNode(Node* other);
		bool hasAttributes();
		String* lookupNamespaceURI(const String& prefix);
		Node* cloneNode();
		Node* cloneNode(bool deep);
		bool hasChildNodes();
		Node* replaceChild(Node* newChild, Node* oldChild);
		Node* insertBefore(Node* newChild);
		Node* insertBefore(Node* newChild, Node* refChild);
		Node* get_prototype();
		void set_prototype(Node*);
		Node();
		double get_ENTITY_REFERENCE_NODE();
		double get_ATTRIBUTE_NODE();
		double get_DOCUMENT_FRAGMENT_NODE();
		double get_TEXT_NODE();
		double get_ELEMENT_NODE();
		double get_COMMENT_NODE();
		double get_DOCUMENT_POSITION_DISCONNECTED();
		double get_DOCUMENT_POSITION_CONTAINED_BY();
		double get_DOCUMENT_POSITION_CONTAINS();
		double get_DOCUMENT_TYPE_NODE();
		double get_DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC();
		double get_DOCUMENT_NODE();
		double get_ENTITY_NODE();
		double get_PROCESSING_INSTRUCTION_NODE();
		double get_CDATA_SECTION_NODE();
		double get_NOTATION_NODE();
		double get_DOCUMENT_POSITION_FOLLOWING();
		double get_DOCUMENT_POSITION_PRECEDING();
	};

	class NodeSelector: public Object{
	public:
		NodeList* querySelectorAll(const String& selectors);
		Element* querySelector(const String& selectors);
	};

	class ElementTraversal: public Object{
	public:
		double get_childElementCount();
		void set_childElementCount(double);
		Element* get_previousElementSibling();
		void set_previousElementSibling(Element*);
		Element* get_lastElementChild();
		void set_lastElementChild(Element*);
		Element* get_nextElementSibling();
		void set_nextElementSibling(Element*);
		Element* get_firstElementChild();
		void set_firstElementChild(Element*);
	};

	class Element: public Node , public NodeSelector , public ElementTraversal {
	public:
		double get_scrollTop();
		void set_scrollTop(double);
		double get_clientLeft();
		void set_clientLeft(double);
		double get_scrollLeft();
		void set_scrollLeft(double);
		String* get_tagName();
		void set_tagName(const String&);
		double get_clientWidth();
		void set_clientWidth(double);
		double get_scrollWidth();
		void set_scrollWidth(double);
		double get_clientHeight();
		void set_clientHeight(double);
		double get_clientTop();
		void set_clientTop(double);
		double get_scrollHeight();
		void set_scrollHeight(double);
		String* getAttribute();
		String* getAttribute(const String& name);
		NodeList* getElementsByTagNameNS(const String& namespaceURI, const String& localName);
		bool hasAttributeNS(const String& namespaceURI, const String& localName);
		ClientRect* getBoundingClientRect();
		String* getAttributeNS(const String& namespaceURI, const String& localName);
		Attr* getAttributeNodeNS(const String& namespaceURI, const String& localName);
		Attr* setAttributeNodeNS(Attr* newAttr);
		bool msMatchesSelector(const String& selectors);
		bool hasAttribute(const String& name);
		void removeAttribute();
		void removeAttribute(const String& name);
		void setAttributeNS(const String& namespaceURI, const String& qualifiedName, const String& value);
		Attr* getAttributeNode(const String& name);
		bool fireEvent(const String& eventName);
		bool fireEvent(const String& eventName, Object* eventObj);
		NodeList* getElementsByTagName(const String& name);
		ClientRectList* getClientRects();
		Attr* setAttributeNode(Attr* newAttr);
		Attr* removeAttributeNode(Attr* oldAttr);
		void setAttribute();
		void setAttribute(const String& name);
		void setAttribute(const String& name, const String& value);
		void removeAttributeNS(const String& namespaceURI, const String& localName);
		String* get_msRegionOverflow();
		void set_msRegionOverflow(const String&);
		EventListener* get_onmspointerdown();
		void set_onmspointerdown(EventListener*);
		EventListener* get_onmsgotpointercapture();
		void set_onmsgotpointercapture(EventListener*);
		EventListener* get_onmsgesturedoubletap();
		void set_onmsgesturedoubletap(EventListener*);
		EventListener* get_onmspointerhover();
		void set_onmspointerhover(EventListener*);
		EventListener* get_onmsgesturehold();
		void set_onmsgesturehold(EventListener*);
		EventListener* get_onmspointermove();
		void set_onmspointermove(EventListener*);
		EventListener* get_onmsgesturechange();
		void set_onmsgesturechange(EventListener*);
		EventListener* get_onmsgesturestart();
		void set_onmsgesturestart(EventListener*);
		EventListener* get_onmspointercancel();
		void set_onmspointercancel(EventListener*);
		EventListener* get_onmsgestureend();
		void set_onmsgestureend(EventListener*);
		EventListener* get_onmsgesturetap();
		void set_onmsgesturetap(EventListener*);
		EventListener* get_onmspointerout();
		void set_onmspointerout(EventListener*);
		EventListener* get_onmsinertiastart();
		void set_onmsinertiastart(EventListener*);
		EventListener* get_onmslostpointercapture();
		void set_onmslostpointercapture(EventListener*);
		EventListener* get_onmspointerover();
		void set_onmspointerover(EventListener*);
		double get_msContentZoomFactor();
		void set_msContentZoomFactor(double);
		EventListener* get_onmspointerup();
		void set_onmspointerup(EventListener*);
		MSRangeCollection* msGetRegionContent();
		void msReleasePointerCapture(double pointerId);
		void msSetPointerCapture(double pointerId);
		EventListener* get_onlostpointercapture();
		void set_onlostpointercapture(EventListener*);
		EventListener* get_onmspointerenter();
		void set_onmspointerenter(EventListener*);
		EventListener* get_ongotpointercapture();
		void set_ongotpointercapture(EventListener*);
		EventListener* get_onmspointerleave();
		void set_onmspointerleave(EventListener*);
		void msZoomTo(MsZoomToOptions* args);
		void setPointerCapture(double pointerId);
		ClientRect* msGetUntransformedBounds();
		void releasePointerCapture(double pointerId);
		void msRequestFullscreen();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		Element* get_prototype();
		void set_prototype(Element*);
		Element();
	};

	class ElementCSSInlineStyle: public Object{
	public:
		MSStyleCSSProperties* get_runtimeStyle();
		void set_runtimeStyle(MSStyleCSSProperties*);
		MSCurrentStyleCSSProperties* get_currentStyle();
		void set_currentStyle(MSCurrentStyleCSSProperties*);
		void doScroll();
		void doScroll(Object* component);
		String* componentFromPoint(double x, double y);
	};

	class MSEventAttachmentTarget: public Object{
	public:
		bool attachEvent(const String& event, EventListener* listener);
		void detachEvent(const String& event, EventListener* listener);
	};

	class MSNodeExtensions: public Object{
	public:
		Node* swapNode(Node* otherNode);
		Node* removeNode();
		Node* removeNode(bool deep);
		Node* replaceNode(Node* replacement);
	};

	class HTMLElement: public Element , public ElementCSSInlineStyle , public MSEventAttachmentTarget , public MSNodeExtensions {
	public:
		EventListener* get_onmouseleave();
		void set_onmouseleave(EventListener*);
		EventListener* get_onbeforecut();
		void set_onbeforecut(EventListener*);
		EventListener* get_onkeydown();
		void set_onkeydown(EventListener*);
		EventListener* get_onmove();
		void set_onmove(EventListener*);
		EventListener* get_onkeyup();
		void set_onkeyup(EventListener*);
		EventListener* get_onreset();
		void set_onreset(EventListener*);
		EventListener* get_onhelp();
		void set_onhelp(EventListener*);
		EventListener* get_ondragleave();
		void set_ondragleave(EventListener*);
		String* get_className();
		void set_className(const String&);
		EventListener* get_onfocusin();
		void set_onfocusin(EventListener*);
		EventListener* get_onseeked();
		void set_onseeked(EventListener*);
		Object* get_recordNumber();
		void set_recordNumber(Object*);
		String* get_title();
		void set_title(const String&);
		Element* get_parentTextEdit();
		void set_parentTextEdit(Element*);
		String* get_outerHTML();
		void set_outerHTML(const String&);
		EventListener* get_ondurationchange();
		void set_ondurationchange(EventListener*);
		double get_offsetHeight();
		void set_offsetHeight(double);
		HTMLCollection* get_all();
		void set_all(HTMLCollection*);
		EventListener* get_onblur();
		void set_onblur(EventListener*);
		String* get_dir();
		void set_dir(const String&);
		EventListener* get_onemptied();
		void set_onemptied(EventListener*);
		EventListener* get_onseeking();
		void set_onseeking(EventListener*);
		EventListener* get_oncanplay();
		void set_oncanplay(EventListener*);
		EventListener* get_ondeactivate();
		void set_ondeactivate(EventListener*);
		EventListener* get_ondatasetchanged();
		void set_ondatasetchanged(EventListener*);
		EventListener* get_onrowsdelete();
		void set_onrowsdelete(EventListener*);
		double get_sourceIndex();
		void set_sourceIndex(double);
		EventListener* get_onloadstart();
		void set_onloadstart(EventListener*);
		EventListener* get_onlosecapture();
		void set_onlosecapture(EventListener*);
		EventListener* get_ondragenter();
		void set_ondragenter(EventListener*);
		EventListener* get_oncontrolselect();
		void set_oncontrolselect(EventListener*);
		EventListener* get_onsubmit();
		void set_onsubmit(EventListener*);
		MSBehaviorUrnsCollection* get_behaviorUrns();
		void set_behaviorUrns(MSBehaviorUrnsCollection*);
		String* get_scopeName();
		void set_scopeName(const String&);
		EventListener* get_onchange();
		void set_onchange(EventListener*);
		String* get_id();
		void set_id(const String&);
		EventListener* get_onlayoutcomplete();
		void set_onlayoutcomplete(EventListener*);
		String* get_uniqueID();
		void set_uniqueID(const String&);
		EventListener* get_onbeforeactivate();
		void set_onbeforeactivate(EventListener*);
		EventListener* get_oncanplaythrough();
		void set_oncanplaythrough(EventListener*);
		EventListener* get_onbeforeupdate();
		void set_onbeforeupdate(EventListener*);
		EventListener* get_onfilterchange();
		void set_onfilterchange(EventListener*);
		Element* get_offsetParent();
		void set_offsetParent(Element*);
		EventListener* get_ondatasetcomplete();
		void set_ondatasetcomplete(EventListener*);
		EventListener* get_onsuspend();
		void set_onsuspend(EventListener*);
		Object* get_readyState();
		void set_readyState(Object*);
		EventListener* get_onmouseenter();
		void set_onmouseenter(EventListener*);
		String* get_innerText();
		void set_innerText(const String&);
		EventListener* get_onerrorupdate();
		void set_onerrorupdate(EventListener*);
		EventListener* get_onmouseout();
		void set_onmouseout(EventListener*);
		HTMLElement* get_parentElement();
		void set_parentElement(HTMLElement*);
		EventListener* get_onmousewheel();
		void set_onmousewheel(EventListener*);
		EventListener* get_onvolumechange();
		void set_onvolumechange(EventListener*);
		EventListener* get_oncellchange();
		void set_oncellchange(EventListener*);
		EventListener* get_onrowexit();
		void set_onrowexit(EventListener*);
		EventListener* get_onrowsinserted();
		void set_onrowsinserted(EventListener*);
		EventListener* get_onpropertychange();
		void set_onpropertychange(EventListener*);
		Object* get_filters();
		void set_filters(Object*);
		HTMLCollection* get_children();
		void set_children(HTMLCollection*);
		EventListener* get_ondragend();
		void set_ondragend(EventListener*);
		EventListener* get_onbeforepaste();
		void set_onbeforepaste(EventListener*);
		EventListener* get_ondragover();
		void set_ondragover(EventListener*);
		double get_offsetTop();
		void set_offsetTop(double);
		EventListener* get_onmouseup();
		void set_onmouseup(EventListener*);
		EventListener* get_ondragstart();
		void set_ondragstart(EventListener*);
		EventListener* get_onbeforecopy();
		void set_onbeforecopy(EventListener*);
		EventListener* get_ondrag();
		void set_ondrag(EventListener*);
		String* get_innerHTML();
		void set_innerHTML(const String&);
		EventListener* get_onmouseover();
		void set_onmouseover(EventListener*);
		String* get_lang();
		void set_lang(const String&);
		double get_uniqueNumber();
		void set_uniqueNumber(double);
		EventListener* get_onpause();
		void set_onpause(EventListener*);
		String* get_tagUrn();
		void set_tagUrn(const String&);
		EventListener* get_onmousedown();
		void set_onmousedown(EventListener*);
		EventListener* get_onclick();
		void set_onclick(EventListener*);
		EventListener* get_onwaiting();
		void set_onwaiting(EventListener*);
		EventListener* get_onresizestart();
		void set_onresizestart(EventListener*);
		double get_offsetLeft();
		void set_offsetLeft(double);
		bool get_isTextEdit();
		void set_isTextEdit(bool);
		bool get_isDisabled();
		void set_isDisabled(bool);
		EventListener* get_onpaste();
		void set_onpaste(EventListener*);
		bool get_canHaveHTML();
		void set_canHaveHTML(bool);
		EventListener* get_onmoveend();
		void set_onmoveend(EventListener*);
		String* get_language();
		void set_language(const String&);
		EventListener* get_onstalled();
		void set_onstalled(EventListener*);
		EventListener* get_onmousemove();
		void set_onmousemove(EventListener*);
		MSStyleCSSProperties* get_style();
		void set_style(MSStyleCSSProperties*);
		bool get_isContentEditable();
		void set_isContentEditable(bool);
		EventListener* get_onbeforeeditfocus();
		void set_onbeforeeditfocus(EventListener*);
		EventListener* get_onratechange();
		void set_onratechange(EventListener*);
		String* get_contentEditable();
		void set_contentEditable(const String&);
		double get_tabIndex();
		void set_tabIndex(double);
		Document* get_document();
		void set_document(Document*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_ondblclick();
		void set_ondblclick(EventListener*);
		EventListener* get_oncontextmenu();
		void set_oncontextmenu(EventListener*);
		EventListener* get_onloadedmetadata();
		void set_onloadedmetadata(EventListener*);
		EventListener* get_onafterupdate();
		void set_onafterupdate(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onplay();
		void set_onplay(EventListener*);
		EventListener* get_onresizeend();
		void set_onresizeend(EventListener*);
		EventListener* get_onplaying();
		void set_onplaying(EventListener*);
		bool get_isMultiLine();
		void set_isMultiLine(bool);
		EventListener* get_onfocusout();
		void set_onfocusout(EventListener*);
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_ondataavailable();
		void set_ondataavailable(EventListener*);
		bool get_hideFocus();
		void set_hideFocus(bool);
		EventListener* get_onreadystatechange();
		void set_onreadystatechange(EventListener*);
		EventListener* get_onkeypress();
		void set_onkeypress(EventListener*);
		EventListener* get_onloadeddata();
		void set_onloadeddata(EventListener*);
		EventListener* get_onbeforedeactivate();
		void set_onbeforedeactivate(EventListener*);
		String* get_outerText();
		void set_outerText(const String&);
		bool get_disabled();
		void set_disabled(bool);
		EventListener* get_onactivate();
		void set_onactivate(EventListener*);
		String* get_accessKey();
		void set_accessKey(const String&);
		EventListener* get_onmovestart();
		void set_onmovestart(EventListener*);
		EventListener* get_onselectstart();
		void set_onselectstart(EventListener*);
		EventListener* get_onfocus();
		void set_onfocus(EventListener*);
		EventListener* get_ontimeupdate();
		void set_ontimeupdate(EventListener*);
		EventListener* get_onresize();
		void set_onresize(EventListener*);
		EventListener* get_oncut();
		void set_oncut(EventListener*);
		EventListener* get_onselect();
		void set_onselect(EventListener*);
		EventListener* get_ondrop();
		void set_ondrop(EventListener*);
		double get_offsetWidth();
		void set_offsetWidth(double);
		EventListener* get_oncopy();
		void set_oncopy(EventListener*);
		EventListener* get_onended();
		void set_onended(EventListener*);
		EventListener* get_onscroll();
		void set_onscroll(EventListener*);
		EventListener* get_onrowenter();
		void set_onrowenter(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		bool get_canHaveChildren();
		void set_canHaveChildren(bool);
		EventListener* get_oninput();
		void set_oninput(EventListener*);
		bool dragDrop();
		void scrollIntoView();
		void scrollIntoView(bool top);
		void addFilter(Object* filter);
		void setCapture();
		void setCapture(bool containerCapture);
		void focus();
		String* getAdjacentText(const String& where);
		void insertAdjacentText(const String& where, const String& text);
		NodeList* getElementsByClassName(const String& classNames);
		void setActive();
		void removeFilter(Object* filter);
		void blur();
		void clearAttributes();
		void releaseCapture();
		ControlRangeCollection* createControlRange();
		bool removeBehavior(double cookie);
		bool contains(HTMLElement* child);
		void click();
		Element* insertAdjacentElement(const String& position, Element* insertedElement);
		void mergeAttributes(HTMLElement* source);
		void mergeAttributes(HTMLElement* source, bool preserveIdentity);
		String* replaceAdjacentText(const String& where, const String& newText);
		Element* applyElement(Element* apply);
		Element* applyElement(Element* apply, const String& where);
		double addBehavior(const String& bstrUrl);
		double addBehavior(const String& bstrUrl, Object* factory);
		void insertAdjacentHTML(const String& where, const String& html);
		EventListener* get_onmscontentzoom();
		void set_onmscontentzoom(EventListener*);
		EventListener* get_oncuechange();
		void set_oncuechange(EventListener*);
		bool get_spellcheck();
		void set_spellcheck(bool);
		DOMTokenList* get_classList();
		void set_classList(DOMTokenList*);
		EventListener* get_onmsmanipulationstatechanged();
		void set_onmsmanipulationstatechanged(EventListener*);
		bool get_draggable();
		void set_draggable(bool);
		DOMStringMap* get_dataset();
		void set_dataset(DOMStringMap*);
		bool get_hidden();
		void set_hidden(bool);
		MSInputMethodContext* msGetInputContext();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		HTMLElement* get_prototype();
		void set_prototype(HTMLElement*);
		HTMLElement();
	};

	class MSDataBindingTableExtensions: public Object{
	public:
		double get_dataPageSize();
		void set_dataPageSize(double);
		void nextPage();
		void firstPage();
		void refresh();
		void previousPage();
		void lastPage();
	};

	class MSDataBindingExtensions: public Object{
	public:
		String* get_dataSrc();
		void set_dataSrc(const String&);
		String* get_dataFormatAs();
		void set_dataFormatAs(const String&);
		String* get_dataFld();
		void set_dataFld(const String&);
	};

	class DOML2DeprecatedBackgroundStyle: public Object{
	public:
		String* get_background();
		void set_background(const String&);
	};

	class DOML2DeprecatedBackgroundColorStyle: public Object{
	public:
		Object* get_bgColor();
		void set_bgColor(Object*);
	};

	class HTMLTableElement: public HTMLElement , public MSDataBindingTableExtensions , public MSDataBindingExtensions , public DOML2DeprecatedBackgroundStyle , public DOML2DeprecatedBackgroundColorStyle {
	public:
		String* get_width();
		void set_width(const String&);
		Object* get_borderColorLight();
		void set_borderColorLight(Object*);
		String* get_cellSpacing();
		void set_cellSpacing(const String&);
		HTMLTableSectionElement* get_tFoot();
		void set_tFoot(HTMLTableSectionElement*);
		String* get_frame();
		void set_frame(const String&);
		Object* get_borderColor();
		void set_borderColor(Object*);
		HTMLCollection* get_rows();
		void set_rows(HTMLCollection*);
		String* get_rules();
		void set_rules(const String&);
		double get_cols();
		void set_cols(double);
		String* get_summary();
		void set_summary(const String&);
		HTMLTableCaptionElement* get_caption();
		void set_caption(HTMLTableCaptionElement*);
		HTMLCollection* get_tBodies();
		void set_tBodies(HTMLCollection*);
		HTMLTableSectionElement* get_tHead();
		void set_tHead(HTMLTableSectionElement*);
		String* get_align();
		void set_align(const String&);
		HTMLCollection* get_cells();
		void set_cells(HTMLCollection*);
		Object* get_height();
		void set_height(Object*);
		String* get_cellPadding();
		void set_cellPadding(const String&);
		String* get_border();
		void set_border(const String&);
		Object* get_borderColorDark();
		void set_borderColorDark(Object*);
		void deleteRow();
		void deleteRow(double index);
		HTMLElement* createTBody();
		void deleteCaption();
		HTMLElement* insertRow();
		HTMLElement* insertRow(double index);
		void deleteTFoot();
		HTMLElement* createTHead();
		void deleteTHead();
		HTMLElement* createCaption();
		Object* moveRow();
		Object* moveRow(double indexFrom);
		Object* moveRow(double indexFrom, double indexTo);
		HTMLElement* createTFoot();
		HTMLTableElement* get_prototype();
		void set_prototype(HTMLTableElement*);
		HTMLTableElement();
	};

	class TreeWalker: public Object{
	public:
		double get_whatToShow();
		void set_whatToShow(double);
		NodeFilter* get_filter();
		void set_filter(NodeFilter*);
		Node* get_root();
		void set_root(Node*);
		Node* get_currentNode();
		void set_currentNode(Node*);
		bool get_expandEntityReferences();
		void set_expandEntityReferences(bool);
		Node* previousSibling();
		Node* lastChild();
		Node* nextSibling();
		Node* nextNode();
		Node* parentNode();
		Node* firstChild();
		Node* previousNode();
		TreeWalker* get_prototype();
		void set_prototype(TreeWalker*);
		TreeWalker();
	};

	class GetSVGDocument: public Object{
	public:
		Document* getSVGDocument();
	};

	class SVGPathSeg: public Object{
	public:
		double get_pathSegType();
		void set_pathSegType(double);
		String* get_pathSegTypeAsLetter();
		void set_pathSegTypeAsLetter(const String&);
		SVGPathSeg* get_prototype();
		void set_prototype(SVGPathSeg*);
		SVGPathSeg();
		double get_PATHSEG_MOVETO_REL();
		double get_PATHSEG_LINETO_VERTICAL_REL();
		double get_PATHSEG_CURVETO_CUBIC_SMOOTH_ABS();
		double get_PATHSEG_CURVETO_QUADRATIC_REL();
		double get_PATHSEG_CURVETO_CUBIC_ABS();
		double get_PATHSEG_LINETO_HORIZONTAL_ABS();
		double get_PATHSEG_CURVETO_QUADRATIC_ABS();
		double get_PATHSEG_LINETO_ABS();
		double get_PATHSEG_CLOSEPATH();
		double get_PATHSEG_LINETO_HORIZONTAL_REL();
		double get_PATHSEG_CURVETO_CUBIC_SMOOTH_REL();
		double get_PATHSEG_LINETO_REL();
		double get_PATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS();
		double get_PATHSEG_ARC_REL();
		double get_PATHSEG_CURVETO_CUBIC_REL();
		double get_PATHSEG_UNKNOWN();
		double get_PATHSEG_LINETO_VERTICAL_ABS();
		double get_PATHSEG_ARC_ABS();
		double get_PATHSEG_MOVETO_ABS();
		double get_PATHSEG_CURVETO_QUADRATIC_SMOOTH_REL();
	};

	class SVGPathSegCurvetoQuadraticRel: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		double get_y1();
		void set_y1(double);
		double get_x();
		void set_x(double);
		double get_x1();
		void set_x1(double);
		SVGPathSegCurvetoQuadraticRel* get_prototype();
		void set_prototype(SVGPathSegCurvetoQuadraticRel*);
		SVGPathSegCurvetoQuadraticRel();
	};

	class Performance: public Object{
	public:
		PerformanceNavigation* get_navigation();
		void set_navigation(PerformanceNavigation*);
		PerformanceTiming* get_timing();
		void set_timing(PerformanceTiming*);
		Object* getEntriesByType(const String& entryType);
		Object* toJSON();
		Object* getMeasures();
		Object* getMeasures(const String& measureName);
		void clearMarks();
		void clearMarks(const String& markName);
		Object* getMarks();
		Object* getMarks(const String& markName);
		void clearResourceTimings();
		void mark(const String& markName);
		void measure(const String& measureName);
		void measure(const String& measureName, const String& startMarkName);
		void measure(const String& measureName, const String& startMarkName, const String& endMarkName);
		Object* getEntriesByName(const String& name);
		Object* getEntriesByName(const String& name, const String& entryType);
		Object* getEntries();
		void clearMeasures();
		void clearMeasures(const String& measureName);
		void setResourceTimingBufferSize(double maxSize);
		double now();
		Performance* get_prototype();
		void set_prototype(Performance*);
		Performance();
	};

	class Event: public Object{
	public:
		double get_timeStamp();
		void set_timeStamp(double);
		bool get_defaultPrevented();
		void set_defaultPrevented(bool);
		bool get_isTrusted();
		void set_isTrusted(bool);
		EventTarget* get_currentTarget();
		void set_currentTarget(EventTarget*);
		bool get_cancelBubble();
		void set_cancelBubble(bool);
		EventTarget* get_target();
		void set_target(EventTarget*);
		double get_eventPhase();
		void set_eventPhase(double);
		bool get_cancelable();
		void set_cancelable(bool);
		String* get_type();
		void set_type(const String&);
		Element* get_srcElement();
		void set_srcElement(Element*);
		bool get_bubbles();
		void set_bubbles(bool);
		void initEvent(const String& eventTypeArg, bool canBubbleArg, bool cancelableArg);
		void stopPropagation();
		void stopImmediatePropagation();
		void preventDefault();
		Event* get_prototype();
		void set_prototype(Event*);
		Event();
		double get_CAPTURING_PHASE();
		double get_AT_TARGET();
		double get_BUBBLING_PHASE();
	};

	class UIEvent: public Event {
	public:
		double get_detail();
		void set_detail(double);
		Window* get_view();
		void set_view(Window*);
		void initUIEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg);
		UIEvent* get_prototype();
		void set_prototype(UIEvent*);
		UIEvent();
	};

	class CompositionEvent: public UIEvent {
	public:
		String* get_data();
		void set_data(const String&);
		String* get_locale();
		void set_locale(const String&);
		void initCompositionEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, const String& dataArg, const String& locale);
		CompositionEvent* get_prototype();
		void set_prototype(CompositionEvent*);
		CompositionEvent();
	};

	class WindowTimers: public Object{
	public:
		void clearTimeout(double handle);
		template<typename... Args> double setTimeout(EventListener* handler, double timeout, Args&&... args) { return setTimeout(handler, timeout, static_cast<Object*>(std::forward<Args>(args))...); }
		double setTimeout(EventListener* handler, double timeout);
		void clearInterval(double handle);
		template<typename... Args> double setInterval(EventListener* handler, double timeout, Args&&... args) { return setInterval(handler, timeout, static_cast<Object*>(std::forward<Args>(args))...); }
		double setInterval(EventListener* handler, double timeout);
	private:
		template<typename... Args> double setTimeout(EventListener* handler, double timeout, Object*, Args&&... args);
		template<typename... Args> double setInterval(EventListener* handler, double timeout, Object*, Args&&... args);
	};

	class SVGElement: public Element {
	public:
		EventListener* get_onmouseover();
		void set_onmouseover(EventListener*);
		SVGElement* get_viewportElement();
		void set_viewportElement(SVGElement*);
		EventListener* get_onmousemove();
		void set_onmousemove(EventListener*);
		EventListener* get_onmouseout();
		void set_onmouseout(EventListener*);
		EventListener* get_ondblclick();
		void set_ondblclick(EventListener*);
		EventListener* get_onfocusout();
		void set_onfocusout(EventListener*);
		EventListener* get_onfocusin();
		void set_onfocusin(EventListener*);
		String* get_xmlbase();
		void set_xmlbase(const String&);
		EventListener* get_onmousedown();
		void set_onmousedown(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onmouseup();
		void set_onmouseup(EventListener*);
		EventListener* get_onclick();
		void set_onclick(EventListener*);
		SVGSVGElement* get_ownerSVGElement();
		void set_ownerSVGElement(SVGSVGElement*);
		String* get_id();
		void set_id(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		SVGElement* get_prototype();
		void set_prototype(SVGElement*);
		SVGElement();
	};

	class SVGStylable: public Object{
	public:
		SVGAnimatedString* get_className();
		void set_className(SVGAnimatedString*);
		CSSStyleDeclaration* get_style();
		void set_style(CSSStyleDeclaration*);
	};

	class SVGLangSpace: public Object{
	public:
		String* get_xmllang();
		void set_xmllang(const String&);
		String* get_xmlspace();
		void set_xmlspace(const String&);
	};

	class SVGFitToViewBox: public Object{
	public:
		SVGAnimatedRect* get_viewBox();
		void set_viewBox(SVGAnimatedRect*);
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
		void set_preserveAspectRatio(SVGAnimatedPreserveAspectRatio*);
	};

	class SVGExternalResourcesRequired: public Object{
	public:
		SVGAnimatedBoolean* get_externalResourcesRequired();
		void set_externalResourcesRequired(SVGAnimatedBoolean*);
	};

	class SVGMarkerElement: public SVGElement , public SVGStylable , public SVGLangSpace , public SVGFitToViewBox , public SVGExternalResourcesRequired {
	public:
		SVGAnimatedEnumeration* get_orientType();
		void set_orientType(SVGAnimatedEnumeration*);
		SVGAnimatedEnumeration* get_markerUnits();
		void set_markerUnits(SVGAnimatedEnumeration*);
		SVGAnimatedLength* get_markerWidth();
		void set_markerWidth(SVGAnimatedLength*);
		SVGAnimatedLength* get_markerHeight();
		void set_markerHeight(SVGAnimatedLength*);
		SVGAnimatedAngle* get_orientAngle();
		void set_orientAngle(SVGAnimatedAngle*);
		SVGAnimatedLength* get_refY();
		void set_refY(SVGAnimatedLength*);
		SVGAnimatedLength* get_refX();
		void set_refX(SVGAnimatedLength*);
		void setOrientToAngle(SVGAngle* angle);
		void setOrientToAuto();
		SVGMarkerElement* get_prototype();
		void set_prototype(SVGMarkerElement*);
		SVGMarkerElement();
		double get_SVG_MARKER_ORIENT_UNKNOWN();
		double get_SVG_MARKER_ORIENT_ANGLE();
		double get_SVG_MARKERUNITS_UNKNOWN();
		double get_SVG_MARKERUNITS_STROKEWIDTH();
		double get_SVG_MARKER_ORIENT_AUTO();
		double get_SVG_MARKERUNITS_USERSPACEONUSE();
	};

	class CSSStyleDeclaration: public Object{
	public:
		String* get_backgroundAttachment();
		void set_backgroundAttachment(const String&);
		String* get_visibility();
		void set_visibility(const String&);
		String* get_textAlignLast();
		void set_textAlignLast(const String&);
		String* get_borderRightStyle();
		void set_borderRightStyle(const String&);
		String* get_counterIncrement();
		void set_counterIncrement(const String&);
		String* get_orphans();
		void set_orphans(const String&);
		String* get_cssText();
		void set_cssText(const String&);
		String* get_borderStyle();
		void set_borderStyle(const String&);
		String* get_pointerEvents();
		void set_pointerEvents(const String&);
		String* get_borderTopColor();
		void set_borderTopColor(const String&);
		String* get_markerEnd();
		void set_markerEnd(const String&);
		String* get_textIndent();
		void set_textIndent(const String&);
		String* get_listStyleImage();
		void set_listStyleImage(const String&);
		String* get_cursor();
		void set_cursor(const String&);
		String* get_listStylePosition();
		void set_listStylePosition(const String&);
		String* get_wordWrap();
		void set_wordWrap(const String&);
		String* get_borderTopStyle();
		void set_borderTopStyle(const String&);
		String* get_alignmentBaseline();
		void set_alignmentBaseline(const String&);
		String* get_opacity();
		void set_opacity(const String&);
		String* get_direction();
		void set_direction(const String&);
		String* get_strokeMiterlimit();
		void set_strokeMiterlimit(const String&);
		String* get_maxWidth();
		void set_maxWidth(const String&);
		String* get_color();
		void set_color(const String&);
		String* get_clip();
		void set_clip(const String&);
		String* get_borderRightWidth();
		void set_borderRightWidth(const String&);
		String* get_verticalAlign();
		void set_verticalAlign(const String&);
		String* get_overflow();
		void set_overflow(const String&);
		String* get_mask();
		void set_mask(const String&);
		String* get_borderLeftStyle();
		void set_borderLeftStyle(const String&);
		String* get_emptyCells();
		void set_emptyCells(const String&);
		String* get_stopOpacity();
		void set_stopOpacity(const String&);
		String* get_paddingRight();
		void set_paddingRight(const String&);
		CSSRule* get_parentRule();
		void set_parentRule(CSSRule*);
		String* get_background();
		void set_background(const String&);
		String* get_boxSizing();
		void set_boxSizing(const String&);
		String* get_textJustify();
		void set_textJustify(const String&);
		String* get_height();
		void set_height(const String&);
		String* get_paddingTop();
		void set_paddingTop(const String&);
		double get_length();
		void set_length(double);
		String* get_right();
		void set_right(const String&);
		String* get_baselineShift();
		void set_baselineShift(const String&);
		String* get_borderLeft();
		void set_borderLeft(const String&);
		String* get_widows();
		void set_widows(const String&);
		String* get_lineHeight();
		void set_lineHeight(const String&);
		String* get_left();
		void set_left(const String&);
		String* get_textUnderlinePosition();
		void set_textUnderlinePosition(const String&);
		String* get_glyphOrientationHorizontal();
		void set_glyphOrientationHorizontal(const String&);
		String* get_display();
		void set_display(const String&);
		String* get_textAnchor();
		void set_textAnchor(const String&);
		String* get_cssFloat();
		void set_cssFloat(const String&);
		String* get_strokeDasharray();
		void set_strokeDasharray(const String&);
		String* get_rubyAlign();
		void set_rubyAlign(const String&);
		String* get_fontSizeAdjust();
		void set_fontSizeAdjust(const String&);
		String* get_borderLeftColor();
		void set_borderLeftColor(const String&);
		String* get_backgroundImage();
		void set_backgroundImage(const String&);
		String* get_listStyleType();
		void set_listStyleType(const String&);
		String* get_strokeWidth();
		void set_strokeWidth(const String&);
		String* get_textOverflow();
		void set_textOverflow(const String&);
		String* get_fillRule();
		void set_fillRule(const String&);
		String* get_borderBottomColor();
		void set_borderBottomColor(const String&);
		String* get_zIndex();
		void set_zIndex(const String&);
		String* get_position();
		void set_position(const String&);
		String* get_listStyle();
		void set_listStyle(const String&);
		String* get_msTransformOrigin();
		void set_msTransformOrigin(const String&);
		String* get_dominantBaseline();
		void set_dominantBaseline(const String&);
		String* get_overflowY();
		void set_overflowY(const String&);
		String* get_fill();
		void set_fill(const String&);
		String* get_captionSide();
		void set_captionSide(const String&);
		String* get_borderCollapse();
		void set_borderCollapse(const String&);
		String* get_boxShadow();
		void set_boxShadow(const String&);
		String* get_quotes();
		void set_quotes(const String&);
		String* get_tableLayout();
		void set_tableLayout(const String&);
		String* get_unicodeBidi();
		void set_unicodeBidi(const String&);
		String* get_borderBottomWidth();
		void set_borderBottomWidth(const String&);
		String* get_backgroundSize();
		void set_backgroundSize(const String&);
		String* get_textDecoration();
		void set_textDecoration(const String&);
		String* get_strokeDashoffset();
		void set_strokeDashoffset(const String&);
		String* get_fontSize();
		void set_fontSize(const String&);
		String* get_border();
		void set_border(const String&);
		String* get_pageBreakBefore();
		void set_pageBreakBefore(const String&);
		String* get_borderTopRightRadius();
		void set_borderTopRightRadius(const String&);
		String* get_msTransform();
		void set_msTransform(const String&);
		String* get_borderBottomLeftRadius();
		void set_borderBottomLeftRadius(const String&);
		String* get_textTransform();
		void set_textTransform(const String&);
		String* get_rubyPosition();
		void set_rubyPosition(const String&);
		String* get_strokeLinejoin();
		void set_strokeLinejoin(const String&);
		String* get_clipPath();
		void set_clipPath(const String&);
		String* get_borderRightColor();
		void set_borderRightColor(const String&);
		String* get_fontFamily();
		void set_fontFamily(const String&);
		String* get_clear();
		void set_clear(const String&);
		String* get_content();
		void set_content(const String&);
		String* get_backgroundClip();
		void set_backgroundClip(const String&);
		String* get_marginBottom();
		void set_marginBottom(const String&);
		String* get_counterReset();
		void set_counterReset(const String&);
		String* get_outlineWidth();
		void set_outlineWidth(const String&);
		String* get_marginRight();
		void set_marginRight(const String&);
		String* get_paddingLeft();
		void set_paddingLeft(const String&);
		String* get_borderBottom();
		void set_borderBottom(const String&);
		String* get_wordBreak();
		void set_wordBreak(const String&);
		String* get_marginTop();
		void set_marginTop(const String&);
		String* get_top();
		void set_top(const String&);
		String* get_fontWeight();
		void set_fontWeight(const String&);
		String* get_borderRight();
		void set_borderRight(const String&);
		String* get_width();
		void set_width(const String&);
		String* get_kerning();
		void set_kerning(const String&);
		String* get_pageBreakAfter();
		void set_pageBreakAfter(const String&);
		String* get_borderBottomStyle();
		void set_borderBottomStyle(const String&);
		String* get_fontStretch();
		void set_fontStretch(const String&);
		String* get_padding();
		void set_padding(const String&);
		String* get_strokeOpacity();
		void set_strokeOpacity(const String&);
		String* get_markerStart();
		void set_markerStart(const String&);
		String* get_bottom();
		void set_bottom(const String&);
		String* get_borderLeftWidth();
		void set_borderLeftWidth(const String&);
		String* get_clipRule();
		void set_clipRule(const String&);
		String* get_backgroundPosition();
		void set_backgroundPosition(const String&);
		String* get_backgroundColor();
		void set_backgroundColor(const String&);
		String* get_pageBreakInside();
		void set_pageBreakInside(const String&);
		String* get_backgroundOrigin();
		void set_backgroundOrigin(const String&);
		String* get_strokeLinecap();
		void set_strokeLinecap(const String&);
		String* get_borderTopWidth();
		void set_borderTopWidth(const String&);
		String* get_outlineStyle();
		void set_outlineStyle(const String&);
		String* get_borderTop();
		void set_borderTop(const String&);
		String* get_outlineColor();
		void set_outlineColor(const String&);
		String* get_paddingBottom();
		void set_paddingBottom(const String&);
		String* get_marginLeft();
		void set_marginLeft(const String&);
		String* get_font();
		void set_font(const String&);
		String* get_outline();
		void set_outline(const String&);
		String* get_wordSpacing();
		void set_wordSpacing(const String&);
		String* get_maxHeight();
		void set_maxHeight(const String&);
		String* get_fillOpacity();
		void set_fillOpacity(const String&);
		String* get_letterSpacing();
		void set_letterSpacing(const String&);
		String* get_borderSpacing();
		void set_borderSpacing(const String&);
		String* get_backgroundRepeat();
		void set_backgroundRepeat(const String&);
		String* get_borderRadius();
		void set_borderRadius(const String&);
		String* get_borderWidth();
		void set_borderWidth(const String&);
		String* get_borderBottomRightRadius();
		void set_borderBottomRightRadius(const String&);
		String* get_whiteSpace();
		void set_whiteSpace(const String&);
		String* get_fontStyle();
		void set_fontStyle(const String&);
		String* get_minWidth();
		void set_minWidth(const String&);
		String* get_stopColor();
		void set_stopColor(const String&);
		String* get_borderTopLeftRadius();
		void set_borderTopLeftRadius(const String&);
		String* get_borderColor();
		void set_borderColor(const String&);
		String* get_marker();
		void set_marker(const String&);
		String* get_glyphOrientationVertical();
		void set_glyphOrientationVertical(const String&);
		String* get_markerMid();
		void set_markerMid(const String&);
		String* get_fontVariant();
		void set_fontVariant(const String&);
		String* get_minHeight();
		void set_minHeight(const String&);
		String* get_stroke();
		void set_stroke(const String&);
		String* get_rubyOverhang();
		void set_rubyOverhang(const String&);
		String* get_overflowX();
		void set_overflowX(const String&);
		String* get_textAlign();
		void set_textAlign(const String&);
		String* get_margin();
		void set_margin(const String&);
		String* getPropertyPriority(const String& propertyName);
		String* getPropertyValue(const String& propertyName);
		String* removeProperty(const String& propertyName);
		String* item(double index);
		void setProperty(const String& propertyName, const String& value);
		void setProperty(const String& propertyName, const String& value, const String& priority);
		String* get_animationFillMode();
		void set_animationFillMode(const String&);
		String* get_floodColor();
		void set_floodColor(const String&);
		String* get_animationIterationCount();
		void set_animationIterationCount(const String&);
		String* get_textShadow();
		void set_textShadow(const String&);
		String* get_backfaceVisibility();
		void set_backfaceVisibility(const String&);
		String* get_msAnimationIterationCount();
		void set_msAnimationIterationCount(const String&);
		String* get_animationDelay();
		void set_animationDelay(const String&);
		String* get_animationTimingFunction();
		void set_animationTimingFunction(const String&);
		Object* get_columnWidth();
		void set_columnWidth(Object*);
		String* get_msScrollSnapX();
		void set_msScrollSnapX(const String&);
		Object* get_columnRuleColor();
		void set_columnRuleColor(Object*);
		Object* get_columnRuleWidth();
		void set_columnRuleWidth(Object*);
		String* get_transitionDelay();
		void set_transitionDelay(const String&);
		String* get_transition();
		void set_transition(const String&);
		String* get_msFlowFrom();
		void set_msFlowFrom(const String&);
		String* get_msScrollSnapType();
		void set_msScrollSnapType(const String&);
		String* get_msContentZoomSnapType();
		void set_msContentZoomSnapType(const String&);
		String* get_msGridColumns();
		void set_msGridColumns(const String&);
		String* get_msAnimationName();
		void set_msAnimationName(const String&);
		String* get_msGridRowAlign();
		void set_msGridRowAlign(const String&);
		String* get_msContentZoomChaining();
		void set_msContentZoomChaining(const String&);
		Object* get_msGridColumn();
		void set_msGridColumn(Object*);
		Object* get_msHyphenateLimitZone();
		void set_msHyphenateLimitZone(Object*);
		String* get_msScrollRails();
		void set_msScrollRails(const String&);
		String* get_msAnimationDelay();
		void set_msAnimationDelay(const String&);
		String* get_enableBackground();
		void set_enableBackground(const String&);
		String* get_msWrapThrough();
		void set_msWrapThrough(const String&);
		String* get_columnRuleStyle();
		void set_columnRuleStyle(const String&);
		String* get_msAnimation();
		void set_msAnimation(const String&);
		String* get_msFlexFlow();
		void set_msFlexFlow(const String&);
		String* get_msScrollSnapY();
		void set_msScrollSnapY(const String&);
		Object* get_msHyphenateLimitLines();
		void set_msHyphenateLimitLines(Object*);
		String* get_msTouchAction();
		void set_msTouchAction(const String&);
		String* get_msScrollLimit();
		void set_msScrollLimit(const String&);
		String* get_animation();
		void set_animation(const String&);
		String* get_transform();
		void set_transform(const String&);
		String* get_filter();
		void set_filter(const String&);
		String* get_colorInterpolationFilters();
		void set_colorInterpolationFilters(const String&);
		String* get_transitionTimingFunction();
		void set_transitionTimingFunction(const String&);
		String* get_msBackfaceVisibility();
		void set_msBackfaceVisibility(const String&);
		String* get_animationPlayState();
		void set_animationPlayState(const String&);
		String* get_transformOrigin();
		void set_transformOrigin(const String&);
		Object* get_msScrollLimitYMin();
		void set_msScrollLimitYMin(Object*);
		String* get_msFontFeatureSettings();
		void set_msFontFeatureSettings(const String&);
		Object* get_msContentZoomLimitMin();
		void set_msContentZoomLimitMin(Object*);
		Object* get_columnGap();
		void set_columnGap(Object*);
		String* get_transitionProperty();
		void set_transitionProperty(const String&);
		String* get_msAnimationDuration();
		void set_msAnimationDuration(const String&);
		String* get_msAnimationFillMode();
		void set_msAnimationFillMode(const String&);
		String* get_msFlexDirection();
		void set_msFlexDirection(const String&);
		String* get_msTransitionDuration();
		void set_msTransitionDuration(const String&);
		String* get_fontFeatureSettings();
		void set_fontFeatureSettings(const String&);
		String* get_breakBefore();
		void set_breakBefore(const String&);
		String* get_msFlexWrap();
		void set_msFlexWrap(const String&);
		String* get_perspective();
		void set_perspective(const String&);
		String* get_msFlowInto();
		void set_msFlowInto(const String&);
		String* get_msTransformStyle();
		void set_msTransformStyle(const String&);
		String* get_msScrollTranslation();
		void set_msScrollTranslation(const String&);
		String* get_msTransitionProperty();
		void set_msTransitionProperty(const String&);
		String* get_msUserSelect();
		void set_msUserSelect(const String&);
		String* get_msOverflowStyle();
		void set_msOverflowStyle(const String&);
		String* get_msScrollSnapPointsY();
		void set_msScrollSnapPointsY(const String&);
		String* get_animationDirection();
		void set_animationDirection(const String&);
		String* get_animationDuration();
		void set_animationDuration(const String&);
		String* get_msFlex();
		void set_msFlex(const String&);
		String* get_msTransitionTimingFunction();
		void set_msTransitionTimingFunction(const String&);
		String* get_animationName();
		void set_animationName(const String&);
		String* get_columnRule();
		void set_columnRule(const String&);
		Object* get_msGridColumnSpan();
		void set_msGridColumnSpan(Object*);
		String* get_msFlexNegative();
		void set_msFlexNegative(const String&);
		String* get_columnFill();
		void set_columnFill(const String&);
		Object* get_msGridRow();
		void set_msGridRow(Object*);
		String* get_msFlexOrder();
		void set_msFlexOrder(const String&);
		String* get_msFlexItemAlign();
		void set_msFlexItemAlign(const String&);
		String* get_msFlexPositive();
		void set_msFlexPositive(const String&);
		Object* get_msContentZoomLimitMax();
		void set_msContentZoomLimitMax(Object*);
		Object* get_msScrollLimitYMax();
		void set_msScrollLimitYMax(Object*);
		String* get_msGridColumnAlign();
		void set_msGridColumnAlign(const String&);
		String* get_perspectiveOrigin();
		void set_perspectiveOrigin(const String&);
		String* get_lightingColor();
		void set_lightingColor(const String&);
		String* get_columns();
		void set_columns(const String&);
		String* get_msScrollChaining();
		void set_msScrollChaining(const String&);
		String* get_msHyphenateLimitChars();
		void set_msHyphenateLimitChars(const String&);
		String* get_msTouchSelect();
		void set_msTouchSelect(const String&);
		String* get_floodOpacity();
		void set_floodOpacity(const String&);
		String* get_msAnimationDirection();
		void set_msAnimationDirection(const String&);
		String* get_msAnimationPlayState();
		void set_msAnimationPlayState(const String&);
		String* get_columnSpan();
		void set_columnSpan(const String&);
		String* get_msContentZooming();
		void set_msContentZooming(const String&);
		String* get_msPerspective();
		void set_msPerspective(const String&);
		String* get_msFlexPack();
		void set_msFlexPack(const String&);
		String* get_msScrollSnapPointsX();
		void set_msScrollSnapPointsX(const String&);
		String* get_msContentZoomSnapPoints();
		void set_msContentZoomSnapPoints(const String&);
		Object* get_msGridRowSpan();
		void set_msGridRowSpan(Object*);
		String* get_msContentZoomSnap();
		void set_msContentZoomSnap(const String&);
		Object* get_msScrollLimitXMin();
		void set_msScrollLimitXMin(Object*);
		String* get_breakInside();
		void set_breakInside(const String&);
		String* get_msHighContrastAdjust();
		void set_msHighContrastAdjust(const String&);
		String* get_msFlexLinePack();
		void set_msFlexLinePack(const String&);
		String* get_msGridRows();
		void set_msGridRows(const String&);
		String* get_transitionDuration();
		void set_transitionDuration(const String&);
		String* get_msHyphens();
		void set_msHyphens(const String&);
		String* get_breakAfter();
		void set_breakAfter(const String&);
		String* get_msTransition();
		void set_msTransition(const String&);
		String* get_msPerspectiveOrigin();
		void set_msPerspectiveOrigin(const String&);
		String* get_msContentZoomLimit();
		void set_msContentZoomLimit(const String&);
		Object* get_msScrollLimitXMax();
		void set_msScrollLimitXMax(Object*);
		String* get_msFlexAlign();
		void set_msFlexAlign(const String&);
		Object* get_msWrapMargin();
		void set_msWrapMargin(Object*);
		Object* get_columnCount();
		void set_columnCount(Object*);
		String* get_msAnimationTimingFunction();
		void set_msAnimationTimingFunction(const String&);
		String* get_msTransitionDelay();
		void set_msTransitionDelay(const String&);
		String* get_transformStyle();
		void set_transformStyle(const String&);
		String* get_msWrapFlow();
		void set_msWrapFlow(const String&);
		String* get_msFlexPreferredSize();
		void set_msFlexPreferredSize(const String&);
		String* get_alignItems();
		void set_alignItems(const String&);
		String* get_borderImageSource();
		void set_borderImageSource(const String&);
		String* get_flexBasis();
		void set_flexBasis(const String&);
		String* get_borderImageWidth();
		void set_borderImageWidth(const String&);
		String* get_borderImageRepeat();
		void set_borderImageRepeat(const String&);
		String* get_order();
		void set_order(const String&);
		String* get_flex();
		void set_flex(const String&);
		String* get_alignContent();
		void set_alignContent(const String&);
		String* get_msImeAlign();
		void set_msImeAlign(const String&);
		String* get_flexShrink();
		void set_flexShrink(const String&);
		String* get_flexGrow();
		void set_flexGrow(const String&);
		String* get_borderImageSlice();
		void set_borderImageSlice(const String&);
		String* get_flexWrap();
		void set_flexWrap(const String&);
		String* get_borderImageOutset();
		void set_borderImageOutset(const String&);
		String* get_flexDirection();
		void set_flexDirection(const String&);
		String* get_touchAction();
		void set_touchAction(const String&);
		String* get_flexFlow();
		void set_flexFlow(const String&);
		String* get_borderImage();
		void set_borderImage(const String&);
		String* get_justifyContent();
		void set_justifyContent(const String&);
		String* get_alignSelf();
		void set_alignSelf(const String&);
		String* get_msTextCombineHorizontal();
		void set_msTextCombineHorizontal(const String&);
		CSSStyleDeclaration* get_prototype();
		void set_prototype(CSSStyleDeclaration*);
		CSSStyleDeclaration();
	};

	class SVGLocatable: public Object{
	public:
		SVGElement* get_farthestViewportElement();
		void set_farthestViewportElement(SVGElement*);
		SVGElement* get_nearestViewportElement();
		void set_nearestViewportElement(SVGElement*);
		SVGRect* getBBox();
		SVGMatrix* getTransformToElement(SVGElement* element);
		SVGMatrix* getCTM();
		SVGMatrix* getScreenCTM();
	};

	class SVGTransformable: public SVGLocatable {
	public:
		SVGAnimatedTransformList* get_transform();
		void set_transform(SVGAnimatedTransformList*);
	};

	class SVGTests: public Object{
	public:
		SVGStringList* get_requiredFeatures();
		void set_requiredFeatures(SVGStringList*);
		SVGStringList* get_requiredExtensions();
		void set_requiredExtensions(SVGStringList*);
		SVGStringList* get_systemLanguage();
		void set_systemLanguage(SVGStringList*);
		bool hasExtension(const String& extension);
	};

	class SVGGElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired {
	public:
		SVGGElement* get_prototype();
		void set_prototype(SVGGElement*);
		SVGGElement();
	};

	class MSCSSProperties: public CSSStyleDeclaration {
	public:
		String* get_scrollbarShadowColor();
		void set_scrollbarShadowColor(const String&);
		String* get_scrollbarHighlightColor();
		void set_scrollbarHighlightColor(const String&);
		String* get_layoutGridChar();
		void set_layoutGridChar(const String&);
		String* get_layoutGridType();
		void set_layoutGridType(const String&);
		String* get_textAutospace();
		void set_textAutospace(const String&);
		String* get_textKashidaSpace();
		void set_textKashidaSpace(const String&);
		String* get_writingMode();
		void set_writingMode(const String&);
		String* get_scrollbarFaceColor();
		void set_scrollbarFaceColor(const String&);
		String* get_backgroundPositionY();
		void set_backgroundPositionY(const String&);
		String* get_lineBreak();
		void set_lineBreak(const String&);
		String* get_imeMode();
		void set_imeMode(const String&);
		String* get_msBlockProgression();
		void set_msBlockProgression(const String&);
		String* get_layoutGridLine();
		void set_layoutGridLine(const String&);
		String* get_scrollbarBaseColor();
		void set_scrollbarBaseColor(const String&);
		String* get_layoutGrid();
		void set_layoutGrid(const String&);
		String* get_layoutFlow();
		void set_layoutFlow(const String&);
		String* get_textKashida();
		void set_textKashida(const String&);
		String* get_filter();
		void set_filter(const String&);
		String* get_zoom();
		void set_zoom(const String&);
		String* get_scrollbarArrowColor();
		void set_scrollbarArrowColor(const String&);
		String* get_behavior();
		void set_behavior(const String&);
		String* get_backgroundPositionX();
		void set_backgroundPositionX(const String&);
		String* get_accelerator();
		void set_accelerator(const String&);
		String* get_layoutGridMode();
		void set_layoutGridMode(const String&);
		String* get_textJustifyTrim();
		void set_textJustifyTrim(const String&);
		String* get_scrollbar3dLightColor();
		void set_scrollbar3dLightColor(const String&);
		String* get_msInterpolationMode();
		void set_msInterpolationMode(const String&);
		String* get_scrollbarTrackColor();
		void set_scrollbarTrackColor(const String&);
		String* get_scrollbarDarkShadowColor();
		void set_scrollbarDarkShadowColor(const String&);
		String* get_styleFloat();
		void set_styleFloat(const String&);
		Object* getAttribute(const String& attributeName);
		Object* getAttribute(const String& attributeName, double flags);
		void setAttribute(const String& attributeName, Object* AttributeValue);
		void setAttribute(const String& attributeName, Object* AttributeValue, double flags);
		bool removeAttribute(const String& attributeName);
		bool removeAttribute(const String& attributeName, double flags);
		MSCSSProperties* get_prototype();
		void set_prototype(MSCSSProperties*);
		MSCSSProperties();
	};

	class MSStyleCSSProperties: public MSCSSProperties {
	public:
		double get_pixelWidth();
		void set_pixelWidth(double);
		double get_posHeight();
		void set_posHeight(double);
		double get_posLeft();
		void set_posLeft(double);
		double get_pixelTop();
		void set_pixelTop(double);
		double get_pixelBottom();
		void set_pixelBottom(double);
		bool get_textDecorationNone();
		void set_textDecorationNone(bool);
		double get_pixelLeft();
		void set_pixelLeft(double);
		double get_posTop();
		void set_posTop(double);
		double get_posBottom();
		void set_posBottom(double);
		bool get_textDecorationOverline();
		void set_textDecorationOverline(bool);
		double get_posWidth();
		void set_posWidth(double);
		bool get_textDecorationLineThrough();
		void set_textDecorationLineThrough(bool);
		double get_pixelHeight();
		void set_pixelHeight(double);
		bool get_textDecorationBlink();
		void set_textDecorationBlink(bool);
		double get_posRight();
		void set_posRight(double);
		double get_pixelRight();
		void set_pixelRight(double);
		bool get_textDecorationUnderline();
		void set_textDecorationUnderline(bool);
		MSStyleCSSProperties* get_prototype();
		void set_prototype(MSStyleCSSProperties*);
		MSStyleCSSProperties();
	};

	class NavigatorOnLine: public Object{
	public:
		bool get_onLine();
		void set_onLine(bool);
	};

	class NavigatorContentUtils: public Object{
	public:
	};

	class MSNavigatorExtensions: public Object{
	public:
		String* get_userLanguage();
		void set_userLanguage(const String&);
		MSPluginsCollection* get_plugins();
		void set_plugins(MSPluginsCollection*);
		bool get_cookieEnabled();
		void set_cookieEnabled(bool);
		String* get_appCodeName();
		void set_appCodeName(const String&);
		String* get_cpuClass();
		void set_cpuClass(const String&);
		String* get_appMinorVersion();
		void set_appMinorVersion(const String&);
		double get_connectionSpeed();
		void set_connectionSpeed(double);
		String* get_browserLanguage();
		void set_browserLanguage(const String&);
		MSMimeTypesCollection* get_mimeTypes();
		void set_mimeTypes(MSMimeTypesCollection*);
		String* get_systemLanguage();
		void set_systemLanguage(const String&);
		bool javaEnabled();
		bool taintEnabled();
		String* get_language();
		void set_language(const String&);
	};

	class NavigatorGeolocation: public Object{
	public:
		Geolocation* get_geolocation();
		void set_geolocation(Geolocation*);
	};

	class MSNavigatorDoNotTrack: public Object{
	public:
		String* get_msDoNotTrack();
		void set_msDoNotTrack(const String&);
		void removeSiteSpecificTrackingException(ExceptionInformation* args);
		void removeWebWideTrackingException(ExceptionInformation* args);
		void storeWebWideTrackingException(StoreExceptionsInformation* args);
		void storeSiteSpecificTrackingException(StoreSiteSpecificExceptionsInformation* args);
		bool confirmSiteSpecificTrackingException(ConfirmSiteSpecificExceptionsInformation* args);
		bool confirmWebWideTrackingException(ExceptionInformation* args);
	};

	class NavigatorStorageUtils: public Object{
	public:
	};

	class Navigator: public NavigatorID , public NavigatorOnLine , public NavigatorContentUtils , public MSNavigatorExtensions , public NavigatorGeolocation , public MSNavigatorDoNotTrack , public NavigatorStorageUtils {
	public:
		double get_msMaxTouchPoints();
		void set_msMaxTouchPoints(double);
		bool get_msPointerEnabled();
		void set_msPointerEnabled(bool);
		bool get_msManipulationViewsEnabled();
		void set_msManipulationViewsEnabled(bool);
		void msLaunchUri(const String& uri);
		void msLaunchUri(const String& uri, MSLaunchUriCallback* successCallback);
		void msLaunchUri(const String& uri, MSLaunchUriCallback* successCallback, MSLaunchUriCallback* noHandlerCallback);
		bool get_pointerEnabled();
		void set_pointerEnabled(bool);
		double get_maxTouchPoints();
		void set_maxTouchPoints(double);
		Navigator* get_prototype();
		void set_prototype(Navigator*);
		Navigator();
	};

	class SVGPathSegCurvetoCubicSmoothAbs: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		double get_x2();
		void set_x2(double);
		double get_x();
		void set_x(double);
		double get_y2();
		void set_y2(double);
		SVGPathSegCurvetoCubicSmoothAbs* get_prototype();
		void set_prototype(SVGPathSegCurvetoCubicSmoothAbs*);
		SVGPathSegCurvetoCubicSmoothAbs();
	};

	class SVGZoomEvent: public UIEvent {
	public:
		SVGRect* get_zoomRectScreen();
		void set_zoomRectScreen(SVGRect*);
		double get_previousScale();
		void set_previousScale(double);
		double get_newScale();
		void set_newScale(double);
		SVGPoint* get_previousTranslate();
		void set_previousTranslate(SVGPoint*);
		SVGPoint* get_newTranslate();
		void set_newTranslate(SVGPoint*);
		SVGZoomEvent* get_prototype();
		void set_prototype(SVGZoomEvent*);
		SVGZoomEvent();
	};

	class HTMLTableAlignment: public Object{
	public:
		String* get_ch();
		void set_ch(const String&);
		String* get_vAlign();
		void set_vAlign(const String&);
		String* get_chOff();
		void set_chOff(const String&);
	};

	class HTMLTableCellElement: public HTMLElement , public HTMLTableAlignment , public DOML2DeprecatedBackgroundStyle , public DOML2DeprecatedBackgroundColorStyle {
	public:
		double get_width();
		void set_width(double);
		String* get_headers();
		void set_headers(const String&);
		double get_cellIndex();
		void set_cellIndex(double);
		String* get_align();
		void set_align(const String&);
		Object* get_borderColorLight();
		void set_borderColorLight(Object*);
		double get_colSpan();
		void set_colSpan(double);
		Object* get_borderColor();
		void set_borderColor(Object*);
		String* get_axis();
		void set_axis(const String&);
		Object* get_height();
		void set_height(Object*);
		bool get_noWrap();
		void set_noWrap(bool);
		String* get_abbr();
		void set_abbr(const String&);
		double get_rowSpan();
		void set_rowSpan(double);
		String* get_scope();
		void set_scope(const String&);
		Object* get_borderColorDark();
		void set_borderColorDark(Object*);
		HTMLTableCellElement* get_prototype();
		void set_prototype(HTMLTableCellElement*);
		HTMLTableCellElement();
	};

	class HTMLTableDataCellElement: public HTMLTableCellElement {
	public:
		HTMLTableDataCellElement* get_prototype();
		void set_prototype(HTMLTableDataCellElement*);
		HTMLTableDataCellElement();
	};

	class HTMLBaseElement: public HTMLElement {
	public:
		String* get_target();
		void set_target(const String&);
		String* get_href();
		void set_href(const String&);
		HTMLBaseElement* get_prototype();
		void set_prototype(HTMLBaseElement*);
		HTMLBaseElement();
	};

	class ClientRect: public Object{
	public:
		double get_left();
		void set_left(double);
		double get_width();
		void set_width(double);
		double get_right();
		void set_right(double);
		double get_top();
		void set_top(double);
		double get_bottom();
		void set_bottom(double);
		double get_height();
		void set_height(double);
		ClientRect* get_prototype();
		void set_prototype(ClientRect*);
		ClientRect();
	};

	class PositionErrorCallback: public Object{
	public:
	};

	class DOMImplementation: public Object{
	public:
		DocumentType* createDocumentType(const String& qualifiedName, const String& publicId, const String& systemId);
		Document* createDocument(const String& namespaceURI, const String& qualifiedName, DocumentType* doctype);
		bool hasFeature(const String& feature);
		bool hasFeature(const String& feature, const String& version);
		Document* createHTMLDocument(const String& title);
		DOMImplementation* get_prototype();
		void set_prototype(DOMImplementation*);
		DOMImplementation();
	};

	class SVGUnitTypes: public Object{
	public:
		SVGUnitTypes* get_prototype();
		void set_prototype(SVGUnitTypes*);
		SVGUnitTypes();
		double get_SVG_UNIT_TYPE_UNKNOWN();
		double get_SVG_UNIT_TYPE_OBJECTBOUNDINGBOX();
		double get_SVG_UNIT_TYPE_USERSPACEONUSE();
	};

	class HTMLNextIdElement: public HTMLElement {
	public:
		String* get_n();
		void set_n(const String&);
		HTMLNextIdElement* get_prototype();
		void set_prototype(HTMLNextIdElement*);
		HTMLNextIdElement();
	};

	class SVGPathSegMovetoRel: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		double get_x();
		void set_x(double);
		SVGPathSegMovetoRel* get_prototype();
		void set_prototype(SVGPathSegMovetoRel*);
		SVGPathSegMovetoRel();
	};

	class SVGLineElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired {
	public:
		SVGAnimatedLength* get_y1();
		void set_y1(SVGAnimatedLength*);
		SVGAnimatedLength* get_x2();
		void set_x2(SVGAnimatedLength*);
		SVGAnimatedLength* get_x1();
		void set_x1(SVGAnimatedLength*);
		SVGAnimatedLength* get_y2();
		void set_y2(SVGAnimatedLength*);
		SVGLineElement* get_prototype();
		void set_prototype(SVGLineElement*);
		SVGLineElement();
	};

	class DOML2DeprecatedTextFlowControl: public Object{
	public:
		String* get_clear();
		void set_clear(const String&);
	};

	class HTMLParagraphElement: public HTMLElement , public DOML2DeprecatedTextFlowControl {
	public:
		String* get_align();
		void set_align(const String&);
		HTMLParagraphElement* get_prototype();
		void set_prototype(HTMLParagraphElement*);
		HTMLParagraphElement();
	};

	class MSHTMLCollectionExtensions: public Object{
	public:
		Object* urns(Object* urn);
		Object* tags(Object* tagName);
	};

	class HTMLCollection: public MSHTMLCollectionExtensions {
	public:
		double get_length();
		void set_length(double);
		Element* item();
		Element* item(Object* nameOrIndex);
		Element* item(Object* nameOrIndex, Object* optionalIndex);
		Element* namedItem(const String& name);
		HTMLCollection* get_prototype();
		void set_prototype(HTMLCollection*);
		HTMLCollection();
	};

	class HTMLAreasCollection: public HTMLCollection {
	public:
		void remove();
		void remove(double index);
		void add(HTMLElement* element);
		void add(HTMLElement* element, Object* before);
		HTMLAreasCollection* get_prototype();
		void set_prototype(HTMLAreasCollection*);
		HTMLAreasCollection();
	};

	class SVGDescElement: public SVGElement , public SVGStylable , public SVGLangSpace {
	public:
		SVGDescElement* get_prototype();
		void set_prototype(SVGDescElement*);
		SVGDescElement();
	};

	class SVGPathSegCurvetoQuadraticSmoothRel: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		double get_x();
		void set_x(double);
		SVGPathSegCurvetoQuadraticSmoothRel* get_prototype();
		void set_prototype(SVGPathSegCurvetoQuadraticSmoothRel*);
		SVGPathSegCurvetoQuadraticSmoothRel();
	};

	class DOML2DeprecatedListSpaceReduction: public Object{
	public:
		bool get_compact();
		void set_compact(bool);
	};

	class MSScriptHost: public Object{
	public:
		MSScriptHost* get_prototype();
		void set_prototype(MSScriptHost*);
		MSScriptHost();
	};

	class SVGClipPathElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired {
	public:
		SVGAnimatedEnumeration* get_clipPathUnits();
		void set_clipPathUnits(SVGAnimatedEnumeration*);
		SVGClipPathElement* get_prototype();
		void set_prototype(SVGClipPathElement*);
		SVGClipPathElement();
	};

	class MouseEvent: public UIEvent {
	public:
		Element* get_toElement();
		void set_toElement(Element*);
		double get_layerY();
		void set_layerY(double);
		Element* get_fromElement();
		void set_fromElement(Element*);
		double get_which();
		void set_which(double);
		double get_pageX();
		void set_pageX(double);
		double get_offsetY();
		void set_offsetY(double);
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		bool get_metaKey();
		void set_metaKey(bool);
		bool get_altKey();
		void set_altKey(bool);
		bool get_ctrlKey();
		void set_ctrlKey(bool);
		double get_offsetX();
		void set_offsetX(double);
		double get_screenX();
		void set_screenX(double);
		double get_clientY();
		void set_clientY(double);
		bool get_shiftKey();
		void set_shiftKey(bool);
		double get_layerX();
		void set_layerX(double);
		double get_screenY();
		void set_screenY(double);
		EventTarget* get_relatedTarget();
		void set_relatedTarget(EventTarget*);
		double get_button();
		void set_button(double);
		double get_pageY();
		void set_pageY(double);
		double get_buttons();
		void set_buttons(double);
		double get_clientX();
		void set_clientX(double);
		void initMouseEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, double buttonArg, EventTarget* relatedTargetArg);
		bool getModifierState(const String& keyArg);
		MouseEvent* get_prototype();
		void set_prototype(MouseEvent*);
		MouseEvent();
	};

	class RangeException: public Object{
	public:
		double get_code();
		void set_code(double);
		String* get_message();
		void set_message(const String&);
		String* toString();
		String* get_name();
		void set_name(const String&);
		RangeException* get_prototype();
		void set_prototype(RangeException*);
		RangeException();
		double get_INVALID_NODE_TYPE_ERR();
		double get_BAD_BOUNDARYPOINTS_ERR();
	};

	class SVGTextContentElement: public SVGElement , public SVGStylable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired {
	public:
		SVGAnimatedLength* get_textLength();
		void set_textLength(SVGAnimatedLength*);
		SVGAnimatedEnumeration* get_lengthAdjust();
		void set_lengthAdjust(SVGAnimatedEnumeration*);
		double getCharNumAtPosition(SVGPoint* point);
		SVGPoint* getStartPositionOfChar(double charnum);
		SVGRect* getExtentOfChar(double charnum);
		double getComputedTextLength();
		double getSubStringLength(double charnum, double nchars);
		void selectSubString(double charnum, double nchars);
		double getNumberOfChars();
		double getRotationOfChar(double charnum);
		SVGPoint* getEndPositionOfChar(double charnum);
		SVGTextContentElement* get_prototype();
		void set_prototype(SVGTextContentElement*);
		SVGTextContentElement();
		double get_LENGTHADJUST_SPACING();
		double get_LENGTHADJUST_SPACINGANDGLYPHS();
		double get_LENGTHADJUST_UNKNOWN();
	};

	class SVGTextPositioningElement: public SVGTextContentElement {
	public:
		SVGAnimatedLengthList* get_y();
		void set_y(SVGAnimatedLengthList*);
		SVGAnimatedNumberList* get_rotate();
		void set_rotate(SVGAnimatedNumberList*);
		SVGAnimatedLengthList* get_dy();
		void set_dy(SVGAnimatedLengthList*);
		SVGAnimatedLengthList* get_x();
		void set_x(SVGAnimatedLengthList*);
		SVGAnimatedLengthList* get_dx();
		void set_dx(SVGAnimatedLengthList*);
		SVGTextPositioningElement* get_prototype();
		void set_prototype(SVGTextPositioningElement*);
		SVGTextPositioningElement();
	};

	class DOML2DeprecatedMarginStyle: public Object{
	public:
		double get_vspace();
		void set_vspace(double);
		double get_hspace();
		void set_hspace(double);
	};

	class DOML2DeprecatedBorderStyle: public Object{
	public:
		String* get_border();
		void set_border(const String&);
	};

	class DOML2DeprecatedAlignmentStyle: public Object{
	public:
		String* get_align();
		void set_align(const String&);
	};

	class MSDataBindingRecordSetExtensions: public Object{
	public:
		Object* get_recordset();
		void set_recordset(Object*);
		Object* namedRecordset(const String& dataMember);
		Object* namedRecordset(const String& dataMember, Object* hierarchy);
	};

	class HTMLAppletElement: public HTMLElement , public DOML2DeprecatedMarginStyle , public DOML2DeprecatedBorderStyle , public DOML2DeprecatedAlignmentStyle , public MSDataBindingExtensions , public MSDataBindingRecordSetExtensions {
	public:
		double get_width();
		void set_width(double);
		String* get_codeType();
		void set_codeType(const String&);
		String* get_object();
		void set_object(const String&);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		String* get_code();
		void set_code(const String&);
		String* get_archive();
		void set_archive(const String&);
		String* get_alt();
		void set_alt(const String&);
		String* get_standby();
		void set_standby(const String&);
		String* get_classid();
		void set_classid(const String&);
		String* get_name();
		void set_name(const String&);
		String* get_useMap();
		void set_useMap(const String&);
		String* get_data();
		void set_data(const String&);
		String* get_height();
		void set_height(const String&);
		String* get_altHtml();
		void set_altHtml(const String&);
		Document* get_contentDocument();
		void set_contentDocument(Document*);
		String* get_codeBase();
		void set_codeBase(const String&);
		bool get_declare();
		void set_declare(bool);
		String* get_type();
		void set_type(const String&);
		String* get_BaseHref();
		void set_BaseHref(const String&);
		HTMLAppletElement* get_prototype();
		void set_prototype(HTMLAppletElement*);
		HTMLAppletElement();
	};

	class TextMetrics: public Object{
	public:
		double get_width();
		void set_width(double);
		TextMetrics* get_prototype();
		void set_prototype(TextMetrics*);
		TextMetrics();
	};

	class DocumentEvent: public Object{
	public:
		Event* createEvent(const String& eventInterface);
	};

	class DOML2DeprecatedListNumberingAndBulletStyle: public Object{
	public:
		String* get_type();
		void set_type(const String&);
	};

	class HTMLOListElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction , public DOML2DeprecatedListNumberingAndBulletStyle {
	public:
		double get_start();
		void set_start(double);
		HTMLOListElement* get_prototype();
		void set_prototype(HTMLOListElement*);
		HTMLOListElement();
	};

	class SVGPathSegLinetoVerticalRel: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		SVGPathSegLinetoVerticalRel* get_prototype();
		void set_prototype(SVGPathSegLinetoVerticalRel*);
		SVGPathSegLinetoVerticalRel();
	};

	class SVGAnimatedString: public Object{
	public:
		String* get_animVal();
		void set_animVal(const String&);
		String* get_baseVal();
		void set_baseVal(const String&);
		SVGAnimatedString* get_prototype();
		void set_prototype(SVGAnimatedString*);
		SVGAnimatedString();
	};

	class CharacterData: public Node {
	public:
		double get_length();
		void set_length(double);
		String* get_data();
		void set_data(const String&);
		void deleteData(double offset, double count);
		void replaceData(double offset, double count, const String& arg);
		void appendData(const String& arg);
		void insertData(double offset, const String& arg);
		String* substringData(double offset, double count);
		CharacterData* get_prototype();
		void set_prototype(CharacterData*);
		CharacterData();
	};

	class Text: public CharacterData , public MSNodeExtensions {
	public:
		String* get_wholeText();
		void set_wholeText(const String&);
		Text* splitText(double offset);
		Text* replaceWholeText(const String& content);
		Text* get_prototype();
		void set_prototype(Text*);
		Text();
	};

	class CDATASection: public Text {
	public:
		CDATASection* get_prototype();
		void set_prototype(CDATASection*);
		CDATASection();
	};

	class StyleMedia: public Object{
	public:
		String* get_type();
		void set_type(const String&);
		bool matchMedium(const String& mediaquery);
		StyleMedia* get_prototype();
		void set_prototype(StyleMedia*);
		StyleMedia();
	};

	class HTMLSelectElement: public HTMLElement , public MSHTMLCollectionExtensions , public MSDataBindingExtensions {
	public:
		HTMLSelectElement* get_options();
		void set_options(HTMLSelectElement*);
		String* get_value();
		void set_value(const String&);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		String* get_name();
		void set_name(const String&);
		double get_size();
		void set_size(double);
		double get_length();
		void set_length(double);
		double get_selectedIndex();
		void set_selectedIndex(double);
		bool get_multiple();
		void set_multiple(bool);
		String* get_type();
		void set_type(const String&);
		void remove();
		void remove(double index);
		void add(HTMLElement* element);
		void add(HTMLElement* element, Object* before);
		Object* item();
		Object* item(Object* name);
		Object* item(Object* name, Object* index);
		Object* namedItem(const String& name);
		String* get_validationMessage();
		void set_validationMessage(const String&);
		bool get_autofocus();
		void set_autofocus(bool);
		ValidityState* get_validity();
		void set_validity(ValidityState*);
		bool get_required();
		void set_required(bool);
		bool get_willValidate();
		void set_willValidate(bool);
		bool checkValidity();
		void setCustomValidity(const String& error);
		HTMLSelectElement* get_prototype();
		void set_prototype(HTMLSelectElement*);
		HTMLSelectElement();
	};

	class TextRange: public Object{
	public:
		double get_boundingLeft();
		void set_boundingLeft(double);
		String* get_htmlText();
		void set_htmlText(const String&);
		double get_offsetLeft();
		void set_offsetLeft(double);
		double get_boundingWidth();
		void set_boundingWidth(double);
		double get_boundingHeight();
		void set_boundingHeight(double);
		double get_boundingTop();
		void set_boundingTop(double);
		String* get_text();
		void set_text(const String&);
		double get_offsetTop();
		void set_offsetTop(double);
		void moveToPoint(double x, double y);
		Object* queryCommandValue(const String& cmdID);
		String* getBookmark();
		double move(const String& unit);
		double move(const String& unit, double count);
		bool queryCommandIndeterm(const String& cmdID);
		void scrollIntoView();
		void scrollIntoView(bool fStart);
		bool findText(const String& string);
		bool findText(const String& string, double count);
		bool findText(const String& string, double count, double flags);
		bool execCommand(const String& cmdID);
		bool execCommand(const String& cmdID, bool showUI);
		bool execCommand(const String& cmdID, bool showUI, Object* value);
		ClientRect* getBoundingClientRect();
		bool moveToBookmark(const String& bookmark);
		bool isEqual(TextRange* range);
		TextRange* duplicate();
		void collapse();
		void collapse(bool start);
		String* queryCommandText(const String& cmdID);
		void select();
		void pasteHTML(const String& html);
		bool inRange(TextRange* range);
		double moveEnd(const String& unit);
		double moveEnd(const String& unit, double count);
		ClientRectList* getClientRects();
		double moveStart(const String& unit);
		double moveStart(const String& unit, double count);
		Element* parentElement();
		bool queryCommandState(const String& cmdID);
		double compareEndPoints(const String& how, TextRange* sourceRange);
		bool execCommandShowHelp(const String& cmdID);
		void moveToElementText(Element* element);
		bool expand(const String& Unit);
		bool queryCommandSupported(const String& cmdID);
		void setEndPoint(const String& how, TextRange* SourceRange);
		bool queryCommandEnabled(const String& cmdID);
		TextRange* get_prototype();
		void set_prototype(TextRange*);
		TextRange();
	};

	class HTMLBlockElement: public HTMLElement , public DOML2DeprecatedTextFlowControl {
	public:
		double get_width();
		void set_width(double);
		String* get_cite();
		void set_cite(const String&);
		HTMLBlockElement* get_prototype();
		void set_prototype(HTMLBlockElement*);
		HTMLBlockElement();
	};

	class StyleSheet: public Object{
	public:
		bool get_disabled();
		void set_disabled(bool);
		Node* get_ownerNode();
		void set_ownerNode(Node*);
		StyleSheet* get_parentStyleSheet();
		void set_parentStyleSheet(StyleSheet*);
		String* get_href();
		void set_href(const String&);
		MediaList* get_media();
		void set_media(MediaList*);
		String* get_type();
		void set_type(const String&);
		String* get_title();
		void set_title(const String&);
		StyleSheet* get_prototype();
		void set_prototype(StyleSheet*);
		StyleSheet();
	};

	class CSSStyleSheet: public StyleSheet {
	public:
		Element* get_owningElement();
		void set_owningElement(Element*);
		StyleSheetList* get_imports();
		void set_imports(StyleSheetList*);
		bool get_isAlternate();
		void set_isAlternate(bool);
		MSCSSRuleList* get_rules();
		void set_rules(MSCSSRuleList*);
		bool get_isPrefAlternate();
		void set_isPrefAlternate(bool);
		bool get_readOnly();
		void set_readOnly(bool);
		String* get_cssText();
		void set_cssText(const String&);
		CSSRule* get_ownerRule();
		void set_ownerRule(CSSRule*);
		String* get_href();
		void set_href(const String&);
		CSSRuleList* get_cssRules();
		void set_cssRules(CSSRuleList*);
		String* get_id();
		void set_id(const String&);
		StyleSheetPageList* get_pages();
		void set_pages(StyleSheetPageList*);
		double addImport(const String& bstrURL);
		double addImport(const String& bstrURL, double lIndex);
		double addPageRule(const String& bstrSelector, const String& bstrStyle);
		double addPageRule(const String& bstrSelector, const String& bstrStyle, double lIndex);
		double insertRule(const String& rule);
		double insertRule(const String& rule, double index);
		void removeRule(double lIndex);
		void deleteRule();
		void deleteRule(double index);
		double addRule(const String& bstrSelector);
		double addRule(const String& bstrSelector, const String& bstrStyle);
		double addRule(const String& bstrSelector, const String& bstrStyle, double lIndex);
		void removeImport(double lIndex);
		CSSStyleSheet* get_prototype();
		void set_prototype(CSSStyleSheet*);
		CSSStyleSheet();
	};

	class MSSelection: public Object{
	public:
		String* get_type();
		void set_type(const String&);
		String* get_typeDetail();
		void set_typeDetail(const String&);
		TextRange* createRange();
		void clear();
		TextRangeCollection* createRangeCollection();
		void empty();
		MSSelection* get_prototype();
		void set_prototype(MSSelection*);
		MSSelection();
	};

	class HTMLMetaElement: public HTMLElement {
	public:
		String* get_httpEquiv();
		void set_httpEquiv(const String&);
		String* get_name();
		void set_name(const String&);
		String* get_content();
		void set_content(const String&);
		String* get_url();
		void set_url(const String&);
		String* get_scheme();
		void set_scheme(const String&);
		String* get_charset();
		void set_charset(const String&);
		HTMLMetaElement* get_prototype();
		void set_prototype(HTMLMetaElement*);
		HTMLMetaElement();
	};

	class SVGURIReference: public Object{
	public:
		SVGAnimatedString* get_href();
		void set_href(SVGAnimatedString*);
	};

	class SVGPatternElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGLangSpace , public SVGTests , public SVGFitToViewBox , public SVGExternalResourcesRequired , public SVGURIReference {
	public:
		SVGAnimatedEnumeration* get_patternUnits();
		void set_patternUnits(SVGAnimatedEnumeration*);
		SVGAnimatedLength* get_y();
		void set_y(SVGAnimatedLength*);
		SVGAnimatedLength* get_width();
		void set_width(SVGAnimatedLength*);
		SVGAnimatedLength* get_x();
		void set_x(SVGAnimatedLength*);
		SVGAnimatedEnumeration* get_patternContentUnits();
		void set_patternContentUnits(SVGAnimatedEnumeration*);
		SVGAnimatedTransformList* get_patternTransform();
		void set_patternTransform(SVGAnimatedTransformList*);
		SVGAnimatedLength* get_height();
		void set_height(SVGAnimatedLength*);
		SVGPatternElement* get_prototype();
		void set_prototype(SVGPatternElement*);
		SVGPatternElement();
	};

	class SVGAnimatedAngle: public Object{
	public:
		SVGAngle* get_animVal();
		void set_animVal(SVGAngle*);
		SVGAngle* get_baseVal();
		void set_baseVal(SVGAngle*);
		SVGAnimatedAngle* get_prototype();
		void set_prototype(SVGAnimatedAngle*);
		SVGAnimatedAngle();
	};

	class Selection: public Object{
	public:
		bool get_isCollapsed();
		void set_isCollapsed(bool);
		Node* get_anchorNode();
		void set_anchorNode(Node*);
		Node* get_focusNode();
		void set_focusNode(Node*);
		double get_anchorOffset();
		void set_anchorOffset(double);
		double get_focusOffset();
		void set_focusOffset(double);
		double get_rangeCount();
		void set_rangeCount(double);
		void addRange(Range* range);
		void collapseToEnd();
		String* toString();
		void selectAllChildren(Node* parentNode);
		Range* getRangeAt(double index);
		void collapse(Node* parentNode, double offset);
		void removeAllRanges();
		void collapseToStart();
		void deleteFromDocument();
		void removeRange(Range* range);
		Selection* get_prototype();
		void set_prototype(Selection*);
		Selection();
	};

	class SVGScriptElement: public SVGElement , public SVGExternalResourcesRequired , public SVGURIReference {
	public:
		String* get_type();
		void set_type(const String&);
		SVGScriptElement* get_prototype();
		void set_prototype(SVGScriptElement*);
		SVGScriptElement();
	};

	class HTMLDDElement: public HTMLElement {
	public:
		bool get_noWrap();
		void set_noWrap(bool);
		HTMLDDElement* get_prototype();
		void set_prototype(HTMLDDElement*);
		HTMLDDElement();
	};

	class MSDataBindingRecordSetReadonlyExtensions: public Object{
	public:
		Object* get_recordset();
		void set_recordset(Object*);
		Object* namedRecordset(const String& dataMember);
		Object* namedRecordset(const String& dataMember, Object* hierarchy);
	};

	class CSSRule: public Object{
	public:
		String* get_cssText();
		void set_cssText(const String&);
		CSSStyleSheet* get_parentStyleSheet();
		void set_parentStyleSheet(CSSStyleSheet*);
		CSSRule* get_parentRule();
		void set_parentRule(CSSRule*);
		double get_type();
		void set_type(double);
		CSSRule* get_prototype();
		void set_prototype(CSSRule*);
		CSSRule();
		double get_IMPORT_RULE();
		double get_MEDIA_RULE();
		double get_STYLE_RULE();
		double get_NAMESPACE_RULE();
		double get_PAGE_RULE();
		double get_UNKNOWN_RULE();
		double get_FONT_FACE_RULE();
		double get_CHARSET_RULE();
	};

	class CSSStyleRule: public CSSRule {
	public:
		String* get_selectorText();
		void set_selectorText(const String&);
		MSStyleCSSProperties* get_style();
		void set_style(MSStyleCSSProperties*);
		bool get_readOnly();
		void set_readOnly(bool);
		CSSStyleRule* get_prototype();
		void set_prototype(CSSStyleRule*);
		CSSStyleRule();
	};

	class NodeIterator: public Object{
	public:
		double get_whatToShow();
		void set_whatToShow(double);
		NodeFilter* get_filter();
		void set_filter(NodeFilter*);
		Node* get_root();
		void set_root(Node*);
		bool get_expandEntityReferences();
		void set_expandEntityReferences(bool);
		Node* nextNode();
		void detach();
		Node* previousNode();
		NodeIterator* get_prototype();
		void set_prototype(NodeIterator*);
		NodeIterator();
	};

	class SVGZoomAndPan: public Object{
	public:
		double get_zoomAndPan();
		void set_zoomAndPan(double);
		SVGZoomAndPan* get_prototype();
		void set_prototype(SVGZoomAndPan*);
		SVGZoomAndPan();
		double get_SVG_ZOOMANDPAN_MAGNIFY();
		double get_SVG_ZOOMANDPAN_UNKNOWN();
		double get_SVG_ZOOMANDPAN_DISABLE();
	};

	class SVGViewElement: public SVGElement , public SVGZoomAndPan , public SVGFitToViewBox , public SVGExternalResourcesRequired {
	public:
		SVGStringList* get_viewTarget();
		void set_viewTarget(SVGStringList*);
		SVGViewElement* get_prototype();
		void set_prototype(SVGViewElement*);
		SVGViewElement();
	};

	class LinkStyle: public Object{
	public:
		StyleSheet* get_styleSheet();
		void set_styleSheet(StyleSheet*);
		StyleSheet* get_sheet();
		void set_sheet(StyleSheet*);
	};

	class HTMLLinkElement: public HTMLElement , public LinkStyle {
	public:
		String* get_rel();
		void set_rel(const String&);
		String* get_target();
		void set_target(const String&);
		String* get_href();
		void set_href(const String&);
		String* get_media();
		void set_media(const String&);
		String* get_rev();
		void set_rev(const String&);
		String* get_type();
		void set_type(const String&);
		String* get_charset();
		void set_charset(const String&);
		String* get_hreflang();
		void set_hreflang(const String&);
		HTMLLinkElement* get_prototype();
		void set_prototype(HTMLLinkElement*);
		HTMLLinkElement();
	};

	class DOML2DeprecatedColorProperty: public Object{
	public:
		String* get_color();
		void set_color(const String&);
	};

	class DOML2DeprecatedSizeProperty: public Object{
	public:
		double get_size();
		void set_size(double);
	};

	class HTMLFontElement: public HTMLElement , public DOML2DeprecatedColorProperty , public DOML2DeprecatedSizeProperty {
	public:
		String* get_face();
		void set_face(const String&);
		HTMLFontElement* get_prototype();
		void set_prototype(HTMLFontElement*);
		HTMLFontElement();
	};

	class SVGTitleElement: public SVGElement , public SVGStylable , public SVGLangSpace {
	public:
		SVGTitleElement* get_prototype();
		void set_prototype(SVGTitleElement*);
		SVGTitleElement();
	};

	class ControlRangeCollection: public Object{
	public:
		double get_length();
		void set_length(double);
		Object* queryCommandValue(const String& cmdID);
		void remove(double index);
		void add(Element* item);
		bool queryCommandIndeterm(const String& cmdID);
		void scrollIntoView();
		void scrollIntoView(Object* varargStart);
		Element* item(double index);
		bool execCommand(const String& cmdID);
		bool execCommand(const String& cmdID, bool showUI);
		bool execCommand(const String& cmdID, bool showUI, Object* value);
		void addElement(Element* item);
		bool queryCommandState(const String& cmdID);
		bool queryCommandSupported(const String& cmdID);
		bool queryCommandEnabled(const String& cmdID);
		String* queryCommandText(const String& cmdID);
		void select();
		ControlRangeCollection* get_prototype();
		void set_prototype(ControlRangeCollection*);
		ControlRangeCollection();
	};

	class MSNamespaceInfo: public MSEventAttachmentTarget {
	public:
		String* get_urn();
		void set_urn(const String&);
		EventListener* get_onreadystatechange();
		void set_onreadystatechange(EventListener*);
		String* get_name();
		void set_name(const String&);
		String* get_readyState();
		void set_readyState(const String&);
		void doImport(const String& implementationUrl);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		MSNamespaceInfo* get_prototype();
		void set_prototype(MSNamespaceInfo*);
		MSNamespaceInfo();
	};

	class WindowSessionStorage: public Object{
	public:
		Storage* get_sessionStorage();
		void set_sessionStorage(Storage*);
	};

	class SVGAnimatedTransformList: public Object{
	public:
		SVGTransformList* get_animVal();
		void set_animVal(SVGTransformList*);
		SVGTransformList* get_baseVal();
		void set_baseVal(SVGTransformList*);
		SVGAnimatedTransformList* get_prototype();
		void set_prototype(SVGAnimatedTransformList*);
		SVGAnimatedTransformList();
	};

	class HTMLTableCaptionElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		String* get_vAlign();
		void set_vAlign(const String&);
		HTMLTableCaptionElement* get_prototype();
		void set_prototype(HTMLTableCaptionElement*);
		HTMLTableCaptionElement();
	};

	class HTMLOptionElement: public HTMLElement , public MSDataBindingExtensions {
	public:
		double get_index();
		void set_index(double);
		bool get_defaultSelected();
		void set_defaultSelected(bool);
		String* get_value();
		void set_value(const String&);
		String* get_text();
		void set_text(const String&);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		String* get_label();
		void set_label(const String&);
		bool get_selected();
		void set_selected(bool);
		HTMLOptionElement* create();
		HTMLOptionElement* get_prototype();
		void set_prototype(HTMLOptionElement*);
		HTMLOptionElement();
	};

	class HTMLMapElement: public HTMLElement {
	public:
		String* get_name();
		void set_name(const String&);
		HTMLAreasCollection* get_areas();
		void set_areas(HTMLAreasCollection*);
		HTMLMapElement* get_prototype();
		void set_prototype(HTMLMapElement*);
		HTMLMapElement();
	};

	class HTMLMenuElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction {
	public:
		String* get_type();
		void set_type(const String&);
		HTMLMenuElement* get_prototype();
		void set_prototype(HTMLMenuElement*);
		HTMLMenuElement();
	};

	class MouseWheelEvent: public MouseEvent {
	public:
		double get_wheelDelta();
		void set_wheelDelta(double);
		void initMouseWheelEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double buttonArg, EventTarget* relatedTargetArg, const String& modifiersListArg, double wheelDeltaArg);
		MouseWheelEvent* get_prototype();
		void set_prototype(MouseWheelEvent*);
		MouseWheelEvent();
	};

	class SVGPointList: public Object{
	public:
		double get_numberOfItems();
		void set_numberOfItems(double);
		SVGPoint* replaceItem(SVGPoint* newItem, double index);
		SVGPoint* getItem(double index);
		void clear();
		SVGPoint* appendItem(SVGPoint* newItem);
		SVGPoint* initialize(SVGPoint* newItem);
		SVGPoint* removeItem(double index);
		SVGPoint* insertItemBefore(SVGPoint* newItem, double index);
		SVGPointList* get_prototype();
		void set_prototype(SVGPointList*);
		SVGPointList();
	};

	class SVGAnimatedLengthList: public Object{
	public:
		SVGLengthList* get_animVal();
		void set_animVal(SVGLengthList*);
		SVGLengthList* get_baseVal();
		void set_baseVal(SVGLengthList*);
		SVGAnimatedLengthList* get_prototype();
		void set_prototype(SVGAnimatedLengthList*);
		SVGAnimatedLengthList();
	};

	class WindowLocalStorage: public Object{
	public:
		Storage* get_localStorage();
		void set_localStorage(Storage*);
	};

	class MSWindowExtensions: public Object{
	public:
		String* get_status();
		void set_status(const String&);
		EventListener* get_onmouseleave();
		void set_onmouseleave(EventListener*);
		double get_screenLeft();
		void set_screenLeft(double);
		Object* get_offscreenBuffering();
		void set_offscreenBuffering(Object*);
		double get_maxConnectionsPerServer();
		void set_maxConnectionsPerServer(double);
		EventListener* get_onmouseenter();
		void set_onmouseenter(EventListener*);
		DataTransfer* get_clipboardData();
		void set_clipboardData(DataTransfer*);
		String* get_defaultStatus();
		void set_defaultStatus(const String&);
		Navigator* get_clientInformation();
		void set_clientInformation(Navigator*);
		bool get_closed();
		void set_closed(bool);
		EventListener* get_onhelp();
		void set_onhelp(EventListener*);
		External* get_external();
		void set_external(External*);
		MSEventObj* get_event();
		void set_event(MSEventObj*);
		EventListener* get_onfocusout();
		void set_onfocusout(EventListener*);
		double get_screenTop();
		void set_screenTop(double);
		EventListener* get_onfocusin();
		void set_onfocusin(EventListener*);
		Window* showModelessDialog();
		Window* showModelessDialog(const String& url);
		Window* showModelessDialog(const String& url, Object* argument);
		Window* showModelessDialog(const String& url, Object* argument, Object* options);
		void navigate(const String& url);
		void resizeBy();
		void resizeBy(double x);
		void resizeBy(double x, double y);
		Object* item(Object* index);
		void resizeTo();
		void resizeTo(double x);
		void resizeTo(double x, double y);
		MSPopupWindow* createPopup();
		MSPopupWindow* createPopup(Object* arguments);
		String* toStaticHTML(const String& html);
		Object* execScript(const String& code);
		Object* execScript(const String& code, const String& language);
		void msWriteProfilerMark(const String& profilerMarkName);
		void moveTo();
		void moveTo(double x);
		void moveTo(double x, double y);
		void moveBy();
		void moveBy(double x);
		void moveBy(double x, double y);
		void showHelp(const String& url);
		void showHelp(const String& url, Object* helpArg);
		void showHelp(const String& url, Object* helpArg, const String& features);
		void captureEvents();
		void releaseEvents();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class Window: public EventTarget , public MSEventAttachmentTarget , public WindowLocalStorage , public MSWindowExtensions , public WindowSessionStorage , public WindowTimers {
	public:
		EventListener* get_ondragend();
		void set_ondragend(EventListener*);
		EventListener* get_onkeydown();
		void set_onkeydown(EventListener*);
		EventListener* get_ondragover();
		void set_ondragover(EventListener*);
		EventListener* get_onkeyup();
		void set_onkeyup(EventListener*);
		EventListener* get_onreset();
		void set_onreset(EventListener*);
		EventListener* get_onmouseup();
		void set_onmouseup(EventListener*);
		EventListener* get_ondragstart();
		void set_ondragstart(EventListener*);
		EventListener* get_ondrag();
		void set_ondrag(EventListener*);
		double get_screenX();
		void set_screenX(double);
		EventListener* get_onmouseover();
		void set_onmouseover(EventListener*);
		EventListener* get_ondragleave();
		void set_ondragleave(EventListener*);
		History* get_history();
		void set_history(History*);
		double get_pageXOffset();
		void set_pageXOffset(double);
		String* get_name();
		void set_name(const String&);
		EventListener* get_onafterprint();
		void set_onafterprint(EventListener*);
		EventListener* get_onpause();
		void set_onpause(EventListener*);
		EventListener* get_onbeforeprint();
		void set_onbeforeprint(EventListener*);
		Window* get_top();
		void set_top(Window*);
		EventListener* get_onmousedown();
		void set_onmousedown(EventListener*);
		EventListener* get_onseeked();
		void set_onseeked(EventListener*);
		Window* get_opener();
		void set_opener(Window*);
		EventListener* get_onclick();
		void set_onclick(EventListener*);
		double get_innerHeight();
		void set_innerHeight(double);
		EventListener* get_onwaiting();
		void set_onwaiting(EventListener*);
		EventListener* get_ononline();
		void set_ononline(EventListener*);
		EventListener* get_ondurationchange();
		void set_ondurationchange(EventListener*);
		Window* get_frames();
		void set_frames(Window*);
		EventListener* get_onblur();
		void set_onblur(EventListener*);
		EventListener* get_onemptied();
		void set_onemptied(EventListener*);
		EventListener* get_onseeking();
		void set_onseeking(EventListener*);
		EventListener* get_oncanplay();
		void set_oncanplay(EventListener*);
		double get_outerWidth();
		void set_outerWidth(double);
		EventListener* get_onstalled();
		void set_onstalled(EventListener*);
		EventListener* get_onmousemove();
		void set_onmousemove(EventListener*);
		double get_innerWidth();
		void set_innerWidth(double);
		EventListener* get_onoffline();
		void set_onoffline(EventListener*);
		double get_length();
		void set_length(double);
		Screen* get_screen();
		void set_screen(Screen*);
		EventListener* get_onbeforeunload();
		void set_onbeforeunload(EventListener*);
		EventListener* get_onratechange();
		void set_onratechange(EventListener*);
		EventListener* get_onstorage();
		void set_onstorage(EventListener*);
		EventListener* get_onloadstart();
		void set_onloadstart(EventListener*);
		EventListener* get_ondragenter();
		void set_ondragenter(EventListener*);
		EventListener* get_onsubmit();
		void set_onsubmit(EventListener*);
		Window* get_self();
		void set_self(Window*);
		Document* get_document();
		void set_document(Document*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_ondblclick();
		void set_ondblclick(EventListener*);
		double get_pageYOffset();
		void set_pageYOffset(double);
		EventListener* get_oncontextmenu();
		void set_oncontextmenu(EventListener*);
		EventListener* get_onchange();
		void set_onchange(EventListener*);
		EventListener* get_onloadedmetadata();
		void set_onloadedmetadata(EventListener*);
		EventListener* get_onplay();
		void set_onplay(EventListener*);
		ErrorEventHandler* get_onerror();
		void set_onerror(ErrorEventHandler*);
		EventListener* get_onplaying();
		void set_onplaying(EventListener*);
		Window* get_parent();
		void set_parent(Window*);
		Location* get_location();
		void set_location(Location*);
		EventListener* get_oncanplaythrough();
		void set_oncanplaythrough(EventListener*);
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_onreadystatechange();
		void set_onreadystatechange(EventListener*);
		double get_outerHeight();
		void set_outerHeight(double);
		EventListener* get_onkeypress();
		void set_onkeypress(EventListener*);
		Element* get_frameElement();
		void set_frameElement(Element*);
		EventListener* get_onloadeddata();
		void set_onloadeddata(EventListener*);
		EventListener* get_onsuspend();
		void set_onsuspend(EventListener*);
		Window* get_window();
		void set_window(Window*);
		EventListener* get_onfocus();
		void set_onfocus(EventListener*);
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		EventListener* get_ontimeupdate();
		void set_ontimeupdate(EventListener*);
		EventListener* get_onresize();
		void set_onresize(EventListener*);
		EventListener* get_onselect();
		void set_onselect(EventListener*);
		Navigator* get_navigator();
		void set_navigator(Navigator*);
		StyleMedia* get_styleMedia();
		void set_styleMedia(StyleMedia*);
		EventListener* get_ondrop();
		void set_ondrop(EventListener*);
		EventListener* get_onmouseout();
		void set_onmouseout(EventListener*);
		EventListener* get_onended();
		void set_onended(EventListener*);
		EventListener* get_onhashchange();
		void set_onhashchange(EventListener*);
		EventListener* get_onunload();
		void set_onunload(EventListener*);
		EventListener* get_onscroll();
		void set_onscroll(EventListener*);
		double get_screenY();
		void set_screenY(double);
		EventListener* get_onmousewheel();
		void set_onmousewheel(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onvolumechange();
		void set_onvolumechange(EventListener*);
		EventListener* get_oninput();
		void set_oninput(EventListener*);
		Performance* get_performance();
		void set_performance(Performance*);
		void alert();
		void alert(const String& message);
		void scroll();
		void scroll(double x);
		void scroll(double x, double y);
		void focus();
		void scrollTo();
		void scrollTo(double x);
		void scrollTo(double x, double y);
		void print();
		String* prompt();
		String* prompt(const String& message);
		String* prompt(const String& message, const String& defaul);
		String* toString();
		Window* open();
		Window* open(const String& url);
		Window* open(const String& url, const String& target);
		Window* open(const String& url, const String& target, const String& features);
		Window* open(const String& url, const String& target, const String& features, bool replace);
		void scrollBy();
		void scrollBy(double x);
		void scrollBy(double x, double y);
		bool confirm();
		bool confirm(const String& message);
		void close();
		void postMessage(Object* message, const String& targetOrigin);
		void postMessage(Object* message, const String& targetOrigin, Object* ports);
		Object* showModalDialog();
		Object* showModalDialog(const String& url);
		Object* showModalDialog(const String& url, Object* argument);
		Object* showModalDialog(const String& url, Object* argument, Object* options);
		void blur();
		Selection* getSelection();
		CSSStyleDeclaration* getComputedStyle(Element* elt);
		CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
		EventListener* get_onmspointerdown();
		void set_onmspointerdown(EventListener*);
		double get_animationStartTime();
		void set_animationStartTime(double);
		EventListener* get_onmsgesturedoubletap();
		void set_onmsgesturedoubletap(EventListener*);
		EventListener* get_onmspointerhover();
		void set_onmspointerhover(EventListener*);
		EventListener* get_onmsgesturehold();
		void set_onmsgesturehold(EventListener*);
		EventListener* get_onmspointermove();
		void set_onmspointermove(EventListener*);
		EventListener* get_onmsgesturechange();
		void set_onmsgesturechange(EventListener*);
		EventListener* get_onmsgesturestart();
		void set_onmsgesturestart(EventListener*);
		EventListener* get_onmspointercancel();
		void set_onmspointercancel(EventListener*);
		EventListener* get_onmsgestureend();
		void set_onmsgestureend(EventListener*);
		EventListener* get_onmsgesturetap();
		void set_onmsgesturetap(EventListener*);
		EventListener* get_onmspointerout();
		void set_onmspointerout(EventListener*);
		double get_msAnimationStartTime();
		void set_msAnimationStartTime(double);
		ApplicationCache* get_applicationCache();
		void set_applicationCache(ApplicationCache*);
		EventListener* get_onmsinertiastart();
		void set_onmsinertiastart(EventListener*);
		EventListener* get_onmspointerover();
		void set_onmspointerover(EventListener*);
		EventListener* get_onpopstate();
		void set_onpopstate(EventListener*);
		EventListener* get_onmspointerup();
		void set_onmspointerup(EventListener*);
		void msCancelRequestAnimationFrame(double handle);
		MediaQueryList* matchMedia(const String& mediaQuery);
		void cancelAnimationFrame(double handle);
		bool msIsStaticHTML(const String& html);
		MediaQueryList* msMatchMedia(const String& mediaQuery);
		double requestAnimationFrame(EventListener* callback);
		double msRequestAnimationFrame(EventListener* callback);
		EventListener* get_onpageshow();
		void set_onpageshow(EventListener*);
		EventListener* get_ondevicemotion();
		void set_ondevicemotion(EventListener*);
		double get_devicePixelRatio();
		void set_devicePixelRatio(double);
		Crypto* get_msCrypto();
		void set_msCrypto(Crypto*);
		EventListener* get_ondeviceorientation();
		void set_ondeviceorientation(EventListener*);
		String* get_doNotTrack();
		void set_doNotTrack(const String&);
		EventListener* get_onmspointerenter();
		void set_onmspointerenter(EventListener*);
		EventListener* get_onpagehide();
		void set_onpagehide(EventListener*);
		EventListener* get_onmspointerleave();
		void set_onmspointerleave(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		Window* get_prototype();
		void set_prototype(Window*);
		void eval(const String&);
		Window();
	};

	class SVGAnimatedPreserveAspectRatio: public Object{
	public:
		SVGPreserveAspectRatio* get_animVal();
		void set_animVal(SVGPreserveAspectRatio*);
		SVGPreserveAspectRatio* get_baseVal();
		void set_baseVal(SVGPreserveAspectRatio*);
		SVGAnimatedPreserveAspectRatio* get_prototype();
		void set_prototype(SVGAnimatedPreserveAspectRatio*);
		SVGAnimatedPreserveAspectRatio();
	};

	class MSSiteModeEvent: public Event {
	public:
		double get_buttonID();
		void set_buttonID(double);
		String* get_actionURL();
		void set_actionURL(const String&);
		MSSiteModeEvent* get_prototype();
		void set_prototype(MSSiteModeEvent*);
		MSSiteModeEvent();
	};

	class StyleSheetPageList: public Object{
	public:
		double get_length();
		void set_length(double);
		CSSPageRule* item(double index);
		StyleSheetPageList* get_prototype();
		void set_prototype(StyleSheetPageList*);
		StyleSheetPageList();
	};

	class MSImageResourceExtensions: public Object{
	public:
		String* get_dynsrc();
		void set_dynsrc(const String&);
		String* get_vrml();
		void set_vrml(const String&);
		String* get_lowsrc();
		void set_lowsrc(const String&);
		String* get_start();
		void set_start(const String&);
		double get_loop();
		void set_loop(double);
	};

	class MSResourceMetadata: public Object{
	public:
		String* get_protocol();
		void set_protocol(const String&);
		String* get_fileSize();
		void set_fileSize(const String&);
		String* get_fileUpdatedDate();
		void set_fileUpdatedDate(const String&);
		String* get_nameProp();
		void set_nameProp(const String&);
		String* get_fileCreatedDate();
		void set_fileCreatedDate(const String&);
		String* get_fileModifiedDate();
		void set_fileModifiedDate(const String&);
		String* get_mimeType();
		void set_mimeType(const String&);
	};

	class HTMLImageElement: public HTMLElement , public MSImageResourceExtensions , public MSDataBindingExtensions , public MSResourceMetadata {
	public:
		double get_width();
		void set_width(double);
		double get_vspace();
		void set_vspace(double);
		double get_naturalHeight();
		void set_naturalHeight(double);
		String* get_alt();
		void set_alt(const String&);
		String* get_align();
		void set_align(const String&);
		String* get_src();
		void set_src(const String&);
		String* get_useMap();
		void set_useMap(const String&);
		double get_naturalWidth();
		void set_naturalWidth(double);
		String* get_name();
		void set_name(const String&);
		double get_height();
		void set_height(double);
		String* get_border();
		void set_border(const String&);
		double get_hspace();
		void set_hspace(double);
		String* get_longDesc();
		void set_longDesc(const String&);
		String* get_href();
		void set_href(const String&);
		bool get_isMap();
		void set_isMap(bool);
		bool get_complete();
		void set_complete(bool);
		HTMLImageElement* create();
		bool get_msPlayToPrimary();
		void set_msPlayToPrimary(bool);
		bool get_msPlayToDisabled();
		void set_msPlayToDisabled(bool);
		Object* get_msPlayToSource();
		void set_msPlayToSource(Object*);
		String* get_crossOrigin();
		void set_crossOrigin(const String&);
		String* get_msPlayToPreferredSourceUri();
		void set_msPlayToPreferredSourceUri(const String&);
		HTMLImageElement* get_prototype();
		void set_prototype(HTMLImageElement*);
		HTMLImageElement();
	};

	class HTMLAreaElement: public HTMLElement {
	public:
		String* get_protocol();
		void set_protocol(const String&);
		String* get_search();
		void set_search(const String&);
		String* get_alt();
		void set_alt(const String&);
		String* get_coords();
		void set_coords(const String&);
		String* get_hostname();
		void set_hostname(const String&);
		String* get_port();
		void set_port(const String&);
		String* get_pathname();
		void set_pathname(const String&);
		String* get_host();
		void set_host(const String&);
		String* get_hash();
		void set_hash(const String&);
		String* get_target();
		void set_target(const String&);
		String* get_href();
		void set_href(const String&);
		bool get_noHref();
		void set_noHref(bool);
		String* get_shape();
		void set_shape(const String&);
		String* toString();
		HTMLAreaElement* get_prototype();
		void set_prototype(HTMLAreaElement*);
		HTMLAreaElement();
	};

	class SVGAngle: public Object{
	public:
		String* get_valueAsString();
		void set_valueAsString(const String&);
		double get_valueInSpecifiedUnits();
		void set_valueInSpecifiedUnits(double);
		double get_value();
		void set_value(double);
		double get_unitType();
		void set_unitType(double);
		void newValueSpecifiedUnits(double unitType, double valueInSpecifiedUnits);
		void convertToSpecifiedUnits(double unitType);
		SVGAngle* get_prototype();
		void set_prototype(SVGAngle*);
		SVGAngle();
		double get_SVG_ANGLETYPE_RAD();
		double get_SVG_ANGLETYPE_UNKNOWN();
		double get_SVG_ANGLETYPE_UNSPECIFIED();
		double get_SVG_ANGLETYPE_DEG();
		double get_SVG_ANGLETYPE_GRAD();
	};

	class HTMLButtonElement: public HTMLElement , public MSDataBindingExtensions {
	public:
		String* get_value();
		void set_value(const String&);
		Object* get_status();
		void set_status(Object*);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		String* get_name();
		void set_name(const String&);
		String* get_type();
		void set_type(const String&);
		TextRange* createTextRange();
		String* get_validationMessage();
		void set_validationMessage(const String&);
		String* get_formTarget();
		void set_formTarget(const String&);
		bool get_willValidate();
		void set_willValidate(bool);
		String* get_formAction();
		void set_formAction(const String&);
		bool get_autofocus();
		void set_autofocus(bool);
		ValidityState* get_validity();
		void set_validity(ValidityState*);
		String* get_formNoValidate();
		void set_formNoValidate(const String&);
		String* get_formEnctype();
		void set_formEnctype(const String&);
		String* get_formMethod();
		void set_formMethod(const String&);
		bool checkValidity();
		void setCustomValidity(const String& error);
		HTMLButtonElement* get_prototype();
		void set_prototype(HTMLButtonElement*);
		HTMLButtonElement();
	};

	class HTMLSourceElement: public HTMLElement {
	public:
		String* get_src();
		void set_src(const String&);
		String* get_media();
		void set_media(const String&);
		String* get_type();
		void set_type(const String&);
		String* get_msKeySystem();
		void set_msKeySystem(const String&);
		HTMLSourceElement* get_prototype();
		void set_prototype(HTMLSourceElement*);
		HTMLSourceElement();
	};

	class CanvasGradient: public Object{
	public:
		void addColorStop(double offset, const String& color);
		CanvasGradient* get_prototype();
		void set_prototype(CanvasGradient*);
		CanvasGradient();
	};

	class KeyboardEvent: public UIEvent {
	public:
		double get_location();
		void set_location(double);
		double get_keyCode();
		void set_keyCode(double);
		bool get_shiftKey();
		void set_shiftKey(bool);
		double get_which();
		void set_which(double);
		String* get_locale();
		void set_locale(const String&);
		String* get_key();
		void set_key(const String&);
		bool get_altKey();
		void set_altKey(bool);
		bool get_metaKey();
		void set_metaKey(bool);
		String* get_char();
		void set_char(const String&);
		bool get_ctrlKey();
		void set_ctrlKey(bool);
		bool get_repeat();
		void set_repeat(bool);
		double get_charCode();
		void set_charCode(double);
		bool getModifierState(const String& keyArg);
		void initKeyboardEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, const String& keyArg, double locationArg, const String& modifiersListArg, bool repeat, const String& locale);
		KeyboardEvent* get_prototype();
		void set_prototype(KeyboardEvent*);
		KeyboardEvent();
		double get_DOM_KEY_LOCATION_RIGHT();
		double get_DOM_KEY_LOCATION_STANDARD();
		double get_DOM_KEY_LOCATION_LEFT();
		double get_DOM_KEY_LOCATION_NUMPAD();
		double get_DOM_KEY_LOCATION_JOYSTICK();
		double get_DOM_KEY_LOCATION_MOBILE();
	};

	class Document: public Node , public NodeSelector , public MSEventAttachmentTarget , public DocumentEvent , public MSResourceMetadata , public MSNodeExtensions {
	public:
		MSCompatibleInfoCollection* get_compatible();
		void set_compatible(MSCompatibleInfoCollection*);
		EventListener* get_onkeydown();
		void set_onkeydown(EventListener*);
		EventListener* get_onkeyup();
		void set_onkeyup(EventListener*);
		DOMImplementation* get_implementation();
		void set_implementation(DOMImplementation*);
		EventListener* get_onreset();
		void set_onreset(EventListener*);
		HTMLCollection* get_scripts();
		void set_scripts(HTMLCollection*);
		EventListener* get_onhelp();
		void set_onhelp(EventListener*);
		EventListener* get_ondragleave();
		void set_ondragleave(EventListener*);
		String* get_charset();
		void set_charset(const String&);
		EventListener* get_onfocusin();
		void set_onfocusin(EventListener*);
		String* get_vlinkColor();
		void set_vlinkColor(const String&);
		EventListener* get_onseeked();
		void set_onseeked(EventListener*);
		String* get_security();
		void set_security(const String&);
		String* get_title();
		void set_title(const String&);
		MSNamespaceInfoCollection* get_namespaces();
		void set_namespaces(MSNamespaceInfoCollection*);
		String* get_defaultCharset();
		void set_defaultCharset(const String&);
		HTMLCollection* get_embeds();
		void set_embeds(HTMLCollection*);
		StyleSheetList* get_styleSheets();
		void set_styleSheets(StyleSheetList*);
		Window* get_frames();
		void set_frames(Window*);
		EventListener* get_ondurationchange();
		void set_ondurationchange(EventListener*);
		HTMLCollection* get_all();
		void set_all(HTMLCollection*);
		HTMLCollection* get_forms();
		void set_forms(HTMLCollection*);
		EventListener* get_onblur();
		void set_onblur(EventListener*);
		String* get_dir();
		void set_dir(const String&);
		EventListener* get_onemptied();
		void set_onemptied(EventListener*);
		String* get_designMode();
		void set_designMode(const String&);
		EventListener* get_onseeking();
		void set_onseeking(EventListener*);
		EventListener* get_ondeactivate();
		void set_ondeactivate(EventListener*);
		EventListener* get_oncanplay();
		void set_oncanplay(EventListener*);
		EventListener* get_ondatasetchanged();
		void set_ondatasetchanged(EventListener*);
		EventListener* get_onrowsdelete();
		void set_onrowsdelete(EventListener*);
		MSScriptHost* get_Script();
		void set_Script(MSScriptHost*);
		EventListener* get_onloadstart();
		void set_onloadstart(EventListener*);
		String* get_URLUnencoded();
		void set_URLUnencoded(const String&);
		Window* get_defaultView();
		void set_defaultView(Window*);
		EventListener* get_oncontrolselect();
		void set_oncontrolselect(EventListener*);
		EventListener* get_ondragenter();
		void set_ondragenter(EventListener*);
		EventListener* get_onsubmit();
		void set_onsubmit(EventListener*);
		String* get_inputEncoding();
		void set_inputEncoding(const String&);
		Element* get_activeElement();
		void set_activeElement(Element*);
		EventListener* get_onchange();
		void set_onchange(EventListener*);
		HTMLCollection* get_links();
		void set_links(HTMLCollection*);
		String* get_uniqueID();
		void set_uniqueID(const String&);
		EventListener* get_onbeforeactivate();
		void set_onbeforeactivate(EventListener*);
		HTMLHeadElement* get_head();
		void set_head(HTMLHeadElement*);
		String* get_cookie();
		void set_cookie(const String&);
		String* get_xmlEncoding();
		void set_xmlEncoding(const String&);
		EventListener* get_oncanplaythrough();
		void set_oncanplaythrough(EventListener*);
		double get_documentMode();
		void set_documentMode(double);
		String* get_characterSet();
		void set_characterSet(const String&);
		HTMLCollection* get_anchors();
		void set_anchors(HTMLCollection*);
		EventListener* get_onbeforeupdate();
		void set_onbeforeupdate(EventListener*);
		EventListener* get_ondatasetcomplete();
		void set_ondatasetcomplete(EventListener*);
		HTMLCollection* get_plugins();
		void set_plugins(HTMLCollection*);
		EventListener* get_onsuspend();
		void set_onsuspend(EventListener*);
		SVGSVGElement* get_rootElement();
		void set_rootElement(SVGSVGElement*);
		String* get_readyState();
		void set_readyState(const String&);
		String* get_referrer();
		void set_referrer(const String&);
		String* get_alinkColor();
		void set_alinkColor(const String&);
		EventListener* get_onerrorupdate();
		void set_onerrorupdate(EventListener*);
		Window* get_parentWindow();
		void set_parentWindow(Window*);
		EventListener* get_onmouseout();
		void set_onmouseout(EventListener*);
		EventListener* get_onmsthumbnailclick();
		void set_onmsthumbnailclick(EventListener*);
		EventListener* get_onmousewheel();
		void set_onmousewheel(EventListener*);
		EventListener* get_onvolumechange();
		void set_onvolumechange(EventListener*);
		EventListener* get_oncellchange();
		void set_oncellchange(EventListener*);
		EventListener* get_onrowexit();
		void set_onrowexit(EventListener*);
		EventListener* get_onrowsinserted();
		void set_onrowsinserted(EventListener*);
		String* get_xmlVersion();
		void set_xmlVersion(const String&);
		bool get_msCapsLockWarningOff();
		void set_msCapsLockWarningOff(bool);
		EventListener* get_onpropertychange();
		void set_onpropertychange(EventListener*);
		EventListener* get_ondragend();
		void set_ondragend(EventListener*);
		DocumentType* get_doctype();
		void set_doctype(DocumentType*);
		EventListener* get_ondragover();
		void set_ondragover(EventListener*);
		String* get_bgColor();
		void set_bgColor(const String&);
		EventListener* get_ondragstart();
		void set_ondragstart(EventListener*);
		EventListener* get_onmouseup();
		void set_onmouseup(EventListener*);
		EventListener* get_ondrag();
		void set_ondrag(EventListener*);
		EventListener* get_onmouseover();
		void set_onmouseover(EventListener*);
		String* get_linkColor();
		void set_linkColor(const String&);
		EventListener* get_onpause();
		void set_onpause(EventListener*);
		EventListener* get_onmousedown();
		void set_onmousedown(EventListener*);
		EventListener* get_onclick();
		void set_onclick(EventListener*);
		EventListener* get_onwaiting();
		void set_onwaiting(EventListener*);
		EventListener* get_onstop();
		void set_onstop(EventListener*);
		EventListener* get_onmssitemodejumplistitemremoved();
		void set_onmssitemodejumplistitemremoved(EventListener*);
		HTMLCollection* get_applets();
		void set_applets(HTMLCollection*);
		HTMLElement* get_body();
		void set_body(HTMLElement*);
		String* get_domain();
		void set_domain(const String&);
		bool get_xmlStandalone();
		void set_xmlStandalone(bool);
		MSSelection* get_selection();
		void set_selection(MSSelection*);
		EventListener* get_onstalled();
		void set_onstalled(EventListener*);
		EventListener* get_onmousemove();
		void set_onmousemove(EventListener*);
		HTMLElement* get_documentElement();
		void set_documentElement(HTMLElement*);
		EventListener* get_onbeforeeditfocus();
		void set_onbeforeeditfocus(EventListener*);
		EventListener* get_onratechange();
		void set_onratechange(EventListener*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_ondblclick();
		void set_ondblclick(EventListener*);
		EventListener* get_oncontextmenu();
		void set_oncontextmenu(EventListener*);
		EventListener* get_onloadedmetadata();
		void set_onloadedmetadata(EventListener*);
		String* get_media();
		void set_media(const String&);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onplay();
		void set_onplay(EventListener*);
		EventListener* get_onafterupdate();
		void set_onafterupdate(EventListener*);
		EventListener* get_onplaying();
		void set_onplaying(EventListener*);
		HTMLCollection* get_images();
		void set_images(HTMLCollection*);
		Location* get_location();
		void set_location(Location*);
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_onfocusout();
		void set_onfocusout(EventListener*);
		EventListener* get_onselectionchange();
		void set_onselectionchange(EventListener*);
		EventListener* get_onstoragecommit();
		void set_onstoragecommit(EventListener*);
		EventListener* get_ondataavailable();
		void set_ondataavailable(EventListener*);
		EventListener* get_onreadystatechange();
		void set_onreadystatechange(EventListener*);
		String* get_lastModified();
		void set_lastModified(const String&);
		EventListener* get_onkeypress();
		void set_onkeypress(EventListener*);
		EventListener* get_onloadeddata();
		void set_onloadeddata(EventListener*);
		EventListener* get_onbeforedeactivate();
		void set_onbeforedeactivate(EventListener*);
		EventListener* get_onactivate();
		void set_onactivate(EventListener*);
		EventListener* get_onselectstart();
		void set_onselectstart(EventListener*);
		EventListener* get_onfocus();
		void set_onfocus(EventListener*);
		String* get_fgColor();
		void set_fgColor(const String&);
		EventListener* get_ontimeupdate();
		void set_ontimeupdate(EventListener*);
		EventListener* get_onselect();
		void set_onselect(EventListener*);
		EventListener* get_ondrop();
		void set_ondrop(EventListener*);
		EventListener* get_onended();
		void set_onended(EventListener*);
		String* get_compatMode();
		void set_compatMode(const String&);
		EventListener* get_onscroll();
		void set_onscroll(EventListener*);
		EventListener* get_onrowenter();
		void set_onrowenter(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_oninput();
		void set_oninput(EventListener*);
		String* queryCommandValue(const String& commandId);
		Node* adoptNode(Node* source);
		bool queryCommandIndeterm(const String& commandId);
		NodeList* getElementsByTagNameNS(const String& namespaceURI, const String& localName);
		ProcessingInstruction* createProcessingInstruction(const String& target, const String& data);
		bool execCommand(const String& commandId);
		bool execCommand(const String& commandId, bool showUI);
		bool execCommand(const String& commandId, bool showUI, Object* value);
		Element* elementFromPoint(double x, double y);
		CDATASection* createCDATASection(const String& data);
		String* queryCommandText(const String& commandId);
		template<typename... Args> void write(Args&&... content) { return write(static_cast<const String&>(std::forward<Args>(content))...); }
		void write();
		void updateSettings();
		HTMLElement* createElement(const String& tagName);
		void releaseCapture();
		template<typename... Args> void writeln(Args&&... content) { return writeln(static_cast<const String&>(std::forward<Args>(content))...); }
		void writeln();
		Element* createElementNS(const String& namespaceURI, const String& qualifiedName);
		Object* open();
		Object* open(const String& url);
		Object* open(const String& url, const String& name);
		Object* open(const String& url, const String& name, const String& features);
		Object* open(const String& url, const String& name, const String& features, bool replace);
		bool queryCommandSupported(const String& commandId);
		TreeWalker* createTreeWalker(Node* root, double whatToShow, NodeFilter* filter, bool entityReferenceExpansion);
		Attr* createAttributeNS(const String& namespaceURI, const String& qualifiedName);
		bool queryCommandEnabled(const String& commandId);
		void focus();
		void close();
		NodeList* getElementsByClassName(const String& classNames);
		Node* importNode(Node* importedNode, bool deep);
		Range* createRange();
		bool fireEvent(const String& eventName);
		bool fireEvent(const String& eventName, Object* eventObj);
		Comment* createComment(const String& data);
		NodeList* getElementsByTagName(const String& name);
		DocumentFragment* createDocumentFragment();
		CSSStyleSheet* createStyleSheet();
		CSSStyleSheet* createStyleSheet(const String& href);
		CSSStyleSheet* createStyleSheet(const String& href, double index);
		NodeList* getElementsByName(const String& elementName);
		bool queryCommandState(const String& commandId);
		bool hasFocus();
		bool execCommandShowHelp(const String& commandId);
		Attr* createAttribute(const String& name);
		Text* createTextNode(const String& data);
		NodeIterator* createNodeIterator(Node* root, double whatToShow, NodeFilter* filter, bool entityReferenceExpansion);
		MSEventObj* createEventObject();
		MSEventObj* createEventObject(Object* eventObj);
		Selection* getSelection();
		HTMLElement* getElementById(const String& elementId);
		EventListener* get_onmspointerdown();
		void set_onmspointerdown(EventListener*);
		bool get_msHidden();
		void set_msHidden(bool);
		String* get_msVisibilityState();
		void set_msVisibilityState(const String&);
		EventListener* get_onmsgesturedoubletap();
		void set_onmsgesturedoubletap(EventListener*);
		String* get_visibilityState();
		void set_visibilityState(const String&);
		EventListener* get_onmsmanipulationstatechanged();
		void set_onmsmanipulationstatechanged(EventListener*);
		EventListener* get_onmspointerhover();
		void set_onmspointerhover(EventListener*);
		EventListener* get_onmscontentzoom();
		void set_onmscontentzoom(EventListener*);
		EventListener* get_onmspointermove();
		void set_onmspointermove(EventListener*);
		EventListener* get_onmsgesturehold();
		void set_onmsgesturehold(EventListener*);
		EventListener* get_onmsgesturechange();
		void set_onmsgesturechange(EventListener*);
		EventListener* get_onmsgesturestart();
		void set_onmsgesturestart(EventListener*);
		EventListener* get_onmspointercancel();
		void set_onmspointercancel(EventListener*);
		EventListener* get_onmsgestureend();
		void set_onmsgestureend(EventListener*);
		EventListener* get_onmsgesturetap();
		void set_onmsgesturetap(EventListener*);
		EventListener* get_onmspointerout();
		void set_onmspointerout(EventListener*);
		EventListener* get_onmsinertiastart();
		void set_onmsinertiastart(EventListener*);
		bool get_msCSSOMElementFloatMetrics();
		void set_msCSSOMElementFloatMetrics(bool);
		EventListener* get_onmspointerover();
		void set_onmspointerover(EventListener*);
		bool get_hidden();
		void set_hidden(bool);
		EventListener* get_onmspointerup();
		void set_onmspointerup(EventListener*);
		NodeList* msElementsFromPoint(double x, double y);
		NodeList* msElementsFromRect(double left, double top, double width, double height);
		void clear();
		bool get_msFullscreenEnabled();
		void set_msFullscreenEnabled(bool);
		EventListener* get_onmsfullscreenerror();
		void set_onmsfullscreenerror(EventListener*);
		EventListener* get_onmspointerenter();
		void set_onmspointerenter(EventListener*);
		Element* get_msFullscreenElement();
		void set_msFullscreenElement(Element*);
		EventListener* get_onmsfullscreenchange();
		void set_onmsfullscreenchange(EventListener*);
		EventListener* get_onmspointerleave();
		void set_onmspointerleave(EventListener*);
		void msExitFullscreen();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		Document* get_prototype();
		void set_prototype(Document*);
		Document();
	private:
		template<typename... Args> void write(const String&, Args&&... content);
		template<typename... Args> void writeln(const String&, Args&&... content);
	};

	class MessageEvent: public Event {
	public:
		Window* get_source();
		void set_source(Window*);
		String* get_origin();
		void set_origin(const String&);
		Object* get_data();
		void set_data(Object*);
		void initMessageEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Object* dataArg, const String& originArg, const String& lastEventIdArg, Window* sourceArg);
		Object* get_ports();
		void set_ports(Object*);
		MessageEvent* get_prototype();
		void set_prototype(MessageEvent*);
		MessageEvent();
	};

	class HTMLScriptElement: public HTMLElement {
	public:
		bool get_defer();
		void set_defer(bool);
		String* get_text();
		void set_text(const String&);
		String* get_src();
		void set_src(const String&);
		String* get_htmlFor();
		void set_htmlFor(const String&);
		String* get_charset();
		void set_charset(const String&);
		String* get_type();
		void set_type(const String&);
		String* get_event();
		void set_event(const String&);
		bool get_async();
		void set_async(bool);
		HTMLScriptElement* get_prototype();
		void set_prototype(HTMLScriptElement*);
		HTMLScriptElement();
	};

	class HTMLTableRowElement: public HTMLElement , public HTMLTableAlignment , public DOML2DeprecatedBackgroundColorStyle {
	public:
		double get_rowIndex();
		void set_rowIndex(double);
		HTMLCollection* get_cells();
		void set_cells(HTMLCollection*);
		String* get_align();
		void set_align(const String&);
		Object* get_borderColorLight();
		void set_borderColorLight(Object*);
		double get_sectionRowIndex();
		void set_sectionRowIndex(double);
		Object* get_borderColor();
		void set_borderColor(Object*);
		Object* get_height();
		void set_height(Object*);
		Object* get_borderColorDark();
		void set_borderColorDark(Object*);
		void deleteCell();
		void deleteCell(double index);
		HTMLElement* insertCell();
		HTMLElement* insertCell(double index);
		HTMLTableRowElement* get_prototype();
		void set_prototype(HTMLTableRowElement*);
		HTMLTableRowElement();
	};

	class RenderingContext: public Object{
	public:
	};

	class CanvasRenderingContext2D: public RenderingContext {
	public:
		double get_miterLimit();
		void set_miterLimit(double);
		String* get_font();
		void set_font(const String&);
		String* get_globalCompositeOperation();
		void set_globalCompositeOperation(const String&);
		String* get_msFillRule();
		void set_msFillRule(const String&);
		String* get_lineCap();
		void set_lineCap(const String&);
		bool get_msImageSmoothingEnabled();
		void set_msImageSmoothingEnabled(bool);
		double get_lineDashOffset();
		void set_lineDashOffset(double);
		String* get_shadowColor();
		void set_shadowColor(const String&);
		String* get_lineJoin();
		void set_lineJoin(const String&);
		double get_shadowOffsetX();
		void set_shadowOffsetX(double);
		double get_lineWidth();
		void set_lineWidth(double);
		HTMLCanvasElement* get_canvas();
		void set_canvas(HTMLCanvasElement*);
		Object* get_strokeStyle();
		void set_strokeStyle(const String&);
		void set_strokeStyle(Object*);
		double get_globalAlpha();
		void set_globalAlpha(double);
		double get_shadowOffsetY();
		void set_shadowOffsetY(double);
		Object* get_fillStyle();
		void set_fillStyle(const String&);
		void set_fillStyle(Object*);
		double get_shadowBlur();
		void set_shadowBlur(double);
		String* get_textAlign();
		void set_textAlign(const String&);
		String* get_textBaseline();
		void set_textBaseline(const String&);
		void restore();
		void setTransform(double m11, double m12, double m21, double m22, double dx, double dy);
		void save();
		void arc(double x, double y, double radius, double startAngle, double endAngle);
		void arc(double x, double y, double radius, double startAngle, double endAngle, bool anticlockwise);
		TextMetrics* measureText(const String& text);
		bool isPointInPath(double x, double y);
		bool isPointInPath(double x, double y, const String& fillRule);
		void quadraticCurveTo(double cpx, double cpy, double x, double y);
		void putImageData(ImageData* imagedata, double dx, double dy);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX, double dirtyY);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX, double dirtyY, double dirtyWidth);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX, double dirtyY, double dirtyWidth, double dirtyHeight);
		void rotate(double angle);
		void fillText(const String& text, double x, double y);
		void fillText(const String& text, double x, double y, double maxWidth);
		void translate(double x, double y);
		void scale(double x, double y);
		CanvasGradient* createRadialGradient(double x0, double y0, double r0, double x1, double y1, double r1);
		void lineTo(double x, double y);
		Array* getLineDash();
		void fill();
		void fill(const String& fillRule);
		ImageData* createImageData(Object* imageData);
		ImageData* createImageData(double sw, double sh);
		CanvasPattern* createPattern(HTMLElement* image, const String& repetition);
		void closePath();
		void rect(double x, double y, double w, double h);
		void clip();
		void clip(const String& fillRule);
		void clearRect(double x, double y, double w, double h);
		void moveTo(double x, double y);
		ImageData* getImageData(double sx, double sy, double sw, double sh);
		void fillRect(double x, double y, double w, double h);
		void bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);
		void drawImage(HTMLElement* image, double offsetX, double offsetY);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, double height);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, double height, double canvasOffsetX);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, double height, double canvasOffsetX, double canvasOffsetY);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, double height, double canvasOffsetX, double canvasOffsetY, double canvasImageWidth);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, double height, double canvasOffsetX, double canvasOffsetY, double canvasImageWidth, double canvasImageHeight);
		void transform(double m11, double m12, double m21, double m22, double dx, double dy);
		void stroke();
		void strokeRect(double x, double y, double w, double h);
		void setLineDash(Array* segments);
		void strokeText(const String& text, double x, double y);
		void strokeText(const String& text, double x, double y, double maxWidth);
		void beginPath();
		void arcTo(double x1, double y1, double x2, double y2, double radius);
		CanvasGradient* createLinearGradient(double x0, double y0, double x1, double y1);
		CanvasRenderingContext2D* get_prototype();
		void set_prototype(CanvasRenderingContext2D*);
		CanvasRenderingContext2D();
	};

	class MSCSSRuleList: public Object{
	public:
		double get_length();
		void set_length(double);
		CSSStyleRule* item();
		CSSStyleRule* item(double index);
		MSCSSRuleList* get_prototype();
		void set_prototype(MSCSSRuleList*);
		MSCSSRuleList();
	};

	class SVGPathSegLinetoHorizontalAbs: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		SVGPathSegLinetoHorizontalAbs* get_prototype();
		void set_prototype(SVGPathSegLinetoHorizontalAbs*);
		SVGPathSegLinetoHorizontalAbs();
	};

	class SVGPathSegArcAbs: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		bool get_sweepFlag();
		void set_sweepFlag(bool);
		double get_r2();
		void set_r2(double);
		double get_x();
		void set_x(double);
		double get_angle();
		void set_angle(double);
		double get_r1();
		void set_r1(double);
		bool get_largeArcFlag();
		void set_largeArcFlag(bool);
		SVGPathSegArcAbs* get_prototype();
		void set_prototype(SVGPathSegArcAbs*);
		SVGPathSegArcAbs();
	};

	class SVGTransformList: public Object{
	public:
		double get_numberOfItems();
		void set_numberOfItems(double);
		SVGTransform* getItem(double index);
		SVGTransform* consolidate();
		void clear();
		SVGTransform* appendItem(SVGTransform* newItem);
		SVGTransform* initialize(SVGTransform* newItem);
		SVGTransform* removeItem(double index);
		SVGTransform* insertItemBefore(SVGTransform* newItem, double index);
		SVGTransform* replaceItem(SVGTransform* newItem, double index);
		SVGTransform* createSVGTransformFromMatrix(SVGMatrix* matrix);
		SVGTransformList* get_prototype();
		void set_prototype(SVGTransformList*);
		SVGTransformList();
	};

	class HTMLHtmlElement: public HTMLElement {
	public:
		String* get_version();
		void set_version(const String&);
		HTMLHtmlElement* get_prototype();
		void set_prototype(HTMLHtmlElement*);
		HTMLHtmlElement();
	};

	class SVGPathSegClosePath: public SVGPathSeg {
	public:
		SVGPathSegClosePath* get_prototype();
		void set_prototype(SVGPathSegClosePath*);
		SVGPathSegClosePath();
	};

	class HTMLFrameElement: public HTMLElement , public GetSVGDocument , public MSDataBindingExtensions {
	public:
		Object* get_width();
		void set_width(Object*);
		String* get_scrolling();
		void set_scrolling(const String&);
		String* get_marginHeight();
		void set_marginHeight(const String&);
		String* get_marginWidth();
		void set_marginWidth(const String&);
		Object* get_borderColor();
		void set_borderColor(Object*);
		Object* get_frameSpacing();
		void set_frameSpacing(Object*);
		String* get_frameBorder();
		void set_frameBorder(const String&);
		bool get_noResize();
		void set_noResize(bool);
		Window* get_contentWindow();
		void set_contentWindow(Window*);
		String* get_src();
		void set_src(const String&);
		String* get_name();
		void set_name(const String&);
		Object* get_height();
		void set_height(Object*);
		Document* get_contentDocument();
		void set_contentDocument(Document*);
		String* get_border();
		void set_border(const String&);
		String* get_longDesc();
		void set_longDesc(const String&);
		EventListener* get_onload();
		void set_onload(EventListener*);
		Object* get_security();
		void set_security(Object*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		HTMLFrameElement* get_prototype();
		void set_prototype(HTMLFrameElement*);
		HTMLFrameElement();
	};

	class SVGAnimatedLength: public Object{
	public:
		SVGLength* get_animVal();
		void set_animVal(SVGLength*);
		SVGLength* get_baseVal();
		void set_baseVal(SVGLength*);
		SVGAnimatedLength* get_prototype();
		void set_prototype(SVGAnimatedLength*);
		SVGAnimatedLength();
	};

	class SVGAnimatedPoints: public Object{
	public:
		SVGPointList* get_points();
		void set_points(SVGPointList*);
		SVGPointList* get_animatedPoints();
		void set_animatedPoints(SVGPointList*);
	};

	class SVGDefsElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired {
	public:
		SVGDefsElement* get_prototype();
		void set_prototype(SVGDefsElement*);
		SVGDefsElement();
	};

	class HTMLQuoteElement: public HTMLElement {
	public:
		String* get_dateTime();
		void set_dateTime(const String&);
		String* get_cite();
		void set_cite(const String&);
		HTMLQuoteElement* get_prototype();
		void set_prototype(HTMLQuoteElement*);
		HTMLQuoteElement();
	};

	class CSSMediaRule: public CSSRule {
	public:
		MediaList* get_media();
		void set_media(MediaList*);
		CSSRuleList* get_cssRules();
		void set_cssRules(CSSRuleList*);
		double insertRule(const String& rule);
		double insertRule(const String& rule, double index);
		void deleteRule();
		void deleteRule(double index);
		CSSMediaRule* get_prototype();
		void set_prototype(CSSMediaRule*);
		CSSMediaRule();
	};

	class WindowModal: public Object{
	public:
		Object* get_dialogArguments();
		void set_dialogArguments(Object*);
		Object* get_returnValue();
		void set_returnValue(Object*);
	};

	class XMLHttpRequest: public EventTarget {
	public:
		Object* get_responseBody();
		void set_responseBody(Object*);
		double get_status();
		void set_status(double);
		double get_readyState();
		void set_readyState(double);
		String* get_responseText();
		void set_responseText(const String&);
		Document* get_responseXML();
		void set_responseXML(Document*);
		EventListener* get_ontimeout();
		void set_ontimeout(EventListener*);
		String* get_statusText();
		void set_statusText(const String&);
		EventListener* get_onreadystatechange();
		void set_onreadystatechange(EventListener*);
		double get_timeout();
		void set_timeout(double);
		EventListener* get_onload();
		void set_onload(EventListener*);
		void open(const String& method, const String& url);
		void open(const String& method, const String& url, bool async);
		void open(const String& method, const String& url, bool async, const String& user);
		void open(const String& method, const String& url, bool async, const String& user, const String& password);
		XMLHttpRequest* create();
		void send();
		void send(Object* data);
		void abort();
		String* getAllResponseHeaders();
		void setRequestHeader(const String& header, const String& value);
		String* getResponseHeader(const String& header);
		Object* get_response();
		void set_response(Object*);
		bool get_withCredentials();
		void set_withCredentials(bool);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		String* get_responseType();
		void set_responseType(const String&);
		EventListener* get_onloadend();
		void set_onloadend(EventListener*);
		XMLHttpRequestEventTarget* get_upload();
		void set_upload(XMLHttpRequestEventTarget*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onloadstart();
		void set_onloadstart(EventListener*);
		String* get_msCaching();
		void set_msCaching(const String&);
		bool msCachingEnabled();
		void overrideMimeType(const String& mime);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		XMLHttpRequest* get_prototype();
		void set_prototype(XMLHttpRequest*);
		XMLHttpRequest();
		double get_LOADING();
		double get_DONE();
		double get_UNSENT();
		double get_OPENED();
		double get_HEADERS_RECEIVED();
	};

	class HTMLTableHeaderCellElement: public HTMLTableCellElement {
	public:
		String* get_scope();
		void set_scope(const String&);
		HTMLTableHeaderCellElement* get_prototype();
		void set_prototype(HTMLTableHeaderCellElement*);
		HTMLTableHeaderCellElement();
	};

	class HTMLDListElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction {
	public:
		HTMLDListElement* get_prototype();
		void set_prototype(HTMLDListElement*);
		HTMLDListElement();
	};

	class SVGPathSegLinetoHorizontalRel: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		SVGPathSegLinetoHorizontalRel* get_prototype();
		void set_prototype(SVGPathSegLinetoHorizontalRel*);
		SVGPathSegLinetoHorizontalRel();
	};

	class SVGEllipseElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired {
	public:
		SVGAnimatedLength* get_ry();
		void set_ry(SVGAnimatedLength*);
		SVGAnimatedLength* get_cx();
		void set_cx(SVGAnimatedLength*);
		SVGAnimatedLength* get_rx();
		void set_rx(SVGAnimatedLength*);
		SVGAnimatedLength* get_cy();
		void set_cy(SVGAnimatedLength*);
		SVGEllipseElement* get_prototype();
		void set_prototype(SVGEllipseElement*);
		SVGEllipseElement();
	};

	class SVGAElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired , public SVGURIReference {
	public:
		SVGAnimatedString* get_target();
		void set_target(SVGAnimatedString*);
		SVGAElement* get_prototype();
		void set_prototype(SVGAElement*);
		SVGAElement();
	};

	class HTMLFrameSetElement: public HTMLElement {
	public:
		EventListener* get_ononline();
		void set_ononline(EventListener*);
		Object* get_borderColor();
		void set_borderColor(Object*);
		String* get_rows();
		void set_rows(const String&);
		String* get_cols();
		void set_cols(const String&);
		EventListener* get_onblur();
		void set_onblur(EventListener*);
		Object* get_frameSpacing();
		void set_frameSpacing(Object*);
		EventListener* get_onfocus();
		void set_onfocus(EventListener*);
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		String* get_frameBorder();
		void set_frameBorder(const String&);
		EventListener* get_onresize();
		void set_onresize(EventListener*);
		String* get_name();
		void set_name(const String&);
		EventListener* get_onafterprint();
		void set_onafterprint(EventListener*);
		EventListener* get_onbeforeprint();
		void set_onbeforeprint(EventListener*);
		EventListener* get_onoffline();
		void set_onoffline(EventListener*);
		String* get_border();
		void set_border(const String&);
		EventListener* get_onunload();
		void set_onunload(EventListener*);
		EventListener* get_onhashchange();
		void set_onhashchange(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onbeforeunload();
		void set_onbeforeunload(EventListener*);
		EventListener* get_onstorage();
		void set_onstorage(EventListener*);
		EventListener* get_onpageshow();
		void set_onpageshow(EventListener*);
		EventListener* get_onpagehide();
		void set_onpagehide(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		HTMLFrameSetElement* get_prototype();
		void set_prototype(HTMLFrameSetElement*);
		HTMLFrameSetElement();
	};

	class Screen: public Object{
	public:
		double get_width();
		void set_width(double);
		double get_deviceXDPI();
		void set_deviceXDPI(double);
		bool get_fontSmoothingEnabled();
		void set_fontSmoothingEnabled(bool);
		double get_bufferDepth();
		void set_bufferDepth(double);
		double get_logicalXDPI();
		void set_logicalXDPI(double);
		double get_systemXDPI();
		void set_systemXDPI(double);
		double get_availHeight();
		void set_availHeight(double);
		double get_height();
		void set_height(double);
		double get_logicalYDPI();
		void set_logicalYDPI(double);
		double get_systemYDPI();
		void set_systemYDPI(double);
		double get_updateInterval();
		void set_updateInterval(double);
		double get_colorDepth();
		void set_colorDepth(double);
		double get_availWidth();
		void set_availWidth(double);
		double get_deviceYDPI();
		void set_deviceYDPI(double);
		double get_pixelDepth();
		void set_pixelDepth(double);
		String* get_msOrientation();
		void set_msOrientation(const String&);
		EventListener* get_onmsorientationchange();
		void set_onmsorientationchange(EventListener*);
		bool msLockOrientation(Array* orientations);
		void msUnlockOrientation();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		Screen* get_prototype();
		void set_prototype(Screen*);
		Screen();
	};

	class Coordinates: public Object{
	public:
		double get_altitudeAccuracy();
		void set_altitudeAccuracy(double);
		double get_longitude();
		void set_longitude(double);
		double get_latitude();
		void set_latitude(double);
		double get_speed();
		void set_speed(double);
		double get_heading();
		void set_heading(double);
		double get_altitude();
		void set_altitude(double);
		double get_accuracy();
		void set_accuracy(double);
		Coordinates* get_prototype();
		void set_prototype(Coordinates*);
		Coordinates();
	};

	class EventListener: public Object{
	public:
	};

	class DataTransfer: public Object{
	public:
		String* get_effectAllowed();
		void set_effectAllowed(const String&);
		String* get_dropEffect();
		void set_dropEffect(const String&);
		bool clearData();
		bool clearData(const String& format);
		bool setData(const String& format, const String& data);
		String* getData(const String& format);
		DOMStringList* get_types();
		void set_types(DOMStringList*);
		FileList* get_files();
		void set_files(FileList*);
		DataTransfer* get_prototype();
		void set_prototype(DataTransfer*);
		DataTransfer();
	};

	class FocusEvent: public UIEvent {
	public:
		EventTarget* get_relatedTarget();
		void set_relatedTarget(EventTarget*);
		void initFocusEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, EventTarget* relatedTargetArg);
		FocusEvent* get_prototype();
		void set_prototype(FocusEvent*);
		FocusEvent();
	};

	class Range: public Object{
	public:
		double get_startOffset();
		void set_startOffset(double);
		bool get_collapsed();
		void set_collapsed(bool);
		double get_endOffset();
		void set_endOffset(double);
		Node* get_startContainer();
		void set_startContainer(Node*);
		Node* get_endContainer();
		void set_endContainer(Node*);
		Node* get_commonAncestorContainer();
		void set_commonAncestorContainer(Node*);
		void setStart(Node* refNode, double offset);
		void setEndBefore(Node* refNode);
		void setStartBefore(Node* refNode);
		void selectNode(Node* refNode);
		void detach();
		ClientRect* getBoundingClientRect();
		String* toString();
		double compareBoundaryPoints(double how, Range* sourceRange);
		void insertNode(Node* newNode);
		void collapse(bool toStart);
		void selectNodeContents(Node* refNode);
		DocumentFragment* cloneContents();
		void setEnd(Node* refNode, double offset);
		Range* cloneRange();
		ClientRectList* getClientRects();
		void surroundContents(Node* newParent);
		void deleteContents();
		void setStartAfter(Node* refNode);
		DocumentFragment* extractContents();
		void setEndAfter(Node* refNode);
		DocumentFragment* createContextualFragment(const String& fragment);
		Range* get_prototype();
		void set_prototype(Range*);
		Range();
		double get_END_TO_END();
		double get_START_TO_START();
		double get_START_TO_END();
		double get_END_TO_START();
	};

	class SVGPoint: public Object{
	public:
		double get_y();
		void set_y(double);
		double get_x();
		void set_x(double);
		SVGPoint* matrixTransform(SVGMatrix* matrix);
		SVGPoint* get_prototype();
		void set_prototype(SVGPoint*);
		SVGPoint();
	};

	class MSPluginsCollection: public Object{
	public:
		double get_length();
		void set_length(double);
		void refresh();
		void refresh(bool reload);
		MSPluginsCollection* get_prototype();
		void set_prototype(MSPluginsCollection*);
		MSPluginsCollection();
	};

	class SVGAnimatedNumberList: public Object{
	public:
		SVGNumberList* get_animVal();
		void set_animVal(SVGNumberList*);
		SVGNumberList* get_baseVal();
		void set_baseVal(SVGNumberList*);
		SVGAnimatedNumberList* get_prototype();
		void set_prototype(SVGAnimatedNumberList*);
		SVGAnimatedNumberList();
	};

	class SVGSVGElement: public SVGElement , public SVGStylable , public SVGZoomAndPan , public DocumentEvent , public SVGLangSpace , public SVGLocatable , public SVGTests , public SVGFitToViewBox , public SVGExternalResourcesRequired {
	public:
		SVGAnimatedLength* get_width();
		void set_width(SVGAnimatedLength*);
		SVGAnimatedLength* get_x();
		void set_x(SVGAnimatedLength*);
		String* get_contentStyleType();
		void set_contentStyleType(const String&);
		EventListener* get_onzoom();
		void set_onzoom(EventListener*);
		SVGAnimatedLength* get_y();
		void set_y(SVGAnimatedLength*);
		SVGRect* get_viewport();
		void set_viewport(SVGRect*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		double get_pixelUnitToMillimeterY();
		void set_pixelUnitToMillimeterY(double);
		EventListener* get_onresize();
		void set_onresize(EventListener*);
		double get_screenPixelToMillimeterY();
		void set_screenPixelToMillimeterY(double);
		SVGAnimatedLength* get_height();
		void set_height(SVGAnimatedLength*);
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		String* get_contentScriptType();
		void set_contentScriptType(const String&);
		double get_pixelUnitToMillimeterX();
		void set_pixelUnitToMillimeterX(double);
		SVGPoint* get_currentTranslate();
		void set_currentTranslate(SVGPoint*);
		EventListener* get_onunload();
		void set_onunload(EventListener*);
		double get_currentScale();
		void set_currentScale(double);
		EventListener* get_onscroll();
		void set_onscroll(EventListener*);
		double get_screenPixelToMillimeterX();
		void set_screenPixelToMillimeterX(double);
		void setCurrentTime(double seconds);
		SVGLength* createSVGLength();
		NodeList* getIntersectionList(SVGRect* rect, SVGElement* referenceElement);
		void unpauseAnimations();
		SVGRect* createSVGRect();
		bool checkIntersection(SVGElement* element, SVGRect* rect);
		void unsuspendRedrawAll();
		void pauseAnimations();
		double suspendRedraw(double maxWaitMilliseconds);
		void deselectAll();
		SVGAngle* createSVGAngle();
		NodeList* getEnclosureList(SVGRect* rect, SVGElement* referenceElement);
		SVGTransform* createSVGTransform();
		void unsuspendRedraw(double suspendHandleID);
		void forceRedraw();
		double getCurrentTime();
		bool checkEnclosure(SVGElement* element, SVGRect* rect);
		SVGMatrix* createSVGMatrix();
		SVGPoint* createSVGPoint();
		SVGNumber* createSVGNumber();
		SVGTransform* createSVGTransformFromMatrix(SVGMatrix* matrix);
		CSSStyleDeclaration* getComputedStyle(Element* elt);
		CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
		Element* getElementById(const String& elementId);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		SVGSVGElement* get_prototype();
		void set_prototype(SVGSVGElement*);
		SVGSVGElement();
	};

	class HTMLLabelElement: public HTMLElement , public MSDataBindingExtensions {
	public:
		String* get_htmlFor();
		void set_htmlFor(const String&);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		HTMLLabelElement* get_prototype();
		void set_prototype(HTMLLabelElement*);
		HTMLLabelElement();
	};

	class HTMLLegendElement: public HTMLElement , public MSDataBindingExtensions {
	public:
		String* get_align();
		void set_align(const String&);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		HTMLLegendElement* get_prototype();
		void set_prototype(HTMLLegendElement*);
		HTMLLegendElement();
	};

	class HTMLDirectoryElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction , public DOML2DeprecatedListNumberingAndBulletStyle {
	public:
		HTMLDirectoryElement* get_prototype();
		void set_prototype(HTMLDirectoryElement*);
		HTMLDirectoryElement();
	};

	class SVGAnimatedInteger: public Object{
	public:
		double get_animVal();
		void set_animVal(double);
		double get_baseVal();
		void set_baseVal(double);
		SVGAnimatedInteger* get_prototype();
		void set_prototype(SVGAnimatedInteger*);
		SVGAnimatedInteger();
	};

	class SVGTextElement: public SVGTextPositioningElement , public SVGTransformable {
	public:
		SVGTextElement* get_prototype();
		void set_prototype(SVGTextElement*);
		SVGTextElement();
	};

	class SVGTSpanElement: public SVGTextPositioningElement {
	public:
		SVGTSpanElement* get_prototype();
		void set_prototype(SVGTSpanElement*);
		SVGTSpanElement();
	};

	class HTMLLIElement: public HTMLElement , public DOML2DeprecatedListNumberingAndBulletStyle {
	public:
		double get_value();
		void set_value(double);
		HTMLLIElement* get_prototype();
		void set_prototype(HTMLLIElement*);
		HTMLLIElement();
	};

	class SVGPathSegLinetoVerticalAbs: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		SVGPathSegLinetoVerticalAbs* get_prototype();
		void set_prototype(SVGPathSegLinetoVerticalAbs*);
		SVGPathSegLinetoVerticalAbs();
	};

	class MSStorageExtensions: public Object{
	public:
		double get_remainingSpace();
		void set_remainingSpace(double);
	};

	class SVGStyleElement: public SVGElement , public SVGLangSpace {
	public:
		String* get_media();
		void set_media(const String&);
		String* get_type();
		void set_type(const String&);
		String* get_title();
		void set_title(const String&);
		SVGStyleElement* get_prototype();
		void set_prototype(SVGStyleElement*);
		SVGStyleElement();
	};

	class MSCurrentStyleCSSProperties: public MSCSSProperties {
	public:
		String* get_blockDirection();
		void set_blockDirection(const String&);
		String* get_clipBottom();
		void set_clipBottom(const String&);
		String* get_clipLeft();
		void set_clipLeft(const String&);
		String* get_clipRight();
		void set_clipRight(const String&);
		String* get_clipTop();
		void set_clipTop(const String&);
		String* get_hasLayout();
		void set_hasLayout(const String&);
		MSCurrentStyleCSSProperties* get_prototype();
		void set_prototype(MSCurrentStyleCSSProperties*);
		MSCurrentStyleCSSProperties();
	};

	class Storage: public MSStorageExtensions {
	public:
		double get_length();
		void set_length(double);
		Object* getItem(const String& key);
		void setItem(const String& key, const String& data);
		void clear();
		void removeItem(const String& key);
		String* key(double index);
		Storage* get_prototype();
		void set_prototype(Storage*);
		Storage();
	};

	class HTMLIFrameElement: public HTMLElement , public GetSVGDocument , public MSDataBindingExtensions {
	public:
		String* get_width();
		void set_width(const String&);
		String* get_scrolling();
		void set_scrolling(const String&);
		String* get_marginHeight();
		void set_marginHeight(const String&);
		String* get_marginWidth();
		void set_marginWidth(const String&);
		Object* get_frameSpacing();
		void set_frameSpacing(Object*);
		String* get_frameBorder();
		void set_frameBorder(const String&);
		bool get_noResize();
		void set_noResize(bool);
		double get_vspace();
		void set_vspace(double);
		Window* get_contentWindow();
		void set_contentWindow(Window*);
		String* get_align();
		void set_align(const String&);
		String* get_src();
		void set_src(const String&);
		String* get_name();
		void set_name(const String&);
		String* get_height();
		void set_height(const String&);
		String* get_border();
		void set_border(const String&);
		Document* get_contentDocument();
		void set_contentDocument(Document*);
		double get_hspace();
		void set_hspace(double);
		String* get_longDesc();
		void set_longDesc(const String&);
		Object* get_security();
		void set_security(Object*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		DOMSettableTokenList* get_sandbox();
		void set_sandbox(DOMSettableTokenList*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		HTMLIFrameElement* get_prototype();
		void set_prototype(HTMLIFrameElement*);
		HTMLIFrameElement();
	};

	class TextRangeCollection: public Object{
	public:
		double get_length();
		void set_length(double);
		TextRange* item(double index);
		TextRangeCollection* get_prototype();
		void set_prototype(TextRangeCollection*);
		TextRangeCollection();
	};

	class HTMLBodyElement: public HTMLElement , public DOML2DeprecatedBackgroundStyle , public DOML2DeprecatedBackgroundColorStyle {
	public:
		String* get_scroll();
		void set_scroll(const String&);
		EventListener* get_ononline();
		void set_ononline(EventListener*);
		EventListener* get_onblur();
		void set_onblur(EventListener*);
		bool get_noWrap();
		void set_noWrap(bool);
		EventListener* get_onfocus();
		void set_onfocus(EventListener*);
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		Object* get_text();
		void set_text(Object*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		String* get_bgProperties();
		void set_bgProperties(const String&);
		EventListener* get_onresize();
		void set_onresize(EventListener*);
		Object* get_link();
		void set_link(Object*);
		Object* get_aLink();
		void set_aLink(Object*);
		Object* get_bottomMargin();
		void set_bottomMargin(Object*);
		Object* get_topMargin();
		void set_topMargin(Object*);
		EventListener* get_onafterprint();
		void set_onafterprint(EventListener*);
		Object* get_vLink();
		void set_vLink(Object*);
		EventListener* get_onbeforeprint();
		void set_onbeforeprint(EventListener*);
		EventListener* get_onoffline();
		void set_onoffline(EventListener*);
		EventListener* get_onunload();
		void set_onunload(EventListener*);
		EventListener* get_onhashchange();
		void set_onhashchange(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		Object* get_rightMargin();
		void set_rightMargin(Object*);
		EventListener* get_onbeforeunload();
		void set_onbeforeunload(EventListener*);
		Object* get_leftMargin();
		void set_leftMargin(Object*);
		EventListener* get_onstorage();
		void set_onstorage(EventListener*);
		TextRange* createTextRange();
		EventListener* get_onpopstate();
		void set_onpopstate(EventListener*);
		EventListener* get_onpageshow();
		void set_onpageshow(EventListener*);
		EventListener* get_onpagehide();
		void set_onpagehide(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		HTMLBodyElement* get_prototype();
		void set_prototype(HTMLBodyElement*);
		HTMLBodyElement();
	};

	class DocumentType: public Node {
	public:
		String* get_name();
		void set_name(const String&);
		NamedNodeMap* get_notations();
		void set_notations(NamedNodeMap*);
		String* get_systemId();
		void set_systemId(const String&);
		String* get_internalSubset();
		void set_internalSubset(const String&);
		NamedNodeMap* get_entities();
		void set_entities(NamedNodeMap*);
		String* get_publicId();
		void set_publicId(const String&);
		DocumentType* get_prototype();
		void set_prototype(DocumentType*);
		DocumentType();
	};

	class SVGGradientElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGExternalResourcesRequired , public SVGURIReference {
	public:
		SVGAnimatedEnumeration* get_spreadMethod();
		void set_spreadMethod(SVGAnimatedEnumeration*);
		SVGAnimatedTransformList* get_gradientTransform();
		void set_gradientTransform(SVGAnimatedTransformList*);
		SVGAnimatedEnumeration* get_gradientUnits();
		void set_gradientUnits(SVGAnimatedEnumeration*);
		SVGGradientElement* get_prototype();
		void set_prototype(SVGGradientElement*);
		SVGGradientElement();
		double get_SVG_SPREADMETHOD_REFLECT();
		double get_SVG_SPREADMETHOD_PAD();
		double get_SVG_SPREADMETHOD_UNKNOWN();
		double get_SVG_SPREADMETHOD_REPEAT();
	};

	class SVGRadialGradientElement: public SVGGradientElement {
	public:
		SVGAnimatedLength* get_cx();
		void set_cx(SVGAnimatedLength*);
		SVGAnimatedLength* get_r();
		void set_r(SVGAnimatedLength*);
		SVGAnimatedLength* get_cy();
		void set_cy(SVGAnimatedLength*);
		SVGAnimatedLength* get_fx();
		void set_fx(SVGAnimatedLength*);
		SVGAnimatedLength* get_fy();
		void set_fy(SVGAnimatedLength*);
		SVGRadialGradientElement* get_prototype();
		void set_prototype(SVGRadialGradientElement*);
		SVGRadialGradientElement();
	};

	class MutationEvent: public Event {
	public:
		String* get_newValue();
		void set_newValue(const String&);
		double get_attrChange();
		void set_attrChange(double);
		String* get_attrName();
		void set_attrName(const String&);
		String* get_prevValue();
		void set_prevValue(const String&);
		Node* get_relatedNode();
		void set_relatedNode(Node*);
		void initMutationEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Node* relatedNodeArg, const String& prevValueArg, const String& newValueArg, const String& attrNameArg, double attrChangeArg);
		MutationEvent* get_prototype();
		void set_prototype(MutationEvent*);
		MutationEvent();
		double get_MODIFICATION();
		double get_REMOVAL();
		double get_ADDITION();
	};

	class DragEvent: public MouseEvent {
	public:
		DataTransfer* get_dataTransfer();
		void set_dataTransfer(DataTransfer*);
		void initDragEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, double buttonArg, EventTarget* relatedTargetArg, DataTransfer* dataTransferArg);
		void msConvertURL(File* file, const String& targetType);
		void msConvertURL(File* file, const String& targetType, const String& targetURL);
		DragEvent* get_prototype();
		void set_prototype(DragEvent*);
		DragEvent();
	};

	class HTMLTableSectionElement: public HTMLElement , public HTMLTableAlignment , public DOML2DeprecatedBackgroundColorStyle {
	public:
		String* get_align();
		void set_align(const String&);
		HTMLCollection* get_rows();
		void set_rows(HTMLCollection*);
		void deleteRow();
		void deleteRow(double index);
		Object* moveRow();
		Object* moveRow(double indexFrom);
		Object* moveRow(double indexFrom, double indexTo);
		HTMLElement* insertRow();
		HTMLElement* insertRow(double index);
		HTMLTableSectionElement* get_prototype();
		void set_prototype(HTMLTableSectionElement*);
		HTMLTableSectionElement();
	};

	class HTMLInputElement: public HTMLElement , public MSDataBindingExtensions {
	public:
		String* get_width();
		void set_width(const String&);
		bool get_status();
		void set_status(bool);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		double get_selectionStart();
		void set_selectionStart(double);
		bool get_indeterminate();
		void set_indeterminate(bool);
		bool get_readOnly();
		void set_readOnly(bool);
		double get_size();
		void set_size(double);
		double get_loop();
		void set_loop(double);
		double get_selectionEnd();
		void set_selectionEnd(double);
		String* get_vrml();
		void set_vrml(const String&);
		String* get_lowsrc();
		void set_lowsrc(const String&);
		double get_vspace();
		void set_vspace(double);
		String* get_accept();
		void set_accept(const String&);
		String* get_alt();
		void set_alt(const String&);
		bool get_defaultChecked();
		void set_defaultChecked(bool);
		String* get_align();
		void set_align(const String&);
		String* get_value();
		void set_value(const String&);
		String* get_src();
		void set_src(const String&);
		String* get_name();
		void set_name(const String&);
		String* get_useMap();
		void set_useMap(const String&);
		String* get_height();
		void set_height(const String&);
		String* get_border();
		void set_border(const String&);
		String* get_dynsrc();
		void set_dynsrc(const String&);
		bool get_checked();
		void set_checked(bool);
		double get_hspace();
		void set_hspace(double);
		double get_maxLength();
		void set_maxLength(double);
		String* get_type();
		void set_type(const String&);
		String* get_defaultValue();
		void set_defaultValue(const String&);
		bool get_complete();
		void set_complete(bool);
		String* get_start();
		void set_start(const String&);
		TextRange* createTextRange();
		void setSelectionRange(double start, double end);
		void select();
		String* get_validationMessage();
		void set_validationMessage(const String&);
		FileList* get_files();
		void set_files(FileList*);
		String* get_max();
		void set_max(const String&);
		String* get_formTarget();
		void set_formTarget(const String&);
		bool get_willValidate();
		void set_willValidate(bool);
		String* get_step();
		void set_step(const String&);
		bool get_autofocus();
		void set_autofocus(bool);
		bool get_required();
		void set_required(bool);
		String* get_formEnctype();
		void set_formEnctype(const String&);
		double get_valueAsNumber();
		void set_valueAsNumber(double);
		String* get_placeholder();
		void set_placeholder(const String&);
		String* get_formMethod();
		void set_formMethod(const String&);
		HTMLElement* get_list();
		void set_list(HTMLElement*);
		String* get_autocomplete();
		void set_autocomplete(const String&);
		String* get_min();
		void set_min(const String&);
		String* get_formAction();
		void set_formAction(const String&);
		String* get_pattern();
		void set_pattern(const String&);
		ValidityState* get_validity();
		void set_validity(ValidityState*);
		String* get_formNoValidate();
		void set_formNoValidate(const String&);
		bool get_multiple();
		void set_multiple(bool);
		bool checkValidity();
		void stepDown();
		void stepDown(double n);
		void stepUp();
		void stepUp(double n);
		void setCustomValidity(const String& error);
		HTMLInputElement* get_prototype();
		void set_prototype(HTMLInputElement*);
		HTMLInputElement();
	};

	class HTMLAnchorElement: public HTMLElement , public MSDataBindingExtensions {
	public:
		String* get_rel();
		void set_rel(const String&);
		String* get_protocol();
		void set_protocol(const String&);
		String* get_search();
		void set_search(const String&);
		String* get_coords();
		void set_coords(const String&);
		String* get_hostname();
		void set_hostname(const String&);
		String* get_pathname();
		void set_pathname(const String&);
		String* get_Methods();
		void set_Methods(const String&);
		String* get_target();
		void set_target(const String&);
		String* get_protocolLong();
		void set_protocolLong(const String&);
		String* get_href();
		void set_href(const String&);
		String* get_name();
		void set_name(const String&);
		String* get_charset();
		void set_charset(const String&);
		String* get_hreflang();
		void set_hreflang(const String&);
		String* get_port();
		void set_port(const String&);
		String* get_host();
		void set_host(const String&);
		String* get_hash();
		void set_hash(const String&);
		String* get_nameProp();
		void set_nameProp(const String&);
		String* get_urn();
		void set_urn(const String&);
		String* get_rev();
		void set_rev(const String&);
		String* get_shape();
		void set_shape(const String&);
		String* get_type();
		void set_type(const String&);
		String* get_mimeType();
		void set_mimeType(const String&);
		String* toString();
		String* get_text();
		void set_text(const String&);
		HTMLAnchorElement* get_prototype();
		void set_prototype(HTMLAnchorElement*);
		HTMLAnchorElement();
	};

	class HTMLParamElement: public HTMLElement {
	public:
		String* get_value();
		void set_value(const String&);
		String* get_name();
		void set_name(const String&);
		String* get_type();
		void set_type(const String&);
		String* get_valueType();
		void set_valueType(const String&);
		HTMLParamElement* get_prototype();
		void set_prototype(HTMLParamElement*);
		HTMLParamElement();
	};

	class SVGImageElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired , public SVGURIReference {
	public:
		SVGAnimatedLength* get_y();
		void set_y(SVGAnimatedLength*);
		SVGAnimatedLength* get_width();
		void set_width(SVGAnimatedLength*);
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
		void set_preserveAspectRatio(SVGAnimatedPreserveAspectRatio*);
		SVGAnimatedLength* get_x();
		void set_x(SVGAnimatedLength*);
		SVGAnimatedLength* get_height();
		void set_height(SVGAnimatedLength*);
		SVGImageElement* get_prototype();
		void set_prototype(SVGImageElement*);
		SVGImageElement();
	};

	class SVGAnimatedNumber: public Object{
	public:
		double get_animVal();
		void set_animVal(double);
		double get_baseVal();
		void set_baseVal(double);
		SVGAnimatedNumber* get_prototype();
		void set_prototype(SVGAnimatedNumber*);
		SVGAnimatedNumber();
	};

	class PerformanceTiming: public Object{
	public:
		double get_redirectStart();
		void set_redirectStart(double);
		double get_domainLookupEnd();
		void set_domainLookupEnd(double);
		double get_responseStart();
		void set_responseStart(double);
		double get_domComplete();
		void set_domComplete(double);
		double get_domainLookupStart();
		void set_domainLookupStart(double);
		double get_loadEventStart();
		void set_loadEventStart(double);
		double get_msFirstPaint();
		void set_msFirstPaint(double);
		double get_unloadEventEnd();
		void set_unloadEventEnd(double);
		double get_fetchStart();
		void set_fetchStart(double);
		double get_requestStart();
		void set_requestStart(double);
		double get_domInteractive();
		void set_domInteractive(double);
		double get_navigationStart();
		void set_navigationStart(double);
		double get_connectEnd();
		void set_connectEnd(double);
		double get_loadEventEnd();
		void set_loadEventEnd(double);
		double get_connectStart();
		void set_connectStart(double);
		double get_responseEnd();
		void set_responseEnd(double);
		double get_domLoading();
		void set_domLoading(double);
		double get_redirectEnd();
		void set_redirectEnd(double);
		double get_unloadEventStart();
		void set_unloadEventStart(double);
		double get_domContentLoadedEventStart();
		void set_domContentLoadedEventStart(double);
		double get_domContentLoadedEventEnd();
		void set_domContentLoadedEventEnd(double);
		Object* toJSON();
		PerformanceTiming* get_prototype();
		void set_prototype(PerformanceTiming*);
		PerformanceTiming();
	};

	class HTMLPreElement: public HTMLElement , public DOML2DeprecatedTextFlowControl {
	public:
		double get_width();
		void set_width(double);
		String* get_cite();
		void set_cite(const String&);
		HTMLPreElement* get_prototype();
		void set_prototype(HTMLPreElement*);
		HTMLPreElement();
	};

	class EventException: public Object{
	public:
		double get_code();
		void set_code(double);
		String* get_message();
		void set_message(const String&);
		String* toString();
		String* get_name();
		void set_name(const String&);
		EventException* get_prototype();
		void set_prototype(EventException*);
		EventException();
		double get_DISPATCH_REQUEST_ERR();
		double get_UNSPECIFIED_EVENT_TYPE_ERR();
	};

	class SVGMetadataElement: public SVGElement {
	public:
		SVGMetadataElement* get_prototype();
		void set_prototype(SVGMetadataElement*);
		SVGMetadataElement();
	};

	class SVGPathSegArcRel: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		bool get_sweepFlag();
		void set_sweepFlag(bool);
		double get_r2();
		void set_r2(double);
		double get_x();
		void set_x(double);
		double get_angle();
		void set_angle(double);
		double get_r1();
		void set_r1(double);
		bool get_largeArcFlag();
		void set_largeArcFlag(bool);
		SVGPathSegArcRel* get_prototype();
		void set_prototype(SVGPathSegArcRel*);
		SVGPathSegArcRel();
	};

	class SVGPathSegMovetoAbs: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		double get_x();
		void set_x(double);
		SVGPathSegMovetoAbs* get_prototype();
		void set_prototype(SVGPathSegMovetoAbs*);
		SVGPathSegMovetoAbs();
	};

	class SVGStringList: public Object{
	public:
		double get_numberOfItems();
		void set_numberOfItems(double);
		String* replaceItem(const String& newItem, double index);
		String* getItem(double index);
		void clear();
		String* appendItem(const String& newItem);
		String* initialize(const String& newItem);
		String* removeItem(double index);
		String* insertItemBefore(const String& newItem, double index);
		SVGStringList* get_prototype();
		void set_prototype(SVGStringList*);
		SVGStringList();
	};

	class XDomainRequest: public Object{
	public:
		double get_timeout();
		void set_timeout(double);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_ontimeout();
		void set_ontimeout(EventListener*);
		String* get_responseText();
		void set_responseText(const String&);
		String* get_contentType();
		void set_contentType(const String&);
		void open(const String& method, const String& url);
		XDomainRequest* create();
		void abort();
		void send();
		void send(Object* data);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		XDomainRequest* get_prototype();
		void set_prototype(XDomainRequest*);
		XDomainRequest();
	};

	class SVGLength: public Object{
	public:
		String* get_valueAsString();
		void set_valueAsString(const String&);
		double get_valueInSpecifiedUnits();
		void set_valueInSpecifiedUnits(double);
		double get_value();
		void set_value(double);
		double get_unitType();
		void set_unitType(double);
		void newValueSpecifiedUnits(double unitType, double valueInSpecifiedUnits);
		void convertToSpecifiedUnits(double unitType);
		SVGLength* get_prototype();
		void set_prototype(SVGLength*);
		SVGLength();
		double get_SVG_LENGTHTYPE_NUMBER();
		double get_SVG_LENGTHTYPE_CM();
		double get_SVG_LENGTHTYPE_PC();
		double get_SVG_LENGTHTYPE_PERCENTAGE();
		double get_SVG_LENGTHTYPE_MM();
		double get_SVG_LENGTHTYPE_PT();
		double get_SVG_LENGTHTYPE_IN();
		double get_SVG_LENGTHTYPE_EMS();
		double get_SVG_LENGTHTYPE_PX();
		double get_SVG_LENGTHTYPE_UNKNOWN();
		double get_SVG_LENGTHTYPE_EXS();
	};

	class SVGPolygonElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGAnimatedPoints , public SVGTests , public SVGExternalResourcesRequired {
	public:
		SVGPolygonElement* get_prototype();
		void set_prototype(SVGPolygonElement*);
		SVGPolygonElement();
	};

	class HTMLPhraseElement: public HTMLElement {
	public:
		String* get_dateTime();
		void set_dateTime(const String&);
		String* get_cite();
		void set_cite(const String&);
		HTMLPhraseElement* get_prototype();
		void set_prototype(HTMLPhraseElement*);
		HTMLPhraseElement();
	};

	class SVGPathSegCurvetoCubicRel: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		double get_y1();
		void set_y1(double);
		double get_x2();
		void set_x2(double);
		double get_x();
		void set_x(double);
		double get_x1();
		void set_x1(double);
		double get_y2();
		void set_y2(double);
		SVGPathSegCurvetoCubicRel* get_prototype();
		void set_prototype(SVGPathSegCurvetoCubicRel*);
		SVGPathSegCurvetoCubicRel();
	};

	class MSEventObj: public Event {
	public:
		String* get_nextPage();
		void set_nextPage(const String&);
		double get_keyCode();
		void set_keyCode(double);
		Element* get_toElement();
		void set_toElement(Element*);
		Object* get_returnValue();
		void set_returnValue(Object*);
		String* get_dataFld();
		void set_dataFld(const String&);
		double get_y();
		void set_y(double);
		DataTransfer* get_dataTransfer();
		void set_dataTransfer(DataTransfer*);
		String* get_propertyName();
		void set_propertyName(const String&);
		String* get_url();
		void set_url(const String&);
		double get_offsetX();
		void set_offsetX(double);
		Object* get_recordset();
		void set_recordset(Object*);
		double get_screenX();
		void set_screenX(double);
		double get_buttonID();
		void set_buttonID(double);
		double get_wheelDelta();
		void set_wheelDelta(double);
		double get_reason();
		void set_reason(double);
		String* get_origin();
		void set_origin(const String&);
		String* get_data();
		void set_data(const String&);
		Object* get_srcFilter();
		void set_srcFilter(Object*);
		HTMLCollection* get_boundElements();
		void set_boundElements(HTMLCollection*);
		bool get_cancelBubble();
		void set_cancelBubble(bool);
		bool get_altLeft();
		void set_altLeft(bool);
		double get_behaviorCookie();
		void set_behaviorCookie(double);
		BookmarkCollection* get_bookmarks();
		void set_bookmarks(BookmarkCollection*);
		String* get_type();
		void set_type(const String&);
		bool get_repeat();
		void set_repeat(bool);
		Element* get_srcElement();
		void set_srcElement(Element*);
		Window* get_source();
		void set_source(Window*);
		Element* get_fromElement();
		void set_fromElement(Element*);
		double get_offsetY();
		void set_offsetY(double);
		double get_x();
		void set_x(double);
		double get_behaviorPart();
		void set_behaviorPart(double);
		String* get_qualifier();
		void set_qualifier(const String&);
		bool get_altKey();
		void set_altKey(bool);
		bool get_ctrlKey();
		void set_ctrlKey(bool);
		double get_clientY();
		void set_clientY(double);
		bool get_shiftKey();
		void set_shiftKey(bool);
		bool get_shiftLeft();
		void set_shiftLeft(bool);
		bool get_contentOverflow();
		void set_contentOverflow(bool);
		double get_screenY();
		void set_screenY(double);
		bool get_ctrlLeft();
		void set_ctrlLeft(bool);
		double get_button();
		void set_button(double);
		String* get_srcUrn();
		void set_srcUrn(const String&);
		double get_clientX();
		void set_clientX(double);
		String* get_actionURL();
		void set_actionURL(const String&);
		Object* getAttribute(const String& strAttributeName);
		Object* getAttribute(const String& strAttributeName, double lFlags);
		void setAttribute(const String& strAttributeName, Object* AttributeValue);
		void setAttribute(const String& strAttributeName, Object* AttributeValue, double lFlags);
		bool removeAttribute(const String& strAttributeName);
		bool removeAttribute(const String& strAttributeName, double lFlags);
		MSEventObj* get_prototype();
		void set_prototype(MSEventObj*);
		MSEventObj();
	};

	class HTMLCanvasElement: public HTMLElement {
	public:
		double get_width();
		void set_width(double);
		double get_height();
		void set_height(double);
		String* toDataURL();
		template<typename... Args> String* toDataURL(const String& type, Args&&... args) { return toDataURL(type, static_cast<Object*>(std::forward<Args>(args))...); }
		String* toDataURL(const String& type);
		template<typename... Args> RenderingContext* getContext(const String& contextId, Args&&... args) { return getContext(contextId, static_cast<Object*>(std::forward<Args>(args))...); }
		RenderingContext* getContext(const String& contextId);
		Blob* msToBlob();
		HTMLCanvasElement* get_prototype();
		void set_prototype(HTMLCanvasElement*);
		HTMLCanvasElement();
	private:
		template<typename... Args> String* toDataURL(const String& type, Object*, Args&&... args);
		template<typename... Args> RenderingContext* getContext(const String& contextId, Object*, Args&&... args);
	};

	class Location: public Object{
	public:
		String* get_hash();
		void set_hash(const String&);
		String* get_protocol();
		void set_protocol(const String&);
		String* get_search();
		void set_search(const String&);
		String* get_href();
		void set_href(const String&);
		String* get_hostname();
		void set_hostname(const String&);
		String* get_port();
		void set_port(const String&);
		String* get_pathname();
		void set_pathname(const String&);
		String* get_host();
		void set_host(const String&);
		void reload();
		void reload(bool flag);
		void replace(const String& url);
		void assign(const String& url);
		String* toString();
		Location* get_prototype();
		void set_prototype(Location*);
		Location();
	};

	class HTMLTitleElement: public HTMLElement {
	public:
		String* get_text();
		void set_text(const String&);
		HTMLTitleElement* get_prototype();
		void set_prototype(HTMLTitleElement*);
		HTMLTitleElement();
	};

	class HTMLStyleElement: public HTMLElement , public LinkStyle {
	public:
		String* get_media();
		void set_media(const String&);
		String* get_type();
		void set_type(const String&);
		HTMLStyleElement* get_prototype();
		void set_prototype(HTMLStyleElement*);
		HTMLStyleElement();
	};

	class PerformanceEntry: public Object{
	public:
		String* get_name();
		void set_name(const String&);
		double get_startTime();
		void set_startTime(double);
		double get_duration();
		void set_duration(double);
		String* get_entryType();
		void set_entryType(const String&);
		PerformanceEntry* get_prototype();
		void set_prototype(PerformanceEntry*);
		PerformanceEntry();
	};

	class SVGTransform: public Object{
	public:
		double get_type();
		void set_type(double);
		double get_angle();
		void set_angle(double);
		SVGMatrix* get_matrix();
		void set_matrix(SVGMatrix*);
		void setTranslate(double tx, double ty);
		void setScale(double sx, double sy);
		void setMatrix(SVGMatrix* matrix);
		void setSkewY(double angle);
		void setRotate(double angle, double cx, double cy);
		void setSkewX(double angle);
		SVGTransform* get_prototype();
		void set_prototype(SVGTransform*);
		SVGTransform();
		double get_SVG_TRANSFORM_SKEWX();
		double get_SVG_TRANSFORM_UNKNOWN();
		double get_SVG_TRANSFORM_SCALE();
		double get_SVG_TRANSFORM_TRANSLATE();
		double get_SVG_TRANSFORM_MATRIX();
		double get_SVG_TRANSFORM_ROTATE();
		double get_SVG_TRANSFORM_SKEWY();
	};

	class WheelEvent: public MouseEvent {
	public:
		double get_deltaZ();
		void set_deltaZ(double);
		double get_deltaX();
		void set_deltaX(double);
		double get_deltaMode();
		void set_deltaMode(double);
		double get_deltaY();
		void set_deltaY(double);
		void initWheelEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double buttonArg, EventTarget* relatedTargetArg, const String& modifiersListArg, double deltaXArg, double deltaYArg, double deltaZArg, double deltaMode);
		void getCurrentPoint(Element* element);
		WheelEvent* get_prototype();
		void set_prototype(WheelEvent*);
		WheelEvent();
		double get_DOM_DELTA_PIXEL();
		double get_DOM_DELTA_LINE();
		double get_DOM_DELTA_PAGE();
	};

	class SVGNumber: public Object{
	public:
		double get_value();
		void set_value(double);
		SVGNumber* get_prototype();
		void set_prototype(SVGNumber*);
		SVGNumber();
	};

	class SVGAnimatedPathData: public Object{
	public:
		SVGPathSegList* get_pathSegList();
		void set_pathSegList(SVGPathSegList*);
	};

	class SVGPathElement: public SVGElement , public SVGStylable , public SVGAnimatedPathData , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired {
	public:
		double getPathSegAtLength(double distance);
		SVGPoint* getPointAtLength(double distance);
		SVGPathSegCurvetoQuadraticAbs* createSVGPathSegCurvetoQuadraticAbs(double x, double y, double x1, double y1);
		SVGPathSegLinetoRel* createSVGPathSegLinetoRel(double x, double y);
		SVGPathSegCurvetoQuadraticRel* createSVGPathSegCurvetoQuadraticRel(double x, double y, double x1, double y1);
		SVGPathSegCurvetoCubicAbs* createSVGPathSegCurvetoCubicAbs(double x, double y, double x1, double y1, double x2, double y2);
		SVGPathSegLinetoAbs* createSVGPathSegLinetoAbs(double x, double y);
		SVGPathSegClosePath* createSVGPathSegClosePath();
		SVGPathSegCurvetoCubicRel* createSVGPathSegCurvetoCubicRel(double x, double y, double x1, double y1, double x2, double y2);
		SVGPathSegCurvetoQuadraticSmoothRel* createSVGPathSegCurvetoQuadraticSmoothRel(double x, double y);
		SVGPathSegMovetoRel* createSVGPathSegMovetoRel(double x, double y);
		SVGPathSegCurvetoCubicSmoothAbs* createSVGPathSegCurvetoCubicSmoothAbs(double x, double y, double x2, double y2);
		SVGPathSegMovetoAbs* createSVGPathSegMovetoAbs(double x, double y);
		SVGPathSegLinetoVerticalRel* createSVGPathSegLinetoVerticalRel(double y);
		SVGPathSegArcRel* createSVGPathSegArcRel(double x, double y, double r1, double r2, double angle, bool largeArcFlag, bool sweepFlag);
		SVGPathSegCurvetoQuadraticSmoothAbs* createSVGPathSegCurvetoQuadraticSmoothAbs(double x, double y);
		SVGPathSegLinetoHorizontalRel* createSVGPathSegLinetoHorizontalRel(double x);
		double getTotalLength();
		SVGPathSegCurvetoCubicSmoothRel* createSVGPathSegCurvetoCubicSmoothRel(double x, double y, double x2, double y2);
		SVGPathSegLinetoHorizontalAbs* createSVGPathSegLinetoHorizontalAbs(double x);
		SVGPathSegLinetoVerticalAbs* createSVGPathSegLinetoVerticalAbs(double y);
		SVGPathSegArcAbs* createSVGPathSegArcAbs(double x, double y, double r1, double r2, double angle, bool largeArcFlag, bool sweepFlag);
		SVGPathElement* get_prototype();
		void set_prototype(SVGPathElement*);
		SVGPathElement();
	};

	class MSCompatibleInfo: public Object{
	public:
		String* get_version();
		void set_version(const String&);
		String* get_userAgent();
		void set_userAgent(const String&);
		MSCompatibleInfo* get_prototype();
		void set_prototype(MSCompatibleInfo*);
		MSCompatibleInfo();
	};

	class SVGAnimatedRect: public Object{
	public:
		SVGRect* get_animVal();
		void set_animVal(SVGRect*);
		SVGRect* get_baseVal();
		void set_baseVal(SVGRect*);
		SVGAnimatedRect* get_prototype();
		void set_prototype(SVGAnimatedRect*);
		SVGAnimatedRect();
	};

	class CSSNamespaceRule: public CSSRule {
	public:
		String* get_namespaceURI();
		void set_namespaceURI(const String&);
		String* get_prefix();
		void set_prefix(const String&);
		CSSNamespaceRule* get_prototype();
		void set_prototype(CSSNamespaceRule*);
		CSSNamespaceRule();
	};

	class SVGPathSegList: public Object{
	public:
		double get_numberOfItems();
		void set_numberOfItems(double);
		SVGPathSeg* replaceItem(SVGPathSeg* newItem, double index);
		SVGPathSeg* getItem(double index);
		void clear();
		SVGPathSeg* appendItem(SVGPathSeg* newItem);
		SVGPathSeg* initialize(SVGPathSeg* newItem);
		SVGPathSeg* removeItem(double index);
		SVGPathSeg* insertItemBefore(SVGPathSeg* newItem, double index);
		SVGPathSegList* get_prototype();
		void set_prototype(SVGPathSegList*);
		SVGPathSegList();
	};

	class HTMLUnknownElement: public HTMLElement , public MSDataBindingRecordSetReadonlyExtensions {
	public:
		HTMLUnknownElement* get_prototype();
		void set_prototype(HTMLUnknownElement*);
		HTMLUnknownElement();
	};

	class HTMLMediaElement: public HTMLElement {
	public:
		double get_initialTime();
		void set_initialTime(double);
		TimeRanges* get_played();
		void set_played(TimeRanges*);
		String* get_currentSrc();
		void set_currentSrc(const String&);
		Object* get_readyState();
		void set_readyState(Object*);
		bool get_autobuffer();
		void set_autobuffer(bool);
		bool get_loop();
		void set_loop(bool);
		bool get_ended();
		void set_ended(bool);
		TimeRanges* get_buffered();
		void set_buffered(TimeRanges*);
		MediaError* get_error();
		void set_error(MediaError*);
		TimeRanges* get_seekable();
		void set_seekable(TimeRanges*);
		bool get_autoplay();
		void set_autoplay(bool);
		bool get_controls();
		void set_controls(bool);
		double get_volume();
		void set_volume(double);
		String* get_src();
		void set_src(const String&);
		double get_playbackRate();
		void set_playbackRate(double);
		double get_duration();
		void set_duration(double);
		bool get_muted();
		void set_muted(bool);
		double get_defaultPlaybackRate();
		void set_defaultPlaybackRate(double);
		bool get_paused();
		void set_paused(bool);
		bool get_seeking();
		void set_seeking(bool);
		double get_currentTime();
		void set_currentTime(double);
		String* get_preload();
		void set_preload(const String&);
		double get_networkState();
		void set_networkState(double);
		void pause();
		void play();
		void load();
		String* canPlayType(const String& type);
		String* get_msAudioCategory();
		void set_msAudioCategory(const String&);
		bool get_msRealTime();
		void set_msRealTime(bool);
		bool get_msPlayToPrimary();
		void set_msPlayToPrimary(bool);
		TextTrackList* get_textTracks();
		void set_textTracks(TextTrackList*);
		bool get_msPlayToDisabled();
		void set_msPlayToDisabled(bool);
		AudioTrackList* get_audioTracks();
		void set_audioTracks(AudioTrackList*);
		Object* get_msPlayToSource();
		void set_msPlayToSource(Object*);
		String* get_msAudioDeviceType();
		void set_msAudioDeviceType(const String&);
		void msClearEffects();
		void msSetMediaProtectionManager();
		void msSetMediaProtectionManager(Object* mediaProtectionManager);
		void msInsertAudioEffect(const String& activatableClassId, bool effectRequired);
		void msInsertAudioEffect(const String& activatableClassId, bool effectRequired, Object* config);
		String* get_msPlayToPreferredSourceUri();
		void set_msPlayToPreferredSourceUri(const String&);
		EventListener* get_onmsneedkey();
		void set_onmsneedkey(EventListener*);
		MSMediaKeys* get_msKeys();
		void set_msKeys(MSMediaKeys*);
		MSGraphicsTrust* get_msGraphicsTrustStatus();
		void set_msGraphicsTrustStatus(MSGraphicsTrust*);
		void msSetMediaKeys(MSMediaKeys* mediaKeys);
		TextTrack* addTextTrack(const String& kind);
		TextTrack* addTextTrack(const String& kind, const String& label);
		TextTrack* addTextTrack(const String& kind, const String& label, const String& language);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		HTMLMediaElement* get_prototype();
		void set_prototype(HTMLMediaElement*);
		HTMLMediaElement();
		double get_HAVE_METADATA();
		double get_HAVE_CURRENT_DATA();
		double get_HAVE_NOTHING();
		double get_NETWORK_NO_SOURCE();
		double get_HAVE_ENOUGH_DATA();
		double get_NETWORK_EMPTY();
		double get_NETWORK_LOADING();
		double get_NETWORK_IDLE();
		double get_HAVE_FUTURE_DATA();
	};

	class HTMLAudioElement: public HTMLMediaElement {
	public:
		HTMLAudioElement* get_prototype();
		void set_prototype(HTMLAudioElement*);
		HTMLAudioElement();
	};

	class PositionError: public Object{
	public:
		double get_code();
		void set_code(double);
		String* get_message();
		void set_message(const String&);
		String* toString();
		PositionError* get_prototype();
		void set_prototype(PositionError*);
		PositionError();
		double get_POSITION_UNAVAILABLE();
		double get_PERMISSION_DENIED();
		double get_TIMEOUT();
	};

	class SVGElementInstance: public EventTarget {
	public:
		SVGElementInstance* get_previousSibling();
		void set_previousSibling(SVGElementInstance*);
		SVGElementInstance* get_parentNode();
		void set_parentNode(SVGElementInstance*);
		SVGElementInstance* get_lastChild();
		void set_lastChild(SVGElementInstance*);
		SVGElementInstance* get_nextSibling();
		void set_nextSibling(SVGElementInstance*);
		SVGElementInstanceList* get_childNodes();
		void set_childNodes(SVGElementInstanceList*);
		SVGUseElement* get_correspondingUseElement();
		void set_correspondingUseElement(SVGUseElement*);
		SVGElement* get_correspondingElement();
		void set_correspondingElement(SVGElement*);
		SVGElementInstance* get_firstChild();
		void set_firstChild(SVGElementInstance*);
		SVGElementInstance* get_prototype();
		void set_prototype(SVGElementInstance*);
		SVGElementInstance();
	};

	class MSNamespaceInfoCollection: public Object{
	public:
		double get_length();
		void set_length(double);
		Object* add();
		Object* add(const String& _namespace);
		Object* add(const String& _namespace, const String& urn);
		Object* add(const String& _namespace, const String& urn, Object* implementationUrl);
		Object* item(Object* index);
		MSNamespaceInfoCollection* get_prototype();
		void set_prototype(MSNamespaceInfoCollection*);
		MSNamespaceInfoCollection();
	};

	class SVGCircleElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired {
	public:
		SVGAnimatedLength* get_cx();
		void set_cx(SVGAnimatedLength*);
		SVGAnimatedLength* get_r();
		void set_r(SVGAnimatedLength*);
		SVGAnimatedLength* get_cy();
		void set_cy(SVGAnimatedLength*);
		SVGCircleElement* get_prototype();
		void set_prototype(SVGCircleElement*);
		SVGCircleElement();
	};

	class StyleSheetList: public Object{
	public:
		double get_length();
		void set_length(double);
		StyleSheet* item();
		StyleSheet* item(double index);
		StyleSheetList* get_prototype();
		void set_prototype(StyleSheetList*);
		StyleSheetList();
	};

	class CSSImportRule: public CSSRule {
	public:
		CSSStyleSheet* get_styleSheet();
		void set_styleSheet(CSSStyleSheet*);
		String* get_href();
		void set_href(const String&);
		MediaList* get_media();
		void set_media(MediaList*);
		CSSImportRule* get_prototype();
		void set_prototype(CSSImportRule*);
		CSSImportRule();
	};

	class CustomEvent: public Event {
	public:
		Object* get_detail();
		void set_detail(Object*);
		void initCustomEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Object* detailArg);
		CustomEvent* get_prototype();
		void set_prototype(CustomEvent*);
		CustomEvent();
	};

	class HTMLBaseFontElement: public HTMLElement , public DOML2DeprecatedColorProperty {
	public:
		String* get_face();
		void set_face(const String&);
		double get_size();
		void set_size(double);
		HTMLBaseFontElement* get_prototype();
		void set_prototype(HTMLBaseFontElement*);
		HTMLBaseFontElement();
	};

	class HTMLTextAreaElement: public HTMLElement , public MSDataBindingExtensions {
	public:
		String* get_value();
		void set_value(const String&);
		Object* get_status();
		void set_status(Object*);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		String* get_name();
		void set_name(const String&);
		double get_selectionStart();
		void set_selectionStart(double);
		double get_rows();
		void set_rows(double);
		double get_cols();
		void set_cols(double);
		bool get_readOnly();
		void set_readOnly(bool);
		String* get_wrap();
		void set_wrap(const String&);
		double get_selectionEnd();
		void set_selectionEnd(double);
		String* get_type();
		void set_type(const String&);
		String* get_defaultValue();
		void set_defaultValue(const String&);
		TextRange* createTextRange();
		void setSelectionRange(double start, double end);
		void select();
		String* get_validationMessage();
		void set_validationMessage(const String&);
		bool get_autofocus();
		void set_autofocus(bool);
		ValidityState* get_validity();
		void set_validity(ValidityState*);
		bool get_required();
		void set_required(bool);
		double get_maxLength();
		void set_maxLength(double);
		bool get_willValidate();
		void set_willValidate(bool);
		String* get_placeholder();
		void set_placeholder(const String&);
		bool checkValidity();
		void setCustomValidity(const String& error);
		HTMLTextAreaElement* get_prototype();
		void set_prototype(HTMLTextAreaElement*);
		HTMLTextAreaElement();
	};

	class Geolocation: public Object{
	public:
		void clearWatch(double watchId);
		void getCurrentPosition(PositionCallback* successCallback);
		void getCurrentPosition(PositionCallback* successCallback, PositionErrorCallback* errorCallback);
		void getCurrentPosition(PositionCallback* successCallback, PositionErrorCallback* errorCallback, PositionOptions* options);
		double watchPosition(PositionCallback* successCallback);
		double watchPosition(PositionCallback* successCallback, PositionErrorCallback* errorCallback);
		double watchPosition(PositionCallback* successCallback, PositionErrorCallback* errorCallback, PositionOptions* options);
		Geolocation* get_prototype();
		void set_prototype(Geolocation*);
		Geolocation();
	};

	class MSWindowModeless: public Object{
	public:
		Object* get_dialogTop();
		void set_dialogTop(Object*);
		Object* get_dialogLeft();
		void set_dialogLeft(Object*);
		Object* get_dialogWidth();
		void set_dialogWidth(Object*);
		Object* get_dialogHeight();
		void set_dialogHeight(Object*);
		Object* get_menuArguments();
		void set_menuArguments(Object*);
	};

	class HTMLMarqueeElement: public HTMLElement , public MSDataBindingExtensions , public DOML2DeprecatedBackgroundColorStyle {
	public:
		String* get_width();
		void set_width(const String&);
		EventListener* get_onbounce();
		void set_onbounce(EventListener*);
		double get_vspace();
		void set_vspace(double);
		bool get_trueSpeed();
		void set_trueSpeed(bool);
		double get_scrollAmount();
		void set_scrollAmount(double);
		double get_scrollDelay();
		void set_scrollDelay(double);
		String* get_behavior();
		void set_behavior(const String&);
		String* get_height();
		void set_height(const String&);
		double get_loop();
		void set_loop(double);
		String* get_direction();
		void set_direction(const String&);
		double get_hspace();
		void set_hspace(double);
		EventListener* get_onstart();
		void set_onstart(EventListener*);
		EventListener* get_onfinish();
		void set_onfinish(EventListener*);
		void stop();
		void start();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		HTMLMarqueeElement* get_prototype();
		void set_prototype(HTMLMarqueeElement*);
		HTMLMarqueeElement();
	};

	class SVGRect: public Object{
	public:
		double get_y();
		void set_y(double);
		double get_width();
		void set_width(double);
		double get_x();
		void set_x(double);
		double get_height();
		void set_height(double);
		SVGRect* get_prototype();
		void set_prototype(SVGRect*);
		SVGRect();
	};

	class History: public Object{
	public:
		double get_length();
		void set_length(double);
		void back();
		void back(Object* distance);
		void forward();
		void forward(Object* distance);
		void go();
		void go(Object* delta);
		Object* get_state();
		void set_state(Object*);
		void replaceState(Object* statedata, const String& title);
		void replaceState(Object* statedata, const String& title, const String& url);
		void pushState(Object* statedata, const String& title);
		void pushState(Object* statedata, const String& title, const String& url);
		History* get_prototype();
		void set_prototype(History*);
		History();
	};

	class SVGPathSegCurvetoCubicAbs: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		double get_y1();
		void set_y1(double);
		double get_x2();
		void set_x2(double);
		double get_x();
		void set_x(double);
		double get_x1();
		void set_x1(double);
		double get_y2();
		void set_y2(double);
		SVGPathSegCurvetoCubicAbs* get_prototype();
		void set_prototype(SVGPathSegCurvetoCubicAbs*);
		SVGPathSegCurvetoCubicAbs();
	};

	class SVGPathSegCurvetoQuadraticAbs: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		double get_y1();
		void set_y1(double);
		double get_x();
		void set_x(double);
		double get_x1();
		void set_x1(double);
		SVGPathSegCurvetoQuadraticAbs* get_prototype();
		void set_prototype(SVGPathSegCurvetoQuadraticAbs*);
		SVGPathSegCurvetoQuadraticAbs();
	};

	class TimeRanges: public Object{
	public:
		double get_length();
		void set_length(double);
		double start(double index);
		double end(double index);
		TimeRanges* get_prototype();
		void set_prototype(TimeRanges*);
		TimeRanges();
	};

	class SVGPathSegLinetoAbs: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		double get_x();
		void set_x(double);
		SVGPathSegLinetoAbs* get_prototype();
		void set_prototype(SVGPathSegLinetoAbs*);
		SVGPathSegLinetoAbs();
	};

	class HTMLModElement: public HTMLElement {
	public:
		String* get_dateTime();
		void set_dateTime(const String&);
		String* get_cite();
		void set_cite(const String&);
		HTMLModElement* get_prototype();
		void set_prototype(HTMLModElement*);
		HTMLModElement();
	};

	class SVGMatrix: public Object{
	public:
		double get_e();
		void set_e(double);
		double get_c();
		void set_c(double);
		double get_a();
		void set_a(double);
		double get_b();
		void set_b(double);
		double get_d();
		void set_d(double);
		double get_f();
		void set_f(double);
		SVGMatrix* multiply(SVGMatrix* secondMatrix);
		SVGMatrix* flipY();
		SVGMatrix* skewY(double angle);
		SVGMatrix* inverse();
		SVGMatrix* scaleNonUniform(double scaleFactorX, double scaleFactorY);
		SVGMatrix* rotate(double angle);
		SVGMatrix* flipX();
		SVGMatrix* translate(double x, double y);
		SVGMatrix* scale(double scaleFactor);
		SVGMatrix* rotateFromVector(double x, double y);
		SVGMatrix* skewX(double angle);
		SVGMatrix* get_prototype();
		void set_prototype(SVGMatrix*);
		SVGMatrix();
	};

	class MSPopupWindow: public Object{
	public:
		Document* get_document();
		void set_document(Document*);
		bool get_isOpen();
		void set_isOpen(bool);
		void show(double x, double y, double w, double h);
		void show(double x, double y, double w, double h, Object* element);
		void hide();
		MSPopupWindow* get_prototype();
		void set_prototype(MSPopupWindow*);
		MSPopupWindow();
	};

	class BeforeUnloadEvent: public Event {
	public:
		String* get_returnValue();
		void set_returnValue(const String&);
		BeforeUnloadEvent* get_prototype();
		void set_prototype(BeforeUnloadEvent*);
		BeforeUnloadEvent();
	};

	class SVGUseElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired , public SVGURIReference {
	public:
		SVGAnimatedLength* get_y();
		void set_y(SVGAnimatedLength*);
		SVGAnimatedLength* get_width();
		void set_width(SVGAnimatedLength*);
		SVGElementInstance* get_animatedInstanceRoot();
		void set_animatedInstanceRoot(SVGElementInstance*);
		SVGElementInstance* get_instanceRoot();
		void set_instanceRoot(SVGElementInstance*);
		SVGAnimatedLength* get_x();
		void set_x(SVGAnimatedLength*);
		SVGAnimatedLength* get_height();
		void set_height(SVGAnimatedLength*);
		SVGUseElement* get_prototype();
		void set_prototype(SVGUseElement*);
		SVGUseElement();
	};

	class ImageData: public Object{
	public:
		double get_width();
		void set_width(double);
		Uint8Array* get_data();
		void set_data(Uint8Array*);
		double get_height();
		void set_height(double);
		ImageData* get_prototype();
		void set_prototype(ImageData*);
		ImageData();
	};

	class HTMLTableColElement: public HTMLElement , public HTMLTableAlignment {
	public:
		Object* get_width();
		void set_width(Object*);
		String* get_align();
		void set_align(const String&);
		double get_span();
		void set_span(double);
		HTMLTableColElement* get_prototype();
		void set_prototype(HTMLTableColElement*);
		HTMLTableColElement();
	};

	class SVGException: public Object{
	public:
		double get_code();
		void set_code(double);
		String* get_message();
		void set_message(const String&);
		String* toString();
		String* get_name();
		void set_name(const String&);
		SVGException* get_prototype();
		void set_prototype(SVGException*);
		SVGException();
		double get_SVG_MATRIX_NOT_INVERTABLE();
		double get_SVG_WRONG_TYPE_ERR();
		double get_SVG_INVALID_VALUE_ERR();
	};

	class SVGLinearGradientElement: public SVGGradientElement {
	public:
		SVGAnimatedLength* get_y1();
		void set_y1(SVGAnimatedLength*);
		SVGAnimatedLength* get_x2();
		void set_x2(SVGAnimatedLength*);
		SVGAnimatedLength* get_x1();
		void set_x1(SVGAnimatedLength*);
		SVGAnimatedLength* get_y2();
		void set_y2(SVGAnimatedLength*);
		SVGLinearGradientElement* get_prototype();
		void set_prototype(SVGLinearGradientElement*);
		SVGLinearGradientElement();
	};

	class SVGAnimatedEnumeration: public Object{
	public:
		double get_animVal();
		void set_animVal(double);
		double get_baseVal();
		void set_baseVal(double);
		SVGAnimatedEnumeration* get_prototype();
		void set_prototype(SVGAnimatedEnumeration*);
		SVGAnimatedEnumeration();
	};

	class HTMLUListElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction , public DOML2DeprecatedListNumberingAndBulletStyle {
	public:
		HTMLUListElement* get_prototype();
		void set_prototype(HTMLUListElement*);
		HTMLUListElement();
	};

	class SVGRectElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired {
	public:
		SVGAnimatedLength* get_y();
		void set_y(SVGAnimatedLength*);
		SVGAnimatedLength* get_width();
		void set_width(SVGAnimatedLength*);
		SVGAnimatedLength* get_ry();
		void set_ry(SVGAnimatedLength*);
		SVGAnimatedLength* get_rx();
		void set_rx(SVGAnimatedLength*);
		SVGAnimatedLength* get_x();
		void set_x(SVGAnimatedLength*);
		SVGAnimatedLength* get_height();
		void set_height(SVGAnimatedLength*);
		SVGRectElement* get_prototype();
		void set_prototype(SVGRectElement*);
		SVGRectElement();
	};

	class ErrorEventHandler: public Object{
	public:
	};

	class HTMLDivElement: public HTMLElement , public MSDataBindingExtensions {
	public:
		String* get_align();
		void set_align(const String&);
		bool get_noWrap();
		void set_noWrap(bool);
		HTMLDivElement* get_prototype();
		void set_prototype(HTMLDivElement*);
		HTMLDivElement();
	};

	class NamedNodeMap: public Object{
	public:
		double get_length();
		void set_length(double);
		Attr* removeNamedItemNS(const String& namespaceURI, const String& localName);
		Attr* item(double index);
		Attr* removeNamedItem(const String& name);
		Attr* getNamedItem(const String& name);
		Attr* setNamedItem(Attr* arg);
		Attr* getNamedItemNS(const String& namespaceURI, const String& localName);
		Attr* setNamedItemNS(Attr* arg);
		NamedNodeMap* get_prototype();
		void set_prototype(NamedNodeMap*);
		NamedNodeMap();
	};

	class MediaList: public Object{
	public:
		double get_length();
		void set_length(double);
		String* get_mediaText();
		void set_mediaText(const String&);
		void deleteMedium(const String& oldMedium);
		void appendMedium(const String& newMedium);
		String* item(double index);
		String* toString();
		MediaList* get_prototype();
		void set_prototype(MediaList*);
		MediaList();
	};

	class SVGPathSegCurvetoQuadraticSmoothAbs: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		double get_x();
		void set_x(double);
		SVGPathSegCurvetoQuadraticSmoothAbs* get_prototype();
		void set_prototype(SVGPathSegCurvetoQuadraticSmoothAbs*);
		SVGPathSegCurvetoQuadraticSmoothAbs();
	};

	class SVGPathSegCurvetoCubicSmoothRel: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		double get_x2();
		void set_x2(double);
		double get_x();
		void set_x(double);
		double get_y2();
		void set_y2(double);
		SVGPathSegCurvetoCubicSmoothRel* get_prototype();
		void set_prototype(SVGPathSegCurvetoCubicSmoothRel*);
		SVGPathSegCurvetoCubicSmoothRel();
	};

	class SVGLengthList: public Object{
	public:
		double get_numberOfItems();
		void set_numberOfItems(double);
		SVGLength* replaceItem(SVGLength* newItem, double index);
		SVGLength* getItem(double index);
		void clear();
		SVGLength* appendItem(SVGLength* newItem);
		SVGLength* initialize(SVGLength* newItem);
		SVGLength* removeItem(double index);
		SVGLength* insertItemBefore(SVGLength* newItem, double index);
		SVGLengthList* get_prototype();
		void set_prototype(SVGLengthList*);
		SVGLengthList();
	};

	class ProcessingInstruction: public Node {
	public:
		String* get_target();
		void set_target(const String&);
		String* get_data();
		void set_data(const String&);
		ProcessingInstruction* get_prototype();
		void set_prototype(ProcessingInstruction*);
		ProcessingInstruction();
	};

	class MSBehaviorUrnsCollection: public Object{
	public:
		double get_length();
		void set_length(double);
		String* item(double index);
		MSBehaviorUrnsCollection* get_prototype();
		void set_prototype(MSBehaviorUrnsCollection*);
		MSBehaviorUrnsCollection();
	};

	class CSSFontFaceRule: public CSSRule {
	public:
		CSSStyleDeclaration* get_style();
		void set_style(CSSStyleDeclaration*);
		CSSFontFaceRule* get_prototype();
		void set_prototype(CSSFontFaceRule*);
		CSSFontFaceRule();
	};

	class TextEvent: public UIEvent {
	public:
		double get_inputMethod();
		void set_inputMethod(double);
		String* get_data();
		void set_data(const String&);
		String* get_locale();
		void set_locale(const String&);
		void initTextEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, const String& dataArg, double inputMethod, const String& locale);
		TextEvent* get_prototype();
		void set_prototype(TextEvent*);
		TextEvent();
		double get_DOM_INPUT_METHOD_KEYBOARD();
		double get_DOM_INPUT_METHOD_DROP();
		double get_DOM_INPUT_METHOD_IME();
		double get_DOM_INPUT_METHOD_SCRIPT();
		double get_DOM_INPUT_METHOD_VOICE();
		double get_DOM_INPUT_METHOD_UNKNOWN();
		double get_DOM_INPUT_METHOD_PASTE();
		double get_DOM_INPUT_METHOD_HANDWRITING();
		double get_DOM_INPUT_METHOD_OPTION();
		double get_DOM_INPUT_METHOD_MULTIMODAL();
	};

	class DocumentFragment: public Node , public NodeSelector , public MSEventAttachmentTarget , public MSNodeExtensions {
	public:
		DocumentFragment* get_prototype();
		void set_prototype(DocumentFragment*);
		DocumentFragment();
	};

	class SVGPolylineElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGAnimatedPoints , public SVGTests , public SVGExternalResourcesRequired {
	public:
		SVGPolylineElement* get_prototype();
		void set_prototype(SVGPolylineElement*);
		SVGPolylineElement();
	};

	class Position: public Object{
	public:
		double get_timestamp();
		void set_timestamp(double);
		Coordinates* get_coords();
		void set_coords(Coordinates*);
		Position* get_prototype();
		void set_prototype(Position*);
		Position();
	};

	class BookmarkCollection: public Object{
	public:
		double get_length();
		void set_length(double);
		Object* item(double index);
		BookmarkCollection* get_prototype();
		void set_prototype(BookmarkCollection*);
		BookmarkCollection();
	};

	class PerformanceMark: public PerformanceEntry {
	public:
		PerformanceMark* get_prototype();
		void set_prototype(PerformanceMark*);
		PerformanceMark();
	};

	class CSSPageRule: public CSSRule {
	public:
		String* get_pseudoClass();
		void set_pseudoClass(const String&);
		String* get_selectorText();
		void set_selectorText(const String&);
		String* get_selector();
		void set_selector(const String&);
		CSSStyleDeclaration* get_style();
		void set_style(CSSStyleDeclaration*);
		CSSPageRule* get_prototype();
		void set_prototype(CSSPageRule*);
		CSSPageRule();
	};

	class HTMLBRElement: public HTMLElement {
	public:
		String* get_clear();
		void set_clear(const String&);
		HTMLBRElement* get_prototype();
		void set_prototype(HTMLBRElement*);
		HTMLBRElement();
	};

	class HTMLSpanElement: public HTMLElement , public MSDataBindingExtensions {
	public:
		HTMLSpanElement* get_prototype();
		void set_prototype(HTMLSpanElement*);
		HTMLSpanElement();
	};

	class HTMLHeadElement: public HTMLElement {
	public:
		String* get_profile();
		void set_profile(const String&);
		HTMLHeadElement* get_prototype();
		void set_prototype(HTMLHeadElement*);
		HTMLHeadElement();
	};

	class HTMLHeadingElement: public HTMLElement , public DOML2DeprecatedTextFlowControl {
	public:
		String* get_align();
		void set_align(const String&);
		HTMLHeadingElement* get_prototype();
		void set_prototype(HTMLHeadingElement*);
		HTMLHeadingElement();
	};

	class HTMLFormElement: public HTMLElement , public MSHTMLCollectionExtensions {
	public:
		double get_length();
		void set_length(double);
		String* get_target();
		void set_target(const String&);
		String* get_acceptCharset();
		void set_acceptCharset(const String&);
		String* get_enctype();
		void set_enctype(const String&);
		HTMLCollection* get_elements();
		void set_elements(HTMLCollection*);
		String* get_action();
		void set_action(const String&);
		String* get_name();
		void set_name(const String&);
		String* get_method();
		void set_method(const String&);
		String* get_encoding();
		void set_encoding(const String&);
		void reset();
		Object* item();
		Object* item(Object* name);
		Object* item(Object* name, Object* index);
		void submit();
		Object* namedItem(const String& name);
		String* get_autocomplete();
		void set_autocomplete(const String&);
		bool get_noValidate();
		void set_noValidate(bool);
		bool checkValidity();
		HTMLFormElement* get_prototype();
		void set_prototype(HTMLFormElement*);
		HTMLFormElement();
	};

	class DOMParser: public Object{
	public:
		Document* parseFromString(const String& source, const String& mimeType);
		DOMParser* get_prototype();
		void set_prototype(DOMParser*);
		DOMParser();
	};

	class MSMimeTypesCollection: public Object{
	public:
		double get_length();
		void set_length(double);
		MSMimeTypesCollection* get_prototype();
		void set_prototype(MSMimeTypesCollection*);
		MSMimeTypesCollection();
	};

	class SVGTextPathElement: public SVGTextContentElement , public SVGURIReference {
	public:
		SVGAnimatedLength* get_startOffset();
		void set_startOffset(SVGAnimatedLength*);
		SVGAnimatedEnumeration* get_method();
		void set_method(SVGAnimatedEnumeration*);
		SVGAnimatedEnumeration* get_spacing();
		void set_spacing(SVGAnimatedEnumeration*);
		SVGTextPathElement* get_prototype();
		void set_prototype(SVGTextPathElement*);
		SVGTextPathElement();
		double get_TEXTPATH_SPACINGTYPE_EXACT();
		double get_TEXTPATH_METHODTYPE_STRETCH();
		double get_TEXTPATH_SPACINGTYPE_AUTO();
		double get_TEXTPATH_SPACINGTYPE_UNKNOWN();
		double get_TEXTPATH_METHODTYPE_UNKNOWN();
		double get_TEXTPATH_METHODTYPE_ALIGN();
	};

	class HTMLDTElement: public HTMLElement {
	public:
		bool get_noWrap();
		void set_noWrap(bool);
		HTMLDTElement* get_prototype();
		void set_prototype(HTMLDTElement*);
		HTMLDTElement();
	};

	class NodeList: public Object{
	public:
		double get_length();
		void set_length(double);
		Node* item(double index);
		NodeList* get_prototype();
		void set_prototype(NodeList*);
		NodeList();
	};

	class XMLSerializer: public Object{
	public:
		String* serializeToString(Node* target);
		XMLSerializer* get_prototype();
		void set_prototype(XMLSerializer*);
		XMLSerializer();
	};

	class PerformanceMeasure: public PerformanceEntry {
	public:
		PerformanceMeasure* get_prototype();
		void set_prototype(PerformanceMeasure*);
		PerformanceMeasure();
	};

	class NodeFilter: public Object{
	public:
		double acceptNode(Node* n);
		NodeFilter* get_prototype();
		void set_prototype(NodeFilter*);
		NodeFilter();
		double get_SHOW_ENTITY_REFERENCE();
		double get_SHOW_NOTATION();
		double get_SHOW_ENTITY();
		double get_SHOW_DOCUMENT();
		double get_SHOW_PROCESSING_INSTRUCTION();
		double get_FILTER_REJECT();
		double get_SHOW_CDATA_SECTION();
		double get_FILTER_ACCEPT();
		double get_SHOW_ALL();
		double get_SHOW_DOCUMENT_TYPE();
		double get_SHOW_TEXT();
		double get_SHOW_ELEMENT();
		double get_SHOW_COMMENT();
		double get_FILTER_SKIP();
		double get_SHOW_ATTRIBUTE();
		double get_SHOW_DOCUMENT_FRAGMENT();
	};

	class SVGNumberList: public Object{
	public:
		double get_numberOfItems();
		void set_numberOfItems(double);
		SVGNumber* replaceItem(SVGNumber* newItem, double index);
		SVGNumber* getItem(double index);
		void clear();
		SVGNumber* appendItem(SVGNumber* newItem);
		SVGNumber* initialize(SVGNumber* newItem);
		SVGNumber* removeItem(double index);
		SVGNumber* insertItemBefore(SVGNumber* newItem, double index);
		SVGNumberList* get_prototype();
		void set_prototype(SVGNumberList*);
		SVGNumberList();
	};

	class MediaError: public Object{
	public:
		double get_code();
		void set_code(double);
		double get_msExtendedCode();
		void set_msExtendedCode(double);
		MediaError* get_prototype();
		void set_prototype(MediaError*);
		MediaError();
		double get_MEDIA_ERR_ABORTED();
		double get_MEDIA_ERR_NETWORK();
		double get_MEDIA_ERR_SRC_NOT_SUPPORTED();
		double get_MEDIA_ERR_DECODE();
	};

	class HTMLFieldSetElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		String* get_validationMessage();
		void set_validationMessage(const String&);
		ValidityState* get_validity();
		void set_validity(ValidityState*);
		bool get_willValidate();
		void set_willValidate(bool);
		bool checkValidity();
		void setCustomValidity(const String& error);
		HTMLFieldSetElement* get_prototype();
		void set_prototype(HTMLFieldSetElement*);
		HTMLFieldSetElement();
	};

	class HTMLBGSoundElement: public HTMLElement {
	public:
		Object* get_balance();
		void set_balance(Object*);
		Object* get_volume();
		void set_volume(Object*);
		String* get_src();
		void set_src(const String&);
		double get_loop();
		void set_loop(double);
		HTMLBGSoundElement* get_prototype();
		void set_prototype(HTMLBGSoundElement*);
		HTMLBGSoundElement();
	};

	class Comment: public CharacterData {
	public:
		String* get_text();
		void set_text(const String&);
		Comment* get_prototype();
		void set_prototype(Comment*);
		Comment();
	};

	class PerformanceResourceTiming: public PerformanceEntry {
	public:
		double get_redirectStart();
		void set_redirectStart(double);
		double get_redirectEnd();
		void set_redirectEnd(double);
		double get_domainLookupEnd();
		void set_domainLookupEnd(double);
		double get_responseStart();
		void set_responseStart(double);
		double get_domainLookupStart();
		void set_domainLookupStart(double);
		double get_fetchStart();
		void set_fetchStart(double);
		double get_requestStart();
		void set_requestStart(double);
		double get_connectEnd();
		void set_connectEnd(double);
		double get_connectStart();
		void set_connectStart(double);
		String* get_initiatorType();
		void set_initiatorType(const String&);
		double get_responseEnd();
		void set_responseEnd(double);
		PerformanceResourceTiming* get_prototype();
		void set_prototype(PerformanceResourceTiming*);
		PerformanceResourceTiming();
	};

	class CanvasPattern: public Object{
	public:
		CanvasPattern* get_prototype();
		void set_prototype(CanvasPattern*);
		CanvasPattern();
	};

	class HTMLHRElement: public HTMLElement , public DOML2DeprecatedColorProperty , public DOML2DeprecatedSizeProperty {
	public:
		double get_width();
		void set_width(double);
		String* get_align();
		void set_align(const String&);
		bool get_noShade();
		void set_noShade(bool);
		HTMLHRElement* get_prototype();
		void set_prototype(HTMLHRElement*);
		HTMLHRElement();
	};

	class HTMLObjectElement: public HTMLElement , public GetSVGDocument , public DOML2DeprecatedMarginStyle , public DOML2DeprecatedBorderStyle , public DOML2DeprecatedAlignmentStyle , public MSDataBindingExtensions , public MSDataBindingRecordSetExtensions {
	public:
		String* get_width();
		void set_width(const String&);
		String* get_codeType();
		void set_codeType(const String&);
		Object* get_object();
		void set_object(Object*);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		String* get_code();
		void set_code(const String&);
		String* get_archive();
		void set_archive(const String&);
		String* get_standby();
		void set_standby(const String&);
		String* get_alt();
		void set_alt(const String&);
		String* get_classid();
		void set_classid(const String&);
		String* get_name();
		void set_name(const String&);
		String* get_useMap();
		void set_useMap(const String&);
		String* get_data();
		void set_data(const String&);
		String* get_height();
		void set_height(const String&);
		Document* get_contentDocument();
		void set_contentDocument(Document*);
		String* get_altHtml();
		void set_altHtml(const String&);
		String* get_codeBase();
		void set_codeBase(const String&);
		bool get_declare();
		void set_declare(bool);
		String* get_type();
		void set_type(const String&);
		String* get_BaseHref();
		void set_BaseHref(const String&);
		String* get_validationMessage();
		void set_validationMessage(const String&);
		ValidityState* get_validity();
		void set_validity(ValidityState*);
		bool get_willValidate();
		void set_willValidate(bool);
		bool checkValidity();
		void setCustomValidity(const String& error);
		String* get_msPlayToPreferredSourceUri();
		void set_msPlayToPreferredSourceUri(const String&);
		bool get_msPlayToPrimary();
		void set_msPlayToPrimary(bool);
		bool get_msPlayToDisabled();
		void set_msPlayToDisabled(bool);
		double get_readyState();
		void set_readyState(double);
		Object* get_msPlayToSource();
		void set_msPlayToSource(Object*);
		HTMLObjectElement* get_prototype();
		void set_prototype(HTMLObjectElement*);
		HTMLObjectElement();
	};

	class HTMLEmbedElement: public HTMLElement , public GetSVGDocument {
	public:
		String* get_width();
		void set_width(const String&);
		String* get_palette();
		void set_palette(const String&);
		String* get_src();
		void set_src(const String&);
		String* get_name();
		void set_name(const String&);
		String* get_pluginspage();
		void set_pluginspage(const String&);
		String* get_height();
		void set_height(const String&);
		String* get_units();
		void set_units(const String&);
		String* get_msPlayToPreferredSourceUri();
		void set_msPlayToPreferredSourceUri(const String&);
		bool get_msPlayToPrimary();
		void set_msPlayToPrimary(bool);
		bool get_msPlayToDisabled();
		void set_msPlayToDisabled(bool);
		String* get_readyState();
		void set_readyState(const String&);
		Object* get_msPlayToSource();
		void set_msPlayToSource(Object*);
		HTMLEmbedElement* get_prototype();
		void set_prototype(HTMLEmbedElement*);
		HTMLEmbedElement();
	};

	class StorageEvent: public Event {
	public:
		Object* get_oldValue();
		void set_oldValue(Object*);
		Object* get_newValue();
		void set_newValue(Object*);
		String* get_url();
		void set_url(const String&);
		Storage* get_storageArea();
		void set_storageArea(Storage*);
		String* get_key();
		void set_key(const String&);
		void initStorageEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, const String& keyArg, Object* oldValueArg, Object* newValueArg, const String& urlArg, Storage* storageAreaArg);
		StorageEvent* get_prototype();
		void set_prototype(StorageEvent*);
		StorageEvent();
	};

	class HTMLOptGroupElement: public HTMLElement , public MSDataBindingExtensions {
	public:
		double get_index();
		void set_index(double);
		bool get_defaultSelected();
		void set_defaultSelected(bool);
		String* get_text();
		void set_text(const String&);
		String* get_value();
		void set_value(const String&);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		String* get_label();
		void set_label(const String&);
		bool get_selected();
		void set_selected(bool);
		HTMLOptGroupElement* get_prototype();
		void set_prototype(HTMLOptGroupElement*);
		HTMLOptGroupElement();
	};

	class HTMLIsIndexElement: public HTMLElement {
	public:
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		String* get_action();
		void set_action(const String&);
		String* get_prompt();
		void set_prompt(const String&);
		HTMLIsIndexElement* get_prototype();
		void set_prototype(HTMLIsIndexElement*);
		HTMLIsIndexElement();
	};

	class SVGPathSegLinetoRel: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		double get_x();
		void set_x(double);
		SVGPathSegLinetoRel* get_prototype();
		void set_prototype(SVGPathSegLinetoRel*);
		SVGPathSegLinetoRel();
	};

	class DOMException: public Object{
	public:
		double get_code();
		void set_code(double);
		String* get_message();
		void set_message(const String&);
		String* toString();
		String* get_name();
		void set_name(const String&);
		DOMException* get_prototype();
		void set_prototype(DOMException*);
		DOMException();
		double get_HIERARCHY_REQUEST_ERR();
		double get_NO_MODIFICATION_ALLOWED_ERR();
		double get_INVALID_MODIFICATION_ERR();
		double get_NAMESPACE_ERR();
		double get_INVALID_CHARACTER_ERR();
		double get_TYPE_MISMATCH_ERR();
		double get_ABORT_ERR();
		double get_INVALID_STATE_ERR();
		double get_SECURITY_ERR();
		double get_NETWORK_ERR();
		double get_WRONG_DOCUMENT_ERR();
		double get_QUOTA_EXCEEDED_ERR();
		double get_INDEX_SIZE_ERR();
		double get_DOMSTRING_SIZE_ERR();
		double get_SYNTAX_ERR();
		double get_SERIALIZE_ERR();
		double get_VALIDATION_ERR();
		double get_NOT_FOUND_ERR();
		double get_URL_MISMATCH_ERR();
		double get_PARSE_ERR();
		double get_NO_DATA_ALLOWED_ERR();
		double get_NOT_SUPPORTED_ERR();
		double get_INVALID_ACCESS_ERR();
		double get_INUSE_ATTRIBUTE_ERR();
	};

	class SVGAnimatedBoolean: public Object{
	public:
		bool get_animVal();
		void set_animVal(bool);
		bool get_baseVal();
		void set_baseVal(bool);
		SVGAnimatedBoolean* get_prototype();
		void set_prototype(SVGAnimatedBoolean*);
		SVGAnimatedBoolean();
	};

	class MSCompatibleInfoCollection: public Object{
	public:
		double get_length();
		void set_length(double);
		MSCompatibleInfo* item(double index);
		MSCompatibleInfoCollection* get_prototype();
		void set_prototype(MSCompatibleInfoCollection*);
		MSCompatibleInfoCollection();
	};

	class SVGSwitchElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired {
	public:
		SVGSwitchElement* get_prototype();
		void set_prototype(SVGSwitchElement*);
		SVGSwitchElement();
	};

	class SVGPreserveAspectRatio: public Object{
	public:
		double get_align();
		void set_align(double);
		double get_meetOrSlice();
		void set_meetOrSlice(double);
		SVGPreserveAspectRatio* get_prototype();
		void set_prototype(SVGPreserveAspectRatio*);
		SVGPreserveAspectRatio();
		double get_SVG_PRESERVEASPECTRATIO_NONE();
		double get_SVG_PRESERVEASPECTRATIO_XMINYMID();
		double get_SVG_PRESERVEASPECTRATIO_XMAXYMIN();
		double get_SVG_PRESERVEASPECTRATIO_XMINYMAX();
		double get_SVG_PRESERVEASPECTRATIO_XMAXYMAX();
		double get_SVG_MEETORSLICE_UNKNOWN();
		double get_SVG_PRESERVEASPECTRATIO_XMAXYMID();
		double get_SVG_PRESERVEASPECTRATIO_XMIDYMAX();
		double get_SVG_PRESERVEASPECTRATIO_XMINYMIN();
		double get_SVG_MEETORSLICE_MEET();
		double get_SVG_PRESERVEASPECTRATIO_XMIDYMID();
		double get_SVG_PRESERVEASPECTRATIO_XMIDYMIN();
		double get_SVG_MEETORSLICE_SLICE();
		double get_SVG_PRESERVEASPECTRATIO_UNKNOWN();
	};

	class Attr: public Node {
	public:
		bool get_expando();
		void set_expando(bool);
		bool get_specified();
		void set_specified(bool);
		Element* get_ownerElement();
		void set_ownerElement(Element*);
		String* get_value();
		void set_value(const String&);
		String* get_name();
		void set_name(const String&);
		Attr* get_prototype();
		void set_prototype(Attr*);
		Attr();
	};

	class PerformanceNavigation: public Object{
	public:
		double get_redirectCount();
		void set_redirectCount(double);
		double get_type();
		void set_type(double);
		Object* toJSON();
		PerformanceNavigation* get_prototype();
		void set_prototype(PerformanceNavigation*);
		PerformanceNavigation();
		double get_TYPE_RELOAD();
		double get_TYPE_RESERVED();
		double get_TYPE_BACK_FORWARD();
		double get_TYPE_NAVIGATE();
	};

	class SVGStopElement: public SVGElement , public SVGStylable {
	public:
		SVGAnimatedNumber* get_offset();
		void set_offset(SVGAnimatedNumber*);
		SVGStopElement* get_prototype();
		void set_prototype(SVGStopElement*);
		SVGStopElement();
	};

	class PositionCallback: public Object{
	public:
	};

	class SVGSymbolElement: public SVGElement , public SVGStylable , public SVGLangSpace , public SVGFitToViewBox , public SVGExternalResourcesRequired {
	public:
		SVGSymbolElement* get_prototype();
		void set_prototype(SVGSymbolElement*);
		SVGSymbolElement();
	};

	class SVGElementInstanceList: public Object{
	public:
		double get_length();
		void set_length(double);
		SVGElementInstance* item(double index);
		SVGElementInstanceList* get_prototype();
		void set_prototype(SVGElementInstanceList*);
		SVGElementInstanceList();
	};

	class CSSRuleList: public Object{
	public:
		double get_length();
		void set_length(double);
		CSSRule* item(double index);
		CSSRuleList* get_prototype();
		void set_prototype(CSSRuleList*);
		CSSRuleList();
	};

	class HTMLVideoElement: public HTMLMediaElement {
	public:
		double get_width();
		void set_width(double);
		double get_videoWidth();
		void set_videoWidth(double);
		double get_videoHeight();
		void set_videoHeight(double);
		double get_height();
		void set_height(double);
		String* get_poster();
		void set_poster(const String&);
		bool get_msIsStereo3D();
		void set_msIsStereo3D(bool);
		String* get_msStereo3DPackingMode();
		void set_msStereo3DPackingMode(const String&);
		EventListener* get_onMSVideoOptimalLayoutChanged();
		void set_onMSVideoOptimalLayoutChanged(EventListener*);
		EventListener* get_onMSVideoFrameStepCompleted();
		void set_onMSVideoFrameStepCompleted(EventListener*);
		String* get_msStereo3DRenderMode();
		void set_msStereo3DRenderMode(const String&);
		bool get_msIsLayoutOptimalForPlayback();
		void set_msIsLayoutOptimalForPlayback(bool);
		bool get_msHorizontalMirror();
		void set_msHorizontalMirror(bool);
		EventListener* get_onMSVideoFormatChanged();
		void set_onMSVideoFormatChanged(EventListener*);
		bool get_msZoom();
		void set_msZoom(bool);
		void msInsertVideoEffect(const String& activatableClassId, bool effectRequired);
		void msInsertVideoEffect(const String& activatableClassId, bool effectRequired, Object* config);
		void msSetVideoRectangle(double left, double top, double right, double bottom);
		void msFrameStep(bool forward);
		VideoPlaybackQuality* getVideoPlaybackQuality();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		HTMLVideoElement* get_prototype();
		void set_prototype(HTMLVideoElement*);
		HTMLVideoElement();
	};

	class ClientRectList: public Object{
	public:
		double get_length();
		void set_length(double);
		ClientRect* item(double index);
		ClientRectList* get_prototype();
		void set_prototype(ClientRectList*);
		ClientRectList();
	};

	class SVGMaskElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGLangSpace , public SVGTests , public SVGExternalResourcesRequired {
	public:
		SVGAnimatedLength* get_y();
		void set_y(SVGAnimatedLength*);
		SVGAnimatedLength* get_width();
		void set_width(SVGAnimatedLength*);
		SVGAnimatedEnumeration* get_maskUnits();
		void set_maskUnits(SVGAnimatedEnumeration*);
		SVGAnimatedEnumeration* get_maskContentUnits();
		void set_maskContentUnits(SVGAnimatedEnumeration*);
		SVGAnimatedLength* get_x();
		void set_x(SVGAnimatedLength*);
		SVGAnimatedLength* get_height();
		void set_height(SVGAnimatedLength*);
		SVGMaskElement* get_prototype();
		void set_prototype(SVGMaskElement*);
		SVGMaskElement();
	};

	class External: public Object{
	public:
		External* get_prototype();
		void set_prototype(External*);
		External();
	};

	class ObjectURLOptions: public Object{
	public:
		bool get_oneTimeOnly();
		void set_oneTimeOnly(bool);
	};

	class MSGestureEvent: public UIEvent {
	public:
		double get_offsetY();
		void set_offsetY(double);
		double get_translationY();
		void set_translationY(double);
		double get_velocityExpansion();
		void set_velocityExpansion(double);
		double get_velocityY();
		void set_velocityY(double);
		double get_velocityAngular();
		void set_velocityAngular(double);
		double get_translationX();
		void set_translationX(double);
		double get_velocityX();
		void set_velocityX(double);
		double get_hwTimestamp();
		void set_hwTimestamp(double);
		double get_offsetX();
		void set_offsetX(double);
		double get_screenX();
		void set_screenX(double);
		double get_rotation();
		void set_rotation(double);
		double get_expansion();
		void set_expansion(double);
		double get_clientY();
		void set_clientY(double);
		double get_screenY();
		void set_screenY(double);
		double get_scale();
		void set_scale(double);
		Object* get_gestureObject();
		void set_gestureObject(Object*);
		double get_clientX();
		void set_clientX(double);
		void initGestureEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double offsetXArg, double offsetYArg, double translationXArg, double translationYArg, double scaleArg, double expansionArg, double rotationArg, double velocityXArg, double velocityYArg, double velocityExpansionArg, double velocityAngularArg, double hwTimestampArg);
		double get_MSGESTURE_FLAG_BEGIN();
		double get_MSGESTURE_FLAG_END();
		double get_MSGESTURE_FLAG_CANCEL();
		double get_MSGESTURE_FLAG_INERTIA();
		double get_MSGESTURE_FLAG_NONE();
	};

	class ErrorEvent: public Event {
	public:
		double get_colno();
		void set_colno(double);
		String* get_filename();
		void set_filename(const String&);
		Object* get_error();
		void set_error(Object*);
		double get_lineno();
		void set_lineno(double);
		String* get_message();
		void set_message(const String&);
		void initErrorEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, const String& messageArg, const String& filenameArg, double linenoArg);
	};

	class SVGFilterElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGLangSpace , public SVGURIReference , public SVGExternalResourcesRequired {
	public:
		SVGAnimatedLength* get_y();
		void set_y(SVGAnimatedLength*);
		SVGAnimatedLength* get_width();
		void set_width(SVGAnimatedLength*);
		SVGAnimatedInteger* get_filterResX();
		void set_filterResX(SVGAnimatedInteger*);
		SVGAnimatedEnumeration* get_filterUnits();
		void set_filterUnits(SVGAnimatedEnumeration*);
		SVGAnimatedEnumeration* get_primitiveUnits();
		void set_primitiveUnits(SVGAnimatedEnumeration*);
		SVGAnimatedLength* get_x();
		void set_x(SVGAnimatedLength*);
		SVGAnimatedLength* get_height();
		void set_height(SVGAnimatedLength*);
		SVGAnimatedInteger* get_filterResY();
		void set_filterResY(SVGAnimatedInteger*);
		void setFilterRes(double filterResX, double filterResY);
	};

	class TrackEvent: public Event {
	public:
		Object* get_track();
		void set_track(Object*);
	};

	class SVGFEMergeNodeElement: public SVGElement {
	public:
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
	};

	class SVGFilterPrimitiveStandardAttributes: public SVGStylable {
	public:
		SVGAnimatedLength* get_y();
		void set_y(SVGAnimatedLength*);
		SVGAnimatedLength* get_width();
		void set_width(SVGAnimatedLength*);
		SVGAnimatedLength* get_x();
		void set_x(SVGAnimatedLength*);
		SVGAnimatedLength* get_height();
		void set_height(SVGAnimatedLength*);
		SVGAnimatedString* get_result();
		void set_result(SVGAnimatedString*);
	};

	class SVGFEFloodElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
	};

	class MSGesture: public Object{
	public:
		Element* get_target();
		void set_target(Element*);
		void addPointer(double pointerId);
		void stop();
		MSGesture* get_prototype();
		void set_prototype(MSGesture*);
		MSGesture();
	};

	class TextTrackCue: public EventTarget {
	public:
		EventListener* get_onenter();
		void set_onenter(EventListener*);
		TextTrack* get_track();
		void set_track(TextTrack*);
		double get_endTime();
		void set_endTime(double);
		String* get_text();
		void set_text(const String&);
		bool get_pauseOnExit();
		void set_pauseOnExit(bool);
		String* get_id();
		void set_id(const String&);
		double get_startTime();
		void set_startTime(double);
		EventListener* get_onexit();
		void set_onexit(EventListener*);
		DocumentFragment* getCueAsHTML();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		TextTrackCue* get_prototype();
		void set_prototype(TextTrackCue*);
		TextTrackCue();
	};

	class MSBaseReader: public EventTarget {
	public:
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		double get_readyState();
		void set_readyState(double);
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_onloadend();
		void set_onloadend(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onloadstart();
		void set_onloadstart(EventListener*);
		Object* get_result();
		void set_result(Object*);
		void abort();
		double get_LOADING();
		double get_EMPTY();
		double get_DONE();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class MSStreamReader: public MSBaseReader {
	public:
		DOMError* get_error();
		void set_error(DOMError*);
		void readAsArrayBuffer(MSStream* stream);
		void readAsArrayBuffer(MSStream* stream, double size);
		void readAsBlob(MSStream* stream);
		void readAsBlob(MSStream* stream, double size);
		void readAsDataURL(MSStream* stream);
		void readAsDataURL(MSStream* stream, double size);
		void readAsText(MSStream* stream);
		void readAsText(MSStream* stream, const String& encoding);
		void readAsText(MSStream* stream, const String& encoding, double size);
		MSStreamReader* get_prototype();
		void set_prototype(MSStreamReader*);
		MSStreamReader();
	};

	class DOMTokenList: public Object{
	public:
		double get_length();
		void set_length(double);
		bool contains(const String& token);
		void remove(const String& token);
		bool toggle(const String& token);
		void add(const String& token);
		String* item(double index);
		String* toString();
	};

	class SVGComponentTransferFunctionElement: public SVGElement {
	public:
		SVGAnimatedNumberList* get_tableValues();
		void set_tableValues(SVGAnimatedNumberList*);
		SVGAnimatedNumber* get_slope();
		void set_slope(SVGAnimatedNumber*);
		SVGAnimatedEnumeration* get_type();
		void set_type(SVGAnimatedEnumeration*);
		SVGAnimatedNumber* get_exponent();
		void set_exponent(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_amplitude();
		void set_amplitude(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_intercept();
		void set_intercept(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_offset();
		void set_offset(SVGAnimatedNumber*);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_TABLE();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_GAMMA();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_LINEAR();
	};

	class SVGFEFuncAElement: public SVGComponentTransferFunctionElement {
	public:
	};

	class SVGFETileElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
	};

	class SVGFEBlendElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in2();
		void set_in2(SVGAnimatedString*);
		SVGAnimatedEnumeration* get_mode();
		void set_mode(SVGAnimatedEnumeration*);
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
		double get_SVG_FEBLEND_MODE_DARKEN();
		double get_SVG_FEBLEND_MODE_UNKNOWN();
		double get_SVG_FEBLEND_MODE_MULTIPLY();
		double get_SVG_FEBLEND_MODE_NORMAL();
		double get_SVG_FEBLEND_MODE_SCREEN();
		double get_SVG_FEBLEND_MODE_LIGHTEN();
	};

	class MessageChannel: public Object{
	public:
		MessagePort* get_port2();
		void set_port2(MessagePort*);
		MessagePort* get_port1();
		void set_port1(MessagePort*);
		MessageChannel* get_prototype();
		void set_prototype(MessageChannel*);
		MessageChannel();
	};

	class SVGFEMergeElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
	};

	class TransitionEvent: public Event {
	public:
		String* get_propertyName();
		void set_propertyName(const String&);
		double get_elapsedTime();
		void set_elapsedTime(double);
		void initTransitionEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, const String& propertyNameArg, double elapsedTimeArg);
	};

	class MediaQueryList: public Object{
	public:
		bool get_matches();
		void set_matches(bool);
		String* get_media();
		void set_media(const String&);
		void addListener(MediaQueryListListener* listener);
		void removeListener(MediaQueryListListener* listener);
	};

	class DOMError: public Object{
	public:
		String* get_name();
		void set_name(const String&);
		String* toString();
	};

	class CloseEvent: public Event {
	public:
		bool get_wasClean();
		void set_wasClean(bool);
		String* get_reason();
		void set_reason(const String&);
		double get_code();
		void set_code(double);
		void initCloseEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, bool wasCleanArg, double codeArg, const String& reasonArg);
	};

	class WebSocket: public EventTarget {
	public:
		String* get_protocol();
		void set_protocol(const String&);
		double get_readyState();
		void set_readyState(double);
		double get_bufferedAmount();
		void set_bufferedAmount(double);
		EventListener* get_onopen();
		void set_onopen(EventListener*);
		String* get_extensions();
		void set_extensions(const String&);
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		EventListener* get_onclose();
		void set_onclose(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		String* get_binaryType();
		void set_binaryType(const String&);
		String* get_url();
		void set_url(const String&);
		void close();
		void close(double code);
		void close(double code, const String& reason);
		void send(Object* data);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		WebSocket* get_prototype();
		void set_prototype(WebSocket*);
		WebSocket(const String& url);
		WebSocket(const String& url, const String& prototcol);
		WebSocket(const String& url, Array* prototcol);
		double get_OPEN();
		double get_CLOSING();
		double get_CONNECTING();
		double get_CLOSED();
	};

	class SVGFEPointLightElement: public SVGElement {
	public:
		SVGAnimatedNumber* get_y();
		void set_y(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_x();
		void set_x(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_z();
		void set_z(SVGAnimatedNumber*);
	};

	class ProgressEvent: public Event {
	public:
		double get_loaded();
		void set_loaded(double);
		bool get_lengthComputable();
		void set_lengthComputable(bool);
		double get_total();
		void set_total(double);
		void initProgressEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, bool lengthComputableArg, double loadedArg, double totalArg);
	};

	class IDBObjectStore: public Object{
	public:
		DOMStringList* get_indexNames();
		void set_indexNames(DOMStringList*);
		String* get_name();
		void set_name(const String&);
		IDBTransaction* get_transaction();
		void set_transaction(IDBTransaction*);
		String* get_keyPath();
		void set_keyPath(const String&);
		IDBRequest* count();
		IDBRequest* count(Object* key);
		IDBRequest* add(Object* value);
		IDBRequest* add(Object* value, Object* key);
		IDBRequest* clear();
		IDBIndex* createIndex(const String& name, const String& keyPath);
		IDBIndex* createIndex(const String& name, const String& keyPath, Object* optionalParameters);
		IDBRequest* put(Object* value);
		IDBRequest* put(Object* value, Object* key);
		IDBRequest* openCursor();
		IDBRequest* openCursor(Object* range);
		IDBRequest* openCursor(Object* range, const String& direction);
		void deleteIndex(const String& indexName);
		IDBIndex* index(const String& name);
		IDBRequest* get(Object* key);
		IDBRequest* _delete(Object* key);
	};

	class SVGFEGaussianBlurElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_stdDeviationX();
		void set_stdDeviationX(SVGAnimatedNumber*);
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
		SVGAnimatedNumber* get_stdDeviationY();
		void set_stdDeviationY(SVGAnimatedNumber*);
		void setStdDeviation(double stdDeviationX, double stdDeviationY);
	};

	class IDBVersionChangeEvent: public Event {
	public:
		double get_newVersion();
		void set_newVersion(double);
		double get_oldVersion();
		void set_oldVersion(double);
	};

	class IDBIndex: public Object{
	public:
		bool get_unique();
		void set_unique(bool);
		String* get_name();
		void set_name(const String&);
		String* get_keyPath();
		void set_keyPath(const String&);
		IDBObjectStore* get_objectStore();
		void set_objectStore(IDBObjectStore*);
		IDBRequest* count();
		IDBRequest* count(Object* key);
		IDBRequest* getKey(Object* key);
		IDBRequest* openKeyCursor();
		IDBRequest* openKeyCursor(IDBKeyRange* range);
		IDBRequest* openKeyCursor(IDBKeyRange* range, const String& direction);
		IDBRequest* get(Object* key);
		IDBRequest* openCursor();
		IDBRequest* openCursor(IDBKeyRange* range);
		IDBRequest* openCursor(IDBKeyRange* range, const String& direction);
	};

	class FileList: public Object{
	public:
		double get_length();
		void set_length(double);
		File* item(double index);
	};

	class IDBCursor: public Object{
	public:
		Object* get_source();
		void set_source(Object*);
		String* get_direction();
		void set_direction(const String&);
		Object* get_key();
		void set_key(Object*);
		Object* get_primaryKey();
		void set_primaryKey(Object*);
		void advance(double count);
		IDBRequest* _delete();
		void _continue();
		void _continue(Object* key);
		IDBRequest* update(Object* value);
	};

	class SVGFESpecularLightingElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_kernelUnitLengthY();
		void set_kernelUnitLengthY(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_surfaceScale();
		void set_surfaceScale(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_specularExponent();
		void set_specularExponent(SVGAnimatedNumber*);
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
		SVGAnimatedNumber* get_kernelUnitLengthX();
		void set_kernelUnitLengthX(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_specularConstant();
		void set_specularConstant(SVGAnimatedNumber*);
	};

	class Blob: public Object{
	public:
		String* get_type();
		void set_type(const String&);
		double get_size();
		void set_size(double);
		Object* msDetachStream();
		Blob* slice();
		Blob* slice(double start);
		Blob* slice(double start, double end);
		Blob* slice(double start, double end, const String& contentType);
		void msClose();
		Blob* get_prototype();
		void set_prototype(Blob*);
		Blob();
		Blob(Array* blobParts);
		Blob(Array* blobParts, BlobPropertyBag* options);
	};

	class File: public Blob {
	public:
		Object* get_lastModifiedDate();
		void set_lastModifiedDate(Object*);
		String* get_name();
		void set_name(const String&);
	};

	class URL: public Object{
	public:
		void revokeObjectURL(const String& url);
		static String* createObjectURL(Object* object) [[cheerp::static]];
		static String* createObjectURL(Object* object, ObjectURLOptions* options) [[cheerp::static]];
	};

	class IDBCursorWithValue: public IDBCursor {
	public:
		Object* get_value();
		void set_value(Object*);
	};

	class XMLHttpRequestEventTarget: public EventTarget {
	public:
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_ontimeout();
		void set_ontimeout(EventListener*);
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_onloadstart();
		void set_onloadstart(EventListener*);
		EventListener* get_onloadend();
		void set_onloadend(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class IDBEnvironment: public Object{
	public:
		IDBFactory* get_msIndexedDB();
		void set_msIndexedDB(IDBFactory*);
		IDBFactory* get_indexedDB();
		void set_indexedDB(IDBFactory*);
	};

	class AudioTrackList: public EventTarget {
	public:
		double get_length();
		void set_length(double);
		EventListener* get_onchange();
		void set_onchange(EventListener*);
		EventListener* get_onaddtrack();
		void set_onaddtrack(EventListener*);
		AudioTrack* getTrackById(const String& id);
		AudioTrack* item(double index);
		EventListener* get_onremovetrack();
		void set_onremovetrack(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class SVGFEMorphologyElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedEnumeration* get_operator();
		void set_operator(SVGAnimatedEnumeration*);
		SVGAnimatedNumber* get_radiusX();
		void set_radiusX(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_radiusY();
		void set_radiusY(SVGAnimatedNumber*);
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
		double get_SVG_MORPHOLOGY_OPERATOR_UNKNOWN();
		double get_SVG_MORPHOLOGY_OPERATOR_ERODE();
		double get_SVG_MORPHOLOGY_OPERATOR_DILATE();
	};

	class SVGFEFuncRElement: public SVGComponentTransferFunctionElement {
	public:
	};

	class WindowTimersExtension: public Object{
	public:
		template<typename... Args> double msSetImmediate(Object* expression, Args&&... args) { return msSetImmediate(expression, static_cast<Object*>(std::forward<Args>(args))...); }
		double msSetImmediate(Object* expression);
		void clearImmediate(double handle);
		void msClearImmediate(double handle);
		template<typename... Args> double setImmediate(Object* expression, Args&&... args) { return setImmediate(expression, static_cast<Object*>(std::forward<Args>(args))...); }
		double setImmediate(Object* expression);
	private:
		template<typename... Args> double msSetImmediate(Object* expression, Object*, Args&&... args);
		template<typename... Args> double setImmediate(Object* expression, Object*, Args&&... args);
	};

	class SVGFEDisplacementMapElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in2();
		void set_in2(SVGAnimatedString*);
		SVGAnimatedEnumeration* get_xChannelSelector();
		void set_xChannelSelector(SVGAnimatedEnumeration*);
		SVGAnimatedEnumeration* get_yChannelSelector();
		void set_yChannelSelector(SVGAnimatedEnumeration*);
		SVGAnimatedNumber* get_scale();
		void set_scale(SVGAnimatedNumber*);
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
		double get_SVG_CHANNEL_B();
		double get_SVG_CHANNEL_R();
		double get_SVG_CHANNEL_G();
		double get_SVG_CHANNEL_UNKNOWN();
		double get_SVG_CHANNEL_A();
	};

	class AnimationEvent: public Event {
	public:
		String* get_animationName();
		void set_animationName(const String&);
		double get_elapsedTime();
		void set_elapsedTime(double);
		void initAnimationEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, const String& animationNameArg, double elapsedTimeArg);
	};

	class MSRangeCollection: public Object{
	public:
		double get_length();
		void set_length(double);
		Range* item(double index);
	};

	class SVGFEDistantLightElement: public SVGElement {
	public:
		SVGAnimatedNumber* get_azimuth();
		void set_azimuth(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_elevation();
		void set_elevation(SVGAnimatedNumber*);
	};

	class SVGFEFuncBElement: public SVGComponentTransferFunctionElement {
	public:
	};

	class IDBKeyRange: public Object{
	public:
		Object* get_upper();
		void set_upper(Object*);
		bool get_upperOpen();
		void set_upperOpen(bool);
		Object* get_lower();
		void set_lower(Object*);
		bool get_lowerOpen();
		void set_lowerOpen(bool);
		IDBKeyRange* bound(Object* lower, Object* upper);
		IDBKeyRange* bound(Object* lower, Object* upper, bool lowerOpen);
		IDBKeyRange* bound(Object* lower, Object* upper, bool lowerOpen, bool upperOpen);
		IDBKeyRange* only(Object* value);
		IDBKeyRange* lowerBound(Object* bound);
		IDBKeyRange* lowerBound(Object* bound, bool open);
		IDBKeyRange* upperBound(Object* bound);
		IDBKeyRange* upperBound(Object* bound, bool open);
	};

	class WindowConsole: public Object{
	public:
		Console* get_console();
		void set_console(Console*);
	};

	class IDBTransaction: public EventTarget {
	public:
		EventListener* get_oncomplete();
		void set_oncomplete(EventListener*);
		IDBDatabase* get_db();
		void set_db(IDBDatabase*);
		String* get_mode();
		void set_mode(const String&);
		DOMError* get_error();
		void set_error(DOMError*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		void abort();
		IDBObjectStore* objectStore(const String& name);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class AudioTrack: public Object{
	public:
		String* get_kind();
		void set_kind(const String&);
		String* get_language();
		void set_language(const String&);
		String* get_id();
		void set_id(const String&);
		String* get_label();
		void set_label(const String&);
		bool get_enabled();
		void set_enabled(bool);
		SourceBuffer* get_sourceBuffer();
		void set_sourceBuffer(SourceBuffer*);
	};

	class SVGFEConvolveMatrixElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedInteger* get_orderY();
		void set_orderY(SVGAnimatedInteger*);
		SVGAnimatedNumber* get_kernelUnitLengthY();
		void set_kernelUnitLengthY(SVGAnimatedNumber*);
		SVGAnimatedInteger* get_orderX();
		void set_orderX(SVGAnimatedInteger*);
		SVGAnimatedBoolean* get_preserveAlpha();
		void set_preserveAlpha(SVGAnimatedBoolean*);
		SVGAnimatedNumberList* get_kernelMatrix();
		void set_kernelMatrix(SVGAnimatedNumberList*);
		SVGAnimatedEnumeration* get_edgeMode();
		void set_edgeMode(SVGAnimatedEnumeration*);
		SVGAnimatedNumber* get_kernelUnitLengthX();
		void set_kernelUnitLengthX(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_bias();
		void set_bias(SVGAnimatedNumber*);
		SVGAnimatedInteger* get_targetX();
		void set_targetX(SVGAnimatedInteger*);
		SVGAnimatedInteger* get_targetY();
		void set_targetY(SVGAnimatedInteger*);
		SVGAnimatedNumber* get_divisor();
		void set_divisor(SVGAnimatedNumber*);
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
		double get_SVG_EDGEMODE_WRAP();
		double get_SVG_EDGEMODE_DUPLICATE();
		double get_SVG_EDGEMODE_UNKNOWN();
		double get_SVG_EDGEMODE_NONE();
	};

	class TextTrackCueList: public Object{
	public:
		double get_length();
		void set_length(double);
		TextTrackCue* item(double index);
		TextTrackCue* getCueById(const String& id);
	};

	class CSSKeyframesRule: public CSSRule {
	public:
		String* get_name();
		void set_name(const String&);
		CSSRuleList* get_cssRules();
		void set_cssRules(CSSRuleList*);
		CSSKeyframeRule* findRule(const String& rule);
		void deleteRule(const String& rule);
		void appendRule(const String& rule);
	};

	class SVGFETurbulenceElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_baseFrequencyX();
		void set_baseFrequencyX(SVGAnimatedNumber*);
		SVGAnimatedInteger* get_numOctaves();
		void set_numOctaves(SVGAnimatedInteger*);
		SVGAnimatedEnumeration* get_type();
		void set_type(SVGAnimatedEnumeration*);
		SVGAnimatedNumber* get_baseFrequencyY();
		void set_baseFrequencyY(SVGAnimatedNumber*);
		SVGAnimatedEnumeration* get_stitchTiles();
		void set_stitchTiles(SVGAnimatedEnumeration*);
		SVGAnimatedNumber* get_seed();
		void set_seed(SVGAnimatedNumber*);
		double get_SVG_STITCHTYPE_UNKNOWN();
		double get_SVG_STITCHTYPE_NOSTITCH();
		double get_SVG_TURBULENCE_TYPE_UNKNOWN();
		double get_SVG_TURBULENCE_TYPE_TURBULENCE();
		double get_SVG_TURBULENCE_TYPE_FRACTALNOISE();
		double get_SVG_STITCHTYPE_STITCH();
	};

	class TextTrackList: public Object{
	public:
		double get_length();
		void set_length(double);
		TextTrack* item(double index);
		EventListener* get_onaddtrack();
		void set_onaddtrack(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class SVGFEFuncGElement: public SVGComponentTransferFunctionElement {
	public:
	};

	class SVGFEColorMatrixElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
		SVGAnimatedEnumeration* get_type();
		void set_type(SVGAnimatedEnumeration*);
		SVGAnimatedNumberList* get_values();
		void set_values(SVGAnimatedNumberList*);
		double get_SVG_FECOLORMATRIX_TYPE_SATURATE();
		double get_SVG_FECOLORMATRIX_TYPE_UNKNOWN();
		double get_SVG_FECOLORMATRIX_TYPE_MATRIX();
		double get_SVG_FECOLORMATRIX_TYPE_HUEROTATE();
		double get_SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA();
	};

	class Console: public Object{
	public:
		void info();
		template<typename... Args> void info(const String& message, Args&&... optionalParams) { return info(message, static_cast<const String&>(std::forward<Args>(optionalParams))...); }
		void info(const String& message);
		void profile();
		void profile(const String& reportName);
		void _assert();
		void _assert(bool test);
		template<typename... Args> void _assert(bool test, const String& message, Args&&... optionalParams) { return _assert(test, message, static_cast<const String&>(std::forward<Args>(optionalParams))...); }
		void _assert(bool test, const String& message);
		bool msIsIndependentlyComposed(Element* element);
		void clear();
		void dir();
		template<typename... Args> void dir(const String& value, Args&&... optionalParams) { return dir(value, static_cast<const String&>(std::forward<Args>(optionalParams))...); }
		void dir(const String& value);
		void warn();
		template<typename... Args> void warn(const String& message, Args&&... optionalParams) { return warn(message, static_cast<const String&>(std::forward<Args>(optionalParams))...); }
		void warn(const String& message);
		void error();
		template<typename... Args> void error(const String& message, Args&&... optionalParams) { return error(message, static_cast<const String&>(std::forward<Args>(optionalParams))...); }
		void error(const String& message);
		void log();
		template<typename... Args> void log(const String& message, Args&&... optionalParams) { return log(message, static_cast<const String&>(std::forward<Args>(optionalParams))...); }
		void log(const String& message);
		void profileEnd();
		void count();
		void count(const String& countTitle);
		void groupEnd();
		void time();
		void time(const String& timerName);
		void timeEnd();
		void timeEnd(const String& timerName);
		void trace();
		void group();
		void group(const String& groupTitle);
		void dirxml(Object* value);
		void debug();
		template<typename... Args> void debug(const String& message, Args&&... optionalParams) { return debug(message, static_cast<const String&>(std::forward<Args>(optionalParams))...); }
		void debug(const String& message);
		void groupCollapsed();
		void groupCollapsed(const String& groupTitle);
		void select(Element* element);
	private:
		template<typename... Args> void info(const String& message, const String&, Args&&... optionalParams);
		template<typename... Args> void _assert(bool test, const String& message, const String&, Args&&... optionalParams);
		template<typename... Args> void dir(const String& value, const String&, Args&&... optionalParams);
		template<typename... Args> void warn(const String& message, const String&, Args&&... optionalParams);
		template<typename... Args> void error(const String& message, const String&, Args&&... optionalParams);
		template<typename... Args> void log(const String& message, const String&, Args&&... optionalParams);
		template<typename... Args> void debug(const String& message, const String&, Args&&... optionalParams);
	};

	class SVGFESpotLightElement: public SVGElement {
	public:
		SVGAnimatedNumber* get_pointsAtY();
		void set_pointsAtY(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_y();
		void set_y(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_limitingConeAngle();
		void set_limitingConeAngle(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_specularExponent();
		void set_specularExponent(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_x();
		void set_x(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_pointsAtZ();
		void set_pointsAtZ(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_z();
		void set_z(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_pointsAtX();
		void set_pointsAtX(SVGAnimatedNumber*);
	};

	class WindowBase64: public Object{
	public:
		String* btoa(const String& rawString);
		String* atob(const String& encodedString);
	};

	class IDBDatabase: public EventTarget {
	public:
		String* get_version();
		void set_version(const String&);
		String* get_name();
		void set_name(const String&);
		DOMStringList* get_objectStoreNames();
		void set_objectStoreNames(DOMStringList*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		IDBObjectStore* createObjectStore(const String& name);
		IDBObjectStore* createObjectStore(const String& name, Object* optionalParameters);
		void close();
		IDBTransaction* transaction(Object* storeNames);
		IDBTransaction* transaction(Object* storeNames, const String& mode);
		void deleteObjectStore(const String& name);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class DOMStringList: public Object{
	public:
		double get_length();
		void set_length(double);
		bool contains(const String& str);
		String* item(double index);
	};

	class IDBRequest: public EventTarget {
	public:
		Object* get_source();
		void set_source(Object*);
		EventListener* get_onsuccess();
		void set_onsuccess(EventListener*);
		DOMError* get_error();
		void set_error(DOMError*);
		IDBTransaction* get_transaction();
		void set_transaction(IDBTransaction*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		String* get_readyState();
		void set_readyState(const String&);
		Object* get_result();
		void set_result(Object*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class IDBOpenDBRequest: public IDBRequest {
	public:
		EventListener* get_onupgradeneeded();
		void set_onupgradeneeded(EventListener*);
		EventListener* get_onblocked();
		void set_onblocked(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class HTMLProgressElement: public HTMLElement {
	public:
		double get_value();
		void set_value(double);
		double get_max();
		void set_max(double);
		double get_position();
		void set_position(double);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
	};

	class MSLaunchUriCallback: public Object{
	public:
	};

	class SVGFEOffsetElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_dy();
		void set_dy(SVGAnimatedNumber*);
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
		SVGAnimatedNumber* get_dx();
		void set_dx(SVGAnimatedNumber*);
	};

	class MSUnsafeFunctionCallback: public Object{
	public:
	};

	class TextTrack: public EventTarget {
	public:
		String* get_language();
		void set_language(const String&);
		Object* get_mode();
		void set_mode(Object*);
		double get_readyState();
		void set_readyState(double);
		TextTrackCueList* get_activeCues();
		void set_activeCues(TextTrackCueList*);
		TextTrackCueList* get_cues();
		void set_cues(TextTrackCueList*);
		EventListener* get_oncuechange();
		void set_oncuechange(EventListener*);
		String* get_kind();
		void set_kind(const String&);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		String* get_label();
		void set_label(const String&);
		void addCue(TextTrackCue* cue);
		void removeCue(TextTrackCue* cue);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		double get_ERROR();
		double get_SHOWING();
		double get_LOADING();
		double get_LOADED();
		double get_NONE();
		double get_HIDDEN();
		double get_DISABLED();
	};

	class MediaQueryListListener: public Object{
	public:
	};

	class MessagePort: public EventTarget {
	public:
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		void close();
		void postMessage();
		void postMessage(const String& message);
		void postMessage(Object* message);
		void postMessage(Object* message, Object* ports);
		void start();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class FileReader: public MSBaseReader {
	public:
		DOMError* get_error();
		void set_error(DOMError*);
		void readAsArrayBuffer(Blob* blob);
		void readAsDataURL(Blob* blob);
		void readAsText(Blob* blob);
		void readAsText(Blob* blob, const String& encoding);
		FileReader* get_prototype();
		void set_prototype(FileReader*);
		FileReader();
	};

	class BlobPropertyBag: public Object{
	public:
		String* get_type();
		void set_type(const String&);
		String* get_endings();
		void set_endings(const String&);
	};

	class ApplicationCache: public EventTarget {
	public:
		double get_status();
		void set_status(double);
		EventListener* get_ondownloading();
		void set_ondownloading(EventListener*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_onupdateready();
		void set_onupdateready(EventListener*);
		EventListener* get_oncached();
		void set_oncached(EventListener*);
		EventListener* get_onobsolete();
		void set_onobsolete(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onchecking();
		void set_onchecking(EventListener*);
		EventListener* get_onnoupdate();
		void set_onnoupdate(EventListener*);
		void swapCache();
		void abort();
		void update();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		double get_CHECKING();
		double get_UNCACHED();
		double get_UPDATEREADY();
		double get_DOWNLOADING();
		double get_IDLE();
		double get_OBSOLETE();
	};

	class FrameRequestCallback: public Object{
	public:
	};

	class PopStateEvent: public Event {
	public:
		Object* get_state();
		void set_state(Object*);
		void initPopStateEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Object* stateArg);
	};

	class CSSKeyframeRule: public CSSRule {
	public:
		String* get_keyText();
		void set_keyText(const String&);
		CSSStyleDeclaration* get_style();
		void set_style(CSSStyleDeclaration*);
	};

	class MSFileSaver: public Object{
	public:
		bool msSaveBlob(Object* blob);
		bool msSaveBlob(Object* blob, const String& defaultName);
		bool msSaveOrOpenBlob(Object* blob);
		bool msSaveOrOpenBlob(Object* blob, const String& defaultName);
	};

	class MSStream: public Object{
	public:
		String* get_type();
		void set_type(const String&);
		Object* msDetachStream();
		void msClose();
	};

	class MSBlobBuilder: public Object{
	public:
		void append(Object* data);
		void append(Object* data, const String& endings);
		Blob* getBlob();
		Blob* getBlob(const String& contentType);
		MSBlobBuilder* get_prototype();
		void set_prototype(MSBlobBuilder*);
		MSBlobBuilder();
	};

	class DOMSettableTokenList: public DOMTokenList {
	public:
		String* get_value();
		void set_value(const String&);
	};

	class IDBFactory: public Object{
	public:
		IDBOpenDBRequest* open(const String& name);
		IDBOpenDBRequest* open(const String& name, double version);
		double cmp(Object* first, Object* second);
		IDBOpenDBRequest* deleteDatabase(const String& name);
	};

	class MSPointerEvent: public MouseEvent {
	public:
		double get_width();
		void set_width(double);
		double get_rotation();
		void set_rotation(double);
		double get_pressure();
		void set_pressure(double);
		Object* get_pointerType();
		void set_pointerType(Object*);
		bool get_isPrimary();
		void set_isPrimary(bool);
		double get_tiltY();
		void set_tiltY(double);
		double get_height();
		void set_height(double);
		Object* get_intermediatePoints();
		void set_intermediatePoints(Object*);
		Object* get_currentPoint();
		void set_currentPoint(Object*);
		double get_tiltX();
		void set_tiltX(double);
		double get_hwTimestamp();
		void set_hwTimestamp(double);
		double get_pointerId();
		void set_pointerId(double);
		void initPointerEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, double buttonArg, EventTarget* relatedTargetArg, double offsetXArg, double offsetYArg, double widthArg, double heightArg, double pressure, double rotation, double tiltX, double tiltY, double pointerIdArg, Object* pointerType, double hwTimestampArg, bool isPrimary);
		void getCurrentPoint(Element* element);
		void getIntermediatePoints(Element* element);
		double get_MSPOINTER_TYPE_PEN();
		double get_MSPOINTER_TYPE_MOUSE();
		double get_MSPOINTER_TYPE_TOUCH();
	};

	class MSManipulationEvent: public UIEvent {
	public:
		double get_lastState();
		void set_lastState(double);
		double get_currentState();
		void set_currentState(double);
		void initMSManipulationEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double lastState, double currentState);
		double get_MS_MANIPULATION_STATE_STOPPED();
		double get_MS_MANIPULATION_STATE_ACTIVE();
		double get_MS_MANIPULATION_STATE_INERTIA();
	};

	class FormData: public Object{
	public:
		void append(Object* name, Object* value);
		void append(Object* name, Object* value, const String& blobName);
		FormData* get_prototype();
		void set_prototype(FormData*);
		FormData();
		FormData(HTMLFormElement* form);
	};

	class HTMLDataListElement: public HTMLElement {
	public:
		HTMLCollection* get_options();
		void set_options(HTMLCollection*);
	};

	class SVGFEImageElement: public SVGElement , public SVGLangSpace , public SVGFilterPrimitiveStandardAttributes , public SVGURIReference , public SVGExternalResourcesRequired {
	public:
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
		void set_preserveAspectRatio(SVGAnimatedPreserveAspectRatio*);
	};

	class AbstractWorker: public EventTarget {
	public:
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class SVGFECompositeElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedEnumeration* get_operator();
		void set_operator(SVGAnimatedEnumeration*);
		SVGAnimatedString* get_in2();
		void set_in2(SVGAnimatedString*);
		SVGAnimatedNumber* get_k2();
		void set_k2(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_k1();
		void set_k1(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_k3();
		void set_k3(SVGAnimatedNumber*);
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
		SVGAnimatedNumber* get_k4();
		void set_k4(SVGAnimatedNumber*);
		double get_SVG_FECOMPOSITE_OPERATOR_OUT();
		double get_SVG_FECOMPOSITE_OPERATOR_OVER();
		double get_SVG_FECOMPOSITE_OPERATOR_XOR();
		double get_SVG_FECOMPOSITE_OPERATOR_ARITHMETIC();
		double get_SVG_FECOMPOSITE_OPERATOR_UNKNOWN();
		double get_SVG_FECOMPOSITE_OPERATOR_IN();
		double get_SVG_FECOMPOSITE_OPERATOR_ATOP();
	};

	class ValidityState: public Object{
	public:
		bool get_customError();
		void set_customError(bool);
		bool get_valueMissing();
		void set_valueMissing(bool);
		bool get_stepMismatch();
		void set_stepMismatch(bool);
		bool get_rangeUnderflow();
		void set_rangeUnderflow(bool);
		bool get_rangeOverflow();
		void set_rangeOverflow(bool);
		bool get_typeMismatch();
		void set_typeMismatch(bool);
		bool get_patternMismatch();
		void set_patternMismatch(bool);
		bool get_tooLong();
		void set_tooLong(bool);
		bool get_valid();
		void set_valid(bool);
	};

	class HTMLTrackElement: public HTMLElement {
	public:
		String* get_kind();
		void set_kind(const String&);
		String* get_src();
		void set_src(const String&);
		String* get_srclang();
		void set_srclang(const String&);
		TextTrack* get_track();
		void set_track(TextTrack*);
		String* get_label();
		void set_label(const String&);
		bool get_default();
		void set_default(bool);
		double get_readyState();
		void set_readyState(double);
		double get_ERROR();
		double get_LOADING();
		double get_LOADED();
		double get_NONE();
	};

	class MSApp: public Object{
	public:
		File* createFileFromStorageFile(Object* storageFile);
		Blob* createBlobFromRandomAccessStream(const String& type, Object* seeker);
		MSStream* createStreamFromInputStream(const String& type, Object* inputStream);
		void terminateApp(Object* exceptionObject);
		Object* createDataPackage(Object* object);
		Object* execUnsafeLocalFunction(MSUnsafeFunctionCallback* unsafeFunction);
		Object* getHtmlPrintDocumentSource(Object* htmlDoc);
		void addPublicLocalApplicationUri(const String& uri);
		Object* createDataPackageFromSelection();
		MSAppView* getViewOpener();
		void suppressSubdownloadCredentialPrompts(bool suppress);
		template<typename... Args> void execAsyncAtPriority(MSExecAtPriorityFunctionCallback* asynchronousCallback, const String& priority, Args&&... args) { return execAsyncAtPriority(asynchronousCallback, priority, static_cast<Object*>(std::forward<Args>(args))...); }
		void execAsyncAtPriority(MSExecAtPriorityFunctionCallback* asynchronousCallback, const String& priority);
		bool isTaskScheduledAtPriorityOrHigher(const String& priority);
		template<typename... Args> Object* execAtPriority(MSExecAtPriorityFunctionCallback* synchronousCallback, const String& priority, Args&&... args) { return execAtPriority(synchronousCallback, priority, static_cast<Object*>(std::forward<Args>(args))...); }
		Object* execAtPriority(MSExecAtPriorityFunctionCallback* synchronousCallback, const String& priority);
		MSAppView* createNewView(const String& uri);
		String* getCurrentPriority();
		String* get_NORMAL();
		String* get_HIGH();
		String* get_IDLE();
		String* get_CURRENT();
	private:
		template<typename... Args> void execAsyncAtPriority(MSExecAtPriorityFunctionCallback* asynchronousCallback, const String& priority, Object*, Args&&... args);
		template<typename... Args> Object* execAtPriority(MSExecAtPriorityFunctionCallback* synchronousCallback, const String& priority, Object*, Args&&... args);
	};

	class SVGFEComponentTransferElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
	};

	class SVGFEDiffuseLightingElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_kernelUnitLengthY();
		void set_kernelUnitLengthY(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_surfaceScale();
		void set_surfaceScale(SVGAnimatedNumber*);
		SVGAnimatedString* get_in1();
		void set_in1(SVGAnimatedString*);
		SVGAnimatedNumber* get_kernelUnitLengthX();
		void set_kernelUnitLengthX(SVGAnimatedNumber*);
		SVGAnimatedNumber* get_diffuseConstant();
		void set_diffuseConstant(SVGAnimatedNumber*);
	};

	class MSCSSMatrix: public Object{
	public:
		double get_m24();
		void set_m24(double);
		double get_m34();
		void set_m34(double);
		double get_a();
		void set_a(double);
		double get_d();
		void set_d(double);
		double get_m32();
		void set_m32(double);
		double get_m41();
		void set_m41(double);
		double get_m11();
		void set_m11(double);
		double get_f();
		void set_f(double);
		double get_e();
		void set_e(double);
		double get_m23();
		void set_m23(double);
		double get_m14();
		void set_m14(double);
		double get_m33();
		void set_m33(double);
		double get_m22();
		void set_m22(double);
		double get_m21();
		void set_m21(double);
		double get_c();
		void set_c(double);
		double get_m12();
		void set_m12(double);
		double get_b();
		void set_b(double);
		double get_m42();
		void set_m42(double);
		double get_m31();
		void set_m31(double);
		double get_m43();
		void set_m43(double);
		double get_m13();
		void set_m13(double);
		double get_m44();
		void set_m44(double);
		MSCSSMatrix* multiply(MSCSSMatrix* secondMatrix);
		MSCSSMatrix* skewY(double angle);
		void setMatrixValue(const String& value);
		MSCSSMatrix* inverse();
		MSCSSMatrix* rotateAxisAngle(double x, double y, double z, double angle);
		String* toString();
		MSCSSMatrix* rotate(double angleX);
		MSCSSMatrix* rotate(double angleX, double angleY);
		MSCSSMatrix* rotate(double angleX, double angleY, double angleZ);
		MSCSSMatrix* translate(double x, double y);
		MSCSSMatrix* translate(double x, double y, double z);
		MSCSSMatrix* scale(double scaleX);
		MSCSSMatrix* scale(double scaleX, double scaleY);
		MSCSSMatrix* scale(double scaleX, double scaleY, double scaleZ);
		MSCSSMatrix* skewX(double angle);
		MSCSSMatrix* get_prototype();
		void set_prototype(MSCSSMatrix*);
		MSCSSMatrix();
		MSCSSMatrix(const String& text);
	};

	class Worker: public AbstractWorker {
	public:
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		void postMessage(const String& message);
		void postMessage(Object* message);
		void postMessage(Object* message, Object* ports);
		void terminate();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		Worker* get_prototype();
		void set_prototype(Worker*);
		Worker(const String& stringUrl);
	};

	class ExceptionInformation: public Object{
	public:
		String* get_domain();
		void set_domain(const String&);
	};

	class StoreExceptionsInformation: public ExceptionInformation {
	public:
		String* get_siteName();
		void set_siteName(const String&);
		String* get_explanationString();
		void set_explanationString(const String&);
		String* get_detailURI();
		void set_detailURI(const String&);
	};

	class StoreSiteSpecificExceptionsInformation: public StoreExceptionsInformation {
	public:
		Array* get_arrayOfDomainStrings();
		void set_arrayOfDomainStrings(Array*);
	};

	class ConfirmSiteSpecificExceptionsInformation: public ExceptionInformation {
	public:
		Array* get_arrayOfDomainStrings();
		void set_arrayOfDomainStrings(Array*);
	};

	class AlgorithmParameters: public Object{
	public:
	};

	class MutationObserverInit: public Object{
	public:
		bool get_childList();
		void set_childList(bool);
		bool get_attributes();
		void set_attributes(bool);
		bool get_characterData();
		void set_characterData(bool);
		bool get_subtree();
		void set_subtree(bool);
		bool get_attributeOldValue();
		void set_attributeOldValue(bool);
		bool get_characterDataOldValue();
		void set_characterDataOldValue(bool);
		Array* get_attributeFilter();
		void set_attributeFilter(Array*);
	};

	class MsZoomToOptions: public Object{
	public:
		double get_contentX();
		void set_contentX(double);
		double get_contentY();
		void set_contentY(double);
		String* get_viewportX();
		void set_viewportX(const String&);
		String* get_viewportY();
		void set_viewportY(const String&);
		double get_scaleFactor();
		void set_scaleFactor(double);
		String* get_animate();
		void set_animate(const String&);
	};

	class DeviceAccelerationDict: public Object{
	public:
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		double get_z();
		void set_z(double);
	};

	class DeviceRotationRateDict: public Object{
	public:
		double get_alpha();
		void set_alpha(double);
		double get_beta();
		void set_beta(double);
		double get_gamma();
		void set_gamma(double);
	};

	class Algorithm: public Object{
	public:
		String* get_name();
		void set_name(const String&);
		AlgorithmParameters* get_params();
		void set_params(AlgorithmParameters*);
	};

	class MSExecAtPriorityFunctionCallback: public Object{
	public:
	};

	class MSGraphicsTrust: public Object{
	public:
		String* get_status();
		void set_status(const String&);
		bool get_constrictionActive();
		void set_constrictionActive(bool);
	};

	class SubtleCrypto: public Object{
	public:
		KeyOperation* unwrapKey(ArrayBufferView* wrappedKey, Object* keyAlgorithm, Key* keyEncryptionKey);
		KeyOperation* unwrapKey(ArrayBufferView* wrappedKey, Object* keyAlgorithm, Key* keyEncryptionKey, bool extractable);
		KeyOperation* unwrapKey(ArrayBufferView* wrappedKey, Object* keyAlgorithm, Key* keyEncryptionKey, bool extractable, Array* keyUsages);
		CryptoOperation* encrypt(Object* algorithm, Key* key);
		CryptoOperation* encrypt(Object* algorithm, Key* key, ArrayBufferView* buffer);
		KeyOperation* importKey(const String& format, ArrayBufferView* keyData, Object* algorithm);
		KeyOperation* importKey(const String& format, ArrayBufferView* keyData, Object* algorithm, bool extractable);
		KeyOperation* importKey(const String& format, ArrayBufferView* keyData, Object* algorithm, bool extractable, Array* keyUsages);
		KeyOperation* wrapKey(Key* key, Key* keyEncryptionKey, Object* keyWrappingAlgorithm);
		CryptoOperation* verify(Object* algorithm, Key* key, ArrayBufferView* signature);
		CryptoOperation* verify(Object* algorithm, Key* key, ArrayBufferView* signature, ArrayBufferView* buffer);
		KeyOperation* deriveKey(Object* algorithm, Key* baseKey, Object* derivedKeyType);
		KeyOperation* deriveKey(Object* algorithm, Key* baseKey, Object* derivedKeyType, bool extractable);
		KeyOperation* deriveKey(Object* algorithm, Key* baseKey, Object* derivedKeyType, bool extractable, Array* keyUsages);
		CryptoOperation* digest(Object* algorithm);
		CryptoOperation* digest(Object* algorithm, ArrayBufferView* buffer);
		KeyOperation* exportKey(const String& format, Key* key);
		KeyOperation* generateKey(Object* algorithm);
		KeyOperation* generateKey(Object* algorithm, bool extractable);
		KeyOperation* generateKey(Object* algorithm, bool extractable, Array* keyUsages);
		CryptoOperation* sign(Object* algorithm, Key* key);
		CryptoOperation* sign(Object* algorithm, Key* key, ArrayBufferView* buffer);
		CryptoOperation* decrypt(Object* algorithm, Key* key);
		CryptoOperation* decrypt(Object* algorithm, Key* key, ArrayBufferView* buffer);
	};

	class RandomSource: public Object{
	public:
		ArrayBufferView* getRandomValues(ArrayBufferView* array);
	};

	class Crypto: public RandomSource {
	public:
		SubtleCrypto* get_subtle();
		void set_subtle(SubtleCrypto*);
	};

	class VideoPlaybackQuality: public Object{
	public:
		double get_totalFrameDelay();
		void set_totalFrameDelay(double);
		double get_creationTime();
		void set_creationTime(double);
		double get_totalVideoFrames();
		void set_totalVideoFrames(double);
		double get_droppedVideoFrames();
		void set_droppedVideoFrames(double);
	};

	class GlobalEventHandlers: public Object{
	public:
		EventListener* get_onpointerenter();
		void set_onpointerenter(EventListener*);
		EventListener* get_onpointerout();
		void set_onpointerout(EventListener*);
		EventListener* get_onpointerdown();
		void set_onpointerdown(EventListener*);
		EventListener* get_onpointerup();
		void set_onpointerup(EventListener*);
		EventListener* get_onpointercancel();
		void set_onpointercancel(EventListener*);
		EventListener* get_onpointerover();
		void set_onpointerover(EventListener*);
		EventListener* get_onpointermove();
		void set_onpointermove(EventListener*);
		EventListener* get_onpointerleave();
		void set_onpointerleave(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class Key: public Object{
	public:
		Algorithm* get_algorithm();
		void set_algorithm(Algorithm*);
		String* get_type();
		void set_type(const String&);
		bool get_extractable();
		void set_extractable(bool);
		Array* get_keyUsage();
		void set_keyUsage(Array*);
	};

	class DeviceAcceleration: public Object{
	public:
		double get_y();
		void set_y(double);
		double get_x();
		void set_x(double);
		double get_z();
		void set_z(double);
	};

	class HTMLAllCollection: public HTMLCollection {
	public:
		Element* namedItem(const String& name);
	};

	class AesGcmEncryptResult: public Object{
	public:
		ArrayBuffer* get_ciphertext();
		void set_ciphertext(ArrayBuffer*);
		ArrayBuffer* get_tag();
		void set_tag(ArrayBuffer*);
	};

	class NavigationEvent: public Event {
	public:
		String* get_uri();
		void set_uri(const String&);
	};

	class NavigationCompletedEvent: public NavigationEvent {
	public:
		double get_webErrorStatus();
		void set_webErrorStatus(double);
		bool get_isSuccess();
		void set_isSuccess(bool);
	};

	class MutationRecord: public Object{
	public:
		String* get_oldValue();
		void set_oldValue(const String&);
		Node* get_previousSibling();
		void set_previousSibling(Node*);
		NodeList* get_addedNodes();
		void set_addedNodes(NodeList*);
		String* get_attributeName();
		void set_attributeName(const String&);
		NodeList* get_removedNodes();
		void set_removedNodes(NodeList*);
		Node* get_target();
		void set_target(Node*);
		Node* get_nextSibling();
		void set_nextSibling(Node*);
		String* get_attributeNamespace();
		void set_attributeNamespace(const String&);
		String* get_type();
		void set_type(const String&);
	};

	class MimeTypeArray: public Object{
	public:
		double get_length();
		void set_length(double);
		Plugin* item(double index);
		Plugin* namedItem(const String& type);
	};

	class KeyOperation: public EventTarget {
	public:
		EventListener* get_oncomplete();
		void set_oncomplete(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		Object* get_result();
		void set_result(Object*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class DOMStringMap: public Object{
	public:
	};

	class DeviceOrientationEvent: public Event {
	public:
		double get_gamma();
		void set_gamma(double);
		double get_alpha();
		void set_alpha(double);
		bool get_absolute();
		void set_absolute(bool);
		double get_beta();
		void set_beta(double);
		void initDeviceOrientationEvent(const String& type, bool bubbles, bool cancelable, double alpha, double beta, double gamma, bool absolute);
	};

	class MSMediaKeys: public Object{
	public:
		String* get_keySystem();
		void set_keySystem(const String&);
		MSMediaKeySession* createSession(const String& type, Uint8Array* initData);
		MSMediaKeySession* createSession(const String& type, Uint8Array* initData, Uint8Array* cdmData);
		bool isTypeSupported(const String& keySystem);
		bool isTypeSupported(const String& keySystem, const String& type);
		MSMediaKeys* get_prototype();
		void set_prototype(MSMediaKeys*);
		MSMediaKeys();
	};

	class MSMediaKeyMessageEvent: public Event {
	public:
		String* get_destinationURL();
		void set_destinationURL(const String&);
		Uint8Array* get_message();
		void set_message(Uint8Array*);
	};

	class MSHTMLWebViewElement: public HTMLElement {
	public:
		String* get_documentTitle();
		void set_documentTitle(const String&);
		double get_width();
		void set_width(double);
		String* get_src();
		void set_src(const String&);
		bool get_canGoForward();
		void set_canGoForward(bool);
		double get_height();
		void set_height(double);
		bool get_canGoBack();
		void set_canGoBack(bool);
		void navigateWithHttpRequestMessage(Object* requestMessage);
		void goBack();
		void navigate(const String& uri);
		void stop();
		void navigateToString(const String& contents);
		MSWebViewAsyncOperation* captureSelectedContentToDataPackageAsync();
		MSWebViewAsyncOperation* capturePreviewToBlobAsync();
		void refresh();
		void goForward();
		void navigateToLocalStreamUri(const String& source, Object* streamResolver);
		template<typename... Args> MSWebViewAsyncOperation* invokeScriptAsync(const String& scriptName, Args&&... args) { return invokeScriptAsync(scriptName, static_cast<Object*>(std::forward<Args>(args))...); }
		MSWebViewAsyncOperation* invokeScriptAsync(const String& scriptName);
		String* buildLocalStreamUri(const String& contentIdentifier, const String& relativePath);
	private:
		template<typename... Args> MSWebViewAsyncOperation* invokeScriptAsync(const String& scriptName, Object*, Args&&... args);
	};

	class SourceBuffer: public EventTarget {
	public:
		bool get_updating();
		void set_updating(bool);
		double get_appendWindowStart();
		void set_appendWindowStart(double);
		double get_appendWindowEnd();
		void set_appendWindowEnd(double);
		TimeRanges* get_buffered();
		void set_buffered(TimeRanges*);
		double get_timestampOffset();
		void set_timestampOffset(double);
		AudioTrackList* get_audioTracks();
		void set_audioTracks(AudioTrackList*);
		void appendBuffer(ArrayBuffer* data);
		void remove(double start, double end);
		void abort();
		void appendStream(MSStream* stream);
		void appendStream(MSStream* stream, double maxSize);
	};

	class MSInputMethodContext: public EventTarget {
	public:
		EventListener* get_oncandidatewindowshow();
		void set_oncandidatewindowshow(EventListener*);
		HTMLElement* get_target();
		void set_target(HTMLElement*);
		double get_compositionStartOffset();
		void set_compositionStartOffset(double);
		EventListener* get_oncandidatewindowhide();
		void set_oncandidatewindowhide(EventListener*);
		EventListener* get_oncandidatewindowupdate();
		void set_oncandidatewindowupdate(EventListener*);
		double get_compositionEndOffset();
		void set_compositionEndOffset(double);
		Array* getCompositionAlternatives();
		ClientRect* getCandidateWindowClientRect();
		bool hasComposition();
		bool isCandidateWindowVisible();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class DeviceRotationRate: public Object{
	public:
		double get_gamma();
		void set_gamma(double);
		double get_alpha();
		void set_alpha(double);
		double get_beta();
		void set_beta(double);
	};

	class PluginArray: public Object{
	public:
		double get_length();
		void set_length(double);
		void refresh();
		void refresh(bool reload);
		Plugin* item(double index);
		Plugin* namedItem(const String& name);
	};

	class MSMediaKeyError: public Object{
	public:
		double get_systemCode();
		void set_systemCode(double);
		double get_code();
		void set_code(double);
		double get_MS_MEDIA_KEYERR_SERVICE();
		double get_MS_MEDIA_KEYERR_HARDWARECHANGE();
		double get_MS_MEDIA_KEYERR_OUTPUT();
		double get_MS_MEDIA_KEYERR_DOMAIN();
		double get_MS_MEDIA_KEYERR_UNKNOWN();
		double get_MS_MEDIA_KEYERR_CLIENT();
	};

	class Plugin: public Object{
	public:
		double get_length();
		void set_length(double);
		String* get_filename();
		void set_filename(const String&);
		String* get_version();
		void set_version(const String&);
		String* get_name();
		void set_name(const String&);
		String* get_description();
		void set_description(const String&);
		MimeType* item(double index);
		MimeType* namedItem(const String& type);
	};

	class MediaSource: public EventTarget {
	public:
		SourceBufferList* get_sourceBuffers();
		void set_sourceBuffers(SourceBufferList*);
		double get_duration();
		void set_duration(double);
		String* get_readyState();
		void set_readyState(const String&);
		SourceBufferList* get_activeSourceBuffers();
		void set_activeSourceBuffers(SourceBufferList*);
		SourceBuffer* addSourceBuffer(const String& type);
		void endOfStream();
		void endOfStream(const String& error);
		bool isTypeSupported(const String& type);
		void removeSourceBuffer(SourceBuffer* sourceBuffer);
		MediaSource* get_prototype();
		void set_prototype(MediaSource*);
		MediaSource();
	};

	class SourceBufferList: public EventTarget {
	public:
		double get_length();
		void set_length(double);
		SourceBuffer* item(double index);
	};

	class XMLDocument: public Document {
	public:
	};

	class DeviceMotionEvent: public Event {
	public:
		DeviceRotationRate* get_rotationRate();
		void set_rotationRate(DeviceRotationRate*);
		DeviceAcceleration* get_acceleration();
		void set_acceleration(DeviceAcceleration*);
		double get_interval();
		void set_interval(double);
		DeviceAcceleration* get_accelerationIncludingGravity();
		void set_accelerationIncludingGravity(DeviceAcceleration*);
		void initDeviceMotionEvent(const String& type, bool bubbles, bool cancelable, DeviceAccelerationDict* acceleration, DeviceAccelerationDict* accelerationIncludingGravity, DeviceRotationRateDict* rotationRate, double interval);
	};

	class MimeType: public Object{
	public:
		Plugin* get_enabledPlugin();
		void set_enabledPlugin(Plugin*);
		String* get_suffixes();
		void set_suffixes(const String&);
		String* get_type();
		void set_type(const String&);
		String* get_description();
		void set_description(const String&);
	};

	class PointerEvent: public MouseEvent {
	public:
		double get_width();
		void set_width(double);
		double get_rotation();
		void set_rotation(double);
		double get_pressure();
		void set_pressure(double);
		Object* get_pointerType();
		void set_pointerType(Object*);
		bool get_isPrimary();
		void set_isPrimary(bool);
		double get_tiltY();
		void set_tiltY(double);
		double get_height();
		void set_height(double);
		Object* get_intermediatePoints();
		void set_intermediatePoints(Object*);
		Object* get_currentPoint();
		void set_currentPoint(Object*);
		double get_tiltX();
		void set_tiltX(double);
		double get_hwTimestamp();
		void set_hwTimestamp(double);
		double get_pointerId();
		void set_pointerId(double);
		void initPointerEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, double buttonArg, EventTarget* relatedTargetArg, double offsetXArg, double offsetYArg, double widthArg, double heightArg, double pressure, double rotation, double tiltX, double tiltY, double pointerIdArg, Object* pointerType, double hwTimestampArg, bool isPrimary);
		void getCurrentPoint(Element* element);
		void getIntermediatePoints(Element* element);
	};

	class MSDocumentExtensions: public Object{
	public:
		void captureEvents();
		void releaseEvents();
	};

	class MutationObserver: public Object{
	public:
		void observe(Node* target, MutationObserverInit* options);
		Array* takeRecords();
		void disconnect();
		MutationObserver* get_prototype();
		void set_prototype(MutationObserver*);
		MutationObserver();
	};

	class MSWebViewAsyncOperation: public EventTarget {
	public:
		MSHTMLWebViewElement* get_target();
		void set_target(MSHTMLWebViewElement*);
		EventListener* get_oncomplete();
		void set_oncomplete(EventListener*);
		DOMError* get_error();
		void set_error(DOMError*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		double get_readyState();
		void set_readyState(double);
		double get_type();
		void set_type(double);
		Object* get_result();
		void set_result(Object*);
		void start();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		double get_ERROR();
		double get_TYPE_CREATE_DATA_PACKAGE_FROM_SELECTION();
		double get_TYPE_INVOKE_SCRIPT();
		double get_COMPLETED();
		double get_TYPE_CAPTURE_PREVIEW_TO_RANDOM_ACCESS_STREAM();
		double get_STARTED();
	};

	class ScriptNotifyEvent: public Event {
	public:
		String* get_value();
		void set_value(const String&);
		String* get_callingUri();
		void set_callingUri(const String&);
	};

	class PerformanceNavigationTiming: public PerformanceEntry {
	public:
		double get_redirectStart();
		void set_redirectStart(double);
		double get_domainLookupEnd();
		void set_domainLookupEnd(double);
		double get_responseStart();
		void set_responseStart(double);
		double get_domComplete();
		void set_domComplete(double);
		double get_domainLookupStart();
		void set_domainLookupStart(double);
		double get_loadEventStart();
		void set_loadEventStart(double);
		double get_unloadEventEnd();
		void set_unloadEventEnd(double);
		double get_fetchStart();
		void set_fetchStart(double);
		double get_requestStart();
		void set_requestStart(double);
		double get_domInteractive();
		void set_domInteractive(double);
		double get_navigationStart();
		void set_navigationStart(double);
		double get_connectEnd();
		void set_connectEnd(double);
		double get_loadEventEnd();
		void set_loadEventEnd(double);
		double get_connectStart();
		void set_connectStart(double);
		double get_responseEnd();
		void set_responseEnd(double);
		double get_domLoading();
		void set_domLoading(double);
		double get_redirectEnd();
		void set_redirectEnd(double);
		double get_redirectCount();
		void set_redirectCount(double);
		double get_unloadEventStart();
		void set_unloadEventStart(double);
		double get_domContentLoadedEventStart();
		void set_domContentLoadedEventStart(double);
		double get_domContentLoadedEventEnd();
		void set_domContentLoadedEventEnd(double);
		String* get_type();
		void set_type(const String&);
	};

	class MSMediaKeyNeededEvent: public Event {
	public:
		Uint8Array* get_initData();
		void set_initData(Uint8Array*);
	};

	class LongRunningScriptDetectedEvent: public Event {
	public:
		bool get_stopPageScriptExecution();
		void set_stopPageScriptExecution(bool);
		double get_executionTime();
		void set_executionTime(double);
	};

	class MSAppView: public Object{
	public:
		double get_viewId();
		void set_viewId(double);
		void close();
		void postMessage(Object* message, const String& targetOrigin);
		void postMessage(Object* message, const String& targetOrigin, Object* ports);
	};

	class PerfWidgetExternal: public Object{
	public:
		double get_maxCpuSpeed();
		void set_maxCpuSpeed(double);
		bool get_independentRenderingEnabled();
		void set_independentRenderingEnabled(bool);
		String* get_irDisablingContentString();
		void set_irDisablingContentString(const String&);
		bool get_irStatusAvailable();
		void set_irStatusAvailable(bool);
		double get_performanceCounter();
		void set_performanceCounter(double);
		double get_averagePaintTime();
		void set_averagePaintTime(double);
		double get_activeNetworkRequestCount();
		void set_activeNetworkRequestCount(double);
		double get_paintRequestsPerSecond();
		void set_paintRequestsPerSecond(double);
		bool get_extraInformationEnabled();
		void set_extraInformationEnabled(bool);
		double get_performanceCounterFrequency();
		void set_performanceCounterFrequency(double);
		double get_averageFrameTime();
		void set_averageFrameTime(double);
		void repositionWindow(double x, double y);
		Object* getRecentMemoryUsage(double last);
		double getMemoryUsage();
		void resizeWindow(double width, double height);
		double getProcessCpuUsage();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		void removeEventListener(const String& eventType, EventListener* callback);
		Object* getRecentCpuUsage(double last);
		Object* getRecentFrames(double last);
		Object* getRecentPaintRequests(double last);
	};

	class PageTransitionEvent: public Event {
	public:
		bool get_persisted();
		void set_persisted(bool);
	};

	class MutationCallback: public Object{
	public:
	};

	class HTMLDocument: public Document {
	public:
	};

	class KeyPair: public Object{
	public:
		Key* get_privateKey();
		void set_privateKey(Key*);
		Key* get_publicKey();
		void set_publicKey(Key*);
	};

	class MSMediaKeySession: public EventTarget {
	public:
		String* get_sessionId();
		void set_sessionId(const String&);
		MSMediaKeyError* get_error();
		void set_error(MSMediaKeyError*);
		String* get_keySystem();
		void set_keySystem(const String&);
		void close();
		void update(Uint8Array* key);
	};

	class UnviewableContentIdentifiedEvent: public NavigationEvent {
	public:
		String* get_referrer();
		void set_referrer(const String&);
	};

	class CryptoOperation: public EventTarget {
	public:
		Algorithm* get_algorithm();
		void set_algorithm(Algorithm*);
		EventListener* get_oncomplete();
		void set_oncomplete(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		Key* get_key();
		void set_key(Key*);
		Object* get_result();
		void set_result(Object*);
		void abort();
		void finish();
		void process(ArrayBufferView* buffer);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
	};

	class OES_texture_float: public Object{
	public:
	};

	class WEBGL_compressed_texture_s3tc: public Object{
	public:
		double get_COMPRESSED_RGBA_S3TC_DXT1_EXT();
		double get_COMPRESSED_RGBA_S3TC_DXT5_EXT();
		double get_COMPRESSED_RGBA_S3TC_DXT3_EXT();
		double get_COMPRESSED_RGB_S3TC_DXT1_EXT();
	};

	class OES_standard_derivatives: public Object{
	public:
		double get_FRAGMENT_SHADER_DERIVATIVE_HINT_OES();
	};

	class OES_texture_float_linear: public Object{
	public:
	};

	class EXT_texture_filter_anisotropic: public Object{
	public:
		double get_TEXTURE_MAX_ANISOTROPY_EXT();
		double get_MAX_TEXTURE_MAX_ANISOTROPY_EXT();
	};

	extern double NaN;
	extern double Infinity;
	Object* eval(const String& x);
	double parseInt(const String& s);
	double parseInt(const String& s, double radix);
	double parseFloat(const String& string);
	bool isNaN(double number);
	bool isFinite(double number);
	String* decodeURI(const String& encodedURI);
	String* decodeURIComponent(const String& encodedURIComponent);
	String* encodeURI(const String& uri);
	String* encodeURIComponent(const String& uriComponent);
	extern Math Math;
	extern JSON JSON;
	extern EventListener* ondragend;
	extern EventListener* onkeydown;
	extern EventListener* ondragover;
	extern EventListener* onkeyup;
	extern EventListener* onreset;
	extern EventListener* onmouseup;
	extern EventListener* ondragstart;
	extern EventListener* ondrag;
	extern double screenX;
	extern EventListener* onmouseover;
	extern EventListener* ondragleave;
	extern History history;
	extern double pageXOffset;
	extern String name;
	extern EventListener* onafterprint;
	extern EventListener* onpause;
	extern EventListener* onbeforeprint;
	extern Window top;
	extern EventListener* onmousedown;
	extern EventListener* onseeked;
	extern Window opener;
	extern EventListener* onclick;
	extern double innerHeight;
	extern EventListener* onwaiting;
	extern EventListener* ononline;
	extern EventListener* ondurationchange;
	extern Window frames;
	extern EventListener* onblur;
	extern EventListener* onemptied;
	extern EventListener* onseeking;
	extern EventListener* oncanplay;
	extern double outerWidth;
	extern EventListener* onstalled;
	extern EventListener* onmousemove;
	extern double innerWidth;
	extern EventListener* onoffline;
	extern double length;
	extern Screen screen;
	extern EventListener* onbeforeunload;
	extern EventListener* onratechange;
	extern EventListener* onstorage;
	extern EventListener* onloadstart;
	extern EventListener* ondragenter;
	extern EventListener* onsubmit;
	extern Window self;
	extern Document document;
	extern EventListener* onprogress;
	extern EventListener* ondblclick;
	extern double pageYOffset;
	extern EventListener* oncontextmenu;
	extern EventListener* onchange;
	extern EventListener* onloadedmetadata;
	extern EventListener* onplay;
	extern ErrorEventHandler onerror;
	extern EventListener* onplaying;
	extern Window parent;
	extern Location location;
	extern EventListener* oncanplaythrough;
	extern EventListener* onabort;
	extern EventListener* onreadystatechange;
	extern double outerHeight;
	extern EventListener* onkeypress;
	extern Element frameElement;
	extern EventListener* onloadeddata;
	extern EventListener* onsuspend;
	extern Window window;
	extern EventListener* onfocus;
	extern EventListener* onmessage;
	extern EventListener* ontimeupdate;
	extern EventListener* onresize;
	extern EventListener* onselect;
	extern Navigator navigator;
	extern StyleMedia styleMedia;
	extern EventListener* ondrop;
	extern EventListener* onmouseout;
	extern EventListener* onended;
	extern EventListener* onhashchange;
	extern EventListener* onunload;
	extern EventListener* onscroll;
	extern double screenY;
	extern EventListener* onmousewheel;
	extern EventListener* onload;
	extern EventListener* onvolumechange;
	extern EventListener* oninput;
	extern Performance performance;
	void alert();
	void alert(const String& message);
	void scroll();
	void scroll(double x);
	void scroll(double x, double y);
	void focus();
	void scrollTo();
	void scrollTo(double x);
	void scrollTo(double x, double y);
	void print();
	String* prompt();
	String* prompt(const String& message);
	String* prompt(const String& message, const String& defaul);
	String* toString();
	Window* open();
	Window* open(const String& url);
	Window* open(const String& url, const String& target);
	Window* open(const String& url, const String& target, const String& features);
	Window* open(const String& url, const String& target, const String& features, bool replace);
	void scrollBy();
	void scrollBy(double x);
	void scrollBy(double x, double y);
	bool confirm();
	bool confirm(const String& message);
	void close();
	void postMessage(Object* message);
	void postMessage(const String& message);
	void postMessage(Object* message, Object* ports);
	void postMessage(Object* message, const String& targetOrigin);
	void postMessage(Object* message, const String& targetOrigin, Object* ports);
	Object* showModalDialog();
	Object* showModalDialog(const String& url);
	Object* showModalDialog(const String& url, Object* argument);
	Object* showModalDialog(const String& url, Object* argument, Object* options);
	void blur();
	Selection* getSelection();
	CSSStyleDeclaration* getComputedStyle(Element* elt);
	CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
	void removeEventListener(const String& type, EventListener* listener);
	void removeEventListener(const String& type, EventListener* listener, bool useCapture);
	bool dispatchEvent(Event* evt);
	bool attachEvent(const String& event, EventListener* listener);
	void detachEvent(const String& event, EventListener* listener);
	extern Storage localStorage;
	extern String status;
	extern EventListener* onmouseleave;
	extern double screenLeft;
	extern Object* offscreenBuffering;
	extern double maxConnectionsPerServer;
	extern EventListener* onmouseenter;
	extern DataTransfer clipboardData;
	extern String defaultStatus;
	extern Navigator clientInformation;
	extern bool closed;
	extern EventListener* onhelp;
	extern External external;
	extern MSEventObj event;
	extern EventListener* onfocusout;
	extern double screenTop;
	extern EventListener* onfocusin;
	Window* showModelessDialog();
	Window* showModelessDialog(const String& url);
	Window* showModelessDialog(const String& url, Object* argument);
	Window* showModelessDialog(const String& url, Object* argument, Object* options);
	void navigate(const String& url);
	void resizeBy();
	void resizeBy(double x);
	void resizeBy(double x, double y);
	Object* item(Object* index);
	void resizeTo();
	void resizeTo(double x);
	void resizeTo(double x, double y);
	MSPopupWindow* createPopup();
	MSPopupWindow* createPopup(Object* arguments);
	String* toStaticHTML(const String& html);
	Object* execScript(const String& code);
	Object* execScript(const String& code, const String& language);
	void msWriteProfilerMark(const String& profilerMarkName);
	void moveTo();
	void moveTo(double x);
	void moveTo(double x, double y);
	void moveBy();
	void moveBy(double x);
	void moveBy(double x, double y);
	void showHelp(const String& url);
	void showHelp(const String& url, Object* helpArg);
	void showHelp(const String& url, Object* helpArg, const String& features);
	extern Storage sessionStorage;
	void clearTimeout(double handle);
	template<typename... Args> double setTimeout(EventListener* handler, double timeout, Args&&... args) { return setTimeout(handler, timeout, static_cast<Object*>(std::forward<Args>(args))...); }
	double setTimeout(EventListener* handler, double timeout);
	void clearInterval(double handle);
	template<typename... Args> double setInterval(EventListener* handler, double timeout, Args&&... args) { return setInterval(handler, timeout, static_cast<Object*>(std::forward<Args>(args))...); }
	double setInterval(EventListener* handler, double timeout);
	extern URL URL;
	extern MSApp MSApp;
	extern EventListener* onmspointerdown;
	extern double animationStartTime;
	extern EventListener* onmsgesturedoubletap;
	extern EventListener* onmspointerhover;
	extern EventListener* onmsgesturehold;
	extern EventListener* onmspointermove;
	extern EventListener* onmsgesturechange;
	extern EventListener* onmsgesturestart;
	extern EventListener* onmspointercancel;
	extern EventListener* onmsgestureend;
	extern EventListener* onmsgesturetap;
	extern EventListener* onmspointerout;
	extern double msAnimationStartTime;
	extern ApplicationCache applicationCache;
	extern EventListener* onmsinertiastart;
	extern EventListener* onmspointerover;
	extern EventListener* onpopstate;
	extern EventListener* onmspointerup;
	void msCancelRequestAnimationFrame(double handle);
	MediaQueryList* matchMedia(const String& mediaQuery);
	void cancelAnimationFrame(double handle);
	bool msIsStaticHTML(const String& html);
	MediaQueryList* msMatchMedia(const String& mediaQuery);
	double requestAnimationFrame(EventListener* callback);
	double msRequestAnimationFrame(EventListener* callback);
	String* btoa(const String& rawString);
	String* atob(const String& encodedString);
	extern IDBFactory msIndexedDB;
	extern IDBFactory indexedDB;
	extern Console console;
	extern EventListener* onpageshow;
	extern EventListener* ondevicemotion;
	extern double devicePixelRatio;
	extern Crypto msCrypto;
	extern EventListener* ondeviceorientation;
	extern String doNotTrack;
	extern EventListener* onmspointerenter;
	extern EventListener* onpagehide;
	extern EventListener* onmspointerleave;
	extern EventListener* onpointerenter;
	extern EventListener* onpointerout;
	extern EventListener* onpointerdown;
	extern EventListener* onpointerup;
	extern EventListener* onpointercancel;
	extern EventListener* onpointerover;
	extern EventListener* onpointermove;
	extern EventListener* onpointerleave;
	void addEventListener(const String& type, EventListener* listener);
	void addEventListener(const String& type, EventListener* listener, bool useCapture);
	template<typename... Args> void importScripts(Args&&... urls) { return importScripts(static_cast<const String&>(std::forward<Args>(urls))...); }
	void importScripts();
}
#endif
