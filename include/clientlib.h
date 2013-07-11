/****************************************************************
 *
 * Copyright (C) 2013 Alessandro Pignotti <alessandro@leaningtech.com>
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

#ifndef _DUETTO_LIB_e1fd2b95
#define _DUETTO_LIB_e1fd2b95
#include "types.h"
namespace client
{
	class PropertyDescriptor;
	class PropertyDescriptorMap;
	class Object;
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
	class NavigatorID;
	class TreeWalker;
	class GetSVGDocument;
	class HTMLHtmlElementDOML2Deprecated;
	class Performance;
	class SVGSVGElementEventHandlers;
	class MSDataBindingTableExtensions;
	class DOML2DeprecatedAlignmentStyle_HTMLParagraphElement;
	class WindowTimers;
	class MSCSSStyleSheetExtensions;
	class MSBorderColorStyle_HTMLFrameSetElement;
	class NodeSelector;
	class ClientRect;
	class PositionErrorCallback;
	class DOML2DeprecatedWidthStyle_HTMLBlockElement;
	class SVGUnitTypes;
	class DocumentRange;
	class MSHTMLDocumentExtensions;
	class CSS2Properties;
	class MSImageResourceExtensions_HTMLInputElement;
	class MSHTMLEmbedElementExtensions;
	class MSHTMLModElementExtensions;
	class SVGDocument;
	class MSHTMLTextAreaElementExtensions;
	class ErrorFunction;
	class MSHTMLLegendElementExtensions;
	class MSCSSStyleDeclarationExtensions;
	class DOML2DeprecatedAlignmentStyle_HTMLTableRowElement;
	class DOML2DeprecatedBorderStyle_HTMLObjectElement;
	class MSHTMLSpanElementExtensions;
	class MSHTMLObjectElementExtensions;
	class DOML2DeprecatedListSpaceReduction;
	class CSS3Properties;
	class MSScriptHost;
	class DOML2DeprecatedAlignmentStyle_HTMLTableElement;
	class RangeException;
	class DOML2DeprecatedAlignmentStyle_HTMLHRElement;
	class DocumentEvent;
	class MSHTMLUnknownElementExtensions;
	class TextMetrics;
	class DOML2DeprecatedWordWrapSuppression_HTMLBodyElement;
	class MSHTMLTableCaptionElementExtensions;
	class SVGAnimatedString;
	class StyleMedia;
	class TextRange;
	class SVGTests;
	class MSSelection;
	class MSHTMLDListElementExtensions;
	class Selection;
	class SVGAnimatedAngle;
	class NodeIterator;
	class MSDataBindingRecordSetReadonlyExtensions;
	class MSHTMLAppletElementExtensions;
	class SVGLocatable;
	class MSHTMLTableElementExtensions;
	class ControlRangeCollection;
	class DOML2DeprecatedAlignmentStyle_HTMLImageElement;
	class MSHTMLFrameElementExtensions;
	class WindowSessionStorage;
	class SVGAnimatedTransformList;
	class SVGFitToViewBox;
	class MSHTMLAnchorElementExtensions;
	class SVGPointList;
	class MSElementCSSInlineStyleExtensions;
	class SVGAnimatedLengthList;
	class MSHTMLTableDataCellElementExtensions;
	class SVGAnimatedPreserveAspectRatio;
	class MSCSSStyleRuleExtensions;
	class StyleSheetPageList;
	class EventTarget;
	class SVGAngle;
	class MSHTMLLabelElementExtensions;
	class CanvasGradient;
	class MSHTMLBodyElementExtensions;
	class MSCommentExtensions;
	class DOML2DeprecatedMarginStyle_HTMLMarqueeElement;
	class MSCSSRuleList;
	class CanvasRenderingContext2D;
	class DOML2DeprecatedAlignmentStyle_HTMLObjectElement;
	class DOML2DeprecatedBorderStyle_MSHTMLIFrameElementExtensions;
	class MSHTMLElementRangeExtensions;
	class MSScreenExtensions;
	class MSBorderColorStyle;
	class SVGTransformList;
	class DOML2DeprecatedMarginStyle_MSHTMLIFrameElementExtensions;
	class SVGAnimatedLength;
	class SVGAnimatedPoints;
	class WindowModal;
	class MSHTMLButtonElementExtensions;
	class MSDataBindingExtensions;
	class MSHTMLMetaElementExtensions;
	class SVGStylable;
	class MSHTMLTableCellElementExtensions;
	class SVGTransformable;
	class Screen;
	class NavigatorGeolocation;
	class Coordinates;
	class DOML2DeprecatedAlignmentStyle_HTMLTableColElement;
	class EventListener;
	class SVGLangSpace;
	class DataTransfer;
	class Range;
	class SVGPoint;
	class MSPluginsCollection;
	class MSHTMLFontElementExtensions;
	class SVGAnimateddoubleList;
	class MSResourceMetadata;
	class MSHTMLQuoteElementExtensions;
	class DOML2DeprecatedAlignmentStyle_HTMLIFrameElement;
	class NavigatorAbilities;
	class MSHTMLImageElementExtensions;
	class SVGAnimatedInteger;
	class ViewCSS;
	class MSAttrExtensions;
	class MSStorageExtensions;
	class MSLinkStyleExtensions;
	class MSHTMLCollectionExtensions;
	class DOML2DeprecatedWordWrapSuppression_HTMLDivElement;
	class DocumentTraversal;
	class Storage;
	class HTMLTableHeaderCellScope;
	class MSNavigatorAbilities;
	class TextRangeCollection;
	class DOML2DeprecatedAlignmentStyle_HTMLLegendElement;
	class DOML2DeprecatedWidthStyle_HTMLTableCellElement;
	class DOML2DeprecatedListdoubleingAndBulletStyle;
	class MSElementExtensions;
	class MSHTMLDocumentViewExtensions;
	class SVGAnimateddouble;
	class PerformanceTiming;
	class DOML2DeprecatedAlignmentStyle_HTMLInputElement;
	class EventException;
	class MSBorderColorHighlightStyle_HTMLTableCellElement;
	class DOMHTMLImplementation;
	class NavigatorOnLine;
	class SVGElementEventHandlers;
	class WindowLocalStorage;
	class SVGStringList;
	class XDomainRequest;
	class DOML2DeprecatedBackgroundColorStyle;
	class ElementTraversal;
	class SVGLength;
	class MSHTMLAreaElementExtensions;
	class MSEventObj;
	class DOML2DeprecatedColorProperty;
	class MSHTMLLIElementExtensions;
	class Location;
	class MSHTMLOptGroupElementExtensions;
	class MSBorderColorHighlightStyle;
	class DOML2DeprecatedSizeProperty_HTMLBaseFontElement;
	class SVGTransform;
	class MSCSSFilter;
	class ViewCSS_SVGSVGElement;
	class SVGURIReference;
	class SVGPathSeg;
	class DOML2DeprecatedAlignmentStyle_HTMLDivElement;
	class MSEventAttachmentTarget;
	class SVGdouble;
	class MSCompatibleInfo;
	class MSHTMLDocumentEventExtensions;
	class SVGAnimatedRect;
	class SVGPathSegList;
	class MSImageResourceExtensions;
	class MSBorderColorHighlightStyle_HTMLTableRowElement;
	class PositionError;
	class BrowserPublic;
	class MSNamespaceInfoCollection;
	class SVGElementInstance;
	class MSHTMLUListElementExtensions;
	class StyleSheetList;
	class MSHTMLFormElementExtensions;
	class DOML2DeprecatedMarginStyle;
	class Geolocation;
	class MSWindowModeless;
	class SVGRect;
	class MSNodeExtensions;
	class KeyboardEventExtensions;
	class History;
	class DocumentStyle;
	class SVGPathSegCurvetoCubicAbs;
	class TimeRanges;
	class SVGPathSegCurvetoQuadraticAbs;
	class MSHTMLSelectElementExtensions;
	class CSSRule;
	class SVGPathSegLinetoAbs;
	class MSMouseEventExtensions;
	class DOML2DeprecatedWordWrapSuppression;
	class MSPopupWindow;
	class SVGMatrix;
	class ImageData;
	class MSHTMLElementExtensions;
	class SVGException;
	class DOML2DeprecatedTableCellHeight;
	class HTMLTableAlignment;
	class SVGAnimatedEnumeration;
	class DOML2DeprecatedSizeProperty;
	class MSBorderColorStyle_HTMLTableCellElement;
	class DOML2DeprecatedWidthStyle_HTMLHRElement;
	class DOML2DeprecatedBorderStyle;
	class NavigatorDoNotTrack;
	class SVG1_1Properties;
	class NamedNodeMap;
	class MediaList;
	class SVGPathSegCurvetoQuadraticSmoothAbs;
	class SVGLengthList;
	class SVGPathSegCurvetoCubicSmoothRel;
	class MSWindowExtensions;
	class MSBehaviorUrnsCollection;
	class CSSFontFaceRule;
	class DOML2DeprecatedBackgroundStyle;
	class MSHTMLHRElementExtensions;
	class AbstractView;
	class DOML2DeprecatedAlignmentStyle_HTMLFieldSetElement;
	class DOML2DeprecatedWidthStyle;
	class DOML2DeprecatedAlignmentStyle_HTMLHeadingElement;
	class SVGAnimatedPathData;
	class Position;
	class BookmarkCollection;
	class WindowPerformance;
	class MSHTMLDivElementExtensions;
	class DOML2DeprecatedBorderStyle_HTMLInputElement;
	class HTMLHRElementDOML2Deprecated;
	class NodeFilterCallback;
	class SVGZoomAndPan;
	class MSEventExtensions;
	class ElementCSSInlineStyle;
	class DOMParser;
	class MSMimeTypesCollection;
	class StyleSheet;
	class DOML2DeprecatedBorderStyle_HTMLTableElement;
	class DOML2DeprecatedWidthStyle_HTMLAppletElement;
	class NodeList;
	class XMLSerializer;
	class StyleSheetPage;
	class DOML2DeprecatedWordWrapSuppression_HTMLDDElement;
	class MSHTMLTableRowElementExtensions;
	class DOML2DeprecatedTextFlowControl_HTMLBRElement;
	class NodeFilter;
	class MSBorderColorStyle_HTMLFrameElement;
	class MSHTMLOListElementExtensions;
	class DOML2DeprecatedWordWrapSuppression_HTMLDTElement;
	class ScreenView;
	class DOML2DeprecatedMarginStyle_HTMLObjectElement;
	class DOML2DeprecatedMarginStyle_HTMLInputElement;
	class MSHTMLTableSectionElementExtensions;
	class MediaError;
	class SVGdoubleList;
	class CanvasPattern;
	class MSHTMLFrameSetElementExtensions;
	class DOML2DeprecatedTextFlowControl_HTMLBlockElement;
	class PositionOptions;
	class MSHTMLMenuElementExtensions;
	class DocumentView;
	class DOML2DeprecatedAlignmentStyle_HTMLTableSectionElement;
	class SVGPathSegLinetoRel;
	class MSHTMLDocumentSelection;
	class DOMException;
	class MSCompatibleInfoCollection;
	class MSHTMLIsIndexElementExtensions;
	class SVGAnimatedBoolean;
	class MSHTMLIFrameElementExtensions;
	class SVGPreserveAspectRatio;
	class MSBorderColorStyle_HTMLTableRowElement;
	class DOML2DeprecatedAlignmentStyle_HTMLTableCaptionElement;
	class PerformanceNavigation;
	class HTMLBodyElementDOML2Deprecated;
	class PositionCallback;
	class SVGElementInstanceList;
	class MSDataBindingRecordSetExtensions;
	class CSSRuleList;
	class MSHTMLTableColElementExtensions;
	class LinkStyle;
	class MSHTMLMarqueeElementExtensions;
	class MSXMLHttpRequestExtensions;
	class ClientRectList;
	class DOML2DeprecatedAlignmentStyle_HTMLTableCellElement;
	class HTMLBodyElement;
	class HTMLAnchorElement;
	class HTMLInputElement;
	class MSCSSScrollTranslationProperties;
	class MSGesture;
	class TextTrackCue;
	class CSSFlexibleBoxProperties;
	class DOMTokenList;
	class MessageChannel;
	class MediaQueryList;
	class DOMError;
	class CSSFontsProperties;
	class WebSocket;
	class HTMLCanvasElement;
	class IDBObjectStore;
	class ObjectURLOptions;
	class MSCSSSelectionBoundaryProperties;
	class SVGFilterPrimitiveStandardAttributes;
	class IDBIndex;
	class FileList;
	class IDBCursor;
	class CSSAnimationsProperties;
	class URL;
	class IDBCursorWithValue;
	class HTMLTextAreaElement;
	class XMLHttpRequestEventTarget;
	class IDBEnvironment;
	class AudioTrackList;
	class MSBaseReader;
	class MSProtocol;
	class HTMLSelectElement;
	class CSSTransitionsProperties;
	class WindowTimersExtension;
	class MSCSSContentZoomProperties;
	class MSRangeCollection;
	class MSCSSPositionedFloatsProperties;
	class MSCSSRegionProperties;
	class IDBKeyRange;
	class WindowConsole;
	class IDBTransaction;
	class AudioTrack;
	class TextTrackCueList;
	class CSSKeyframesRule;
	class MSCSSTouchManipulationProperties;
	class TextTrackList;
	class WindowAnimationTiming;
	class Console;
	class DocumentVisibility;
	class WindowBase64;
	class IDBDatabase;
	class MSProtocolsCollection;
	class DOMStringList;
	class CSSMultiColumnProperties;
	class HTMLButtonElement;
	class HTMLFormElement;
	class MSUnsafeFunctionCallback;
	class Document;
	class HTMLScriptElement;
	class TextTrack;
	class MediaQueryListListener;
	class IDBRequest;
	class MessagePort;
	class FileReader;
	class Blob;
	class BlobPropertyBag;
	class ApplicationCache;
	class MSHTMLVideoElementExtensions;
	class FrameRequestCallback;
	class CSS3DTransformsProperties;
	class XMLHttpRequest;
	class CSSKeyframeRule;
	class CSSGridProperties;
	class MSFileSaver;
	class MSStream;
	class HTMLFieldSetElement;
	class MSBlobBuilder;
	class MSRangeExtensions;
	class HTMLElement;
	class DOMSettableTokenList;
	class IDBFactory;
	class HTMLObjectElement;
	class CSSTextProperties;
	class CSS2DTransformsProperties;
	class MSCSSHighContrastProperties;
	class FormData;
	class MSHTMLMediaElementExtensions;
	class HTMLDataListElement;
	class AbstractWorker;
	class ValidityState;
	class HTMLVideoElement;
	class HTMLTrackElement;
	class MSApp;
	class MSCSSMatrix;
	class Worker;
	class HTMLIFrameElement;
	class MSMediaErrorExtensions;
	class HTMLTableElement;
	class SVGPathSegCurvetoQuadraticRel;
	class CSSStyleDeclaration;
	class Navigator;
	class SVGPathSegCurvetoCubicSmoothAbs;
	class MSHTMLDirectoryElementExtensions;
	class HTMLBaseElement;
	class DOMImplementation;
	class HTMLNextIdElement;
	class SVGPathSegMovetoRel;
	class Node;
	class SVGPathSegCurvetoQuadraticSmoothRel;
	class HTMLAppletElement;
	class MSHTMLFieldSetElementExtensions;
	class HTMLOListElement;
	class SVGPathSegLinetoVerticalRel;
	class CSSStyleSheet;
	class HTMLBlockElement;
	class HTMLMetaElement;
	class HTMLDDElement;
	class CSSStyleRule;
	class HTMLLinkElement;
	class HTMLFontElement;
	class MSNamespaceInfo;
	class HTMLTableCaptionElement;
	class HTMLOptionElement;
	class HTMLMapElement;
	class HTMLMenuElement;
	class Window;
	class HTMLCollection;
	class MSCSSProperties;
	class HTMLImageElement;
	class HTMLAreaElement;
	class HTMLSourceElement;
	class HTMLTableRowElement;
	class SVGPathSegLinetoHorizontalAbs;
	class SVGPathSegArcAbs;
	class HTMLHtmlElement;
	class SVGPathSegClosePath;
	class HTMLFrameElement;
	class CSSMediaRule;
	class HTMLQuoteElement;
	class HTMLDListElement;
	class SVGPathSegLinetoHorizontalRel;
	class HTMLFrameSetElement;
	class MSHTMLPreElementExtensions;
	class HTMLLabelElement;
	class HTMLLegendElement;
	class HTMLDirectoryElement;
	class HTMLLIElement;
	class SVGPathSegLinetoVerticalAbs;
	class MSCurrentStyleCSSProperties;
	class DocumentType;
	class MSHTMLInputElementExtensions;
	class HTMLTableSectionElement;
	class HTMLParamElement;
	class HTMLPreElement;
	class SVGPathSegArcRel;
	class SVGPathSegMovetoAbs;
	class HTMLPhraseElement;
	class SVGPathSegCurvetoCubicRel;
	class HTMLTitleElement;
	class HTMLStyleElement;
	class CSSNamespaceRule;
	class HTMLUnknownElement;
	class HTMLTableCellElement;
	class HTMLBaseFontElement;
	class CSSImportRule;
	class HTMLMarqueeElement;
	class HTMLModElement;
	class Event;
	class HTMLTableColElement;
	class HTMLDocument;
	class MSHTMLHeadingElementExtensions;
	class HTMLUListElement;
	class HTMLDivElement;
	class ProcessingInstruction;
	class DocumentFragment;
	class CSSPageRule;
	class HTMLBRElement;
	class HTMLSpanElement;
	class HTMLHeadElement;
	class HTMLHeadingElement;
	class HTMLMediaElement;
	class HTMLDTElement;
	class MSHTMLParagraphElementExtensions;
	class HTMLBGSoundElement;
	class HTMLHRElement;
	class StorageEvent;
	class HTMLEmbedElement;
	class CharacterData;
	class HTMLOptGroupElement;
	class HTMLIsIndexElement;
	class Attr;
	class ErrorEvent;
	class TrackEvent;
	class MSStreamReader;
	class TransitionEvent;
	class CloseEvent;
	class ProgressEvent;
	class IDBVersionChangeEvent;
	class File;
	class AnimationEvent;
	class IDBOpenDBRequest;
	class HTMLProgressElement;
	class MessageEvent;
	class PopStateEvent;
	class MSStyleCSSProperties;
	class HTMLTableDataCellElement;
	class Element;
	class HTMLParagraphElement;
	class HTMLAreasCollection;
	class MSSiteModeEvent;
	class SVGElement;
	class SVGDefsElement;
	class HTMLTableHeaderCellElement;
	class SVGEllipseElement;
	class SVGAElement;
	class SVGSVGElement;
	class SVGStyleElement;
	class MutationEvent;
	class SVGImageElement;
	class SVGMetadataElement;
	class SVGPolygonElement;
	class SVGTextContentElement;
	class UIEvent;
	class SVGPathElement;
	class Text;
	class HTMLAudioElement;
	class SVGCircleElement;
	class CustomEvent;
	class BeforeUnloadEvent;
	class SVGUseElement;
	class SVGRectElement;
	class TextEvent;
	class SVGPolylineElement;
	class SVGTextPathElement;
	class SVGGradientElement;
	class Comment;
	class SVGSwitchElement;
	class SVGStopElement;
	class SVGSymbolElement;
	class SVGMaskElement;
	class MSGestureEvent;
	class SVGFilterElement;
	class SVGFEMergeNodeElement;
	class SVGFEFloodElement;
	class SVGFETileElement;
	class SVGFEBlendElement;
	class SVGFEMergeElement;
	class SVGFEPointLightElement;
	class SVGFEGaussianBlurElement;
	class SVGFESpecularLightingElement;
	class SVGFEMorphologyElement;
	class SVGFEDisplacementMapElement;
	class SVGComponentTransferFunctionElement;
	class SVGFEDistantLightElement;
	class SVGFEFuncBElement;
	class SVGFEConvolveMatrixElement;
	class SVGFETurbulenceElement;
	class SVGFEFuncGElement;
	class SVGFEColorMatrixElement;
	class SVGFESpotLightElement;
	class SVGFEOffsetElement;
	class MSManipulationEvent;
	class SVGFEImageElement;
	class SVGFECompositeElement;
	class SVGFEDiffuseLightingElement;
	class SVGFEComponentTransferElement;
	class CompositionEvent;
	class SVGMarkerElement;
	class SVGGElement;
	class SVGZoomEvent;
	class SVGLineElement;
	class SVGDescElement;
	class SVGClipPathElement;
	class MouseEvent;
	class SVGTextPositioningElement;
	class CDATASection;
	class SVGPatternElement;
	class SVGScriptElement;
	class SVGViewElement;
	class SVGTitleElement;
	class MouseWheelEvent;
	class KeyboardEvent;
	class FocusEvent;
	class SVGTextElement;
	class SVGTSpanElement;
	class SVGRadialGradientElement;
	class DragEvent;
	class WheelEvent;
	class SVGLinearGradientElement;
	class SVGFEFuncAElement;
	class SVGFEFuncRElement;
	class MSPointerEvent;

	class PropertyDescriptor{
	public:
		void set_configurable(Boolean value);
		Boolean get_configurable();
		void set_enumerable(Boolean value);
		Boolean get_enumerable();
		void set_value(Object* value);
		Object* get_value();
		void set_writable(Boolean value);
		Boolean get_writable();
		Object* get();
		void set(Object* v);
	};

	class PropertyDescriptorMap{
	public:
		PropertyDescriptor* operator[](const String& s);
	};

	class IArguments{
	public:
		Object* operator[](double index);
		void set_length(double value);
		double get_length();
		void set_callee(Function* value);
		Function* get_callee();
	};

	class Math{
	public:
		void set_E(double value);
		double get_E();
		void set_LN10(double value);
		double get_LN10();
		void set_LN2(double value);
		double get_LN2();
		void set_LOG2E(double value);
		double get_LOG2E();
		void set_LOG10E(double value);
		double get_LOG10E();
		void set_PI(double value);
		double get_PI();
		void set_SQRT1_2(double value);
		double get_SQRT1_2();
		void set_SQRT2(double value);
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
		template<typename... Args> 
		double max(const Args&... args )
		{
			duettoVariadicTrap<double>(max<>,static_cast<const double&>(args)...);
		}
		template<typename... Args> 
		double min(const Args&... args )
		{
			duettoVariadicTrap<double>(min<>,static_cast<const double&>(args)...);
		}
		double pow(double x, double y);
		double random();
		double round(double x);
		double sin(double x);
		double sqrt(double x);
		double tan(double x);
	};

	class Date{
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
		void setTime(double time);
		void setMilliseconds(double ms);
		void setUTCMilliseconds(double ms);
		void setSeconds(double sec);
		void setSeconds(double sec, double ms);
		void setUTCSeconds(double sec);
		void setUTCSeconds(double sec, double ms);
		void setMinutes(double min);
		void setMinutes(double min, double sec);
		void setMinutes(double min, double sec, double ms);
		void setUTCMinutes(double min);
		void setUTCMinutes(double min, double sec);
		void setUTCMinutes(double min, double sec, double ms);
		void setHours(double hours);
		void setHours(double hours, double min);
		void setHours(double hours, double min, double sec, double ms);
		void setUTCHours(double hours);
		void setUTCHours(double hours, double min);
		void setUTCHours(double hours, double min, double sec, double ms);
		void setDate(double date);
		void setUTCDate(double date);
		void setMonth(double month);
		void setMonth(double month, double date);
		void setUTCMonth(double month);
		void setUTCMonth(double month, double date);
		void setFullYear(double year);
		void setFullYear(double year, double month);
		void setFullYear(double year, double month, double date);
		void setUTCFullYear(double year);
		void setUTCFullYear(double year, double month);
		void setUTCFullYear(double year, double month, double date);
		String* toUTCString();
		String* toISOString();
		String* toJSON();
		String* toJSON(Object* key);
		Date();
		Date(double value);
		Date(const String& value);
		Date(double year, double month);
		Date(double year, double month, double date);
		Date(double year, double month, double date, double hours, double minutes, double seconds, double ms);
		static void set_prototype(Date* value);
		static Date* get_prototype();
		static double parse(const String& s);
		static double UTC(double year, double month);
		static double UTC(double year, double month, double date);
		static double UTC(double year, double month, double date, double hours, double minutes, double seconds, double ms);
		static double now();
	};

	class RegExpExecArray{
	public:
		String* operator[](double index);
		void set_length(double value);
		double get_length();
		void set_index(double value);
		double get_index();
		void set_input(const String& value);
		String* get_input();
		String* toString();
		String* toLocaleString();
		template<typename... Args> 
		Array* /*{ARRAY_BASE_TYPE=String*}*/ concat(const Args&... args )
		{
			duettoVariadicTrap<Array* /*{ARRAY_BASE_TYPE=String*}*/>(concat<>,static_cast<const String&>(args)...);
		}
		String* join();
		String* join(const String& seperator);
		String* pop();
		template<typename... Args> 
		double push(const Args&... args )
		{
			duettoVariadicTrap<double>(push<>,static_cast<const String&>(args)...);
		}
		Array* /*{ARRAY_BASE_TYPE=String*}*/ reverse();
		String* shift();
		Array* /*{ARRAY_BASE_TYPE=String*}*/ slice(double start);
		Array* /*{ARRAY_BASE_TYPE=String*}*/ slice(double start, double end);
		Array* /*{ARRAY_BASE_TYPE=String*}*/ sort(double (*compareFn)(const String& a, const String& b));
		Array* /*{ARRAY_BASE_TYPE=String*}*/ splice(double start);
		template<typename... Args> 
		Array* /*{ARRAY_BASE_TYPE=String*}*/ splice(double start, double deleteCount, const Args&... args )
		{
			duettoVariadicTrap<Array* /*{ARRAY_BASE_TYPE=String*}*/>(splice<>,static_cast<const String&>(args)...);
		}
		template<typename... Args> 
		double unshift(const Args&... args )
		{
			duettoVariadicTrap<double>(unshift<>,static_cast<const String&>(args)...);
		}
		double indexOf(const String& searchElement);
		double indexOf(const String& searchElement, double fromIndex);
		double lastIndexOf(const String& searchElement);
		double lastIndexOf(const String& searchElement, double fromIndex);
		Boolean every(Boolean (*callbackfn)(const String& value, double index, Array* /*{ARRAY_BASE_TYPE=String*}*/ array));
		Boolean every(Boolean (*callbackfn)(const String& value, double index, Array* /*{ARRAY_BASE_TYPE=String*}*/ array), Object* thisArg);
		Boolean some(Boolean (*callbackfn)(const String& value, double index, Array* /*{ARRAY_BASE_TYPE=String*}*/ array));
		Boolean some(Boolean (*callbackfn)(const String& value, double index, Array* /*{ARRAY_BASE_TYPE=String*}*/ array), Object* thisArg);
		void forEach(void (*callbackfn)(const String& value, double index, Array* /*{ARRAY_BASE_TYPE=String*}*/ array));
		void forEach(void (*callbackfn)(const String& value, double index, Array* /*{ARRAY_BASE_TYPE=String*}*/ array), Object* thisArg);
		Array* /*{ARRAY_BASE_TYPE=Object*}*/ map(Object* (*callbackfn)(const String& value, double index, Array* /*{ARRAY_BASE_TYPE=String*}*/ array));
		Array* /*{ARRAY_BASE_TYPE=Object*}*/ map(Object* (*callbackfn)(const String& value, double index, Array* /*{ARRAY_BASE_TYPE=String*}*/ array), Object* thisArg);
		Array* /*{ARRAY_BASE_TYPE=String*}*/ filter(Boolean (*callbackfn)(const String& value, double index, Array* /*{ARRAY_BASE_TYPE=String*}*/ array));
		Array* /*{ARRAY_BASE_TYPE=String*}*/ filter(Boolean (*callbackfn)(const String& value, double index, Array* /*{ARRAY_BASE_TYPE=String*}*/ array), Object* thisArg);
		Object* reduce(Object* (*callbackfn)(Object* previousValue, Object* currentValue, double currentIndex, Array* /*{ARRAY_BASE_TYPE=String*}*/ array));
		Object* reduce(Object* (*callbackfn)(Object* previousValue, Object* currentValue, double currentIndex, Array* /*{ARRAY_BASE_TYPE=String*}*/ array), Object* initialValue);
		Object* reduceRight(Object* (*callbackfn)(Object* previousValue, Object* currentValue, double currentIndex, Array* /*{ARRAY_BASE_TYPE=String*}*/ array));
		Object* reduceRight(Object* (*callbackfn)(Object* previousValue, Object* currentValue, double currentIndex, Array* /*{ARRAY_BASE_TYPE=String*}*/ array), Object* initialValue);
	};

	class RegExp{
	public:
		RegExpExecArray* exec(const String& string);
		Boolean test(const String& string);
		void set_source(const String& value);
		String* get_source();
		void set_global(Boolean value);
		Boolean get_global();
		void set_ignoreCase(Boolean value);
		Boolean get_ignoreCase();
		void set_multiline(Boolean value);
		Boolean get_multiline();
		void set_lastIndex(double value);
		double get_lastIndex();
		RegExp* compile();
		RegExp(const String& pattern);
		RegExp(const String& pattern, const String& flags);
		static void set_$1(const String& value);
		static String* get_$1();
		static void set_$2(const String& value);
		static String* get_$2();
		static void set_$3(const String& value);
		static String* get_$3();
		static void set_$4(const String& value);
		static String* get_$4();
		static void set_$5(const String& value);
		static String* get_$5();
		static void set_$6(const String& value);
		static String* get_$6();
		static void set_$7(const String& value);
		static String* get_$7();
		static void set_$8(const String& value);
		static String* get_$8();
		static void set_$9(const String& value);
		static String* get_$9();
		static void set_lastMatch(const String& value);
		static String* get_lastMatch();
	};

	class Error{
	public:
		void set_name(const String& value);
		String* get_name();
		void set_message(const String& value);
		String* get_message();
		Error();
		Error(const String& message);
		static void set_prototype(Error* value);
		static Error* get_prototype();
	};

	class EvalError: public Error {
	public:
		EvalError();
		EvalError(const String& message);
		static void set_prototype(EvalError* value);
		static EvalError* get_prototype();
	};

	class RangeError: public Error {
	public:
		RangeError();
		RangeError(const String& message);
		static void set_prototype(RangeError* value);
		static RangeError* get_prototype();
	};

	class ReferenceError: public Error {
	public:
		ReferenceError();
		ReferenceError(const String& message);
		static void set_prototype(ReferenceError* value);
		static ReferenceError* get_prototype();
	};

	class SyntaxError: public Error {
	public:
		SyntaxError();
		SyntaxError(const String& message);
		static void set_prototype(SyntaxError* value);
		static SyntaxError* get_prototype();
	};

	class TypeError: public Error {
	public:
		TypeError();
		TypeError(const String& message);
		static void set_prototype(TypeError* value);
		static TypeError* get_prototype();
	};

	class URIError: public Error {
	public:
		URIError();
		URIError(const String& message);
		static void set_prototype(URIError* value);
		static URIError* get_prototype();
	};

	class JSON{
	public:
		Object* parse(const String& text, Object* (*reviver)(Object* key, Object* value));
		String* stringify(Object* value);
		String* stringify(Object* value, Object* (*replacer)(const String& key, Object* value));
		String* stringify(Object* value, Array* /*{ARRAY_BASE_TYPE=Object*}*/ replacer);
		String* stringify(Object* value, Object* (*replacer)(const String& key, Object* value), Object* space);
		String* stringify(Object* value, Array* /*{ARRAY_BASE_TYPE=Object*}*/ replacer, Object* space);
	};

	class ArrayBuffer{
	public:
		void set_byteLength(double value);
		double get_byteLength();
		static void set_prototype(ArrayBuffer* value);
		static ArrayBuffer* get_prototype();
	};

	class ArrayBufferView{
	public:
		void set_buffer(ArrayBuffer* value);
		ArrayBuffer* get_buffer();
		void set_byteOffset(double value);
		double get_byteOffset();
		void set_byteLength(double value);
		double get_byteLength();
	};

	class Int8Array: public ArrayBufferView {
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Int8Array* array);
		void set(Int8Array* array, double offset);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array, double offset);
		Int8Array* subarray(double begin);
		Int8Array* subarray(double begin, double end);
		static void set_prototype(Int8Array* value);
		static Int8Array* get_prototype();
		Int8Array(double length);
		Int8Array(Int8Array* array);
		Int8Array(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		Int8Array(ArrayBuffer* buffer);
		Int8Array(ArrayBuffer* buffer, double byteOffset);
		Int8Array(ArrayBuffer* buffer, double byteOffset, double length);
	};

	class Uint8Array: public ArrayBufferView {
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Uint8Array* array);
		void set(Uint8Array* array, double offset);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array, double offset);
		Uint8Array* subarray(double begin);
		Uint8Array* subarray(double begin, double end);
		static void set_prototype(Uint8Array* value);
		static Uint8Array* get_prototype();
		Uint8Array(double length);
		Uint8Array(Uint8Array* array);
		Uint8Array(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		Uint8Array(ArrayBuffer* buffer);
		Uint8Array(ArrayBuffer* buffer, double byteOffset);
		Uint8Array(ArrayBuffer* buffer, double byteOffset, double length);
	};

	class Int16Array: public ArrayBufferView {
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Int16Array* array);
		void set(Int16Array* array, double offset);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array, double offset);
		Int16Array* subarray(double begin);
		Int16Array* subarray(double begin, double end);
		static void set_prototype(Int16Array* value);
		static Int16Array* get_prototype();
		Int16Array(double length);
		Int16Array(Int16Array* array);
		Int16Array(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		Int16Array(ArrayBuffer* buffer);
		Int16Array(ArrayBuffer* buffer, double byteOffset);
		Int16Array(ArrayBuffer* buffer, double byteOffset, double length);
	};

	class Uint16Array: public ArrayBufferView {
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Uint16Array* array);
		void set(Uint16Array* array, double offset);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array, double offset);
		Uint16Array* subarray(double begin);
		Uint16Array* subarray(double begin, double end);
		static void set_prototype(Uint16Array* value);
		static Uint16Array* get_prototype();
		Uint16Array(double length);
		Uint16Array(Uint16Array* array);
		Uint16Array(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		Uint16Array(ArrayBuffer* buffer);
		Uint16Array(ArrayBuffer* buffer, double byteOffset);
		Uint16Array(ArrayBuffer* buffer, double byteOffset, double length);
	};

	class Int32Array: public ArrayBufferView {
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Int32Array* array);
		void set(Int32Array* array, double offset);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array, double offset);
		Int32Array* subarray(double begin);
		Int32Array* subarray(double begin, double end);
		static void set_prototype(Int32Array* value);
		static Int32Array* get_prototype();
		Int32Array(double length);
		Int32Array(Int32Array* array);
		Int32Array(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		Int32Array(ArrayBuffer* buffer);
		Int32Array(ArrayBuffer* buffer, double byteOffset);
		Int32Array(ArrayBuffer* buffer, double byteOffset, double length);
	};

	class Uint32Array: public ArrayBufferView {
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Uint32Array* array);
		void set(Uint32Array* array, double offset);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array, double offset);
		Uint32Array* subarray(double begin);
		Uint32Array* subarray(double begin, double end);
		static void set_prototype(Uint32Array* value);
		static Uint32Array* get_prototype();
		Uint32Array(double length);
		Uint32Array(Uint32Array* array);
		Uint32Array(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		Uint32Array(ArrayBuffer* buffer);
		Uint32Array(ArrayBuffer* buffer, double byteOffset);
		Uint32Array(ArrayBuffer* buffer, double byteOffset, double length);
	};

	class Float32Array: public ArrayBufferView {
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Float32Array* array);
		void set(Float32Array* array, double offset);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array, double offset);
		Float32Array* subarray(double begin);
		Float32Array* subarray(double begin, double end);
		static void set_prototype(Float32Array* value);
		static Float32Array* get_prototype();
		Float32Array(double length);
		Float32Array(Float32Array* array);
		Float32Array(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		Float32Array(ArrayBuffer* buffer);
		Float32Array(ArrayBuffer* buffer, double byteOffset);
		Float32Array(ArrayBuffer* buffer, double byteOffset, double length);
	};

	class Float64Array: public ArrayBufferView {
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Float64Array* array);
		void set(Float64Array* array, double offset);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		void set(Array* /*{ARRAY_BASE_TYPE=double}*/ array, double offset);
		Float64Array* subarray(double begin);
		Float64Array* subarray(double begin, double end);
		static void set_prototype(Float64Array* value);
		static Float64Array* get_prototype();
		Float64Array(double length);
		Float64Array(Float64Array* array);
		Float64Array(Array* /*{ARRAY_BASE_TYPE=double}*/ array);
		Float64Array(ArrayBuffer* buffer);
		Float64Array(ArrayBuffer* buffer, double byteOffset);
		Float64Array(ArrayBuffer* buffer, double byteOffset, double length);
	};

	class DataView: public ArrayBufferView {
	public:
		double getInt8(double byteOffset);
		double getUint8(double byteOffset);
		double getInt16(double byteOffset);
		double getInt16(double byteOffset, Boolean littleEndian);
		double getUint16(double byteOffset);
		double getUint16(double byteOffset, Boolean littleEndian);
		double getInt32(double byteOffset);
		double getInt32(double byteOffset, Boolean littleEndian);
		double getUint32(double byteOffset);
		double getUint32(double byteOffset, Boolean littleEndian);
		double getFloat32(double byteOffset);
		double getFloat32(double byteOffset, Boolean littleEndian);
		double getFloat64(double byteOffset);
		double getFloat64(double byteOffset, Boolean littleEndian);
		void setInt8(double byteOffset, double value);
		void setUint8(double byteOffset, double value);
		void setInt16(double byteOffset, double value);
		void setInt16(double byteOffset, double value, Boolean littleEndian);
		void setUint16(double byteOffset, double value);
		void setUint16(double byteOffset, double value, Boolean littleEndian);
		void setInt32(double byteOffset, double value);
		void setInt32(double byteOffset, double value, Boolean littleEndian);
		void setUint32(double byteOffset, double value);
		void setUint32(double byteOffset, double value, Boolean littleEndian);
		void setFloat32(double byteOffset, double value);
		void setFloat32(double byteOffset, double value, Boolean littleEndian);
		void setFloat64(double byteOffset, double value);
		void setFloat64(double byteOffset, double value, Boolean littleEndian);
		static void set_prototype(DataView* value);
		static DataView* get_prototype();
		DataView(ArrayBuffer* buffer);
		DataView(ArrayBuffer* buffer, double byteOffset);
		DataView(ArrayBuffer* buffer, double byteOffset, double length);
	};

	class NavigatorID{
	public:
		void set_appVersion(const String& value);
		String* get_appVersion();
		void set_appName(const String& value);
		String* get_appName();
		void set_userAgent(const String& value);
		String* get_userAgent();
		void set_platform(const String& value);
		String* get_platform();
	};

	class TreeWalker{
	public:
		void set_whatToShow(double value);
		double get_whatToShow();
		void set_filter(NodeFilterCallback* value);
		NodeFilterCallback* get_filter();
		void set_root(Node* value);
		Node* get_root();
		void set_currentNode(Node* value);
		Node* get_currentNode();
		void set_expandEntityReferences(Boolean value);
		Boolean get_expandEntityReferences();
		Node* previousSibling();
		Node* lastChild();
		Node* nextSibling();
		Node* nextNode();
		Node* parentNode();
		Node* firstChild();
		Node* previousNode();
		static void set_prototype(TreeWalker* value);
		static TreeWalker* get_prototype();
		TreeWalker();
	};

	class GetSVGDocument{
	public:
		SVGDocument* getSVGDocument();
	};

	class HTMLHtmlElementDOML2Deprecated{
	public:
		void set_version(const String& value);
		String* get_version();
	};

	class Performance{
	public:
		void set_navigation(PerformanceNavigation* value);
		PerformanceNavigation* get_navigation();
		void set_timing(PerformanceTiming* value);
		PerformanceTiming* get_timing();
		Object* toJSON();
		static void set_prototype(Performance* value);
		static Performance* get_prototype();
		Performance();
	};

	class SVGSVGElementEventHandlers{
	public:
		typedef Object* (*callback_for_onresize)(UIEvent* ev);
		void set_onresize(callback_for_onresize value);
		callback_for_onresize get_onresize();
		typedef Object* (*callback_for_onunload)(Event* ev);
		void set_onunload(callback_for_onunload value);
		callback_for_onunload get_onunload();
		typedef Object* (*callback_for_onscroll)(UIEvent* ev);
		void set_onscroll(callback_for_onscroll value);
		callback_for_onscroll get_onscroll();
		typedef Object* (*callback_for_onerror)(Event* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onzoom)(Object* ev);
		void set_onzoom(callback_for_onzoom value);
		callback_for_onzoom get_onzoom();
		typedef Object* (*callback_for_onabort)(UIEvent* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
	};

	class MSDataBindingTableExtensions{
	public:
		void set_dataPageSize(double value);
		double get_dataPageSize();
		void nextPage();
		void firstPage();
		void refresh();
		void previousPage();
		void lastPage();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLParagraphElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class WindowTimers{
	public:
		void clearTimeout(double handle);
		double setTimeout(Object* expression);
		double setTimeout(Object* expression, double msec);
		double setTimeout(Object* expression, double msec, Object* language);
		void clearInterval(double handle);
		double setInterval(Object* expression);
		double setInterval(Object* expression, double msec);
		double setInterval(Object* expression, double msec, Object* language);
	};

	class MSCSSStyleSheetExtensions{
	public:
		void set_owningElement(Element* value);
		Element* get_owningElement();
		void set_imports(StyleSheetList* value);
		StyleSheetList* get_imports();
		void set_isAlternate(Boolean value);
		Boolean get_isAlternate();
		void set_rules(MSCSSRuleList* value);
		MSCSSRuleList* get_rules();
		void set_isPrefAlternate(Boolean value);
		Boolean get_isPrefAlternate();
		void set_readOnly(Boolean value);
		Boolean get_readOnly();
		void set_cssText(const String& value);
		String* get_cssText();
		void set_href(const String& value);
		String* get_href();
		void set_id(const String& value);
		String* get_id();
		void set_pages(StyleSheetPageList* value);
		StyleSheetPageList* get_pages();
		double addImport(const String& bstrURL);
		double addImport(const String& bstrURL, double lIndex);
		double addPageRule(const String& bstrSelector, const String& bstrStyle);
		double addPageRule(const String& bstrSelector, const String& bstrStyle, double lIndex);
		void removeRule(double lIndex);
		double addRule(const String& bstrSelector);
		double addRule(const String& bstrSelector, const String& bstrStyle);
		double addRule(const String& bstrSelector, const String& bstrStyle, double lIndex);
		void removeImport(double lIndex);
	};

	class MSBorderColorStyle_HTMLFrameSetElement{
	public:
		void set_borderColor(Object* value);
		Object* get_borderColor();
	};

	class NodeSelector{
	public:
		NodeList* querySelectorAll(const String& selectors);
		Element* querySelector(const String& selectors);
	};

	class ClientRect{
	public:
		void set_left(double value);
		double get_left();
		void set_width(double value);
		double get_width();
		void set_right(double value);
		double get_right();
		void set_top(double value);
		double get_top();
		void set_bottom(double value);
		double get_bottom();
		void set_height(double value);
		double get_height();
		static void set_prototype(ClientRect* value);
		static ClientRect* get_prototype();
		ClientRect();
	};

	class PositionErrorCallback{
	public:
		void operator()(PositionError* error);
	};

	class DOML2DeprecatedWidthStyle_HTMLBlockElement{
	public:
		void set_width(double value);
		double get_width();
	};

	class SVGUnitTypes{
	public:
		void set_SVG_UNIT_TYPE_UNKNOWN(double value);
		double get_SVG_UNIT_TYPE_UNKNOWN();
		void set_SVG_UNIT_TYPE_OBJECTBOUNDINGBOX(double value);
		double get_SVG_UNIT_TYPE_OBJECTBOUNDINGBOX();
		void set_SVG_UNIT_TYPE_USERSPACEONUSE(double value);
		double get_SVG_UNIT_TYPE_USERSPACEONUSE();
		static void set_prototype(SVGUnitTypes* value);
		static SVGUnitTypes* get_prototype();
		SVGUnitTypes();
	};

	class DocumentRange{
	public:
		Range* createRange();
	};

	class MSHTMLDocumentExtensions{
	public:
		typedef Object* (*callback_for_onrowexit)(MSEventObj* ev);
		void set_onrowexit(callback_for_onrowexit value);
		callback_for_onrowexit get_onrowexit();
		void set_compatible(MSCompatibleInfoCollection* value);
		MSCompatibleInfoCollection* get_compatible();
		typedef Object* (*callback_for_oncontrolselect)(MSEventObj* ev);
		void set_oncontrolselect(callback_for_oncontrolselect value);
		callback_for_oncontrolselect get_oncontrolselect();
		typedef Object* (*callback_for_onrowsinserted)(MSEventObj* ev);
		void set_onrowsinserted(callback_for_onrowsinserted value);
		callback_for_onrowsinserted get_onrowsinserted();
		typedef Object* (*callback_for_onpropertychange)(MSEventObj* ev);
		void set_onpropertychange(callback_for_onpropertychange value);
		callback_for_onpropertychange get_onpropertychange();
		void set_media(const String& value);
		String* get_media();
		typedef Object* (*callback_for_onafterupdate)(MSEventObj* ev);
		void set_onafterupdate(callback_for_onafterupdate value);
		callback_for_onafterupdate get_onafterupdate();
		typedef Object* (*callback_for_onhelp)(Event* ev);
		void set_onhelp(callback_for_onhelp value);
		callback_for_onhelp get_onhelp();
		void set_uniqueID(const String& value);
		String* get_uniqueID();
		typedef Object* (*callback_for_onbeforeactivate)(UIEvent* ev);
		void set_onbeforeactivate(callback_for_onbeforeactivate value);
		callback_for_onbeforeactivate get_onbeforeactivate();
		typedef Object* (*callback_for_onstoragecommit)(StorageEvent* ev);
		void set_onstoragecommit(callback_for_onstoragecommit value);
		callback_for_onstoragecommit get_onstoragecommit();
		typedef Object* (*callback_for_onselectionchange)(Event* ev);
		void set_onselectionchange(callback_for_onselectionchange value);
		callback_for_onselectionchange get_onselectionchange();
		void set_documentMode(double value);
		double get_documentMode();
		typedef Object* (*callback_for_onfocusout)(FocusEvent* ev);
		void set_onfocusout(callback_for_onfocusout value);
		callback_for_onfocusout get_onfocusout();
		typedef Object* (*callback_for_ondataavailable)(MSEventObj* ev);
		void set_ondataavailable(callback_for_ondataavailable value);
		callback_for_ondataavailable get_ondataavailable();
		typedef Object* (*callback_for_onbeforeupdate)(MSEventObj* ev);
		void set_onbeforeupdate(callback_for_onbeforeupdate value);
		callback_for_onbeforeupdate get_onbeforeupdate();
		typedef Object* (*callback_for_onfocusin)(FocusEvent* ev);
		void set_onfocusin(callback_for_onfocusin value);
		callback_for_onfocusin get_onfocusin();
		void set_security(const String& value);
		String* get_security();
		void set_namespaces(MSNamespaceInfoCollection* value);
		MSNamespaceInfoCollection* get_namespaces();
		typedef Object* (*callback_for_ondatasetcomplete)(MSEventObj* ev);
		void set_ondatasetcomplete(callback_for_ondatasetcomplete value);
		callback_for_ondatasetcomplete get_ondatasetcomplete();
		typedef Object* (*callback_for_onbeforedeactivate)(UIEvent* ev);
		void set_onbeforedeactivate(callback_for_onbeforedeactivate value);
		callback_for_onbeforedeactivate get_onbeforedeactivate();
		typedef Object* (*callback_for_onstop)(Event* ev);
		void set_onstop(callback_for_onstop value);
		callback_for_onstop get_onstop();
		typedef Object* (*callback_for_onactivate)(UIEvent* ev);
		void set_onactivate(callback_for_onactivate value);
		callback_for_onactivate get_onactivate();
		typedef Object* (*callback_for_onmssitemodejumplistitemremoved)(MSSiteModeEvent* ev);
		void set_onmssitemodejumplistitemremoved(callback_for_onmssitemodejumplistitemremoved value);
		callback_for_onmssitemodejumplistitemremoved get_onmssitemodejumplistitemremoved();
		void set_frames(Window* value);
		Window* get_frames();
		typedef Object* (*callback_for_onselectstart)(Event* ev);
		void set_onselectstart(callback_for_onselectstart value);
		callback_for_onselectstart get_onselectstart();
		typedef Object* (*callback_for_onerrorupdate)(MSEventObj* ev);
		void set_onerrorupdate(callback_for_onerrorupdate value);
		callback_for_onerrorupdate get_onerrorupdate();
		void set_parentWindow(Window* value);
		Window* get_parentWindow();
		typedef Object* (*callback_for_ondeactivate)(UIEvent* ev);
		void set_ondeactivate(callback_for_ondeactivate value);
		callback_for_ondeactivate get_ondeactivate();
		typedef Object* (*callback_for_ondatasetchanged)(MSEventObj* ev);
		void set_ondatasetchanged(callback_for_ondatasetchanged value);
		callback_for_ondatasetchanged get_ondatasetchanged();
		typedef Object* (*callback_for_onrowsdelete)(MSEventObj* ev);
		void set_onrowsdelete(callback_for_onrowsdelete value);
		callback_for_onrowsdelete get_onrowsdelete();
		typedef Object* (*callback_for_onmsthumbnailclick)(MSSiteModeEvent* ev);
		void set_onmsthumbnailclick(callback_for_onmsthumbnailclick value);
		callback_for_onmsthumbnailclick get_onmsthumbnailclick();
		typedef Object* (*callback_for_onrowenter)(MSEventObj* ev);
		void set_onrowenter(callback_for_onrowenter value);
		callback_for_onrowenter get_onrowenter();
		typedef Object* (*callback_for_onbeforeeditfocus)(MSEventObj* ev);
		void set_onbeforeeditfocus(callback_for_onbeforeeditfocus value);
		callback_for_onbeforeeditfocus get_onbeforeeditfocus();
		void set_Script(MSScriptHost* value);
		MSScriptHost* get_Script();
		typedef Object* (*callback_for_oncellchange)(MSEventObj* ev);
		void set_oncellchange(callback_for_oncellchange value);
		callback_for_oncellchange get_oncellchange();
		void set_URLUnencoded(const String& value);
		String* get_URLUnencoded();
		void updateSettings();
		Boolean execCommandShowHelp(const String& commandId);
		void releaseCapture();
		void focus();
	};

	class CSS2Properties{
	public:
		void set_backgroundAttachment(const String& value);
		String* get_backgroundAttachment();
		void set_visibility(const String& value);
		String* get_visibility();
		void set_fontFamily(const String& value);
		String* get_fontFamily();
		void set_borderRightStyle(const String& value);
		String* get_borderRightStyle();
		void set_clear(const String& value);
		String* get_clear();
		void set_content(const String& value);
		String* get_content();
		void set_counterIncrement(const String& value);
		String* get_counterIncrement();
		void set_orphans(const String& value);
		String* get_orphans();
		void set_marginBottom(const String& value);
		String* get_marginBottom();
		void set_borderStyle(const String& value);
		String* get_borderStyle();
		void set_counterReset(const String& value);
		String* get_counterReset();
		void set_outlineWidth(const String& value);
		String* get_outlineWidth();
		void set_marginRight(const String& value);
		String* get_marginRight();
		void set_paddingLeft(const String& value);
		String* get_paddingLeft();
		void set_borderBottom(const String& value);
		String* get_borderBottom();
		void set_marginTop(const String& value);
		String* get_marginTop();
		void set_borderTopColor(const String& value);
		String* get_borderTopColor();
		void set_top(const String& value);
		String* get_top();
		void set_fontWeight(const String& value);
		String* get_fontWeight();
		void set_textIndent(const String& value);
		String* get_textIndent();
		void set_borderRight(const String& value);
		String* get_borderRight();
		void set_width(const String& value);
		String* get_width();
		void set_listStyleImage(const String& value);
		String* get_listStyleImage();
		void set_cursor(const String& value);
		String* get_cursor();
		void set_listStylePosition(const String& value);
		String* get_listStylePosition();
		void set_borderTopStyle(const String& value);
		String* get_borderTopStyle();
		void set_direction(const String& value);
		String* get_direction();
		void set_maxWidth(const String& value);
		String* get_maxWidth();
		void set_color(const String& value);
		String* get_color();
		void set_clip(const String& value);
		String* get_clip();
		void set_borderRightWidth(const String& value);
		String* get_borderRightWidth();
		void set_verticalAlign(const String& value);
		String* get_verticalAlign();
		void set_pageBreakAfter(const String& value);
		String* get_pageBreakAfter();
		void set_overflow(const String& value);
		String* get_overflow();
		void set_borderBottomStyle(const String& value);
		String* get_borderBottomStyle();
		void set_borderLeftStyle(const String& value);
		String* get_borderLeftStyle();
		void set_fontStretch(const String& value);
		String* get_fontStretch();
		void set_emptyCells(const String& value);
		String* get_emptyCells();
		void set_padding(const String& value);
		String* get_padding();
		void set_paddingRight(const String& value);
		String* get_paddingRight();
		void set_background(const String& value);
		String* get_background();
		void set_bottom(const String& value);
		String* get_bottom();
		void set_height(const String& value);
		String* get_height();
		void set_paddingTop(const String& value);
		String* get_paddingTop();
		void set_right(const String& value);
		String* get_right();
		void set_borderLeftWidth(const String& value);
		String* get_borderLeftWidth();
		void set_borderLeft(const String& value);
		String* get_borderLeft();
		void set_backgroundPosition(const String& value);
		String* get_backgroundPosition();
		void set_backgroundColor(const String& value);
		String* get_backgroundColor();
		void set_widows(const String& value);
		String* get_widows();
		void set_lineHeight(const String& value);
		String* get_lineHeight();
		void set_pageBreakInside(const String& value);
		String* get_pageBreakInside();
		void set_borderTopWidth(const String& value);
		String* get_borderTopWidth();
		void set_left(const String& value);
		String* get_left();
		void set_outlineStyle(const String& value);
		String* get_outlineStyle();
		void set_borderTop(const String& value);
		String* get_borderTop();
		void set_paddingBottom(const String& value);
		String* get_paddingBottom();
		void set_outlineColor(const String& value);
		String* get_outlineColor();
		void set_wordSpacing(const String& value);
		String* get_wordSpacing();
		void set_outline(const String& value);
		String* get_outline();
		void set_font(const String& value);
		String* get_font();
		void set_marginLeft(const String& value);
		String* get_marginLeft();
		void set_display(const String& value);
		String* get_display();
		void set_maxHeight(const String& value);
		String* get_maxHeight();
		void set_cssFloat(const String& value);
		String* get_cssFloat();
		void set_letterSpacing(const String& value);
		String* get_letterSpacing();
		void set_borderSpacing(const String& value);
		String* get_borderSpacing();
		void set_backgroundRepeat(const String& value);
		String* get_backgroundRepeat();
		void set_fontSizeAdjust(const String& value);
		String* get_fontSizeAdjust();
		void set_borderLeftColor(const String& value);
		String* get_borderLeftColor();
		void set_borderWidth(const String& value);
		String* get_borderWidth();
		void set_backgroundImage(const String& value);
		String* get_backgroundImage();
		void set_listStyleType(const String& value);
		String* get_listStyleType();
		void set_whiteSpace(const String& value);
		String* get_whiteSpace();
		void set_fontStyle(const String& value);
		String* get_fontStyle();
		void set_borderBottomColor(const String& value);
		String* get_borderBottomColor();
		void set_minWidth(const String& value);
		String* get_minWidth();
		void set_position(const String& value);
		String* get_position();
		void set_zIndex(const String& value);
		String* get_zIndex();
		void set_borderColor(const String& value);
		String* get_borderColor();
		void set_listStyle(const String& value);
		String* get_listStyle();
		void set_captionSide(const String& value);
		String* get_captionSide();
		void set_borderCollapse(const String& value);
		String* get_borderCollapse();
		void set_fontVariant(const String& value);
		String* get_fontVariant();
		void set_quotes(const String& value);
		String* get_quotes();
		void set_tableLayout(const String& value);
		String* get_tableLayout();
		void set_unicodeBidi(const String& value);
		String* get_unicodeBidi();
		void set_borderBottomWidth(const String& value);
		String* get_borderBottomWidth();
		void set_minHeight(const String& value);
		String* get_minHeight();
		void set_textDecoration(const String& value);
		String* get_textDecoration();
		void set_fontSize(const String& value);
		String* get_fontSize();
		void set_border(const String& value);
		String* get_border();
		void set_pageBreakBefore(const String& value);
		String* get_pageBreakBefore();
		void set_textAlign(const String& value);
		String* get_textAlign();
		void set_textTransform(const String& value);
		String* get_textTransform();
		void set_margin(const String& value);
		String* get_margin();
		void set_borderRightColor(const String& value);
		String* get_borderRightColor();
	};

	class MSImageResourceExtensions_HTMLInputElement{
	public:
		void set_dynsrc(const String& value);
		String* get_dynsrc();
		void set_vrml(const String& value);
		String* get_vrml();
		void set_lowsrc(const String& value);
		String* get_lowsrc();
		void set_start(const String& value);
		String* get_start();
		void set_loop(double value);
		double get_loop();
	};

	class MSHTMLEmbedElementExtensions{
	public:
		void set_palette(const String& value);
		String* get_palette();
		void set_hidden(const String& value);
		String* get_hidden();
		void set_pluginspage(const String& value);
		String* get_pluginspage();
		void set_units(const String& value);
		String* get_units();
	};

	class MSHTMLModElementExtensions{
	public:
	};

	class SVGDocument{
	public:
		void set_rootElement(SVGSVGElement* value);
		SVGSVGElement* get_rootElement();
	};

	class MSHTMLTextAreaElementExtensions{
	public:
		void set_status(Object* value);
		Object* get_status();
		TextRange* createTextRange();
	};

	class ErrorFunction{
	public:
		Object* operator()(Object* eventOrMessage, const String& source, double fileno);
	};

	class MSHTMLLegendElementExtensions{
	public:
	};

	class MSCSSStyleDeclarationExtensions{
	public:
		Object* getAttribute(const String& attributeName);
		Object* getAttribute(const String& attributeName, double flags);
		void setAttribute(const String& attributeName, Object* AttributeValue);
		void setAttribute(const String& attributeName, Object* AttributeValue, double flags);
		Boolean removeAttribute(const String& attributeName);
		Boolean removeAttribute(const String& attributeName, double flags);
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableRowElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class DOML2DeprecatedBorderStyle_HTMLObjectElement{
	public:
		void set_border(const String& value);
		String* get_border();
	};

	class MSHTMLSpanElementExtensions{
	public:
	};

	class MSHTMLObjectElementExtensions{
	public:
		void set_object(Object* value);
		Object* get_object();
		void set_alt(const String& value);
		String* get_alt();
		void set_classid(const String& value);
		String* get_classid();
		void set_altHtml(const String& value);
		String* get_altHtml();
		void set_BaseHref(const String& value);
		String* get_BaseHref();
	};

	class DOML2DeprecatedListSpaceReduction{
	public:
		void set_compact(Boolean value);
		Boolean get_compact();
	};

	class CSS3Properties{
	public:
		void set_textAlignLast(const String& value);
		String* get_textAlignLast();
		void set_textUnderlinePosition(const String& value);
		String* get_textUnderlinePosition();
		void set_wordWrap(const String& value);
		String* get_wordWrap();
		void set_borderTopLeftRadius(const String& value);
		String* get_borderTopLeftRadius();
		void set_backgroundClip(const String& value);
		String* get_backgroundClip();
		void set_msTransformOrigin(const String& value);
		String* get_msTransformOrigin();
		void set_opacity(const String& value);
		String* get_opacity();
		void set_overflowY(const String& value);
		String* get_overflowY();
		void set_boxShadow(const String& value);
		String* get_boxShadow();
		void set_backgroundSize(const String& value);
		String* get_backgroundSize();
		void set_wordBreak(const String& value);
		String* get_wordBreak();
		void set_boxSizing(const String& value);
		String* get_boxSizing();
		void set_rubyOverhang(const String& value);
		String* get_rubyOverhang();
		void set_rubyAlign(const String& value);
		String* get_rubyAlign();
		void set_textJustify(const String& value);
		String* get_textJustify();
		void set_borderRadius(const String& value);
		String* get_borderRadius();
		void set_overflowX(const String& value);
		String* get_overflowX();
		void set_borderTopRightRadius(const String& value);
		String* get_borderTopRightRadius();
		void set_msTransform(const String& value);
		String* get_msTransform();
		void set_borderBottomLeftRadius(const String& value);
		String* get_borderBottomLeftRadius();
		void set_rubyPosition(const String& value);
		String* get_rubyPosition();
		void set_borderBottomRightRadius(const String& value);
		String* get_borderBottomRightRadius();
		void set_backgroundOrigin(const String& value);
		String* get_backgroundOrigin();
		void set_textOverflow(const String& value);
		String* get_textOverflow();
	};

	class MSScriptHost{
	public:
		static void set_prototype(MSScriptHost* value);
		static MSScriptHost* get_prototype();
		MSScriptHost();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class RangeException{
	public:
		void set_code(double value);
		double get_code();
		void set_message(const String& value);
		String* get_message();
		String* toString();
		void set_INVALID_NODE_TYPE_ERR(double value);
		double get_INVALID_NODE_TYPE_ERR();
		void set_BAD_BOUNDARYPOINTS_ERR(double value);
		double get_BAD_BOUNDARYPOINTS_ERR();
		static void set_prototype(RangeException* value);
		static RangeException* get_prototype();
		RangeException();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLHRElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class DocumentEvent{
	public:
		Event* createEvent(const String& eventInterface);
	};

	class MSHTMLUnknownElementExtensions{
	public:
	};

	class TextMetrics{
	public:
		void set_width(double value);
		double get_width();
		static void set_prototype(TextMetrics* value);
		static TextMetrics* get_prototype();
		TextMetrics();
	};

	class DOML2DeprecatedWordWrapSuppression_HTMLBodyElement{
	public:
		void set_noWrap(Boolean value);
		Boolean get_noWrap();
	};

	class MSHTMLTableCaptionElementExtensions{
	public:
		void set_vAlign(const String& value);
		String* get_vAlign();
	};

	class SVGAnimatedString{
	public:
		void set_animVal(const String& value);
		String* get_animVal();
		void set_baseVal(const String& value);
		String* get_baseVal();
		static SVGAnimatedString* get_prototype();
		SVGAnimatedString();
	};

	class StyleMedia{
	public:
		void set_type(const String& value);
		String* get_type();
		Boolean matchMedium(const String& mediaquery);
		static void set_prototype(StyleMedia* value);
		static StyleMedia* get_prototype();
		StyleMedia();
	};

	class TextRange{
	public:
		void set_boundingLeft(double value);
		double get_boundingLeft();
		void set_htmlText(const String& value);
		String* get_htmlText();
		void set_offsetLeft(double value);
		double get_offsetLeft();
		void set_boundingWidth(double value);
		double get_boundingWidth();
		void set_boundingHeight(double value);
		double get_boundingHeight();
		void set_boundingTop(double value);
		double get_boundingTop();
		void set_text(const String& value);
		String* get_text();
		void set_offsetTop(double value);
		double get_offsetTop();
		void moveToPoint(double x, double y);
		Object* queryCommandValue(const String& cmdID);
		String* getBookmark();
		double move(const String& Unit);
		double move(const String& Unit, double Count);
		Boolean queryCommandIndeterm(const String& cmdID);
		void scrollIntoView();
		void scrollIntoView(Boolean fStart);
		Boolean findText(const String& string);
		Boolean findText(const String& string, double count);
		Boolean findText(const String& string, double count, double flags);
		Boolean execCommand(const String& cmdID);
		Boolean execCommand(const String& cmdID, Boolean showUI);
		Boolean execCommand(const String& cmdID, Boolean showUI, Object* value);
		ClientRect* getBoundingClientRect();
		Boolean moveToBookmark(const String& Bookmark);
		Boolean isEqual(TextRange* range);
		TextRange* duplicate();
		void collapse();
		void collapse(Boolean Start);
		String* queryCommandText(const String& cmdID);
		void select();
		void pasteHTML(const String& html);
		Boolean inRange(TextRange* range);
		double moveEnd(const String& Unit);
		double moveEnd(const String& Unit, double Count);
		ClientRectList* getClientRects();
		double moveStart(const String& Unit);
		double moveStart(const String& Unit, double Count);
		Element* parentElement();
		Boolean queryCommandState(const String& cmdID);
		double compareEndPoints(const String& how, TextRange* sourceRange);
		Boolean execCommandShowHelp(const String& cmdID);
		void moveToElementText(Element* element);
		Boolean expand(const String& Unit);
		Boolean queryCommandSupported(const String& cmdID);
		void setEndPoint(const String& how, TextRange* SourceRange);
		Boolean queryCommandEnabled(const String& cmdID);
		static void set_prototype(TextRange* value);
		static TextRange* get_prototype();
		TextRange();
	};

	class SVGTests{
	public:
		void set_requiredFeatures(SVGStringList* value);
		SVGStringList* get_requiredFeatures();
		void set_requiredExtensions(SVGStringList* value);
		SVGStringList* get_requiredExtensions();
		void set_systemLanguage(SVGStringList* value);
		SVGStringList* get_systemLanguage();
		Boolean hasExtension(const String& extension);
	};

	class MSSelection{
	public:
		void set_type(const String& value);
		String* get_type();
		void set_typeDetail(const String& value);
		String* get_typeDetail();
		TextRange* createRange();
		void clear();
		TextRangeCollection* createRangeCollection();
		void empty();
		static void set_prototype(MSSelection* value);
		static MSSelection* get_prototype();
		MSSelection();
	};

	class MSHTMLDListElementExtensions{
	public:
	};

	class Selection{
	public:
		void set_isCollapsed(Boolean value);
		Boolean get_isCollapsed();
		void set_anchorNode(Node* value);
		Node* get_anchorNode();
		void set_focusNode(Node* value);
		Node* get_focusNode();
		void set_anchorOffset(double value);
		double get_anchorOffset();
		void set_focusOffset(double value);
		double get_focusOffset();
		void set_rangeCount(double value);
		double get_rangeCount();
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
		static void set_prototype(Selection* value);
		static Selection* get_prototype();
		Selection();
	};

	class SVGAnimatedAngle{
	public:
		void set_animVal(SVGAngle* value);
		SVGAngle* get_animVal();
		void set_baseVal(SVGAngle* value);
		SVGAngle* get_baseVal();
		static void set_prototype(SVGAnimatedAngle* value);
		static SVGAnimatedAngle* get_prototype();
		SVGAnimatedAngle();
	};

	class NodeIterator{
	public:
		void set_whatToShow(double value);
		double get_whatToShow();
		void set_filter(NodeFilterCallback* value);
		NodeFilterCallback* get_filter();
		void set_root(Node* value);
		Node* get_root();
		void set_expandEntityReferences(Boolean value);
		Boolean get_expandEntityReferences();
		Node* nextNode();
		void detach();
		Node* previousNode();
		static void set_prototype(NodeIterator* value);
		static NodeIterator* get_prototype();
		NodeIterator();
	};

	class MSDataBindingRecordSetReadonlyExtensions{
	public:
		void set_recordset(Object* value);
		Object* get_recordset();
		Object* namedRecordset(const String& dataMember);
		Object* namedRecordset(const String& dataMember, Object* hierarchy);
	};

	class MSHTMLAppletElementExtensions: public DOML2DeprecatedBorderStyle_HTMLObjectElement {
	public:
		void set_codeType(const String& value);
		String* get_codeType();
		void set_standby(const String& value);
		String* get_standby();
		void set_classid(const String& value);
		String* get_classid();
		void set_useMap(const String& value);
		String* get_useMap();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_data(const String& value);
		String* get_data();
		void set_contentDocument(Document* value);
		Document* get_contentDocument();
		void set_altHtml(const String& value);
		String* get_altHtml();
		void set_declare(Boolean value);
		Boolean get_declare();
		void set_type(const String& value);
		String* get_type();
		void set_BaseHref(const String& value);
		String* get_BaseHref();
	};

	class SVGLocatable{
	public:
		void set_farthestViewportElement(SVGElement* value);
		SVGElement* get_farthestViewportElement();
		void set_nearestViewportElement(SVGElement* value);
		SVGElement* get_nearestViewportElement();
		SVGRect* getBBox();
		SVGMatrix* getTransformToElement(SVGElement* element);
		SVGMatrix* getCTM();
		SVGMatrix* getScreenCTM();
	};

	class MSHTMLTableElementExtensions{
	public:
		void set_cells(HTMLCollection* value);
		HTMLCollection* get_cells();
		void set_height(Object* value);
		Object* get_height();
		void set_cols(double value);
		double get_cols();
		Object* moveRow();
		Object* moveRow(double indexFrom);
		Object* moveRow(double indexFrom, double indexTo);
	};

	class ControlRangeCollection{
	public:
		Element* operator[](double index);
		void set_length(double value);
		double get_length();
		Object* queryCommandValue(const String& cmdID);
		void remove(double index);
		void add(Element* item);
		Boolean queryCommandIndeterm(const String& cmdID);
		void scrollIntoView();
		void scrollIntoView(Object* varargStart);
		Element* item(double index);
		Boolean execCommand(const String& cmdID);
		Boolean execCommand(const String& cmdID, Boolean showUI);
		Boolean execCommand(const String& cmdID, Boolean showUI, Object* value);
		void addElement(Element* item);
		Boolean queryCommandState(const String& cmdID);
		Boolean queryCommandSupported(const String& cmdID);
		Boolean queryCommandEnabled(const String& cmdID);
		String* queryCommandText(const String& cmdID);
		void select();
		static void set_prototype(ControlRangeCollection* value);
		static ControlRangeCollection* get_prototype();
		ControlRangeCollection();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLImageElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class MSHTMLFrameElementExtensions{
	public:
		void set_width(Object* value);
		Object* get_width();
		void set_contentWindow(Window* value);
		Window* get_contentWindow();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		void set_frameBorder(const String& value);
		String* get_frameBorder();
		void set_height(Object* value);
		Object* get_height();
		void set_border(const String& value);
		String* get_border();
		void set_frameSpacing(Object* value);
		Object* get_frameSpacing();
	};

	class WindowSessionStorage{
	public:
		void set_sessionStorage(Storage* value);
		Storage* get_sessionStorage();
	};

	class SVGAnimatedTransformList{
	public:
		void set_animVal(SVGTransformList* value);
		SVGTransformList* get_animVal();
		void set_baseVal(SVGTransformList* value);
		SVGTransformList* get_baseVal();
		static void set_prototype(SVGAnimatedTransformList* value);
		static SVGAnimatedTransformList* get_prototype();
		SVGAnimatedTransformList();
	};

	class SVGFitToViewBox{
	public:
		void set_viewBox(SVGAnimatedRect* value);
		SVGAnimatedRect* get_viewBox();
		void set_preserveAspectRatio(SVGAnimatedPreserveAspectRatio* value);
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
	};

	class MSHTMLAnchorElementExtensions{
	public:
		void set_nameProp(const String& value);
		String* get_nameProp();
		void set_protocolLong(const String& value);
		String* get_protocolLong();
		void set_urn(const String& value);
		String* get_urn();
		void set_mimeType(const String& value);
		String* get_mimeType();
		void set_Methods(const String& value);
		String* get_Methods();
	};

	class SVGPointList{
	public:
		void set_numberOfItems(double value);
		double get_numberOfItems();
		SVGPoint* replaceItem(SVGPoint* newItem, double index);
		SVGPoint* getItem(double index);
		void clear();
		SVGPoint* appendItem(SVGPoint* newItem);
		SVGPoint* initialize(SVGPoint* newItem);
		SVGPoint* removeItem(double index);
		SVGPoint* insertItemBefore(SVGPoint* newItem, double index);
		static void set_prototype(SVGPointList* value);
		static SVGPointList* get_prototype();
		SVGPointList();
	};

	class MSElementCSSInlineStyleExtensions{
	public:
		void doScroll();
		void doScroll(Object* component);
		String* componentFromPoint(double x, double y);
	};

	class SVGAnimatedLengthList{
	public:
		void set_animVal(SVGLengthList* value);
		SVGLengthList* get_animVal();
		void set_baseVal(SVGLengthList* value);
		SVGLengthList* get_baseVal();
		static void set_prototype(SVGAnimatedLengthList* value);
		static SVGAnimatedLengthList* get_prototype();
		SVGAnimatedLengthList();
	};

	class MSHTMLTableDataCellElementExtensions{
	public:
	};

	class SVGAnimatedPreserveAspectRatio{
	public:
		void set_animVal(SVGPreserveAspectRatio* value);
		SVGPreserveAspectRatio* get_animVal();
		void set_baseVal(SVGPreserveAspectRatio* value);
		SVGPreserveAspectRatio* get_baseVal();
		static void set_prototype(SVGAnimatedPreserveAspectRatio* value);
		static SVGAnimatedPreserveAspectRatio* get_prototype();
		SVGAnimatedPreserveAspectRatio();
	};

	class MSCSSStyleRuleExtensions{
	public:
		void set_readOnly(Boolean value);
		Boolean get_readOnly();
	};

	class StyleSheetPageList{
	public:
		StyleSheetPage* operator[](double index);
		void set_length(double value);
		double get_length();
		StyleSheetPage* item(double index);
		static void set_prototype(StyleSheetPageList* value);
		static StyleSheetPageList* get_prototype();
		StyleSheetPageList();
	};

	class EventTarget{
	public:
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, Boolean useCapture);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, Boolean useCapture);
		Boolean dispatchEvent(Event* evt);
	};

	class SVGAngle{
	public:
		void set_valueAsString(const String& value);
		String* get_valueAsString();
		void set_valueInSpecifiedUnits(double value);
		double get_valueInSpecifiedUnits();
		void set_value(double value);
		double get_value();
		void set_unitType(double value);
		double get_unitType();
		void newValueSpecifiedUnits(double unitType, double valueInSpecifiedUnits);
		void convertToSpecifiedUnits(double unitType);
		void set_SVG_ANGLETYPE_RAD(double value);
		double get_SVG_ANGLETYPE_RAD();
		void set_SVG_ANGLETYPE_UNKNOWN(double value);
		double get_SVG_ANGLETYPE_UNKNOWN();
		void set_SVG_ANGLETYPE_UNSPECIFIED(double value);
		double get_SVG_ANGLETYPE_UNSPECIFIED();
		void set_SVG_ANGLETYPE_DEG(double value);
		double get_SVG_ANGLETYPE_DEG();
		void set_SVG_ANGLETYPE_GRAD(double value);
		double get_SVG_ANGLETYPE_GRAD();
		static void set_prototype(SVGAngle* value);
		static SVGAngle* get_prototype();
		SVGAngle();
	};

	class MSHTMLLabelElementExtensions{
	public:
	};

	class CanvasGradient{
	public:
		void addColorStop(double offset, const String& color);
		static void set_prototype(CanvasGradient* value);
		static CanvasGradient* get_prototype();
		CanvasGradient();
	};

	class MSHTMLBodyElementExtensions: public DOML2DeprecatedWordWrapSuppression_HTMLBodyElement {
	public:
		void set_scroll(const String& value);
		String* get_scroll();
		void set_bottomMargin(Object* value);
		Object* get_bottomMargin();
		void set_topMargin(Object* value);
		Object* get_topMargin();
		void set_rightMargin(Object* value);
		Object* get_rightMargin();
		void set_bgProperties(const String& value);
		String* get_bgProperties();
		void set_leftMargin(Object* value);
		Object* get_leftMargin();
		TextRange* createTextRange();
	};

	class MSCommentExtensions{
	public:
		void set_text(const String& value);
		String* get_text();
	};

	class DOML2DeprecatedMarginStyle_HTMLMarqueeElement{
	public:
		void set_vspace(double value);
		double get_vspace();
		void set_hspace(double value);
		double get_hspace();
	};

	class MSCSSRuleList{
	public:
		CSSStyleRule* operator[](double index);
		void set_length(double value);
		double get_length();
		CSSStyleRule* item();
		CSSStyleRule* item(double index);
		static void set_prototype(MSCSSRuleList* value);
		static MSCSSRuleList* get_prototype();
		MSCSSRuleList();
	};

	class CanvasRenderingContext2D{
	public:
		void set_shadowOffsetX(double value);
		double get_shadowOffsetX();
		void set_lineWidth(double value);
		double get_lineWidth();
		void set_miterLimit(double value);
		double get_miterLimit();
		void set_canvas(HTMLCanvasElement* value);
		HTMLCanvasElement* get_canvas();
		void set_strokeStyle(Object* value);
		Object* get_strokeStyle();
		void set_font(const String& value);
		String* get_font();
		void set_globalAlpha(double value);
		double get_globalAlpha();
		void set_globalCompositeOperation(const String& value);
		String* get_globalCompositeOperation();
		void set_shadowOffsetY(double value);
		double get_shadowOffsetY();
		void set_fillStyle(Object* value);
		Object* get_fillStyle();
		void set_lineCap(const String& value);
		String* get_lineCap();
		void set_shadowBlur(double value);
		double get_shadowBlur();
		void set_textAlign(const String& value);
		String* get_textAlign();
		void set_textBaseline(const String& value);
		String* get_textBaseline();
		void set_shadowColor(const String& value);
		String* get_shadowColor();
		void set_lineJoin(const String& value);
		String* get_lineJoin();
		void restore();
		void setTransform(double m11, double m12, double m21, double m22, double dx, double dy);
		void save();
		void arc(double x, double y, double radius, double startAngle, double endAngle);
		void arc(double x, double y, double radius, double startAngle, double endAngle, Boolean anticlockwise);
		TextMetrics* measureText(const String& text);
		Boolean isPointInPath(double x, double y);
		void quadraticCurveTo(double cpx, double cpy, double x, double y);
		void putImageData(ImageData* imagedata, double dx, double dy);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX, double dirtyY, double dirtyWidth, double dirtyHeight);
		void rotate(double angle);
		void fillText(const String& text, double x, double y);
		void fillText(const String& text, double x, double y, double maxWidth);
		void translate(double x, double y);
		void scale(double x, double y);
		CanvasGradient* createRadialGradient(double x0, double y0, double r0, double x1, double y1, double r1);
		void lineTo(double x, double y);
		void fill();
		CanvasPattern* createPattern(HTMLElement* image, const String& repetition);
		void closePath();
		void rect(double x, double y, double w, double h);
		void clip();
		ImageData* createImageData(Object* imageDataOrSw);
		ImageData* createImageData(Object* imageDataOrSw, double sh);
		void clearRect(double x, double y, double w, double h);
		void moveTo(double x, double y);
		ImageData* getImageData(double sx, double sy, double sw, double sh);
		void fillRect(double x, double y, double w, double h);
		void bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);
		void drawImage(HTMLElement* image, double offsetX, double offsetY);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, double height, double canvasOffsetX, double canvasOffsetY, double canvasImageWidth, double canvasImageHeight);
		void transform(double m11, double m12, double m21, double m22, double dx, double dy);
		void stroke();
		void strokeRect(double x, double y, double w, double h);
		void strokeText(const String& text, double x, double y);
		void strokeText(const String& text, double x, double y, double maxWidth);
		void beginPath();
		void arcTo(double x1, double y1, double x2, double y2, double radius);
		CanvasGradient* createLinearGradient(double x0, double y0, double x1, double y1);
		static void set_prototype(CanvasRenderingContext2D* value);
		static CanvasRenderingContext2D* get_prototype();
		CanvasRenderingContext2D();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLObjectElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class DOML2DeprecatedBorderStyle_MSHTMLIFrameElementExtensions{
	public:
		void set_border(const String& value);
		String* get_border();
	};

	class MSHTMLElementRangeExtensions{
	public:
		ControlRangeCollection* createControlRange();
	};

	class MSScreenExtensions{
	public:
		void set_deviceXDPI(double value);
		double get_deviceXDPI();
		void set_fontSmoothingEnabled(Boolean value);
		Boolean get_fontSmoothingEnabled();
		void set_bufferDepth(double value);
		double get_bufferDepth();
		void set_logicalXDPI(double value);
		double get_logicalXDPI();
		void set_systemXDPI(double value);
		double get_systemXDPI();
		void set_logicalYDPI(double value);
		double get_logicalYDPI();
		void set_systemYDPI(double value);
		double get_systemYDPI();
		void set_updateInterval(double value);
		double get_updateInterval();
		void set_deviceYDPI(double value);
		double get_deviceYDPI();
	};

	class MSBorderColorStyle{
	public:
		void set_borderColor(Object* value);
		Object* get_borderColor();
	};

	class SVGTransformList{
	public:
		void set_numberOfItems(double value);
		double get_numberOfItems();
		SVGTransform* getItem(double index);
		SVGTransform* consolidate();
		void clear();
		SVGTransform* appendItem(SVGTransform* newItem);
		SVGTransform* initialize(SVGTransform* newItem);
		SVGTransform* removeItem(double index);
		SVGTransform* insertItemBefore(SVGTransform* newItem, double index);
		SVGTransform* replaceItem(SVGTransform* newItem, double index);
		SVGTransform* createSVGTransformFromMatrix(SVGMatrix* matrix);
		static void set_prototype(SVGTransformList* value);
		static SVGTransformList* get_prototype();
		SVGTransformList();
	};

	class DOML2DeprecatedMarginStyle_MSHTMLIFrameElementExtensions{
	public:
		void set_vspace(double value);
		double get_vspace();
		void set_hspace(double value);
		double get_hspace();
	};

	class SVGAnimatedLength{
	public:
		void set_animVal(SVGLength* value);
		SVGLength* get_animVal();
		void set_baseVal(SVGLength* value);
		SVGLength* get_baseVal();
		static void set_prototype(SVGAnimatedLength* value);
		static SVGAnimatedLength* get_prototype();
		SVGAnimatedLength();
	};

	class SVGAnimatedPoints{
	public:
		void set_points(SVGPointList* value);
		SVGPointList* get_points();
		void set_animatedPoints(SVGPointList* value);
		SVGPointList* get_animatedPoints();
	};

	class WindowModal{
	public:
		void set_dialogArguments(Object* value);
		Object* get_dialogArguments();
		void set_returnValue(Object* value);
		Object* get_returnValue();
	};

	class MSHTMLButtonElementExtensions{
	public:
		void set_status(Object* value);
		Object* get_status();
		TextRange* createTextRange();
	};

	class MSDataBindingExtensions{
	public:
		void set_dataSrc(const String& value);
		String* get_dataSrc();
		void set_dataFormatAs(const String& value);
		String* get_dataFormatAs();
		void set_dataFld(const String& value);
		String* get_dataFld();
	};

	class MSHTMLMetaElementExtensions{
	public:
		void set_url(const String& value);
		String* get_url();
		void set_charset(const String& value);
		String* get_charset();
	};

	class SVGStylable{
	public:
		SVGAnimatedString* get_className();
		void set_style(CSSStyleDeclaration* value);
		CSSStyleDeclaration* get_style();
	};

	class MSHTMLTableCellElementExtensions{
	public:
	};

	class SVGTransformable: public SVGLocatable {
	public:
		void set_transform(SVGAnimatedTransformList* value);
		SVGAnimatedTransformList* get_transform();
	};

	class Screen: public MSScreenExtensions {
	public:
		void set_width(double value);
		double get_width();
		void set_colorDepth(double value);
		double get_colorDepth();
		void set_availWidth(double value);
		double get_availWidth();
		void set_pixelDepth(double value);
		double get_pixelDepth();
		void set_availHeight(double value);
		double get_availHeight();
		void set_height(double value);
		double get_height();
		static void set_prototype(Screen* value);
		static Screen* get_prototype();
		Screen();
	};

	class NavigatorGeolocation{
	public:
		void set_geolocation(Geolocation* value);
		Geolocation* get_geolocation();
	};

	class Coordinates{
	public:
		void set_altitudeAccuracy(double value);
		double get_altitudeAccuracy();
		void set_longitude(double value);
		double get_longitude();
		void set_latitude(double value);
		double get_latitude();
		void set_speed(double value);
		double get_speed();
		void set_heading(double value);
		double get_heading();
		void set_altitude(double value);
		double get_altitude();
		void set_accuracy(double value);
		double get_accuracy();
		static void set_prototype(Coordinates* value);
		static Coordinates* get_prototype();
		Coordinates();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableColElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class EventListener{
	public:
		void operator()(Event* evt);
	};

	class SVGLangSpace{
	public:
		void set_xmllang(const String& value);
		String* get_xmllang();
		void set_xmlspace(const String& value);
		String* get_xmlspace();
	};

	class DataTransfer{
	public:
		void set_effectAllowed(const String& value);
		String* get_effectAllowed();
		void set_dropEffect(const String& value);
		String* get_dropEffect();
		Boolean clearData();
		Boolean clearData(const String& format);
		Boolean setData(const String& format, const String& data);
		String* getData(const String& format);
		static void set_prototype(DataTransfer* value);
		static DataTransfer* get_prototype();
		DataTransfer();
	};

	class Range{
	public:
		void set_startOffset(double value);
		double get_startOffset();
		void set_collapsed(Boolean value);
		Boolean get_collapsed();
		void set_endOffset(double value);
		double get_endOffset();
		void set_startContainer(Node* value);
		Node* get_startContainer();
		void set_endContainer(Node* value);
		Node* get_endContainer();
		void set_commonAncestorContainer(Node* value);
		Node* get_commonAncestorContainer();
		void setStart(Node* refNode, double offset);
		void setEndBefore(Node* refNode);
		void setStartBefore(Node* refNode);
		void selectNode(Node* refNode);
		void detach();
		ClientRect* getBoundingClientRect();
		String* toString();
		double compareBoundaryPoints(double how, Range* sourceRange);
		void insertNode(Node* newNode);
		void collapse(Boolean toStart);
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
		void set_END_TO_END(double value);
		double get_END_TO_END();
		void set_START_TO_START(double value);
		double get_START_TO_START();
		void set_START_TO_END(double value);
		double get_START_TO_END();
		void set_END_TO_START(double value);
		double get_END_TO_START();
		static void set_prototype(Range* value);
		static Range* get_prototype();
		Range();
	};

	class SVGPoint{
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		SVGPoint* matrixTransform(SVGMatrix* matrix);
		static void set_prototype(SVGPoint* value);
		static SVGPoint* get_prototype();
		SVGPoint();
	};

	class MSPluginsCollection{
	public:
		void set_length(double value);
		double get_length();
		void refresh();
		void refresh(Boolean reload);
		static void set_prototype(MSPluginsCollection* value);
		static MSPluginsCollection* get_prototype();
		MSPluginsCollection();
	};

	class MSHTMLFontElementExtensions{
	public:
	};

	class SVGAnimateddoubleList{
	public:
		void set_animVal(SVGdoubleList* value);
		SVGdoubleList* get_animVal();
		void set_baseVal(SVGdoubleList* value);
		SVGdoubleList* get_baseVal();
		static void set_prototype(SVGAnimateddoubleList* value);
		static SVGAnimateddoubleList* get_prototype();
		SVGAnimateddoubleList();
	};

	class MSResourceMetadata{
	public:
		void set_protocol(const String& value);
		String* get_protocol();
		void set_fileSize(const String& value);
		String* get_fileSize();
		void set_fileUpdatedDate(const String& value);
		String* get_fileUpdatedDate();
		void set_nameProp(const String& value);
		String* get_nameProp();
		void set_fileCreatedDate(const String& value);
		String* get_fileCreatedDate();
		void set_fileModifiedDate(const String& value);
		String* get_fileModifiedDate();
		void set_mimeType(const String& value);
		String* get_mimeType();
	};

	class MSHTMLQuoteElementExtensions{
	public:
		void set_dateTime(const String& value);
		String* get_dateTime();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLIFrameElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class NavigatorAbilities{
	public:
	};

	class MSHTMLImageElementExtensions{
	public:
		void set_href(const String& value);
		String* get_href();
	};

	class SVGAnimatedInteger{
	public:
		void set_animVal(double value);
		double get_animVal();
		void set_baseVal(double value);
		double get_baseVal();
		static void set_prototype(SVGAnimatedInteger* value);
		static SVGAnimatedInteger* get_prototype();
		SVGAnimatedInteger();
	};

	class ViewCSS{
	public:
		CSSStyleDeclaration* getComputedStyle(Element* elt);
		CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
	};

	class MSAttrExtensions{
	public:
		void set_expando(Boolean value);
		Boolean get_expando();
	};

	class MSStorageExtensions{
	public:
		void set_remainingSpace(double value);
		double get_remainingSpace();
	};

	class MSLinkStyleExtensions{
	public:
		void set_styleSheet(StyleSheet* value);
		StyleSheet* get_styleSheet();
	};

	class MSHTMLCollectionExtensions{
	public:
		Object* urns(Object* urn);
		Object* tags(Object* tagName);
	};

	class DOML2DeprecatedWordWrapSuppression_HTMLDivElement{
	public:
		void set_noWrap(Boolean value);
		Boolean get_noWrap();
	};

	class DocumentTraversal{
	public:
		NodeIterator* createNodeIterator(Node* root, double whatToShow, NodeFilterCallback* filter, Boolean entityReferenceExpansion);
		TreeWalker* createTreeWalker(Node* root, double whatToShow, NodeFilterCallback* filter, Boolean entityReferenceExpansion);
	};

	class Storage: public MSStorageExtensions {
	public:
		Object* operator[](const String& key);
		Object* operator[](double index);
		void set_length(double value);
		double get_length();
		Object* getItem(const String& key);
		void setItem(const String& key, const String& data);
		void clear();
		void removeItem(const String& key);
		String* key(double index);
		static void set_prototype(Storage* value);
		static Storage* get_prototype();
		Storage();
	};

	class HTMLTableHeaderCellScope{
	public:
		void set_scope(const String& value);
		String* get_scope();
	};

	class TextRangeCollection{
	public:
		TextRange* operator[](double index);
		void set_length(double value);
		double get_length();
		TextRange* item(double index);
		static void set_prototype(TextRangeCollection* value);
		static TextRangeCollection* get_prototype();
		TextRangeCollection();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLLegendElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class DOML2DeprecatedWidthStyle_HTMLTableCellElement{
	public:
		void set_width(double value);
		double get_width();
	};

	class DOML2DeprecatedListdoubleingAndBulletStyle{
	public:
		void set_type(const String& value);
		String* get_type();
	};

	class MSElementExtensions{
	public:
		Boolean msMatchesSelector(const String& selectors);
		Boolean fireEvent(const String& eventName);
		Boolean fireEvent(const String& eventName, Object* eventObj);
	};

	class MSHTMLDocumentViewExtensions{
	public:
		CSSStyleSheet* createStyleSheet();
		CSSStyleSheet* createStyleSheet(const String& href);
		CSSStyleSheet* createStyleSheet(const String& href, double index);
	};

	class SVGAnimateddouble{
	public:
		void set_animVal(double value);
		double get_animVal();
		void set_baseVal(double value);
		double get_baseVal();
		static void set_prototype(SVGAnimateddouble* value);
		static SVGAnimateddouble* get_prototype();
		SVGAnimateddouble();
	};

	class PerformanceTiming{
	public:
		void set_redirectStart(double value);
		double get_redirectStart();
		void set_domainLookupEnd(double value);
		double get_domainLookupEnd();
		void set_responseStart(double value);
		double get_responseStart();
		void set_domComplete(double value);
		double get_domComplete();
		void set_domainLookupStart(double value);
		double get_domainLookupStart();
		void set_loadEventStart(double value);
		double get_loadEventStart();
		void set_msFirstPaint(double value);
		double get_msFirstPaint();
		void set_unloadEventEnd(double value);
		double get_unloadEventEnd();
		void set_fetchStart(double value);
		double get_fetchStart();
		void set_requestStart(double value);
		double get_requestStart();
		void set_domInteractive(double value);
		double get_domInteractive();
		void set_navigationStart(double value);
		double get_navigationStart();
		void set_connectEnd(double value);
		double get_connectEnd();
		void set_loadEventEnd(double value);
		double get_loadEventEnd();
		void set_connectStart(double value);
		double get_connectStart();
		void set_responseEnd(double value);
		double get_responseEnd();
		void set_domLoading(double value);
		double get_domLoading();
		void set_redirectEnd(double value);
		double get_redirectEnd();
		void set_unloadEventStart(double value);
		double get_unloadEventStart();
		void set_domContentLoadedEventStart(double value);
		double get_domContentLoadedEventStart();
		void set_domContentLoadedEventEnd(double value);
		double get_domContentLoadedEventEnd();
		Object* toJSON();
		static void set_prototype(PerformanceTiming* value);
		static PerformanceTiming* get_prototype();
		PerformanceTiming();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLInputElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class EventException{
	public:
		void set_code(double value);
		double get_code();
		void set_message(const String& value);
		String* get_message();
		String* toString();
		void set_DISPATCH_REQUEST_ERR(double value);
		double get_DISPATCH_REQUEST_ERR();
		void set_UNSPECIFIED_EVENT_TYPE_ERR(double value);
		double get_UNSPECIFIED_EVENT_TYPE_ERR();
		static void set_prototype(EventException* value);
		static EventException* get_prototype();
		EventException();
	};

	class MSBorderColorHighlightStyle_HTMLTableCellElement{
	public:
		void set_borderColorLight(Object* value);
		Object* get_borderColorLight();
		void set_borderColorDark(Object* value);
		Object* get_borderColorDark();
	};

	class DOMHTMLImplementation{
	public:
		Document* createHTMLDocument(const String& title);
	};

	class NavigatorOnLine{
	public:
		void set_onLine(Boolean value);
		Boolean get_onLine();
	};

	class SVGElementEventHandlers{
	public:
		typedef Object* (*callback_for_onmouseover)(MouseEvent* ev);
		void set_onmouseover(callback_for_onmouseover value);
		callback_for_onmouseover get_onmouseover();
		typedef Object* (*callback_for_onmousemove)(MouseEvent* ev);
		void set_onmousemove(callback_for_onmousemove value);
		callback_for_onmousemove get_onmousemove();
		typedef Object* (*callback_for_onmouseout)(MouseEvent* ev);
		void set_onmouseout(callback_for_onmouseout value);
		callback_for_onmouseout get_onmouseout();
		typedef Object* (*callback_for_ondblclick)(MouseEvent* ev);
		void set_ondblclick(callback_for_ondblclick value);
		callback_for_ondblclick get_ondblclick();
		typedef Object* (*callback_for_onfocusout)(FocusEvent* ev);
		void set_onfocusout(callback_for_onfocusout value);
		callback_for_onfocusout get_onfocusout();
		typedef Object* (*callback_for_onfocusin)(FocusEvent* ev);
		void set_onfocusin(callback_for_onfocusin value);
		callback_for_onfocusin get_onfocusin();
		typedef Object* (*callback_for_onmousedown)(MouseEvent* ev);
		void set_onmousedown(callback_for_onmousedown value);
		callback_for_onmousedown get_onmousedown();
		typedef Object* (*callback_for_onmouseup)(MouseEvent* ev);
		void set_onmouseup(callback_for_onmouseup value);
		callback_for_onmouseup get_onmouseup();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onclick)(MouseEvent* ev);
		void set_onclick(callback_for_onclick value);
		callback_for_onclick get_onclick();
	};

	class WindowLocalStorage{
	public:
		void set_localStorage(Storage* value);
		Storage* get_localStorage();
	};

	class SVGStringList{
	public:
		void set_numberOfItems(double value);
		double get_numberOfItems();
		String* replaceItem(const String& newItem, double index);
		String* getItem(double index);
		void clear();
		String* appendItem(const String& newItem);
		String* initialize(const String& newItem);
		String* removeItem(double index);
		String* insertItemBefore(const String& newItem, double index);
		static void set_prototype(SVGStringList* value);
		static SVGStringList* get_prototype();
		SVGStringList();
	};

	class XDomainRequest{
	public:
		void set_timeout(double value);
		double get_timeout();
		typedef Object* (*callback_for_onerror)(Event* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onprogress)(Object* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_ontimeout)(Event* ev);
		void set_ontimeout(callback_for_ontimeout value);
		callback_for_ontimeout get_ontimeout();
		void set_responseText(const String& value);
		String* get_responseText();
		void set_contentType(const String& value);
		String* get_contentType();
		void open(const String& method, const String& url);
		void abort();
		void send();
		void send(Object* data);
		static void set_prototype(XDomainRequest* value);
		static XDomainRequest* get_prototype();
		XDomainRequest();
	};

	class DOML2DeprecatedBackgroundColorStyle{
	public:
		void set_bgColor(Object* value);
		Object* get_bgColor();
	};

	class ElementTraversal{
	public:
		void set_childElementCount(double value);
		double get_childElementCount();
		void set_previousElementSibling(Element* value);
		Element* get_previousElementSibling();
		void set_lastElementChild(Element* value);
		Element* get_lastElementChild();
		void set_nextElementSibling(Element* value);
		Element* get_nextElementSibling();
		void set_firstElementChild(Element* value);
		Element* get_firstElementChild();
	};

	class SVGLength{
	public:
		void set_valueAsString(const String& value);
		String* get_valueAsString();
		void set_valueInSpecifiedUnits(double value);
		double get_valueInSpecifiedUnits();
		void set_value(double value);
		double get_value();
		void set_unitType(double value);
		double get_unitType();
		void newValueSpecifiedUnits(double unitType, double valueInSpecifiedUnits);
		void convertToSpecifiedUnits(double unitType);
		void set_SVG_LENGTHTYPE_NUMBER(double value);
		double get_SVG_LENGTHTYPE_NUMBER();
		void set_SVG_LENGTHTYPE_CM(double value);
		double get_SVG_LENGTHTYPE_CM();
		void set_SVG_LENGTHTYPE_PC(double value);
		double get_SVG_LENGTHTYPE_PC();
		void set_SVG_LENGTHTYPE_PERCENTAGE(double value);
		double get_SVG_LENGTHTYPE_PERCENTAGE();
		void set_SVG_LENGTHTYPE_MM(double value);
		double get_SVG_LENGTHTYPE_MM();
		void set_SVG_LENGTHTYPE_PT(double value);
		double get_SVG_LENGTHTYPE_PT();
		void set_SVG_LENGTHTYPE_IN(double value);
		double get_SVG_LENGTHTYPE_IN();
		void set_SVG_LENGTHTYPE_EMS(double value);
		double get_SVG_LENGTHTYPE_EMS();
		void set_SVG_LENGTHTYPE_PX(double value);
		double get_SVG_LENGTHTYPE_PX();
		void set_SVG_LENGTHTYPE_UNKNOWN(double value);
		double get_SVG_LENGTHTYPE_UNKNOWN();
		void set_SVG_LENGTHTYPE_EXS(double value);
		double get_SVG_LENGTHTYPE_EXS();
		static void set_prototype(SVGLength* value);
		static SVGLength* get_prototype();
		SVGLength();
	};

	class MSHTMLAreaElementExtensions{
	public:
	};

	class MSEventObj{
	public:
		void set_nextPage(const String& value);
		String* get_nextPage();
		void set_keyCode(double value);
		double get_keyCode();
		void set_toElement(Element* value);
		Element* get_toElement();
		void set_returnValue(Object* value);
		Object* get_returnValue();
		void set_dataFld(const String& value);
		String* get_dataFld();
		void set_y(double value);
		double get_y();
		void set_dataTransfer(DataTransfer* value);
		DataTransfer* get_dataTransfer();
		void set_propertyName(const String& value);
		String* get_propertyName();
		void set_url(const String& value);
		String* get_url();
		void set_offsetX(double value);
		double get_offsetX();
		void set_recordset(Object* value);
		Object* get_recordset();
		void set_screenX(double value);
		double get_screenX();
		void set_buttonID(double value);
		double get_buttonID();
		void set_wheelDelta(double value);
		double get_wheelDelta();
		void set_reason(double value);
		double get_reason();
		void set_origin(const String& value);
		String* get_origin();
		void set_data(const String& value);
		String* get_data();
		void set_srcFilter(Object* value);
		Object* get_srcFilter();
		void set_boundElements(HTMLCollection* value);
		HTMLCollection* get_boundElements();
		void set_cancelBubble(Boolean value);
		Boolean get_cancelBubble();
		void set_altLeft(Boolean value);
		Boolean get_altLeft();
		void set_behaviorCookie(double value);
		double get_behaviorCookie();
		void set_bookmarks(BookmarkCollection* value);
		BookmarkCollection* get_bookmarks();
		void set_type(const String& value);
		String* get_type();
		void set_repeat(Boolean value);
		Boolean get_repeat();
		void set_srcElement(Element* value);
		Element* get_srcElement();
		void set_source(Window* value);
		Window* get_source();
		void set_fromElement(Element* value);
		Element* get_fromElement();
		void set_offsetY(double value);
		double get_offsetY();
		void set_x(double value);
		double get_x();
		void set_behaviorPart(double value);
		double get_behaviorPart();
		void set_qualifier(const String& value);
		String* get_qualifier();
		void set_altKey(Boolean value);
		Boolean get_altKey();
		void set_ctrlKey(Boolean value);
		Boolean get_ctrlKey();
		void set_clientY(double value);
		double get_clientY();
		void set_shiftKey(Boolean value);
		Boolean get_shiftKey();
		void set_shiftLeft(Boolean value);
		Boolean get_shiftLeft();
		void set_contentOverflow(Boolean value);
		Boolean get_contentOverflow();
		void set_screenY(double value);
		double get_screenY();
		void set_ctrlLeft(Boolean value);
		Boolean get_ctrlLeft();
		void set_button(double value);
		double get_button();
		void set_srcUrn(const String& value);
		String* get_srcUrn();
		void set_clientX(double value);
		double get_clientX();
		void set_actionURL(const String& value);
		String* get_actionURL();
		Object* getAttribute(const String& strAttributeName);
		Object* getAttribute(const String& strAttributeName, double lFlags);
		void setAttribute(const String& strAttributeName, Object* AttributeValue);
		void setAttribute(const String& strAttributeName, Object* AttributeValue, double lFlags);
		Boolean removeAttribute(const String& strAttributeName);
		Boolean removeAttribute(const String& strAttributeName, double lFlags);
		static void set_prototype(MSEventObj* value);
		static MSEventObj* get_prototype();
		MSEventObj();
	};

	class DOML2DeprecatedColorProperty{
	public:
		void set_color(const String& value);
		String* get_color();
	};

	class MSHTMLLIElementExtensions{
	public:
	};

	class Location{
	public:
		void set_hash(const String& value);
		String* get_hash();
		void set_protocol(const String& value);
		String* get_protocol();
		void set_search(const String& value);
		String* get_search();
		void set_href(const String& value);
		String* get_href();
		void set_hostname(const String& value);
		String* get_hostname();
		void set_port(const String& value);
		String* get_port();
		void set_pathname(const String& value);
		String* get_pathname();
		void set_host(const String& value);
		String* get_host();
		void reload();
		void reload(Boolean flag);
		void replace(const String& url);
		void assign(const String& url);
		String* toString();
		static void set_prototype(Location* value);
		static Location* get_prototype();
		Location();
	};

	class MSHTMLOptGroupElementExtensions{
	public:
		void set_index(double value);
		double get_index();
		void set_defaultSelected(Boolean value);
		Boolean get_defaultSelected();
		void set_text(const String& value);
		String* get_text();
		void set_value(const String& value);
		String* get_value();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_selected(Boolean value);
		Boolean get_selected();
	};

	class MSBorderColorHighlightStyle{
	public:
		void set_borderColorLight(Object* value);
		Object* get_borderColorLight();
		void set_borderColorDark(Object* value);
		Object* get_borderColorDark();
	};

	class DOML2DeprecatedSizeProperty_HTMLBaseFontElement{
	public:
		void set_size(double value);
		double get_size();
	};

	class SVGTransform{
	public:
		void set_type(double value);
		double get_type();
		void set_angle(double value);
		double get_angle();
		void set_matrix(SVGMatrix* value);
		SVGMatrix* get_matrix();
		void setTranslate(double tx, double ty);
		void setScale(double sx, double sy);
		void setMatrix(SVGMatrix* matrix);
		void setSkewY(double angle);
		void setRotate(double angle, double cx, double cy);
		void setSkewX(double angle);
		void set_SVG_TRANSFORM_SKEWX(double value);
		double get_SVG_TRANSFORM_SKEWX();
		void set_SVG_TRANSFORM_UNKNOWN(double value);
		double get_SVG_TRANSFORM_UNKNOWN();
		void set_SVG_TRANSFORM_SCALE(double value);
		double get_SVG_TRANSFORM_SCALE();
		void set_SVG_TRANSFORM_TRANSLATE(double value);
		double get_SVG_TRANSFORM_TRANSLATE();
		void set_SVG_TRANSFORM_MATRIX(double value);
		double get_SVG_TRANSFORM_MATRIX();
		void set_SVG_TRANSFORM_ROTATE(double value);
		double get_SVG_TRANSFORM_ROTATE();
		void set_SVG_TRANSFORM_SKEWY(double value);
		double get_SVG_TRANSFORM_SKEWY();
		static void set_prototype(SVGTransform* value);
		static SVGTransform* get_prototype();
		SVGTransform();
	};

	class MSCSSFilter{
	public:
		void set_Percent(double value);
		double get_Percent();
		void set_Enabled(Boolean value);
		Boolean get_Enabled();
		void set_Duration(double value);
		double get_Duration();
		void Play(double Duration);
		void Apply();
		void Stop();
		static void set_prototype(MSCSSFilter* value);
		static MSCSSFilter* get_prototype();
		MSCSSFilter();
	};

	class ViewCSS_SVGSVGElement{
	public:
		CSSStyleDeclaration* getComputedStyle(Element* elt);
		CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
	};

	class SVGURIReference{
	public:
		SVGAnimatedString* get_href();
	};

	class SVGPathSeg{
	public:
		void set_pathSegType(double value);
		double get_pathSegType();
		void set_pathSegTypeAsLetter(const String& value);
		String* get_pathSegTypeAsLetter();
		void set_PATHSEG_MOVETO_REL(double value);
		double get_PATHSEG_MOVETO_REL();
		void set_PATHSEG_LINETO_VERTICAL_REL(double value);
		double get_PATHSEG_LINETO_VERTICAL_REL();
		void set_PATHSEG_CURVETO_CUBIC_SMOOTH_ABS(double value);
		double get_PATHSEG_CURVETO_CUBIC_SMOOTH_ABS();
		void set_PATHSEG_CURVETO_QUADRATIC_REL(double value);
		double get_PATHSEG_CURVETO_QUADRATIC_REL();
		void set_PATHSEG_CURVETO_CUBIC_ABS(double value);
		double get_PATHSEG_CURVETO_CUBIC_ABS();
		void set_PATHSEG_LINETO_HORIZONTAL_ABS(double value);
		double get_PATHSEG_LINETO_HORIZONTAL_ABS();
		void set_PATHSEG_CURVETO_QUADRATIC_ABS(double value);
		double get_PATHSEG_CURVETO_QUADRATIC_ABS();
		void set_PATHSEG_LINETO_ABS(double value);
		double get_PATHSEG_LINETO_ABS();
		void set_PATHSEG_CLOSEPATH(double value);
		double get_PATHSEG_CLOSEPATH();
		void set_PATHSEG_LINETO_HORIZONTAL_REL(double value);
		double get_PATHSEG_LINETO_HORIZONTAL_REL();
		void set_PATHSEG_CURVETO_CUBIC_SMOOTH_REL(double value);
		double get_PATHSEG_CURVETO_CUBIC_SMOOTH_REL();
		void set_PATHSEG_LINETO_REL(double value);
		double get_PATHSEG_LINETO_REL();
		void set_PATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS(double value);
		double get_PATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS();
		void set_PATHSEG_ARC_REL(double value);
		double get_PATHSEG_ARC_REL();
		void set_PATHSEG_CURVETO_CUBIC_REL(double value);
		double get_PATHSEG_CURVETO_CUBIC_REL();
		void set_PATHSEG_UNKNOWN(double value);
		double get_PATHSEG_UNKNOWN();
		void set_PATHSEG_LINETO_VERTICAL_ABS(double value);
		double get_PATHSEG_LINETO_VERTICAL_ABS();
		void set_PATHSEG_ARC_ABS(double value);
		double get_PATHSEG_ARC_ABS();
		void set_PATHSEG_MOVETO_ABS(double value);
		double get_PATHSEG_MOVETO_ABS();
		void set_PATHSEG_CURVETO_QUADRATIC_SMOOTH_REL(double value);
		double get_PATHSEG_CURVETO_QUADRATIC_SMOOTH_REL();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLDivElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class MSEventAttachmentTarget{
	public:
		Boolean attachEvent(const String& event, EventListener* listener);
		void detachEvent(const String& event, EventListener* listener);
	};

	class SVGdouble{
	public:
		void set_value(double value);
		double get_value();
		static void set_prototype(SVGdouble* value);
		static SVGdouble* get_prototype();
		SVGdouble();
	};

	class MSCompatibleInfo{
	public:
		void set_version(const String& value);
		String* get_version();
		void set_userAgent(const String& value);
		String* get_userAgent();
		static void set_prototype(MSCompatibleInfo* value);
		static MSCompatibleInfo* get_prototype();
		MSCompatibleInfo();
	};

	class MSHTMLDocumentEventExtensions{
	public:
		MSEventObj* createEventObject();
		MSEventObj* createEventObject(Object* eventObj);
		Boolean fireEvent(const String& eventName);
		Boolean fireEvent(const String& eventName, Object* eventObj);
	};

	class SVGAnimatedRect{
	public:
		void set_animVal(SVGRect* value);
		SVGRect* get_animVal();
		void set_baseVal(SVGRect* value);
		SVGRect* get_baseVal();
		static void set_prototype(SVGAnimatedRect* value);
		static SVGAnimatedRect* get_prototype();
		SVGAnimatedRect();
	};

	class SVGPathSegList{
	public:
		void set_numberOfItems(double value);
		double get_numberOfItems();
		SVGPathSeg* replaceItem(SVGPathSeg* newItem, double index);
		SVGPathSeg* getItem(double index);
		void clear();
		SVGPathSeg* appendItem(SVGPathSeg* newItem);
		SVGPathSeg* initialize(SVGPathSeg* newItem);
		SVGPathSeg* removeItem(double index);
		SVGPathSeg* insertItemBefore(SVGPathSeg* newItem, double index);
		static void set_prototype(SVGPathSegList* value);
		static SVGPathSegList* get_prototype();
		SVGPathSegList();
	};

	class MSImageResourceExtensions{
	public:
		void set_dynsrc(const String& value);
		String* get_dynsrc();
		void set_vrml(const String& value);
		String* get_vrml();
		void set_lowsrc(const String& value);
		String* get_lowsrc();
		void set_start(const String& value);
		String* get_start();
		void set_loop(double value);
		double get_loop();
	};

	class MSBorderColorHighlightStyle_HTMLTableRowElement{
	public:
		void set_borderColorLight(Object* value);
		Object* get_borderColorLight();
		void set_borderColorDark(Object* value);
		Object* get_borderColorDark();
	};

	class PositionError{
	public:
		void set_code(double value);
		double get_code();
		void set_message(const String& value);
		String* get_message();
		String* toString();
		void set_POSITION_UNAVAILABLE(double value);
		double get_POSITION_UNAVAILABLE();
		void set_PERMISSION_DENIED(double value);
		double get_PERMISSION_DENIED();
		void set_TIMEOUT(double value);
		double get_TIMEOUT();
	};

	class BrowserPublic{
	public:
		static void set_prototype(BrowserPublic* value);
		static BrowserPublic* get_prototype();
		BrowserPublic();
	};

	class MSNamespaceInfoCollection{
	public:
		Object* operator[](const String& index);
		Object* operator()(Object* index);
		void set_length(double value);
		double get_length();
		Object* add();
		Object* add(const String& ns);
		Object* add(const String& ns, const String& urn, Object* implementationUrl);
		Object* item(Object* index);
		static void set_prototype(MSNamespaceInfoCollection* value);
		static MSNamespaceInfoCollection* get_prototype();
		MSNamespaceInfoCollection();
	};

	class SVGElementInstance: public EventTarget {
	public:
		void set_previousSibling(SVGElementInstance* value);
		SVGElementInstance* get_previousSibling();
		void set_parentNode(SVGElementInstance* value);
		SVGElementInstance* get_parentNode();
		void set_lastChild(SVGElementInstance* value);
		SVGElementInstance* get_lastChild();
		void set_nextSibling(SVGElementInstance* value);
		SVGElementInstance* get_nextSibling();
		void set_childNodes(SVGElementInstanceList* value);
		SVGElementInstanceList* get_childNodes();
		void set_correspondingUseElement(SVGUseElement* value);
		SVGUseElement* get_correspondingUseElement();
		void set_correspondingElement(SVGElement* value);
		SVGElement* get_correspondingElement();
		void set_firstChild(SVGElementInstance* value);
		SVGElementInstance* get_firstChild();
		static void set_prototype(SVGElementInstance* value);
		static SVGElementInstance* get_prototype();
		SVGElementInstance();
	};

	class MSHTMLUListElementExtensions{
	public:
	};

	class StyleSheetList{
	public:
		StyleSheet* operator[](double index);
		void set_length(double value);
		double get_length();
		StyleSheet* item();
		StyleSheet* item(double index);
		static void set_prototype(StyleSheetList* value);
		static StyleSheetList* get_prototype();
		StyleSheetList();
	};

	class MSHTMLFormElementExtensions{
	public:
		void set_encoding(const String& value);
		String* get_encoding();
	};

	class DOML2DeprecatedMarginStyle{
	public:
		void set_vspace(double value);
		double get_vspace();
		void set_hspace(double value);
		double get_hspace();
	};

	class Geolocation{
	public:
		void clearWatch(double watchId);
		void getCurrentPosition(PositionCallback* successCallback);
		void getCurrentPosition(PositionCallback* successCallback, PositionErrorCallback* errorCallback);
		void getCurrentPosition(PositionCallback* successCallback, PositionErrorCallback* errorCallback, PositionOptions* options);
		double watchPosition(PositionCallback* successCallback);
		double watchPosition(PositionCallback* successCallback, PositionErrorCallback* errorCallback);
		double watchPosition(PositionCallback* successCallback, PositionErrorCallback* errorCallback, PositionOptions* options);
		static void set_prototype(Geolocation* value);
		static Geolocation* get_prototype();
		Geolocation();
	};

	class MSWindowModeless{
	public:
		void set_dialogTop(Object* value);
		Object* get_dialogTop();
		void set_dialogLeft(Object* value);
		Object* get_dialogLeft();
		void set_dialogWidth(Object* value);
		Object* get_dialogWidth();
		void set_dialogHeight(Object* value);
		Object* get_dialogHeight();
		void set_menuArguments(Object* value);
		Object* get_menuArguments();
	};

	class SVGRect{
	public:
		void set_y(double value);
		double get_y();
		void set_width(double value);
		double get_width();
		void set_x(double value);
		double get_x();
		void set_height(double value);
		double get_height();
		static void set_prototype(SVGRect* value);
		static SVGRect* get_prototype();
		SVGRect();
	};

	class MSNodeExtensions{
	public:
		Node* swapNode(Node* otherNode);
		Node* removeNode();
		Node* removeNode(Boolean deep);
		Node* replaceNode(Node* replacement);
	};

	class KeyboardEventExtensions{
	public:
		void set_keyCode(double value);
		double get_keyCode();
		void set_which(double value);
		double get_which();
		void set_charCode(double value);
		double get_charCode();
	};

	class History{
	public:
		void set_length(double value);
		double get_length();
		void back();
		void back(Object* distance);
		void forward();
		void forward(Object* distance);
		void go();
		void go(Object* delta);
		static void set_prototype(History* value);
		static History* get_prototype();
		History();
	};

	class DocumentStyle{
	public:
		void set_styleSheets(StyleSheetList* value);
		StyleSheetList* get_styleSheets();
	};

	class SVGPathSegCurvetoCubicAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_y1(double value);
		double get_y1();
		void set_x2(double value);
		double get_x2();
		void set_x(double value);
		double get_x();
		void set_x1(double value);
		double get_x1();
		void set_y2(double value);
		double get_y2();
		static void set_prototype(SVGPathSegCurvetoCubicAbs* value);
		static SVGPathSegCurvetoCubicAbs* get_prototype();
		SVGPathSegCurvetoCubicAbs();
	};

	class TimeRanges{
	public:
		void set_length(double value);
		double get_length();
		double start(double index);
		double end(double index);
		static void set_prototype(TimeRanges* value);
		static TimeRanges* get_prototype();
		TimeRanges();
	};

	class SVGPathSegCurvetoQuadraticAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_y1(double value);
		double get_y1();
		void set_x(double value);
		double get_x();
		void set_x1(double value);
		double get_x1();
		static void set_prototype(SVGPathSegCurvetoQuadraticAbs* value);
		static SVGPathSegCurvetoQuadraticAbs* get_prototype();
		SVGPathSegCurvetoQuadraticAbs();
	};

	class MSHTMLSelectElementExtensions{
	public:
	};

	class CSSRule{
	public:
		void set_cssText(const String& value);
		String* get_cssText();
		void set_parentStyleSheet(CSSStyleSheet* value);
		CSSStyleSheet* get_parentStyleSheet();
		void set_parentRule(CSSRule* value);
		CSSRule* get_parentRule();
		void set_type(double value);
		double get_type();
		void set_IMPORT_RULE(double value);
		double get_IMPORT_RULE();
		void set_MEDIA_RULE(double value);
		double get_MEDIA_RULE();
		void set_STYLE_RULE(double value);
		double get_STYLE_RULE();
		void set_NAMESPACE_RULE(double value);
		double get_NAMESPACE_RULE();
		void set_PAGE_RULE(double value);
		double get_PAGE_RULE();
		void set_UNKNOWN_RULE(double value);
		double get_UNKNOWN_RULE();
		void set_FONT_FACE_RULE(double value);
		double get_FONT_FACE_RULE();
		void set_CHARSET_RULE(double value);
		double get_CHARSET_RULE();
		static void set_prototype(CSSRule* value);
		static CSSRule* get_prototype();
		CSSRule();
	};

	class SVGPathSegLinetoAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegLinetoAbs* value);
		static SVGPathSegLinetoAbs* get_prototype();
		SVGPathSegLinetoAbs();
	};

	class MSMouseEventExtensions{
	public:
		void set_toElement(Element* value);
		Element* get_toElement();
		void set_layerY(double value);
		double get_layerY();
		void set_fromElement(Element* value);
		Element* get_fromElement();
		void set_which(double value);
		double get_which();
		void set_layerX(double value);
		double get_layerX();
	};

	class DOML2DeprecatedWordWrapSuppression{
	public:
		void set_noWrap(Boolean value);
		Boolean get_noWrap();
	};

	class MSPopupWindow{
	public:
		void set_document(HTMLDocument* value);
		HTMLDocument* get_document();
		void set_isOpen(Boolean value);
		Boolean get_isOpen();
		void show(double x, double y, double w, double h);
		void show(double x, double y, double w, double h, Object* element);
		void hide();
		static void set_prototype(MSPopupWindow* value);
		static MSPopupWindow* get_prototype();
		MSPopupWindow();
	};

	class SVGMatrix{
	public:
		void set_e(double value);
		double get_e();
		void set_c(double value);
		double get_c();
		void set_a(double value);
		double get_a();
		void set_b(double value);
		double get_b();
		void set_d(double value);
		double get_d();
		void set_f(double value);
		double get_f();
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
		static void set_prototype(SVGMatrix* value);
		static SVGMatrix* get_prototype();
		SVGMatrix();
	};

	class ImageData{
	public:
		void set_width(double value);
		double get_width();
		void set_data(Array* /*{ARRAY_BASE_TYPE=double}*/ value);
		Array* /*{ARRAY_BASE_TYPE=double}*/ get_data();
		void set_height(double value);
		double get_height();
		static void set_prototype(ImageData* value);
		static ImageData* get_prototype();
		ImageData();
	};

	class MSHTMLElementExtensions{
	public:
		typedef Object* (*callback_for_onlosecapture)(MSEventObj* ev);
		void set_onlosecapture(callback_for_onlosecapture value);
		callback_for_onlosecapture get_onlosecapture();
		typedef Object* (*callback_for_onrowexit)(MSEventObj* ev);
		void set_onrowexit(callback_for_onrowexit value);
		callback_for_onrowexit get_onrowexit();
		typedef Object* (*callback_for_oncontrolselect)(MSEventObj* ev);
		void set_oncontrolselect(callback_for_oncontrolselect value);
		callback_for_oncontrolselect get_oncontrolselect();
		typedef Object* (*callback_for_onrowsinserted)(MSEventObj* ev);
		void set_onrowsinserted(callback_for_onrowsinserted value);
		callback_for_onrowsinserted get_onrowsinserted();
		typedef Object* (*callback_for_onmouseleave)(MouseEvent* ev);
		void set_onmouseleave(callback_for_onmouseleave value);
		callback_for_onmouseleave get_onmouseleave();
		void set_document(HTMLDocument* value);
		HTMLDocument* get_document();
		void set_behaviorUrns(MSBehaviorUrnsCollection* value);
		MSBehaviorUrnsCollection* get_behaviorUrns();
		typedef Object* (*callback_for_onpropertychange)(MSEventObj* ev);
		void set_onpropertychange(callback_for_onpropertychange value);
		callback_for_onpropertychange get_onpropertychange();
		void set_children(HTMLCollection* value);
		HTMLCollection* get_children();
		void set_filters(Object* value);
		Object* get_filters();
		typedef Object* (*callback_for_onbeforecut)(DragEvent* ev);
		void set_onbeforecut(callback_for_onbeforecut value);
		callback_for_onbeforecut get_onbeforecut();
		void set_scopeName(const String& value);
		String* get_scopeName();
		typedef Object* (*callback_for_onbeforepaste)(DragEvent* ev);
		void set_onbeforepaste(callback_for_onbeforepaste value);
		callback_for_onbeforepaste get_onbeforepaste();
		typedef Object* (*callback_for_onmove)(MSEventObj* ev);
		void set_onmove(callback_for_onmove value);
		callback_for_onmove get_onmove();
		typedef Object* (*callback_for_onafterupdate)(MSEventObj* ev);
		void set_onafterupdate(callback_for_onafterupdate value);
		callback_for_onafterupdate get_onafterupdate();
		typedef Object* (*callback_for_onbeforecopy)(DragEvent* ev);
		void set_onbeforecopy(callback_for_onbeforecopy value);
		callback_for_onbeforecopy get_onbeforecopy();
		typedef Object* (*callback_for_onlayoutcomplete)(MSEventObj* ev);
		void set_onlayoutcomplete(callback_for_onlayoutcomplete value);
		callback_for_onlayoutcomplete get_onlayoutcomplete();
		typedef Object* (*callback_for_onresizeend)(MSEventObj* ev);
		void set_onresizeend(callback_for_onresizeend value);
		callback_for_onresizeend get_onresizeend();
		void set_uniqueID(const String& value);
		String* get_uniqueID();
		typedef Object* (*callback_for_onhelp)(Event* ev);
		void set_onhelp(callback_for_onhelp value);
		callback_for_onhelp get_onhelp();
		typedef Object* (*callback_for_onbeforeactivate)(UIEvent* ev);
		void set_onbeforeactivate(callback_for_onbeforeactivate value);
		callback_for_onbeforeactivate get_onbeforeactivate();
		void set_isMultiLine(Boolean value);
		Boolean get_isMultiLine();
		void set_uniquedouble(double value);
		double get_uniquedouble();
		void set_tagUrn(const String& value);
		String* get_tagUrn();
		typedef Object* (*callback_for_onfocusout)(FocusEvent* ev);
		void set_onfocusout(callback_for_onfocusout value);
		callback_for_onfocusout get_onfocusout();
		typedef Object* (*callback_for_ondataavailable)(MSEventObj* ev);
		void set_ondataavailable(callback_for_ondataavailable value);
		callback_for_ondataavailable get_ondataavailable();
		void set_hideFocus(Boolean value);
		Boolean get_hideFocus();
		typedef Object* (*callback_for_onbeforeupdate)(MSEventObj* ev);
		void set_onbeforeupdate(callback_for_onbeforeupdate value);
		callback_for_onbeforeupdate get_onbeforeupdate();
		typedef Object* (*callback_for_onfilterchange)(MSEventObj* ev);
		void set_onfilterchange(callback_for_onfilterchange value);
		callback_for_onfilterchange get_onfilterchange();
		typedef Object* (*callback_for_onfocusin)(FocusEvent* ev);
		void set_onfocusin(callback_for_onfocusin value);
		callback_for_onfocusin get_onfocusin();
		void set_recorddouble(Object* value);
		Object* get_recorddouble();
		void set_parentTextEdit(Element* value);
		Element* get_parentTextEdit();
		typedef Object* (*callback_for_ondatasetcomplete)(MSEventObj* ev);
		void set_ondatasetcomplete(callback_for_ondatasetcomplete value);
		callback_for_ondatasetcomplete get_ondatasetcomplete();
		typedef Object* (*callback_for_onbeforedeactivate)(UIEvent* ev);
		void set_onbeforedeactivate(callback_for_onbeforedeactivate value);
		callback_for_onbeforedeactivate get_onbeforedeactivate();
		void set_outerText(const String& value);
		String* get_outerText();
		typedef Object* (*callback_for_onresizestart)(MSEventObj* ev);
		void set_onresizestart(callback_for_onresizestart value);
		callback_for_onresizestart get_onresizestart();
		typedef Object* (*callback_for_onactivate)(UIEvent* ev);
		void set_onactivate(callback_for_onactivate value);
		callback_for_onactivate get_onactivate();
		void set_isTextEdit(Boolean value);
		Boolean get_isTextEdit();
		void set_isDisabled(Boolean value);
		Boolean get_isDisabled();
		void set_readyState(const String& value);
		String* get_readyState();
		void set_all(HTMLCollection* value);
		HTMLCollection* get_all();
		typedef Object* (*callback_for_onmouseenter)(MouseEvent* ev);
		void set_onmouseenter(callback_for_onmouseenter value);
		callback_for_onmouseenter get_onmouseenter();
		typedef Object* (*callback_for_onmovestart)(MSEventObj* ev);
		void set_onmovestart(callback_for_onmovestart value);
		callback_for_onmovestart get_onmovestart();
		typedef Object* (*callback_for_onselectstart)(Event* ev);
		void set_onselectstart(callback_for_onselectstart value);
		callback_for_onselectstart get_onselectstart();
		typedef Object* (*callback_for_onpaste)(DragEvent* ev);
		void set_onpaste(callback_for_onpaste value);
		callback_for_onpaste get_onpaste();
		void set_canHaveHTML(Boolean value);
		Boolean get_canHaveHTML();
		void set_innerText(const String& value);
		String* get_innerText();
		typedef Object* (*callback_for_onerrorupdate)(MSEventObj* ev);
		void set_onerrorupdate(callback_for_onerrorupdate value);
		callback_for_onerrorupdate get_onerrorupdate();
		typedef Object* (*callback_for_ondeactivate)(UIEvent* ev);
		void set_ondeactivate(callback_for_ondeactivate value);
		callback_for_ondeactivate get_ondeactivate();
		typedef Object* (*callback_for_oncut)(DragEvent* ev);
		void set_oncut(callback_for_oncut value);
		callback_for_oncut get_oncut();
		typedef Object* (*callback_for_onmoveend)(MSEventObj* ev);
		void set_onmoveend(callback_for_onmoveend value);
		callback_for_onmoveend get_onmoveend();
		typedef Object* (*callback_for_onresize)(UIEvent* ev);
		void set_onresize(callback_for_onresize value);
		callback_for_onresize get_onresize();
		void set_language(const String& value);
		String* get_language();
		typedef Object* (*callback_for_ondatasetchanged)(MSEventObj* ev);
		void set_ondatasetchanged(callback_for_ondatasetchanged value);
		callback_for_ondatasetchanged get_ondatasetchanged();
		typedef Object* (*callback_for_oncopy)(DragEvent* ev);
		void set_oncopy(callback_for_oncopy value);
		callback_for_oncopy get_oncopy();
		typedef Object* (*callback_for_onrowsdelete)(MSEventObj* ev);
		void set_onrowsdelete(callback_for_onrowsdelete value);
		callback_for_onrowsdelete get_onrowsdelete();
		void set_parentElement(HTMLElement* value);
		HTMLElement* get_parentElement();
		typedef Object* (*callback_for_onrowenter)(MSEventObj* ev);
		void set_onrowenter(callback_for_onrowenter value);
		callback_for_onrowenter get_onrowenter();
		typedef Object* (*callback_for_onbeforeeditfocus)(MSEventObj* ev);
		void set_onbeforeeditfocus(callback_for_onbeforeeditfocus value);
		callback_for_onbeforeeditfocus get_onbeforeeditfocus();
		void set_canHaveChildren(Boolean value);
		Boolean get_canHaveChildren();
		void set_sourceIndex(double value);
		double get_sourceIndex();
		typedef Object* (*callback_for_oncellchange)(MSEventObj* ev);
		void set_oncellchange(callback_for_oncellchange value);
		callback_for_oncellchange get_oncellchange();
		Boolean dragDrop();
		void releaseCapture();
		void addFilter(Object* filter);
		void setCapture();
		void setCapture(Boolean containerCapture);
		Boolean removeBehavior(double cookie);
		Boolean contains(HTMLElement* child);
		Element* applyElement(Element* apply);
		Element* applyElement(Element* apply, const String& where);
		String* replaceAdjacentText(const String& where, const String& newText);
		void mergeAttributes(HTMLElement* source);
		void mergeAttributes(HTMLElement* source, Boolean preserveIdentity);
		Element* insertAdjacentElement(const String& position, Element* insertedElement);
		void insertAdjacentText(const String& where, const String& text);
		String* getAdjacentText(const String& where);
		void removeFilter(Object* filter);
		void setActive();
		double addBehavior(const String& bstrUrl);
		double addBehavior(const String& bstrUrl, Object* factory);
		void clearAttributes();
	};

	class SVGException{
	public:
		void set_code(double value);
		double get_code();
		void set_message(const String& value);
		String* get_message();
		String* toString();
		void set_SVG_MATRIX_NOT_INVERTABLE(double value);
		double get_SVG_MATRIX_NOT_INVERTABLE();
		void set_SVG_WRONG_TYPE_ERR(double value);
		double get_SVG_WRONG_TYPE_ERR();
		void set_SVG_INVALID_VALUE_ERR(double value);
		double get_SVG_INVALID_VALUE_ERR();
		static void set_prototype(SVGException* value);
		static SVGException* get_prototype();
		SVGException();
	};

	class DOML2DeprecatedTableCellHeight{
	public:
		void set_height(Object* value);
		Object* get_height();
	};

	class HTMLTableAlignment{
	public:
		void set_ch(const String& value);
		String* get_ch();
		void set_vAlign(const String& value);
		String* get_vAlign();
		void set_chOff(const String& value);
		String* get_chOff();
	};

	class SVGAnimatedEnumeration{
	public:
		void set_animVal(double value);
		double get_animVal();
		void set_baseVal(double value);
		double get_baseVal();
		static void set_prototype(SVGAnimatedEnumeration* value);
		static SVGAnimatedEnumeration* get_prototype();
		SVGAnimatedEnumeration();
	};

	class DOML2DeprecatedSizeProperty{
	public:
		void set_size(double value);
		double get_size();
	};

	class MSBorderColorStyle_HTMLTableCellElement{
	public:
		void set_borderColor(Object* value);
		Object* get_borderColor();
	};

	class DOML2DeprecatedWidthStyle_HTMLHRElement{
	public:
		void set_width(double value);
		double get_width();
	};

	class DOML2DeprecatedBorderStyle{
	public:
		void set_border(const String& value);
		String* get_border();
	};

	class NavigatorDoNotTrack{
	public:
		void set_msDoNotTrack(const String& value);
		String* get_msDoNotTrack();
	};

	class SVG1_1Properties{
	public:
		void set_fillRule(const String& value);
		String* get_fillRule();
		void set_strokeLinecap(const String& value);
		String* get_strokeLinecap();
		void set_stopColor(const String& value);
		String* get_stopColor();
		void set_glyphOrientationHorizontal(const String& value);
		String* get_glyphOrientationHorizontal();
		void set_kerning(const String& value);
		String* get_kerning();
		void set_alignmentBaseline(const String& value);
		String* get_alignmentBaseline();
		void set_dominantBaseline(const String& value);
		String* get_dominantBaseline();
		void set_fill(const String& value);
		String* get_fill();
		void set_strokeMiterlimit(const String& value);
		String* get_strokeMiterlimit();
		void set_marker(const String& value);
		String* get_marker();
		void set_glyphOrientationVertical(const String& value);
		String* get_glyphOrientationVertical();
		void set_markerMid(const String& value);
		String* get_markerMid();
		void set_textAnchor(const String& value);
		String* get_textAnchor();
		void set_fillOpacity(const String& value);
		String* get_fillOpacity();
		void set_strokeDasharray(const String& value);
		String* get_strokeDasharray();
		void set_mask(const String& value);
		String* get_mask();
		void set_stopOpacity(const String& value);
		String* get_stopOpacity();
		void set_stroke(const String& value);
		String* get_stroke();
		void set_strokeDashoffset(const String& value);
		String* get_strokeDashoffset();
		void set_strokeOpacity(const String& value);
		String* get_strokeOpacity();
		void set_markerStart(const String& value);
		String* get_markerStart();
		void set_pointerEvents(const String& value);
		String* get_pointerEvents();
		void set_baselineShift(const String& value);
		String* get_baselineShift();
		void set_markerEnd(const String& value);
		String* get_markerEnd();
		void set_clipRule(const String& value);
		String* get_clipRule();
		void set_strokeLinejoin(const String& value);
		String* get_strokeLinejoin();
		void set_clipPath(const String& value);
		String* get_clipPath();
		void set_strokeWidth(const String& value);
		String* get_strokeWidth();
	};

	class NamedNodeMap{
	public:
		Node* operator[](double index);
		Node* operator[](const String& name);
		void set_length(double value);
		double get_length();
		Node* removeNamedItemNS(const String& namespaceURI, const String& localName);
		Node* item(double index);
		Node* removeNamedItem(const String& name);
		Node* getNamedItem(const String& name);
		Node* setNamedItem(Node* arg);
		Node* getNamedItemNS(const String& namespaceURI, const String& localName);
		Node* setNamedItemNS(Node* arg);
		static void set_prototype(NamedNodeMap* value);
		static NamedNodeMap* get_prototype();
		NamedNodeMap();
	};

	class MediaList{
	public:
		String* operator[](double index);
		void set_length(double value);
		double get_length();
		void set_mediaText(const String& value);
		String* get_mediaText();
		void deleteMedium(const String& oldMedium);
		void appendMedium(const String& newMedium);
		String* item(double index);
		String* toString();
		static void set_prototype(MediaList* value);
		static MediaList* get_prototype();
		MediaList();
	};

	class SVGPathSegCurvetoQuadraticSmoothAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegCurvetoQuadraticSmoothAbs* value);
		static SVGPathSegCurvetoQuadraticSmoothAbs* get_prototype();
		SVGPathSegCurvetoQuadraticSmoothAbs();
	};

	class SVGLengthList{
	public:
		void set_numberOfItems(double value);
		double get_numberOfItems();
		SVGLength* replaceItem(SVGLength* newItem, double index);
		SVGLength* getItem(double index);
		void clear();
		SVGLength* appendItem(SVGLength* newItem);
		SVGLength* initialize(SVGLength* newItem);
		SVGLength* removeItem(double index);
		SVGLength* insertItemBefore(SVGLength* newItem, double index);
		static void set_prototype(SVGLengthList* value);
		static SVGLengthList* get_prototype();
		SVGLengthList();
	};

	class SVGPathSegCurvetoCubicSmoothRel: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x2(double value);
		double get_x2();
		void set_x(double value);
		double get_x();
		void set_y2(double value);
		double get_y2();
		static void set_prototype(SVGPathSegCurvetoCubicSmoothRel* value);
		static SVGPathSegCurvetoCubicSmoothRel* get_prototype();
		SVGPathSegCurvetoCubicSmoothRel();
	};

	class MSWindowExtensions{
	public:
		void set_status(const String& value);
		String* get_status();
		typedef Object* (*callback_for_onmouseleave)(MouseEvent* ev);
		void set_onmouseleave(callback_for_onmouseleave value);
		callback_for_onmouseleave get_onmouseleave();
		void set_screenLeft(double value);
		double get_screenLeft();
		void set_offscreenBuffering(Object* value);
		Object* get_offscreenBuffering();
		void set_maxConnectionsPerServer(double value);
		double get_maxConnectionsPerServer();
		typedef Object* (*callback_for_onmouseenter)(MouseEvent* ev);
		void set_onmouseenter(callback_for_onmouseenter value);
		callback_for_onmouseenter get_onmouseenter();
		void set_clipboardData(DataTransfer* value);
		DataTransfer* get_clipboardData();
		void set_defaultStatus(const String& value);
		String* get_defaultStatus();
		void set_clientInformation(Navigator* value);
		Navigator* get_clientInformation();
		void set_closed(Boolean value);
		Boolean get_closed();
		typedef Object* (*callback_for_onhelp)(Event* ev);
		void set_onhelp(callback_for_onhelp value);
		callback_for_onhelp get_onhelp();
		void set_external(BrowserPublic* value);
		BrowserPublic* get_external();
		void set_event(MSEventObj* value);
		MSEventObj* get_event();
		typedef Object* (*callback_for_onfocusout)(FocusEvent* ev);
		void set_onfocusout(callback_for_onfocusout value);
		callback_for_onfocusout get_onfocusout();
		void set_screenTop(double value);
		double get_screenTop();
		typedef Object* (*callback_for_onfocusin)(FocusEvent* ev);
		void set_onfocusin(callback_for_onfocusin value);
		callback_for_onfocusin get_onfocusin();
		Window* showModelessDialog();
		Window* showModelessDialog(const String& url);
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
	};

	class MSBehaviorUrnsCollection{
	public:
		void set_length(double value);
		double get_length();
		String* item(double index);
		static void set_prototype(MSBehaviorUrnsCollection* value);
		static MSBehaviorUrnsCollection* get_prototype();
		MSBehaviorUrnsCollection();
	};

	class CSSFontFaceRule: public CSSRule {
	public:
		void set_style(CSSStyleDeclaration* value);
		CSSStyleDeclaration* get_style();
		static void set_prototype(CSSFontFaceRule* value);
		static CSSFontFaceRule* get_prototype();
		CSSFontFaceRule();
	};

	class DOML2DeprecatedBackgroundStyle{
	public:
		void set_background(const String& value);
		String* get_background();
	};

	class MSHTMLHRElementExtensions: public DOML2DeprecatedColorProperty {
	public:
	};

	class AbstractView{
	public:
		void set_styleMedia(StyleMedia* value);
		StyleMedia* get_styleMedia();
		void set_document(Document* value);
		Document* get_document();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLFieldSetElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class DOML2DeprecatedWidthStyle{
	public:
		void set_width(double value);
		double get_width();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLHeadingElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class SVGAnimatedPathData{
	public:
		void set_pathSegList(SVGPathSegList* value);
		SVGPathSegList* get_pathSegList();
	};

	class Position{
	public:
		void set_timestamp(Date* value);
		Date* get_timestamp();
		void set_coords(Coordinates* value);
		Coordinates* get_coords();
		static void set_prototype(Position* value);
		static Position* get_prototype();
		Position();
	};

	class BookmarkCollection{
	public:
		Object* operator[](double index);
		void set_length(double value);
		double get_length();
		Object* item(double index);
		static void set_prototype(BookmarkCollection* value);
		static BookmarkCollection* get_prototype();
		BookmarkCollection();
	};

	class WindowPerformance{
	public:
		void set_performance(Object* value);
		Object* get_performance();
	};

	class MSHTMLDivElementExtensions: public DOML2DeprecatedWordWrapSuppression_HTMLDivElement {
	public:
	};

	class DOML2DeprecatedBorderStyle_HTMLInputElement{
	public:
		void set_border(const String& value);
		String* get_border();
	};

	class HTMLHRElementDOML2Deprecated{
	public:
		void set_noShade(Boolean value);
		Boolean get_noShade();
	};

	class NodeFilterCallback{
	public:
		template<typename ...Args>
		Object* operator()(const Args&... args /*{{ARRAY_BASE_TYPE=Object*}}*/);
	};

	class SVGZoomAndPan{
	public:
		void set_zoomAndPan(double value);
		double get_zoomAndPan();
		void set_SVG_ZOOMANDPAN_MAGNIFY(double value);
		double get_SVG_ZOOMANDPAN_MAGNIFY();
		void set_SVG_ZOOMANDPAN_UNKNOWN(double value);
		double get_SVG_ZOOMANDPAN_UNKNOWN();
		void set_SVG_ZOOMANDPAN_DISABLE(double value);
		double get_SVG_ZOOMANDPAN_DISABLE();
		static void set_prototype(SVGZoomAndPan* value);
		static SVGZoomAndPan* get_prototype();
		SVGZoomAndPan();
	};

	class MSEventExtensions{
	public:
		void set_cancelBubble(Boolean value);
		Boolean get_cancelBubble();
		void set_srcElement(Element* value);
		Element* get_srcElement();
	};

	class ElementCSSInlineStyle: public MSElementCSSInlineStyleExtensions {
	public:
		void set_runtimeStyle(MSStyleCSSProperties* value);
		MSStyleCSSProperties* get_runtimeStyle();
		void set_currentStyle(MSCurrentStyleCSSProperties* value);
		MSCurrentStyleCSSProperties* get_currentStyle();
	};

	class DOMParser{
	public:
		Document* parseFromString(const String& source, const String& mimeType);
		static void set_prototype(DOMParser* value);
		static DOMParser* get_prototype();
		DOMParser();
	};

	class MSMimeTypesCollection{
	public:
		void set_length(double value);
		double get_length();
		static void set_prototype(MSMimeTypesCollection* value);
		static MSMimeTypesCollection* get_prototype();
		MSMimeTypesCollection();
	};

	class StyleSheet{
	public:
		void set_disabled(Boolean value);
		Boolean get_disabled();
		void set_ownerNode(Node* value);
		Node* get_ownerNode();
		void set_parentStyleSheet(StyleSheet* value);
		StyleSheet* get_parentStyleSheet();
		void set_href(const String& value);
		String* get_href();
		void set_media(MediaList* value);
		MediaList* get_media();
		void set_type(const String& value);
		String* get_type();
		void set_title(const String& value);
		String* get_title();
		static void set_prototype(StyleSheet* value);
		static StyleSheet* get_prototype();
		StyleSheet();
	};

	class DOML2DeprecatedBorderStyle_HTMLTableElement{
	public:
		void set_border(const String& value);
		String* get_border();
	};

	class DOML2DeprecatedWidthStyle_HTMLAppletElement{
	public:
		void set_width(double value);
		double get_width();
	};

	class NodeList{
	public:
		Node* operator[](double index);
		void set_length(double value);
		double get_length();
		Node* item(double index);
		static void set_prototype(NodeList* value);
		static NodeList* get_prototype();
		NodeList();
	};

	class XMLSerializer{
	public:
		String* serializeToString(Node* target);
		static void set_prototype(XMLSerializer* value);
		static XMLSerializer* get_prototype();
		XMLSerializer();
	};

	class StyleSheetPage{
	public:
		void set_pseudoClass(const String& value);
		String* get_pseudoClass();
		void set_selector(const String& value);
		String* get_selector();
	};

	class DOML2DeprecatedWordWrapSuppression_HTMLDDElement{
	public:
		void set_noWrap(Boolean value);
		Boolean get_noWrap();
	};

	class MSHTMLTableRowElementExtensions{
	public:
		void set_height(Object* value);
		Object* get_height();
	};

	class DOML2DeprecatedTextFlowControl_HTMLBRElement{
	public:
		void set_clear(const String& value);
		String* get_clear();
	};

	class NodeFilter{
	public:
		double acceptNode(Node* n);
		void set_SHOW_ENTITY_REFERENCE(double value);
		double get_SHOW_ENTITY_REFERENCE();
		void set_SHOW_NOTATION(double value);
		double get_SHOW_NOTATION();
		void set_SHOW_ENTITY(double value);
		double get_SHOW_ENTITY();
		void set_SHOW_DOCUMENT(double value);
		double get_SHOW_DOCUMENT();
		void set_SHOW_PROCESSING_INSTRUCTION(double value);
		double get_SHOW_PROCESSING_INSTRUCTION();
		void set_FILTER_REJECT(double value);
		double get_FILTER_REJECT();
		void set_SHOW_CDATA_SECTION(double value);
		double get_SHOW_CDATA_SECTION();
		void set_FILTER_ACCEPT(double value);
		double get_FILTER_ACCEPT();
		void set_SHOW_ALL(double value);
		double get_SHOW_ALL();
		void set_SHOW_DOCUMENT_TYPE(double value);
		double get_SHOW_DOCUMENT_TYPE();
		void set_SHOW_TEXT(double value);
		double get_SHOW_TEXT();
		void set_SHOW_ELEMENT(double value);
		double get_SHOW_ELEMENT();
		void set_SHOW_COMMENT(double value);
		double get_SHOW_COMMENT();
		void set_FILTER_SKIP(double value);
		double get_FILTER_SKIP();
		void set_SHOW_ATTRIBUTE(double value);
		double get_SHOW_ATTRIBUTE();
		void set_SHOW_DOCUMENT_FRAGMENT(double value);
		double get_SHOW_DOCUMENT_FRAGMENT();
		static void set_prototype(NodeFilter* value);
		static NodeFilter* get_prototype();
		NodeFilter();
	};

	class MSBorderColorStyle_HTMLFrameElement{
	public:
		void set_borderColor(Object* value);
		Object* get_borderColor();
	};

	class MSHTMLOListElementExtensions{
	public:
	};

	class DOML2DeprecatedWordWrapSuppression_HTMLDTElement{
	public:
		void set_noWrap(Boolean value);
		Boolean get_noWrap();
	};

	class ScreenView: public AbstractView {
	public:
		void set_outerWidth(double value);
		double get_outerWidth();
		void set_pageXOffset(double value);
		double get_pageXOffset();
		void set_innerWidth(double value);
		double get_innerWidth();
		void set_pageYOffset(double value);
		double get_pageYOffset();
		void set_screenY(double value);
		double get_screenY();
		void set_outerHeight(double value);
		double get_outerHeight();
		void set_screen(Screen* value);
		Screen* get_screen();
		void set_innerHeight(double value);
		double get_innerHeight();
		void set_screenX(double value);
		double get_screenX();
		void scroll();
		void scroll(double x);
		void scroll(double x, double y);
		void scrollBy();
		void scrollBy(double x);
		void scrollBy(double x, double y);
		void scrollTo();
		void scrollTo(double x);
		void scrollTo(double x, double y);
	};

	class DOML2DeprecatedMarginStyle_HTMLObjectElement{
	public:
		void set_vspace(double value);
		double get_vspace();
		void set_hspace(double value);
		double get_hspace();
	};

	class DOML2DeprecatedMarginStyle_HTMLInputElement{
	public:
		void set_vspace(double value);
		double get_vspace();
		void set_hspace(double value);
		double get_hspace();
	};

	class MSHTMLTableSectionElementExtensions: public DOML2DeprecatedBackgroundColorStyle {
	public:
		Object* moveRow();
		Object* moveRow(double indexFrom);
		Object* moveRow(double indexFrom, double indexTo);
	};

	class MediaError{
	public:
		void set_code(double value);
		double get_code();
		void set_MEDIA_ERR_ABORTED(double value);
		double get_MEDIA_ERR_ABORTED();
		void set_MEDIA_ERR_NETWORK(double value);
		double get_MEDIA_ERR_NETWORK();
		void set_MEDIA_ERR_SRC_NOT_SUPPORTED(double value);
		double get_MEDIA_ERR_SRC_NOT_SUPPORTED();
		void set_MEDIA_ERR_DECODE(double value);
		double get_MEDIA_ERR_DECODE();
		static void set_prototype(MediaError* value);
		static MediaError* get_prototype();
		MediaError();
	};

	class SVGdoubleList{
	public:
		void set_numberOfItems(double value);
		double get_numberOfItems();
		SVGdouble* replaceItem(SVGdouble* newItem, double index);
		SVGdouble* getItem(double index);
		void clear();
		SVGdouble* appendItem(SVGdouble* newItem);
		SVGdouble* initialize(SVGdouble* newItem);
		SVGdouble* removeItem(double index);
		SVGdouble* insertItemBefore(SVGdouble* newItem, double index);
		static void set_prototype(SVGdoubleList* value);
		static SVGdoubleList* get_prototype();
		SVGdoubleList();
	};

	class CanvasPattern{
	public:
		static void set_prototype(CanvasPattern* value);
		static CanvasPattern* get_prototype();
		CanvasPattern();
	};

	class MSHTMLFrameSetElementExtensions{
	public:
		void set_name(const String& value);
		String* get_name();
		void set_frameBorder(const String& value);
		String* get_frameBorder();
		void set_border(const String& value);
		String* get_border();
		void set_frameSpacing(Object* value);
		Object* get_frameSpacing();
	};

	class DOML2DeprecatedTextFlowControl_HTMLBlockElement{
	public:
		void set_clear(const String& value);
		String* get_clear();
	};

	class PositionOptions{
	public:
		void set_enableHighAccuracy(Boolean value);
		Boolean get_enableHighAccuracy();
		void set_timeout(double value);
		double get_timeout();
		void set_maximumAge(double value);
		double get_maximumAge();
	};

	class MSHTMLMenuElementExtensions{
	public:
	};

	class DocumentView{
	public:
		void set_defaultView(AbstractView* value);
		AbstractView* get_defaultView();
		Element* elementFromPoint(double x, double y);
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableSectionElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class SVGPathSegLinetoRel: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegLinetoRel* value);
		static SVGPathSegLinetoRel* get_prototype();
		SVGPathSegLinetoRel();
	};

	class MSHTMLDocumentSelection{
	public:
		void set_selection(MSSelection* value);
		MSSelection* get_selection();
	};

	class DOMException{
	public:
		void set_code(double value);
		double get_code();
		void set_message(const String& value);
		String* get_message();
		String* toString();
		void set_HIERARCHY_REQUEST_ERR(double value);
		double get_HIERARCHY_REQUEST_ERR();
		void set_NO_MODIFICATION_ALLOWED_ERR(double value);
		double get_NO_MODIFICATION_ALLOWED_ERR();
		void set_INVALID_MODIFICATION_ERR(double value);
		double get_INVALID_MODIFICATION_ERR();
		void set_NAMESPACE_ERR(double value);
		double get_NAMESPACE_ERR();
		void set_INVALID_CHARACTER_ERR(double value);
		double get_INVALID_CHARACTER_ERR();
		void set_TYPE_MISMATCH_ERR(double value);
		double get_TYPE_MISMATCH_ERR();
		void set_ABORT_ERR(double value);
		double get_ABORT_ERR();
		void set_INVALID_STATE_ERR(double value);
		double get_INVALID_STATE_ERR();
		void set_SECURITY_ERR(double value);
		double get_SECURITY_ERR();
		void set_NETWORK_ERR(double value);
		double get_NETWORK_ERR();
		void set_WRONG_DOCUMENT_ERR(double value);
		double get_WRONG_DOCUMENT_ERR();
		void set_QUOTA_EXCEEDED_ERR(double value);
		double get_QUOTA_EXCEEDED_ERR();
		void set_INDEX_SIZE_ERR(double value);
		double get_INDEX_SIZE_ERR();
		void set_DOMSTRING_SIZE_ERR(double value);
		double get_DOMSTRING_SIZE_ERR();
		void set_SYNTAX_ERR(double value);
		double get_SYNTAX_ERR();
		void set_SERIALIZE_ERR(double value);
		double get_SERIALIZE_ERR();
		void set_VALIDATION_ERR(double value);
		double get_VALIDATION_ERR();
		void set_NOT_FOUND_ERR(double value);
		double get_NOT_FOUND_ERR();
		void set_URL_MISMATCH_ERR(double value);
		double get_URL_MISMATCH_ERR();
		void set_PARSE_ERR(double value);
		double get_PARSE_ERR();
		void set_NO_DATA_ALLOWED_ERR(double value);
		double get_NO_DATA_ALLOWED_ERR();
		void set_NOT_SUPPORTED_ERR(double value);
		double get_NOT_SUPPORTED_ERR();
		void set_INVALID_ACCESS_ERR(double value);
		double get_INVALID_ACCESS_ERR();
		void set_INUSE_ATTRIBUTE_ERR(double value);
		double get_INUSE_ATTRIBUTE_ERR();
		static void set_prototype(DOMException* value);
		static DOMException* get_prototype();
		DOMException();
	};

	class MSCompatibleInfoCollection{
	public:
		void set_length(double value);
		double get_length();
		MSCompatibleInfo* item(double index);
		static void set_prototype(MSCompatibleInfoCollection* value);
		static MSCompatibleInfoCollection* get_prototype();
		MSCompatibleInfoCollection();
	};

	class MSHTMLIsIndexElementExtensions{
	public:
		void set_action(const String& value);
		String* get_action();
	};

	class SVGAnimatedBoolean{
	public:
		void set_animVal(Boolean value);
		Boolean get_animVal();
		void set_baseVal(Boolean value);
		Boolean get_baseVal();
		static void set_prototype(SVGAnimatedBoolean* value);
		static SVGAnimatedBoolean* get_prototype();
		SVGAnimatedBoolean();
	};

	class MSHTMLIFrameElementExtensions: public DOML2DeprecatedMarginStyle_MSHTMLIFrameElementExtensions , public DOML2DeprecatedBorderStyle_MSHTMLIFrameElementExtensions {
	public:
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		void set_frameSpacing(Object* value);
		Object* get_frameSpacing();
		void set_noResize(Boolean value);
		Boolean get_noResize();
	};

	class SVGPreserveAspectRatio{
	public:
		void set_align(double value);
		double get_align();
		void set_meetOrSlice(double value);
		double get_meetOrSlice();
		void set_SVG_PRESERVEASPECTRATIO_NONE(double value);
		double get_SVG_PRESERVEASPECTRATIO_NONE();
		void set_SVG_PRESERVEASPECTRATIO_XMINYMID(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMINYMID();
		void set_SVG_PRESERVEASPECTRATIO_XMAXYMIN(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMAXYMIN();
		void set_SVG_PRESERVEASPECTRATIO_XMINYMAX(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMINYMAX();
		void set_SVG_PRESERVEASPECTRATIO_XMAXYMAX(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMAXYMAX();
		void set_SVG_MEETORSLICE_UNKNOWN(double value);
		double get_SVG_MEETORSLICE_UNKNOWN();
		void set_SVG_PRESERVEASPECTRATIO_XMAXYMID(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMAXYMID();
		void set_SVG_PRESERVEASPECTRATIO_XMIDYMAX(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMIDYMAX();
		void set_SVG_PRESERVEASPECTRATIO_XMINYMIN(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMINYMIN();
		void set_SVG_MEETORSLICE_MEET(double value);
		double get_SVG_MEETORSLICE_MEET();
		void set_SVG_PRESERVEASPECTRATIO_XMIDYMID(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMIDYMID();
		void set_SVG_PRESERVEASPECTRATIO_XMIDYMIN(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMIDYMIN();
		void set_SVG_MEETORSLICE_SLICE(double value);
		double get_SVG_MEETORSLICE_SLICE();
		void set_SVG_PRESERVEASPECTRATIO_UNKNOWN(double value);
		double get_SVG_PRESERVEASPECTRATIO_UNKNOWN();
		static void set_prototype(SVGPreserveAspectRatio* value);
		static SVGPreserveAspectRatio* get_prototype();
		SVGPreserveAspectRatio();
	};

	class MSBorderColorStyle_HTMLTableRowElement{
	public:
		void set_borderColor(Object* value);
		Object* get_borderColor();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableCaptionElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class PerformanceNavigation{
	public:
		void set_redirectCount(double value);
		double get_redirectCount();
		void set_type(double value);
		double get_type();
		Object* toJSON();
		void set_TYPE_RELOAD(double value);
		double get_TYPE_RELOAD();
		void set_TYPE_RESERVED(double value);
		double get_TYPE_RESERVED();
		void set_TYPE_BACK_FORWARD(double value);
		double get_TYPE_BACK_FORWARD();
		void set_TYPE_NAVIGATE(double value);
		double get_TYPE_NAVIGATE();
		static void set_prototype(PerformanceNavigation* value);
		static PerformanceNavigation* get_prototype();
		PerformanceNavigation();
	};

	class HTMLBodyElementDOML2Deprecated{
	public:
		void set_link(Object* value);
		Object* get_link();
		void set_aLink(Object* value);
		Object* get_aLink();
		void set_text(Object* value);
		Object* get_text();
		void set_vLink(Object* value);
		Object* get_vLink();
	};

	class PositionCallback{
	public:
		void operator()(Position* position);
	};

	class SVGElementInstanceList{
	public:
		void set_length(double value);
		double get_length();
		SVGElementInstance* item(double index);
		static void set_prototype(SVGElementInstanceList* value);
		static SVGElementInstanceList* get_prototype();
		SVGElementInstanceList();
	};

	class MSDataBindingRecordSetExtensions{
	public:
		void set_recordset(Object* value);
		Object* get_recordset();
		Object* namedRecordset(const String& dataMember);
		Object* namedRecordset(const String& dataMember, Object* hierarchy);
	};

	class CSSRuleList{
	public:
		CSSRule* operator[](double index);
		void set_length(double value);
		double get_length();
		CSSRule* item(double index);
		static void set_prototype(CSSRuleList* value);
		static CSSRuleList* get_prototype();
		CSSRuleList();
	};

	class MSHTMLTableColElementExtensions{
	public:
	};

	class LinkStyle{
	public:
		void set_sheet(StyleSheet* value);
		StyleSheet* get_sheet();
	};

	class MSHTMLMarqueeElementExtensions{
	public:
	};

	class MSXMLHttpRequestExtensions{
	public:
		void set_responseBody(Object* value);
		Object* get_responseBody();
		void set_timeout(double value);
		double get_timeout();
		typedef Object* (*callback_for_ontimeout)(Event* ev);
		void set_ontimeout(callback_for_ontimeout value);
		callback_for_ontimeout get_ontimeout();
	};

	class ClientRectList{
	public:
		ClientRect* operator[](double index);
		void set_length(double value);
		double get_length();
		ClientRect* item(double index);
		static void set_prototype(ClientRectList* value);
		static ClientRectList* get_prototype();
		ClientRectList();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableCellElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class HTMLBodyElement{
	public:
		typedef Object* (*callback_for_onpopstate)(PopStateEvent* ev);
		void set_onpopstate(callback_for_onpopstate value);
		callback_for_onpopstate get_onpopstate();
	};

	class HTMLAnchorElement{
	public:
		void set_text(const String& value);
		String* get_text();
	};

	class HTMLInputElement{
	public:
		void set_validationMessage(const String& value);
		String* get_validationMessage();
		void set_files(FileList* value);
		FileList* get_files();
		void set_max(const String& value);
		String* get_max();
		void set_formTarget(const String& value);
		String* get_formTarget();
		void set_willValidate(Boolean value);
		Boolean get_willValidate();
		void set_step(const String& value);
		String* get_step();
		void set_autofocus(Boolean value);
		Boolean get_autofocus();
		void set_required(Boolean value);
		Boolean get_required();
		void set_formEnctype(const String& value);
		String* get_formEnctype();
		void set_valueAsdouble(double value);
		double get_valueAsdouble();
		void set_placeholder(const String& value);
		String* get_placeholder();
		void set_formMethod(const String& value);
		String* get_formMethod();
		void set_list(HTMLElement* value);
		HTMLElement* get_list();
		void set_autocomplete(const String& value);
		String* get_autocomplete();
		void set_min(const String& value);
		String* get_min();
		void set_formAction(const String& value);
		String* get_formAction();
		void set_pattern(const String& value);
		String* get_pattern();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_formNoValidate(const String& value);
		String* get_formNoValidate();
		void set_multiple(Boolean value);
		Boolean get_multiple();
		Boolean checkValidity();
		void stepDown();
		void stepDown(double n);
		void stepUp();
		void stepUp(double n);
		void setCustomValidity(const String& error);
	};

	class MSCSSScrollTranslationProperties{
	public:
		void set_msScrollTranslation(const String& value);
		String* get_msScrollTranslation();
	};

	class MSGesture{
	public:
		void set_target(Element* value);
		Element* get_target();
		void addPointer(double pointerId);
		void stop();
		static void set_prototype(MSGesture* value);
		static MSGesture* get_prototype();
		MSGesture();
	};

	class TextTrackCue: public EventTarget {
	public:
		typedef Object* (*callback_for_onenter)(Event* ev);
		void set_onenter(callback_for_onenter value);
		callback_for_onenter get_onenter();
		void set_track(TextTrack* value);
		TextTrack* get_track();
		void set_endTime(double value);
		double get_endTime();
		void set_text(const String& value);
		String* get_text();
		void set_pauseOnExit(Boolean value);
		Boolean get_pauseOnExit();
		void set_id(const String& value);
		String* get_id();
		void set_startTime(double value);
		double get_startTime();
		typedef Object* (*callback_for_onexit)(Event* ev);
		void set_onexit(callback_for_onexit value);
		callback_for_onexit get_onexit();
		DocumentFragment* getCueAsHTML();
		static void set_prototype(TextTrackCue* value);
		static TextTrackCue* get_prototype();
		TextTrackCue();
	};

	class CSSFlexibleBoxProperties{
	public:
		void set_msFlex(const String& value);
		String* get_msFlex();
		void set_msFlexDirection(const String& value);
		String* get_msFlexDirection();
		void set_msFlexNegative(const String& value);
		String* get_msFlexNegative();
		void set_msFlexPack(const String& value);
		String* get_msFlexPack();
		void set_msFlexWrap(const String& value);
		String* get_msFlexWrap();
		void set_msFlexItemAlign(const String& value);
		String* get_msFlexItemAlign();
		void set_msFlexOrder(const String& value);
		String* get_msFlexOrder();
		void set_msFlexPositive(const String& value);
		String* get_msFlexPositive();
		void set_msFlexAlign(const String& value);
		String* get_msFlexAlign();
		void set_msFlexFlow(const String& value);
		String* get_msFlexFlow();
		void set_msFlexPreferredSize(const String& value);
		String* get_msFlexPreferredSize();
		void set_msFlexLinePack(const String& value);
		String* get_msFlexLinePack();
	};

	class DOMTokenList{
	public:
		String* operator[](double index);
		void set_length(double value);
		double get_length();
		Boolean contains(const String& token);
		void remove(const String& token);
		Boolean toggle(const String& token);
		void add(const String& token);
		String* item(double index);
		String* toString();
		static void set_prototype(DOMTokenList* value);
		static DOMTokenList* get_prototype();
		DOMTokenList();
	};

	class MessageChannel{
	public:
		void set_port2(MessagePort* value);
		MessagePort* get_port2();
		void set_port1(MessagePort* value);
		MessagePort* get_port1();
		static void set_prototype(MessageChannel* value);
		static MessageChannel* get_prototype();
		MessageChannel();
	};

	class MediaQueryList{
	public:
		void set_matches(Boolean value);
		Boolean get_matches();
		void set_media(const String& value);
		String* get_media();
		void addListener(MediaQueryListListener* listener);
		void removeListener(MediaQueryListListener* listener);
		static void set_prototype(MediaQueryList* value);
		static MediaQueryList* get_prototype();
		MediaQueryList();
	};

	class DOMError{
	public:
		void set_name(const String& value);
		String* get_name();
		String* toString();
		static void set_prototype(DOMError* value);
		static DOMError* get_prototype();
		DOMError();
	};

	class CSSFontsProperties{
	public:
		void set_msFontFeatureSettings(const String& value);
		String* get_msFontFeatureSettings();
		void set_fontFeatureSettings(const String& value);
		String* get_fontFeatureSettings();
	};

	class WebSocket: public EventTarget {
	public:
		void set_protocol(const String& value);
		String* get_protocol();
		void set_readyState(double value);
		double get_readyState();
		void set_bufferedAmount(double value);
		double get_bufferedAmount();
		typedef Object* (*callback_for_onopen)(Event* ev);
		void set_onopen(callback_for_onopen value);
		callback_for_onopen get_onopen();
		void set_extensions(const String& value);
		String* get_extensions();
		typedef Object* (*callback_for_onmessage)(Object* ev);
		void set_onmessage(callback_for_onmessage value);
		callback_for_onmessage get_onmessage();
		typedef Object* (*callback_for_onclose)(CloseEvent* ev);
		void set_onclose(callback_for_onclose value);
		callback_for_onclose get_onclose();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		void set_binaryType(const String& value);
		String* get_binaryType();
		void set_url(const String& value);
		String* get_url();
		void close();
		void close(double code);
		void close(double code, const String& reason);
		void send(Object* data);
		void set_OPEN(double value);
		double get_OPEN();
		void set_CLOSING(double value);
		double get_CLOSING();
		void set_CONNECTING(double value);
		double get_CONNECTING();
		void set_CLOSED(double value);
		double get_CLOSED();
		static void set_prototype(WebSocket* value);
		static WebSocket* get_prototype();
		WebSocket(const String& url);
		WebSocket(const String& url, const String& prototcol);
		WebSocket(const String& url, Array* /*{ARRAY_BASE_TYPE=String*}*/ prototcol);
	};

	class HTMLCanvasElement{
	public:
		Blob* msToBlob();
	};

	class IDBObjectStore{
	public:
		void set_indexNames(DOMStringList* value);
		DOMStringList* get_indexNames();
		void set_name(const String& value);
		String* get_name();
		void set_transaction(IDBTransaction* value);
		IDBTransaction* get_transaction();
		void set_keyPath(const String& value);
		String* get_keyPath();
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
		IDBRequest* delet(Object* key);
		static void set_prototype(IDBObjectStore* value);
		static IDBObjectStore* get_prototype();
		IDBObjectStore();
	};

	class ObjectURLOptions{
	public:
		void set_oneTimeOnly(Boolean value);
		Boolean get_oneTimeOnly();
	};

	class MSCSSSelectionBoundaryProperties{
	public:
		void set_msUserSelect(const String& value);
		String* get_msUserSelect();
	};

	class SVGFilterPrimitiveStandardAttributes: public SVGStylable {
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		SVGAnimatedString* get_result();
	};

	class IDBIndex{
	public:
		void set_unique(Boolean value);
		Boolean get_unique();
		void set_name(const String& value);
		String* get_name();
		void set_keyPath(const String& value);
		String* get_keyPath();
		void set_objectStore(IDBObjectStore* value);
		IDBObjectStore* get_objectStore();
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
		static void set_prototype(IDBIndex* value);
		static IDBIndex* get_prototype();
		IDBIndex();
	};

	class FileList{
	public:
		File* operator[](double index);
		void set_length(double value);
		double get_length();
		File* item(double index);
		static void set_prototype(FileList* value);
		static FileList* get_prototype();
		FileList();
	};

	class IDBCursor{
	public:
		void set_source(Object* value);
		Object* get_source();
		void set_direction(const String& value);
		String* get_direction();
		void set_key(Object* value);
		Object* get_key();
		void set_primaryKey(Object* value);
		Object* get_primaryKey();
		void advance(double count);
		IDBRequest* delet();
		void continu();
		void continu(Object* key);
		IDBRequest* update(Object* value);
		static void set_prototype(IDBCursor* value);
		static IDBCursor* get_prototype();
		IDBCursor();
	};

	class CSSAnimationsProperties{
	public:
		void set_animationFillMode(const String& value);
		String* get_animationFillMode();
		void set_msAnimationDirection(const String& value);
		String* get_msAnimationDirection();
		void set_msAnimationDelay(const String& value);
		String* get_msAnimationDelay();
		void set_msAnimationFillMode(const String& value);
		String* get_msAnimationFillMode();
		void set_animationIterationCount(const String& value);
		String* get_animationIterationCount();
		void set_msAnimationPlayState(const String& value);
		String* get_msAnimationPlayState();
		void set_msAnimationIterationCount(const String& value);
		String* get_msAnimationIterationCount();
		void set_animationDelay(const String& value);
		String* get_animationDelay();
		void set_animationTimingFunction(const String& value);
		String* get_animationTimingFunction();
		void set_msAnimation(const String& value);
		String* get_msAnimation();
		void set_animation(const String& value);
		String* get_animation();
		void set_animationDirection(const String& value);
		String* get_animationDirection();
		void set_animationDuration(const String& value);
		String* get_animationDuration();
		void set_animationName(const String& value);
		String* get_animationName();
		void set_animationPlayState(const String& value);
		String* get_animationPlayState();
		void set_msAnimationTimingFunction(const String& value);
		String* get_msAnimationTimingFunction();
		void set_msAnimationName(const String& value);
		String* get_msAnimationName();
		void set_msAnimationDuration(const String& value);
		String* get_msAnimationDuration();
	};

	class URL{
	public:
		void revokeObjectURL(const String& url);
		String* createObjectURL(Object* object);
		String* createObjectURL(Object* object, ObjectURLOptions* options);
	};

	class IDBCursorWithValue: public IDBCursor {
	public:
		void set_value(Object* value);
		Object* get_value();
		static void set_prototype(IDBCursorWithValue* value);
		static IDBCursorWithValue* get_prototype();
		IDBCursorWithValue();
	};

	class HTMLTextAreaElement{
	public:
		void set_validationMessage(const String& value);
		String* get_validationMessage();
		void set_autofocus(Boolean value);
		Boolean get_autofocus();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_required(Boolean value);
		Boolean get_required();
		void set_maxLength(double value);
		double get_maxLength();
		void set_willValidate(Boolean value);
		Boolean get_willValidate();
		void set_placeholder(const String& value);
		String* get_placeholder();
		Boolean checkValidity();
		void setCustomValidity(const String& error);
	};

	class XMLHttpRequestEventTarget: public EventTarget {
	public:
		typedef Object* (*callback_for_onprogress)(ProgressEvent* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onload)(Object* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_ontimeout)(Object* ev);
		void set_ontimeout(callback_for_ontimeout value);
		callback_for_ontimeout get_ontimeout();
		typedef Object* (*callback_for_onabort)(Object* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		typedef Object* (*callback_for_onloadstart)(Object* ev);
		void set_onloadstart(callback_for_onloadstart value);
		callback_for_onloadstart get_onloadstart();
		typedef Object* (*callback_for_onloadend)(ProgressEvent* ev);
		void set_onloadend(callback_for_onloadend value);
		callback_for_onloadend get_onloadend();
		static void set_prototype(XMLHttpRequestEventTarget* value);
		static XMLHttpRequestEventTarget* get_prototype();
		XMLHttpRequestEventTarget();
	};

	class IDBEnvironment{
	public:
		void set_msIndexedDB(IDBFactory* value);
		IDBFactory* get_msIndexedDB();
		void set_indexedDB(IDBFactory* value);
		IDBFactory* get_indexedDB();
	};

	class AudioTrackList: public EventTarget {
	public:
		AudioTrack* operator[](double index);
		void set_length(double value);
		double get_length();
		typedef Object* (*callback_for_onchange)(Object* ev);
		void set_onchange(callback_for_onchange value);
		callback_for_onchange get_onchange();
		typedef Object* (*callback_for_onaddtrack)(TrackEvent* ev);
		void set_onaddtrack(callback_for_onaddtrack value);
		callback_for_onaddtrack get_onaddtrack();
		AudioTrack* getTrackById(const String& id);
		AudioTrack* item(double index);
		static void set_prototype(AudioTrackList* value);
		static AudioTrackList* get_prototype();
		AudioTrackList();
	};

	class MSBaseReader: public EventTarget {
	public:
		typedef Object* (*callback_for_onprogress)(ProgressEvent* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		void set_readyState(double value);
		double get_readyState();
		typedef Object* (*callback_for_onabort)(Object* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		typedef Object* (*callback_for_onloadend)(ProgressEvent* ev);
		void set_onloadend(callback_for_onloadend value);
		callback_for_onloadend get_onloadend();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onload)(Object* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onloadstart)(Object* ev);
		void set_onloadstart(callback_for_onloadstart value);
		callback_for_onloadstart get_onloadstart();
		void set_result(Object* value);
		Object* get_result();
		void abort();
		void set_LOADING(double value);
		double get_LOADING();
		void set_EMPTY(double value);
		double get_EMPTY();
		void set_DONE(double value);
		double get_DONE();
	};

	class MSProtocol{
	public:
		void set_protocol(const String& value);
		String* get_protocol();
		static void set_prototype(MSProtocol* value);
		static MSProtocol* get_prototype();
		MSProtocol();
	};

	class HTMLSelectElement{
	public:
		void set_validationMessage(const String& value);
		String* get_validationMessage();
		void set_autofocus(Boolean value);
		Boolean get_autofocus();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_required(Boolean value);
		Boolean get_required();
		void set_willValidate(Boolean value);
		Boolean get_willValidate();
		Boolean checkValidity();
		void setCustomValidity(const String& error);
	};

	class CSSTransitionsProperties{
	public:
		void set_transition(const String& value);
		String* get_transition();
		void set_transitionDelay(const String& value);
		String* get_transitionDelay();
		void set_transitionDuration(const String& value);
		String* get_transitionDuration();
		void set_msTransitionTimingFunction(const String& value);
		String* get_msTransitionTimingFunction();
		void set_msTransition(const String& value);
		String* get_msTransition();
		void set_msTransitionDuration(const String& value);
		String* get_msTransitionDuration();
		void set_transitionTimingFunction(const String& value);
		String* get_transitionTimingFunction();
		void set_msTransitionDelay(const String& value);
		String* get_msTransitionDelay();
		void set_transitionProperty(const String& value);
		String* get_transitionProperty();
		void set_msTransitionProperty(const String& value);
		String* get_msTransitionProperty();
	};

	class WindowTimersExtension{
	public:
		template<typename... Args> 
		double msSetImmediate(Object* expression, const Args&... args )
		{
			duettoVariadicTrap<double>(msSetImmediate<>,static_cast<const Object&>(args)...);
		}
		void clearImmediate(double handle);
		void msClearImmediate(double handle);
		template<typename... Args> 
		double setImmediate(Object* expression, const Args&... args )
		{
			duettoVariadicTrap<double>(setImmediate<>,static_cast<const Object&>(args)...);
		}
	};

	class MSCSSContentZoomProperties{
	public:
		void set_msContentZoomLimit(const String& value);
		String* get_msContentZoomLimit();
		void set_msContentZooming(const String& value);
		String* get_msContentZooming();
		void set_msContentZoomSnapType(const String& value);
		String* get_msContentZoomSnapType();
		void set_msContentZoomLimitMax(Object* value);
		Object* get_msContentZoomLimitMax();
		void set_msContentZoomSnapPoints(const String& value);
		String* get_msContentZoomSnapPoints();
		void set_msContentZoomSnap(const String& value);
		String* get_msContentZoomSnap();
		void set_msContentZoomLimitMin(Object* value);
		Object* get_msContentZoomLimitMin();
		void set_msContentZoomChaining(const String& value);
		String* get_msContentZoomChaining();
	};

	class MSRangeCollection{
	public:
		Range* operator[](double index);
		void set_length(double value);
		double get_length();
		Range* item(double index);
		static void set_prototype(MSRangeCollection* value);
		static MSRangeCollection* get_prototype();
		MSRangeCollection();
	};

	class MSCSSPositionedFloatsProperties{
	public:
		void set_msWrapMargin(Object* value);
		Object* get_msWrapMargin();
		void set_msWrapFlow(const String& value);
		String* get_msWrapFlow();
	};

	class MSCSSRegionProperties{
	public:
		void set_msFlowFrom(const String& value);
		String* get_msFlowFrom();
		void set_msFlowInto(const String& value);
		String* get_msFlowInto();
		void set_msWrapThrough(const String& value);
		String* get_msWrapThrough();
	};

	class IDBKeyRange{
	public:
		void set_upper(Object* value);
		Object* get_upper();
		void set_upperOpen(Boolean value);
		Boolean get_upperOpen();
		void set_lower(Object* value);
		Object* get_lower();
		void set_lowerOpen(Boolean value);
		Boolean get_lowerOpen();
		IDBKeyRange* bound(Object* lower, Object* upper);
		IDBKeyRange* bound(Object* lower, Object* upper, Boolean lowerOpen);
		IDBKeyRange* bound(Object* lower, Object* upper, Boolean lowerOpen, Boolean upperOpen);
		IDBKeyRange* only(Object* value);
		IDBKeyRange* lowerBound(Object* bound);
		IDBKeyRange* lowerBound(Object* bound, Boolean open);
		IDBKeyRange* upperBound(Object* bound);
		IDBKeyRange* upperBound(Object* bound, Boolean open);
		static void set_prototype(IDBKeyRange* value);
		static IDBKeyRange* get_prototype();
		IDBKeyRange();
	};

	class WindowConsole{
	public:
		void set_console(Console* value);
		Console* get_console();
	};

	class IDBTransaction: public EventTarget {
	public:
		typedef Object* (*callback_for_oncomplete)(Event* ev);
		void set_oncomplete(callback_for_oncomplete value);
		callback_for_oncomplete get_oncomplete();
		void set_db(IDBDatabase* value);
		IDBDatabase* get_db();
		void set_mode(const String& value);
		String* get_mode();
		void set_error(DOMError* value);
		DOMError* get_error();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onabort)(Object* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		void abort();
		IDBObjectStore* objectStore(const String& name);
		static void set_prototype(IDBTransaction* value);
		static IDBTransaction* get_prototype();
		IDBTransaction();
	};

	class AudioTrack{
	public:
		void set_kind(const String& value);
		String* get_kind();
		void set_language(const String& value);
		String* get_language();
		void set_id(const String& value);
		String* get_id();
		void set_label(const String& value);
		String* get_label();
		void set_enabled(Boolean value);
		Boolean get_enabled();
		static void set_prototype(AudioTrack* value);
		static AudioTrack* get_prototype();
		AudioTrack();
	};

	class TextTrackCueList{
	public:
		TextTrackCue* operator[](double index);
		void set_length(double value);
		double get_length();
		TextTrackCue* item(double index);
		TextTrackCue* getCueById(const String& id);
		static void set_prototype(TextTrackCueList* value);
		static TextTrackCueList* get_prototype();
		TextTrackCueList();
	};

	class CSSKeyframesRule: public CSSRule {
	public:
		void set_name(const String& value);
		String* get_name();
		void set_cssRules(CSSRuleList* value);
		CSSRuleList* get_cssRules();
		CSSKeyframeRule* findRule(const String& rule);
		void deleteRule(const String& rule);
		void appendRule(const String& rule);
		static void set_prototype(CSSKeyframesRule* value);
		static CSSKeyframesRule* get_prototype();
		CSSKeyframesRule();
	};

	class MSCSSTouchManipulationProperties{
	public:
		void set_msScrollSnapPointsY(const String& value);
		String* get_msScrollSnapPointsY();
		void set_msOverflowStyle(const String& value);
		String* get_msOverflowStyle();
		void set_msScrollLimitXMax(Object* value);
		Object* get_msScrollLimitXMax();
		void set_msScrollSnapType(const String& value);
		String* get_msScrollSnapType();
		void set_msScrollSnapPointsX(const String& value);
		String* get_msScrollSnapPointsX();
		void set_msScrollLimitYMax(Object* value);
		Object* get_msScrollLimitYMax();
		void set_msScrollSnapY(const String& value);
		String* get_msScrollSnapY();
		void set_msScrollLimitXMin(Object* value);
		Object* get_msScrollLimitXMin();
		void set_msScrollLimitYMin(Object* value);
		Object* get_msScrollLimitYMin();
		void set_msScrollChaining(const String& value);
		String* get_msScrollChaining();
		void set_msTouchAction(const String& value);
		String* get_msTouchAction();
		void set_msScrollSnapX(const String& value);
		String* get_msScrollSnapX();
		void set_msScrollLimit(const String& value);
		String* get_msScrollLimit();
		void set_msScrollRails(const String& value);
		String* get_msScrollRails();
		void set_msTouchSelect(const String& value);
		String* get_msTouchSelect();
	};

	class TextTrackList{
	public:
		TextTrack* operator[](double index);
		void set_length(double value);
		double get_length();
		TextTrack* item(double index);
		static void set_prototype(TextTrackList* value);
		static TextTrackList* get_prototype();
		TextTrackList();
	};

	class WindowAnimationTiming{
	public:
		void set_animationStartTime(double value);
		double get_animationStartTime();
		void set_msAnimationStartTime(double value);
		double get_msAnimationStartTime();
		void msCancelRequestAnimationFrame(double handle);
		void cancelAnimationFrame(double handle);
		double requestAnimationFrame(FrameRequestCallback* callback);
		double msRequestAnimationFrame(FrameRequestCallback* callback);
	};

	class Console{
	public:
		void info();
		template<typename... Args> 
		void info(Object* message, const Args&... args )
		{
			duettoVariadicTrap<void>(info<>,static_cast<const Object&>(args)...);
		}
		Boolean profile();
		Boolean profile(const String& reportName);
		void assert();
		void assert(Boolean test);
		template<typename... Args> 
		void assert(Boolean test, Object* message, const Args&... args )
		{
			duettoVariadicTrap<void>(assert<>,static_cast<const Object&>(args)...);
		}
		Boolean msIsIndependentlyComposed(Element* element);
		Boolean clear();
		Boolean dir();
		template<typename... Args> 
		Boolean dir(Object* value, const Args&... args )
		{
			duettoVariadicTrap<Boolean>(dir<>,static_cast<const Object&>(args)...);
		}
		void warn();
		template<typename... Args> 
		void warn(Object* message, const Args&... args )
		{
			duettoVariadicTrap<void>(warn<>,static_cast<const Object&>(args)...);
		}
		void error();
		template<typename... Args> 
		void error(Object* message, const Args&... args )
		{
			duettoVariadicTrap<void>(error<>,static_cast<const Object&>(args)...);
		}
		void log();
		template<typename... Args> 
		void log(Object* message, const Args&... args )
		{
			duettoVariadicTrap<void>(log<>,static_cast<const Object&>(args)...);
		}
		Boolean profileEnd();
		static void set_prototype(Console* value);
		static Console* get_prototype();
		Console();
	};

	class DocumentVisibility{
	public:
		void set_msHidden(Boolean value);
		Boolean get_msHidden();
		void set_msVisibilityState(const String& value);
		String* get_msVisibilityState();
		void set_visibilityState(const String& value);
		String* get_visibilityState();
		void set_hidden(Boolean value);
		Boolean get_hidden();
	};

	class WindowBase64{
	public:
		String* btoa(const String& rawString);
		String* atob(const String& encodedString);
	};

	class IDBDatabase: public EventTarget {
	public:
		void set_version(const String& value);
		String* get_version();
		void set_name(const String& value);
		String* get_name();
		void set_objectStoreNames(DOMStringList* value);
		DOMStringList* get_objectStoreNames();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onabort)(Object* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		IDBObjectStore* createObjectStore(const String& name);
		IDBObjectStore* createObjectStore(const String& name, Object* optionalParameters);
		void close();
		IDBTransaction* transaction(Object* storeNames);
		IDBTransaction* transaction(Object* storeNames, const String& mode);
		void deleteObjectStore(const String& name);
		static void set_prototype(IDBDatabase* value);
		static IDBDatabase* get_prototype();
		IDBDatabase();
	};

	class MSProtocolsCollection{
	public:
		static void set_prototype(MSProtocolsCollection* value);
		static MSProtocolsCollection* get_prototype();
		MSProtocolsCollection();
	};

	class DOMStringList{
	public:
		String* operator[](double index);
		void set_length(double value);
		double get_length();
		Boolean contains(const String& str);
		String* item(double index);
		static void set_prototype(DOMStringList* value);
		static DOMStringList* get_prototype();
		DOMStringList();
	};

	class CSSMultiColumnProperties{
	public:
		void set_breakAfter(const String& value);
		String* get_breakAfter();
		void set_columnSpan(const String& value);
		String* get_columnSpan();
		void set_columnRule(const String& value);
		String* get_columnRule();
		void set_columnFill(const String& value);
		String* get_columnFill();
		void set_columnRuleStyle(const String& value);
		String* get_columnRuleStyle();
		void set_breakBefore(const String& value);
		String* get_breakBefore();
		void set_columnCount(Object* value);
		Object* get_columnCount();
		void set_breakInside(const String& value);
		String* get_breakInside();
		void set_columnWidth(Object* value);
		Object* get_columnWidth();
		void set_columns(const String& value);
		String* get_columns();
		void set_columnRuleColor(Object* value);
		Object* get_columnRuleColor();
		void set_columnGap(Object* value);
		Object* get_columnGap();
		void set_columnRuleWidth(Object* value);
		Object* get_columnRuleWidth();
	};

	class HTMLButtonElement{
	public:
		void set_validationMessage(const String& value);
		String* get_validationMessage();
		void set_formTarget(const String& value);
		String* get_formTarget();
		void set_willValidate(Boolean value);
		Boolean get_willValidate();
		void set_formAction(const String& value);
		String* get_formAction();
		void set_autofocus(Boolean value);
		Boolean get_autofocus();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_formNoValidate(const String& value);
		String* get_formNoValidate();
		void set_formEnctype(const String& value);
		String* get_formEnctype();
		void set_formMethod(const String& value);
		String* get_formMethod();
		Boolean checkValidity();
		void setCustomValidity(const String& error);
	};

	class HTMLFormElement{
	public:
		void set_autocomplete(const String& value);
		String* get_autocomplete();
		void set_noValidate(Boolean value);
		Boolean get_noValidate();
		Boolean checkValidity();
	};

	class MSUnsafeFunctionCallback{
	public:
		Object* operator()();
	};

	class Document: public DocumentVisibility {
	public:
	};

	class HTMLScriptElement{
	public:
		void set_async(Boolean value);
		Boolean get_async();
	};

	class TextTrack: public EventTarget {
	public:
		void set_language(const String& value);
		String* get_language();
		void set_mode(double value);
		double get_mode();
		void set_readyState(const String& value);
		String* get_readyState();
		void set_activeCues(TextTrackCueList* value);
		TextTrackCueList* get_activeCues();
		void set_cues(TextTrackCueList* value);
		TextTrackCueList* get_cues();
		typedef Object* (*callback_for_oncuechange)(Event* ev);
		void set_oncuechange(callback_for_oncuechange value);
		callback_for_oncuechange get_oncuechange();
		void set_kind(const String& value);
		String* get_kind();
		typedef Object* (*callback_for_onload)(Object* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		void set_label(const String& value);
		String* get_label();
		void set_ERROR(double value);
		double get_ERROR();
		void set_SHOWING(double value);
		double get_SHOWING();
		void set_LOADING(double value);
		double get_LOADING();
		void set_LOADED(double value);
		double get_LOADED();
		void set_NONE(double value);
		double get_NONE();
		void set_HIDDEN(double value);
		double get_HIDDEN();
		void set_DISABLED(double value);
		double get_DISABLED();
		static void set_prototype(TextTrack* value);
		static TextTrack* get_prototype();
		TextTrack();
	};

	class MediaQueryListListener{
	public:
		void operator()(MediaQueryList* mql);
	};

	class IDBRequest: public EventTarget {
	public:
		void set_source(Object* value);
		Object* get_source();
		typedef Object* (*callback_for_onsuccess)(Event* ev);
		void set_onsuccess(callback_for_onsuccess value);
		callback_for_onsuccess get_onsuccess();
		void set_error(DOMError* value);
		DOMError* get_error();
		void set_transaction(IDBTransaction* value);
		IDBTransaction* get_transaction();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		void set_readyState(const String& value);
		String* get_readyState();
		void set_result(Object* value);
		Object* get_result();
		static void set_prototype(IDBRequest* value);
		static IDBRequest* get_prototype();
		IDBRequest();
	};

	class MessagePort: public EventTarget {
	public:
		typedef Object* (*callback_for_onmessage)(Object* ev);
		void set_onmessage(callback_for_onmessage value);
		callback_for_onmessage get_onmessage();
		void close();
		void postMessage(Object* message);
		void postMessage(Object* message, Object* ports);
		void start();
		static void set_prototype(MessagePort* value);
		static MessagePort* get_prototype();
		MessagePort();
	};

	class FileReader: public MSBaseReader {
	public:
		void set_error(DOMError* value);
		DOMError* get_error();
		void readAsArrayBuffer(Blob* blob);
		void readAsDataURL(Blob* blob);
		void readAsText(Blob* blob);
		void readAsText(Blob* blob, const String& encoding);
		static void set_prototype(FileReader* value);
		static FileReader* get_prototype();
		FileReader();
	};

	class Blob{
	public:
		void set_type(const String& value);
		String* get_type();
		void set_size(double value);
		double get_size();
		Object* msDetachStream();
		Blob* slice();
		Blob* slice(double start);
		Blob* slice(double start, double end, const String& contentType);
		void close();
		void msClose();
	};

	class BlobPropertyBag{
	public:
		void set_type(const String& value);
		String* get_type();
		void set_endings(const String& value);
		String* get_endings();
	};

	class ApplicationCache: public EventTarget {
	public:
		void set_status(double value);
		double get_status();
		typedef Object* (*callback_for_ondownloading)(Event* ev);
		void set_ondownloading(callback_for_ondownloading value);
		callback_for_ondownloading get_ondownloading();
		typedef Object* (*callback_for_onprogress)(ProgressEvent* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_onupdateready)(Event* ev);
		void set_onupdateready(callback_for_onupdateready value);
		callback_for_onupdateready get_onupdateready();
		typedef Object* (*callback_for_oncached)(Event* ev);
		void set_oncached(callback_for_oncached value);
		callback_for_oncached get_oncached();
		typedef Object* (*callback_for_onobsolete)(Event* ev);
		void set_onobsolete(callback_for_onobsolete value);
		callback_for_onobsolete get_onobsolete();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onchecking)(Event* ev);
		void set_onchecking(callback_for_onchecking value);
		callback_for_onchecking get_onchecking();
		typedef Object* (*callback_for_onnoupdate)(Event* ev);
		void set_onnoupdate(callback_for_onnoupdate value);
		callback_for_onnoupdate get_onnoupdate();
		void swapCache();
		void abort();
		void update();
	};

	class MSHTMLVideoElementExtensions{
	public:
		void set_msIsStereo3D(Boolean value);
		Boolean get_msIsStereo3D();
		void set_msStereo3DPackingMode(const String& value);
		String* get_msStereo3DPackingMode();
		typedef Object* (*callback_for_onMSVideoOptimalLayoutChanged)(Object* ev);
		void set_onMSVideoOptimalLayoutChanged(callback_for_onMSVideoOptimalLayoutChanged value);
		callback_for_onMSVideoOptimalLayoutChanged get_onMSVideoOptimalLayoutChanged();
		typedef Object* (*callback_for_onMSVideoFrameStepCompleted)(Object* ev);
		void set_onMSVideoFrameStepCompleted(callback_for_onMSVideoFrameStepCompleted value);
		callback_for_onMSVideoFrameStepCompleted get_onMSVideoFrameStepCompleted();
		void set_msStereo3DRenderMode(const String& value);
		String* get_msStereo3DRenderMode();
		void set_msIsLayoutOptimalForPlayback(Boolean value);
		Boolean get_msIsLayoutOptimalForPlayback();
		void set_msHorizontalMirror(Boolean value);
		Boolean get_msHorizontalMirror();
		typedef Object* (*callback_for_onMSVideoFormatChanged)(Object* ev);
		void set_onMSVideoFormatChanged(callback_for_onMSVideoFormatChanged value);
		callback_for_onMSVideoFormatChanged get_onMSVideoFormatChanged();
		void set_msZoom(Boolean value);
		Boolean get_msZoom();
		void msInsertVideoEffect(const String& activatableClassId, Boolean effectRequired);
		void msInsertVideoEffect(const String& activatableClassId, Boolean effectRequired, Object* config);
		void msSetVideoRectangle(double left, double top, double right, double bottom);
		void msFrameStep(Boolean forward);
	};

	class FrameRequestCallback{
	public:
		void operator()(double time);
	};

	class CSS3DTransformsProperties{
	public:
		void set_perspective(const String& value);
		String* get_perspective();
		void set_msBackfaceVisibility(const String& value);
		String* get_msBackfaceVisibility();
		void set_perspectiveOrigin(const String& value);
		String* get_perspectiveOrigin();
		void set_transformStyle(const String& value);
		String* get_transformStyle();
		void set_backfaceVisibility(const String& value);
		String* get_backfaceVisibility();
		void set_msPerspectiveOrigin(const String& value);
		String* get_msPerspectiveOrigin();
		void set_msTransformStyle(const String& value);
		String* get_msTransformStyle();
		void set_msPerspective(const String& value);
		String* get_msPerspective();
	};

	class XMLHttpRequest : public EventTarget
	{
	public:
		typedef Object* (*callback_for_onreadystatechange)(Event* ev);
		void set_onreadystatechange(callback_for_onreadystatechange value);
		callback_for_onreadystatechange get_onreadystatechange();
		void set_status(double value);
		double get_status();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		void set_readyState(double value);
		double get_readyState();
		void set_responseText(const String& value);
		String* get_responseText();
		void set_responseXML(Document* value);
		Document* get_responseXML();
		void set_statusText(const String& value);
		String* get_statusText();
		void open(const String& method, const String& url);
		void open(const String& method, const String& url, bool async);
		void open(const String& method, const String& url, bool async, const String& user, const String& password);
		void send();
		void send(Object* data);
		void abort();
		String* getAllResponseHeaders();
		void setRequestHeader(const String& header, const String& value);
		String* getResponseHeader(const String& header);
		void set_LOADING(double value);
		double get_LOADING();
		void set_DONE(double value);
		double get_DONE();
		void set_UNSENT(double value);
		double get_UNSENT();
		void set_OPENED(double value);
		double get_OPENED();
		void set_HEADERS_RECEIVED(double value);
		double get_HEADERS_RECEIVED();
		static void set_prototype(XMLHttpRequest* value);
		static XMLHttpRequest* get_prototype();
		XMLHttpRequest();
	};

	class CSSKeyframeRule: public CSSRule {
	public:
		void set_keyText(const String& value);
		String* get_keyText();
		void set_style(CSSStyleDeclaration* value);
		CSSStyleDeclaration* get_style();
		static void set_prototype(CSSKeyframeRule* value);
		static CSSKeyframeRule* get_prototype();
		CSSKeyframeRule();
	};

	class CSSGridProperties{
	public:
		void set_msGridRows(const String& value);
		String* get_msGridRows();
		void set_msGridColumnSpan(Object* value);
		Object* get_msGridColumnSpan();
		void set_msGridRow(Object* value);
		Object* get_msGridRow();
		void set_msGridRowSpan(Object* value);
		Object* get_msGridRowSpan();
		void set_msGridColumns(const String& value);
		String* get_msGridColumns();
		void set_msGridColumnAlign(const String& value);
		String* get_msGridColumnAlign();
		void set_msGridRowAlign(const String& value);
		String* get_msGridRowAlign();
		void set_msGridColumn(Object* value);
		Object* get_msGridColumn();
	};

	class MSFileSaver{
	public:
		Boolean msSaveBlob(Object* blob);
		Boolean msSaveBlob(Object* blob, const String& defaultName);
		Boolean msSaveOrOpenBlob(Object* blob);
		Boolean msSaveOrOpenBlob(Object* blob, const String& defaultName);
	};

	class MSStream{
	public:
		void set_type(const String& value);
		String* get_type();
		Object* msDetachStream();
		void msClose();
		static void set_prototype(MSStream* value);
		static MSStream* get_prototype();
		MSStream();
	};

	class HTMLFieldSetElement{
	public:
		void set_validationMessage(const String& value);
		String* get_validationMessage();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_willValidate(Boolean value);
		Boolean get_willValidate();
		Boolean checkValidity();
		void setCustomValidity(const String& error);
	};

	class MSBlobBuilder{
	public:
		void append(Object* data);
		void append(Object* data, const String& endings);
		Blob* getBlob();
		Blob* getBlob(const String& contentType);
		static void set_prototype(MSBlobBuilder* value);
		static MSBlobBuilder* get_prototype();
		MSBlobBuilder();
	};

	class MSRangeExtensions{
	public:
		DocumentFragment* createContextualFragment(const String& fragment);
	};

	class HTMLElement{
	public:
		typedef Object* (*callback_for_oncuechange)(Event* ev);
		void set_oncuechange(callback_for_oncuechange value);
		callback_for_oncuechange get_oncuechange();
		void set_spellcheck(Boolean value);
		Boolean get_spellcheck();
		void set_classList(DOMTokenList* value);
		DOMTokenList* get_classList();
		void set_draggable(Boolean value);
		Boolean get_draggable();
	};

	class DOMSettableTokenList: public DOMTokenList {
	public:
		void set_value(const String& value);
		String* get_value();
		static void set_prototype(DOMSettableTokenList* value);
		static DOMSettableTokenList* get_prototype();
		DOMSettableTokenList();
	};

	class IDBFactory{
	public:
		IDBOpenDBRequest* open(const String& name);
		IDBOpenDBRequest* open(const String& name, double version);
		double cmp(Object* first, Object* second);
		IDBOpenDBRequest* deleteDatabase(const String& name);
		static void set_prototype(IDBFactory* value);
		static IDBFactory* get_prototype();
		IDBFactory();
	};

	class HTMLObjectElement{
	public:
		void set_validationMessage(const String& value);
		String* get_validationMessage();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_willValidate(Boolean value);
		Boolean get_willValidate();
		Boolean checkValidity();
		void setCustomValidity(const String& error);
	};

	class CSSTextProperties{
	public:
		void set_textShadow(const String& value);
		String* get_textShadow();
		void set_msHyphenateLimitLines(Object* value);
		Object* get_msHyphenateLimitLines();
		void set_msHyphens(const String& value);
		String* get_msHyphens();
		void set_msHyphenateLimitChars(const String& value);
		String* get_msHyphenateLimitChars();
		void set_msHyphenateLimitZone(Object* value);
		Object* get_msHyphenateLimitZone();
	};

	class CSS2DTransformsProperties{
	public:
		void set_transform(const String& value);
		String* get_transform();
		void set_transformOrigin(const String& value);
		String* get_transformOrigin();
	};

	class MSCSSHighContrastProperties{
	public:
		void set_msHighContrastAdjust(const String& value);
		String* get_msHighContrastAdjust();
	};

	class FormData{
	public:
		void append(Object* name, Object* value);
		void append(Object* name, Object* value, const String& blobName);
		static void set_prototype(FormData* value);
		static FormData* get_prototype();
		FormData();
		FormData(HTMLFormElement* form);
	};

	class MSHTMLMediaElementExtensions{
	public:
		void set_msAudioCategory(const String& value);
		String* get_msAudioCategory();
		void set_msRealTime(Boolean value);
		Boolean get_msRealTime();
		void set_msPlayToPrimary(Boolean value);
		Boolean get_msPlayToPrimary();
		void set_msPlayToDisabled(Boolean value);
		Boolean get_msPlayToDisabled();
		void set_msPlayToSource(Object* value);
		Object* get_msPlayToSource();
		void set_msAudioDeviceType(const String& value);
		String* get_msAudioDeviceType();
		void msClearEffects();
		void msSetMediaProtectionManager();
		void msSetMediaProtectionManager(Object* mediaProtectionManager);
		void msInsertAudioEffect(const String& activatableClassId, Boolean effectRequired);
		void msInsertAudioEffect(const String& activatableClassId, Boolean effectRequired, Object* config);
	};

	class HTMLDataListElement: public HTMLElement {
	public:
		void set_options(HTMLCollection* value);
		HTMLCollection* get_options();
		static void set_prototype(HTMLDataListElement* value);
		static HTMLDataListElement* get_prototype();
		HTMLDataListElement();
	};

	class AbstractWorker: public EventTarget {
	public:
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
	};

	class ValidityState{
	public:
		void set_customError(Boolean value);
		Boolean get_customError();
		void set_valueMissing(Boolean value);
		Boolean get_valueMissing();
		void set_stepMismatch(Boolean value);
		Boolean get_stepMismatch();
		void set_rangeUnderflow(Boolean value);
		Boolean get_rangeUnderflow();
		void set_rangeOverflow(Boolean value);
		Boolean get_rangeOverflow();
		void set_typeMismatch(Boolean value);
		Boolean get_typeMismatch();
		void set_patternMismatch(Boolean value);
		Boolean get_patternMismatch();
		void set_tooLong(Boolean value);
		Boolean get_tooLong();
		void set_valid(Boolean value);
		Boolean get_valid();
		static void set_prototype(ValidityState* value);
		static ValidityState* get_prototype();
		ValidityState();
	};

	class HTMLVideoElement: public MSHTMLVideoElementExtensions {
	public:
	};

	class HTMLTrackElement: public HTMLElement {
	public:
		void set_kind(const String& value);
		String* get_kind();
		void set_src(const String& value);
		String* get_src();
		void set_srclang(const String& value);
		String* get_srclang();
		void set_track(TextTrack* value);
		TextTrack* get_track();
		void set_label(const String& value);
		String* get_label();
		void set_defaul(Boolean value);
		Boolean get_defaul();
		static void set_prototype(HTMLTrackElement* value);
		static HTMLTrackElement* get_prototype();
		HTMLTrackElement();
	};

	class MSApp{
	public:
		File* createFileFromStorageFile(Object* storageFile);
		Blob* createBlobFromRandomAccessStream(const String& type, Object* seeker);
		MSStream* createStreamFromInputStream(const String& type, Object* inputStream);
		void terminateApp(Object* exceptionObject);
		Object* createDataPackage(Object* object);
		Object* execUnsafeLocalFunction(MSUnsafeFunctionCallback* unsafeFunction);
		Object* getHtmlPrintDocumentSource(Object* htmlDoc);
		Object* getHtmlPrintDocumentSource(Object* htmlDoc, const String& printTemplate);
		void addPublicLocalApplicationUri(const String& uri);
		Object* createDataPackageFromSelection();
	};

	class MSCSSMatrix{
	public:
		void set_m24(double value);
		double get_m24();
		void set_m34(double value);
		double get_m34();
		void set_a(double value);
		double get_a();
		void set_d(double value);
		double get_d();
		void set_m32(double value);
		double get_m32();
		void set_m41(double value);
		double get_m41();
		void set_m11(double value);
		double get_m11();
		void set_f(double value);
		double get_f();
		void set_e(double value);
		double get_e();
		void set_m23(double value);
		double get_m23();
		void set_m14(double value);
		double get_m14();
		void set_m33(double value);
		double get_m33();
		void set_m22(double value);
		double get_m22();
		void set_m21(double value);
		double get_m21();
		void set_c(double value);
		double get_c();
		void set_m12(double value);
		double get_m12();
		void set_b(double value);
		double get_b();
		void set_m42(double value);
		double get_m42();
		void set_m31(double value);
		double get_m31();
		void set_m43(double value);
		double get_m43();
		void set_m13(double value);
		double get_m13();
		void set_m44(double value);
		double get_m44();
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
		static void set_prototype(MSCSSMatrix* value);
		static MSCSSMatrix* get_prototype();
		MSCSSMatrix();
		MSCSSMatrix(const String& text);
	};

	class Worker: public AbstractWorker {
	public:
		typedef Object* (*callback_for_onmessage)(Object* ev);
		void set_onmessage(callback_for_onmessage value);
		callback_for_onmessage get_onmessage();
		void postMessage(Object* message);
		void postMessage(Object* message, Object* ports);
		void terminate();
		static void set_prototype(Worker* value);
		static Worker* get_prototype();
		Worker(const String& stringUrl);
	};

	class HTMLIFrameElement{
	public:
		void set_sandbox(DOMSettableTokenList* value);
		DOMSettableTokenList* get_sandbox();
	};

	class MSMediaErrorExtensions{
	public:
		void set_msExtendedCode(double value);
		double get_msExtendedCode();
	};

	class HTMLTableElement: public HTMLElement , public DOML2DeprecatedBorderStyle_HTMLTableElement , public DOML2DeprecatedAlignmentStyle_HTMLTableElement , public MSBorderColorStyle , public MSDataBindingExtensions , public MSHTMLTableElementExtensions , public DOML2DeprecatedBackgroundStyle , public MSBorderColorHighlightStyle , public MSDataBindingTableExtensions , public DOML2DeprecatedBackgroundColorStyle {
	public:
		void set_tBodies(HTMLCollection* value);
		HTMLCollection* get_tBodies();
		void set_width(const String& value);
		String* get_width();
		void set_tHead(HTMLTableSectionElement* value);
		HTMLTableSectionElement* get_tHead();
		void set_cellSpacing(const String& value);
		String* get_cellSpacing();
		void set_tFoot(HTMLTableSectionElement* value);
		HTMLTableSectionElement* get_tFoot();
		void set_frame(const String& value);
		String* get_frame();
		void set_rows(HTMLCollection* value);
		HTMLCollection* get_rows();
		void set_rules(const String& value);
		String* get_rules();
		void set_cellPadding(const String& value);
		String* get_cellPadding();
		void set_summary(const String& value);
		String* get_summary();
		void set_caption(HTMLTableCaptionElement* value);
		HTMLTableCaptionElement* get_caption();
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
		HTMLElement* createTFoot();
		static void set_prototype(HTMLTableElement* value);
		static HTMLTableElement* get_prototype();
		HTMLTableElement();
	};

	class SVGPathSegCurvetoQuadraticRel: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_y1(double value);
		double get_y1();
		void set_x(double value);
		double get_x();
		void set_x1(double value);
		double get_x1();
		static void set_prototype(SVGPathSegCurvetoQuadraticRel* value);
		static SVGPathSegCurvetoQuadraticRel* get_prototype();
		SVGPathSegCurvetoQuadraticRel();
	};

	class CSSStyleDeclaration: public CSS3Properties , public SVG1_1Properties , public CSS2Properties {
	public:
		String* operator[](double index);
		void set_cssText(const String& value);
		String* get_cssText();
		void set_length(double value);
		double get_length();
		void set_parentRule(CSSRule* value);
		CSSRule* get_parentRule();
		String* getPropertyPriority(const String& propertyName);
		String* getPropertyValue(const String& propertyName);
		String* removeProperty(const String& propertyName);
		String* item(double index);
		void setProperty(const String& propertyName, const String& value);
		void setProperty(const String& propertyName, const String& value, const String& priority);
		static void set_prototype(CSSStyleDeclaration* value);
		static CSSStyleDeclaration* get_prototype();
		CSSStyleDeclaration();
	};

	class Navigator: public NavigatorID , public NavigatorOnLine , public NavigatorDoNotTrack , public NavigatorAbilities , public NavigatorGeolocation
	{
	public:
		static void set_prototype(Navigator* value);
		static Navigator* get_prototype();
		Navigator();
	};

	class SVGPathSegCurvetoCubicSmoothAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x2(double value);
		double get_x2();
		void set_x(double value);
		double get_x();
		void set_y2(double value);
		double get_y2();
		static void set_prototype(SVGPathSegCurvetoCubicSmoothAbs* value);
		static SVGPathSegCurvetoCubicSmoothAbs* get_prototype();
		SVGPathSegCurvetoCubicSmoothAbs();
	};

	class MSHTMLDirectoryElementExtensions: public DOML2DeprecatedListdoubleingAndBulletStyle {
	public:
	};

	class HTMLBaseElement: public HTMLElement {
	public:
		void set_target(const String& value);
		String* get_target();
		void set_href(const String& value);
		String* get_href();
		static void set_prototype(HTMLBaseElement* value);
		static HTMLBaseElement* get_prototype();
		HTMLBaseElement();
	};

	class DOMImplementation: public DOMHTMLImplementation {
	public:
		DocumentType* createDocumentType(const String& qualifiedName, const String& publicId, const String& systemId);
		Document* createDocument(const String& namespaceURI, const String& qualifiedName, DocumentType* doctype);
		Boolean hasFeature(const String& feature);
		Boolean hasFeature(const String& feature, const String& version);
		static void set_prototype(DOMImplementation* value);
		static DOMImplementation* get_prototype();
		DOMImplementation();
	};

	class HTMLNextIdElement: public HTMLElement {
	public:
		void set_n(const String& value);
		String* get_n();
		static void set_prototype(HTMLNextIdElement* value);
		static HTMLNextIdElement* get_prototype();
		HTMLNextIdElement();
	};

	class SVGPathSegMovetoRel: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegMovetoRel* value);
		static SVGPathSegMovetoRel* get_prototype();
		SVGPathSegMovetoRel();
	};

	class Node: public EventTarget {
	public:
		void set_nodeType(double value);
		double get_nodeType();
		void set_previousSibling(Node* value);
		Node* get_previousSibling();
		void set_localName(const String& value);
		String* get_localName();
		void set_namespaceURI(const String& value);
		String* get_namespaceURI();
		void set_textContent(const String& value);
		String* get_textContent();
		void set_parentNode(Node* value);
		Node* get_parentNode();
		void set_nextSibling(Node* value);
		Node* get_nextSibling();
		void set_nodeValue(const String& value);
		String* get_nodeValue();
		void set_lastChild(Node* value);
		Node* get_lastChild();
		void set_childNodes(NodeList* value);
		NodeList* get_childNodes();
		void set_nodeName(const String& value);
		String* get_nodeName();
		void set_ownerDocument(Document* value);
		Document* get_ownerDocument();
		void set_attributes(Array* /*{ARRAY_BASE_TYPE=Attr}*/ value);
		Array* /*{ARRAY_BASE_TYPE=Attr}*/ get_attributes();
		void set_firstChild(Node* value);
		Node* get_firstChild();
		void set_prefix(const String& value);
		String* get_prefix();
		Node* removeChild(Node* oldChild);
		Node* appendChild(Node* newChild);
		Boolean isSupported(const String& feature, const String& version);
		Boolean isEqualNode(Node* arg);
		String* lookupPrefix(const String& namespaceURI);
		Boolean isDefaultNamespace(const String& namespaceURI);
		double compareDocumentPosition(Node* other);
		void normalize();
		Boolean isSameNode(Node* other);
		Boolean hasAttributes();
		String* lookupNamespaceURI(const String& prefix);
		Node* cloneNode();
		Node* cloneNode(Boolean deep);
		Boolean hasChildNodes();
		Node* replaceChild(Node* newChild, Node* oldChild);
		Node* insertBefore(Node* newChild);
		Node* insertBefore(Node* newChild, Node* refChild);
		void set_ENTITY_REFERENCE_NODE(double value);
		double get_ENTITY_REFERENCE_NODE();
		void set_ATTRIBUTE_NODE(double value);
		double get_ATTRIBUTE_NODE();
		void set_DOCUMENT_FRAGMENT_NODE(double value);
		double get_DOCUMENT_FRAGMENT_NODE();
		void set_TEXT_NODE(double value);
		double get_TEXT_NODE();
		void set_ELEMENT_NODE(double value);
		double get_ELEMENT_NODE();
		void set_COMMENT_NODE(double value);
		double get_COMMENT_NODE();
		void set_DOCUMENT_POSITION_DISCONNECTED(double value);
		double get_DOCUMENT_POSITION_DISCONNECTED();
		void set_DOCUMENT_POSITION_CONTAINED_BY(double value);
		double get_DOCUMENT_POSITION_CONTAINED_BY();
		void set_DOCUMENT_POSITION_CONTAINS(double value);
		double get_DOCUMENT_POSITION_CONTAINS();
		void set_DOCUMENT_TYPE_NODE(double value);
		double get_DOCUMENT_TYPE_NODE();
		void set_DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC(double value);
		double get_DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC();
		void set_DOCUMENT_NODE(double value);
		double get_DOCUMENT_NODE();
		void set_ENTITY_NODE(double value);
		double get_ENTITY_NODE();
		void set_PROCESSING_INSTRUCTION_NODE(double value);
		double get_PROCESSING_INSTRUCTION_NODE();
		void set_CDATA_SECTION_NODE(double value);
		double get_CDATA_SECTION_NODE();
		void set_NOTATION_NODE(double value);
		double get_NOTATION_NODE();
		void set_DOCUMENT_POSITION_FOLLOWING(double value);
		double get_DOCUMENT_POSITION_FOLLOWING();
		void set_DOCUMENT_POSITION_PRECEDING(double value);
		double get_DOCUMENT_POSITION_PRECEDING();
		static void set_prototype(Node* value);
		static Node* get_prototype();
		Node();
	};

	class SVGPathSegCurvetoQuadraticSmoothRel: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegCurvetoQuadraticSmoothRel* value);
		static SVGPathSegCurvetoQuadraticSmoothRel* get_prototype();
		SVGPathSegCurvetoQuadraticSmoothRel();
	};

	class HTMLAppletElement: public HTMLElement , public DOML2DeprecatedWidthStyle_HTMLAppletElement , public DOML2DeprecatedMarginStyle_HTMLObjectElement , public MSHTMLAppletElementExtensions , public MSDataBindingExtensions , public MSDataBindingRecordSetExtensions , public DOML2DeprecatedAlignmentStyle_HTMLObjectElement {
	public:
		void set_object(const String& value);
		String* get_object();
		void set_archive(const String& value);
		String* get_archive();
		void set_codeBase(const String& value);
		String* get_codeBase();
		void set_alt(const String& value);
		String* get_alt();
		void set_name(const String& value);
		String* get_name();
		void set_height(const String& value);
		String* get_height();
		void set_code(const String& value);
		String* get_code();
		static void set_prototype(HTMLAppletElement* value);
		static HTMLAppletElement* get_prototype();
		HTMLAppletElement();
	};

	class MSHTMLFieldSetElementExtensions: public DOML2DeprecatedAlignmentStyle_HTMLFieldSetElement {
	public:
	};

	class HTMLOListElement: public HTMLElement , public DOML2DeprecatedListdoubleingAndBulletStyle , public DOML2DeprecatedListSpaceReduction , public MSHTMLOListElementExtensions {
	public:
		void set_start(double value);
		double get_start();
		static void set_prototype(HTMLOListElement* value);
		static HTMLOListElement* get_prototype();
		HTMLOListElement();
	};

	class SVGPathSegLinetoVerticalRel: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		static void set_prototype(SVGPathSegLinetoVerticalRel* value);
		static SVGPathSegLinetoVerticalRel* get_prototype();
		SVGPathSegLinetoVerticalRel();
	};

	class CSSStyleSheet: public StyleSheet , public MSCSSStyleSheetExtensions {
	public:
		void set_ownerRule(CSSRule* value);
		CSSRule* get_ownerRule();
		void set_cssRules(CSSRuleList* value);
		CSSRuleList* get_cssRules();
		double insertRule(const String& rule);
		double insertRule(const String& rule, double index);
		void deleteRule();
		void deleteRule(double index);
		static void set_prototype(CSSStyleSheet* value);
		static CSSStyleSheet* get_prototype();
		CSSStyleSheet();
	};

	class HTMLBlockElement: public HTMLElement , public DOML2DeprecatedTextFlowControl_HTMLBlockElement , public DOML2DeprecatedWidthStyle_HTMLBlockElement {
	public:
		void set_cite(const String& value);
		String* get_cite();
		static void set_prototype(HTMLBlockElement* value);
		static HTMLBlockElement* get_prototype();
		HTMLBlockElement();
	};

	class HTMLMetaElement: public HTMLElement , public MSHTMLMetaElementExtensions {
	public:
		void set_httpEquiv(const String& value);
		String* get_httpEquiv();
		void set_name(const String& value);
		String* get_name();
		void set_content(const String& value);
		String* get_content();
		void set_scheme(const String& value);
		String* get_scheme();
		static void set_prototype(HTMLMetaElement* value);
		static HTMLMetaElement* get_prototype();
		HTMLMetaElement();
	};

	class HTMLDDElement: public HTMLElement , public DOML2DeprecatedWordWrapSuppression_HTMLDDElement {
	public:
		static void set_prototype(HTMLDDElement* value);
		static HTMLDDElement* get_prototype();
		HTMLDDElement();
	};

	class CSSStyleRule: public CSSRule , public MSCSSStyleRuleExtensions {
	public:
		void set_selectorText(const String& value);
		String* get_selectorText();
		void set_style(MSStyleCSSProperties* value);
		MSStyleCSSProperties* get_style();
		static void set_prototype(CSSStyleRule* value);
		static CSSStyleRule* get_prototype();
		CSSStyleRule();
	};

	class HTMLLinkElement: public HTMLElement , public MSLinkStyleExtensions , public LinkStyle {
	public:
		void set_rel(const String& value);
		String* get_rel();
		void set_target(const String& value);
		String* get_target();
		void set_href(const String& value);
		String* get_href();
		void set_media(const String& value);
		String* get_media();
		void set_rev(const String& value);
		String* get_rev();
		void set_type(const String& value);
		String* get_type();
		void set_charset(const String& value);
		String* get_charset();
		void set_hreflang(const String& value);
		String* get_hreflang();
		static void set_prototype(HTMLLinkElement* value);
		static HTMLLinkElement* get_prototype();
		HTMLLinkElement();
	};

	class HTMLFontElement: public HTMLElement , public DOML2DeprecatedColorProperty , public MSHTMLFontElementExtensions , public DOML2DeprecatedSizeProperty {
	public:
		void set_face(const String& value);
		String* get_face();
		static void set_prototype(HTMLFontElement* value);
		static HTMLFontElement* get_prototype();
		HTMLFontElement();
	};

	class MSNamespaceInfo: public MSEventAttachmentTarget {
	public:
		void set_urn(const String& value);
		String* get_urn();
		typedef Object* (*callback_for_onreadystatechange)(Event* ev);
		void set_onreadystatechange(callback_for_onreadystatechange value);
		callback_for_onreadystatechange get_onreadystatechange();
		void set_name(const String& value);
		String* get_name();
		void set_readyState(const String& value);
		String* get_readyState();
		void doImport(const String& implementationUrl);
		static void set_prototype(MSNamespaceInfo* value);
		static MSNamespaceInfo* get_prototype();
		MSNamespaceInfo();
	};

	class HTMLTableCaptionElement: public HTMLElement , public MSHTMLTableCaptionElementExtensions , public DOML2DeprecatedAlignmentStyle_HTMLTableCaptionElement {
	public:
		static void set_prototype(HTMLTableCaptionElement* value);
		static HTMLTableCaptionElement* get_prototype();
		HTMLTableCaptionElement();
	};

	class HTMLOptionElement: public HTMLElement , public MSDataBindingExtensions {
	public:
		void set_index(double value);
		double get_index();
		void set_defaultSelected(Boolean value);
		Boolean get_defaultSelected();
		void set_value(const String& value);
		String* get_value();
		void set_text(const String& value);
		String* get_text();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_label(const String& value);
		String* get_label();
		void set_selected(Boolean value);
		Boolean get_selected();
		static void set_prototype(HTMLOptionElement* value);
		static HTMLOptionElement* get_prototype();
		HTMLOptionElement();
	};

	class HTMLMapElement: public HTMLElement {
	public:
		void set_name(const String& value);
		String* get_name();
		void set_areas(HTMLAreasCollection* value);
		HTMLAreasCollection* get_areas();
		static void set_prototype(HTMLMapElement* value);
		static HTMLMapElement* get_prototype();
		HTMLMapElement();
	};

	class HTMLMenuElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction , public MSHTMLMenuElementExtensions {
	public:
		void set_type(const String& value);
		String* get_type();
		static void set_prototype(HTMLMenuElement* value);
		static HTMLMenuElement* get_prototype();
		HTMLMenuElement();
	};

	class Window: public ViewCSS , public MSEventAttachmentTarget , public MSWindowExtensions , public WindowPerformance , public ScreenView , public EventTarget , public WindowLocalStorage , public WindowSessionStorage , public WindowTimers {
	public:
		typedef Object* (*callback_for_ondragend)(DragEvent* ev);
		void set_ondragend(callback_for_ondragend value);
		callback_for_ondragend get_ondragend();
		typedef Object* (*callback_for_onkeydown)(KeyboardEvent* ev);
		void set_onkeydown(callback_for_onkeydown value);
		callback_for_onkeydown get_onkeydown();
		typedef Object* (*callback_for_ondragover)(DragEvent* ev);
		void set_ondragover(callback_for_ondragover value);
		callback_for_ondragover get_ondragover();
		typedef Object* (*callback_for_onkeyup)(KeyboardEvent* ev);
		void set_onkeyup(callback_for_onkeyup value);
		callback_for_onkeyup get_onkeyup();
		typedef Object* (*callback_for_onreset)(Event* ev);
		void set_onreset(callback_for_onreset value);
		callback_for_onreset get_onreset();
		typedef Object* (*callback_for_onmouseup)(MouseEvent* ev);
		void set_onmouseup(callback_for_onmouseup value);
		callback_for_onmouseup get_onmouseup();
		typedef Object* (*callback_for_ondragstart)(DragEvent* ev);
		void set_ondragstart(callback_for_ondragstart value);
		callback_for_ondragstart get_ondragstart();
		typedef Object* (*callback_for_ondrag)(DragEvent* ev);
		void set_ondrag(callback_for_ondrag value);
		callback_for_ondrag get_ondrag();
		typedef Object* (*callback_for_onmouseover)(MouseEvent* ev);
		void set_onmouseover(callback_for_onmouseover value);
		callback_for_onmouseover get_onmouseover();
		typedef Object* (*callback_for_ondragleave)(DragEvent* ev);
		void set_ondragleave(callback_for_ondragleave value);
		callback_for_ondragleave get_ondragleave();
		void set_history(History* value);
		History* get_history();
		void set_name(const String& value);
		String* get_name();
		typedef Object* (*callback_for_onafterprint)(Event* ev);
		void set_onafterprint(callback_for_onafterprint value);
		callback_for_onafterprint get_onafterprint();
		typedef Object* (*callback_for_onpause)(Event* ev);
		void set_onpause(callback_for_onpause value);
		callback_for_onpause get_onpause();
		typedef Object* (*callback_for_onbeforeprint)(Event* ev);
		void set_onbeforeprint(callback_for_onbeforeprint value);
		callback_for_onbeforeprint get_onbeforeprint();
		void set_top(Window* value);
		Window* get_top();
		typedef Object* (*callback_for_onmousedown)(MouseEvent* ev);
		void set_onmousedown(callback_for_onmousedown value);
		callback_for_onmousedown get_onmousedown();
		typedef Object* (*callback_for_onseeked)(Event* ev);
		void set_onseeked(callback_for_onseeked value);
		callback_for_onseeked get_onseeked();
		void set_opener(Window* value);
		Window* get_opener();
		typedef Object* (*callback_for_onclick)(MouseEvent* ev);
		void set_onclick(callback_for_onclick value);
		callback_for_onclick get_onclick();
		typedef Object* (*callback_for_onwaiting)(Event* ev);
		void set_onwaiting(callback_for_onwaiting value);
		callback_for_onwaiting get_onwaiting();
		typedef Object* (*callback_for_ononline)(Event* ev);
		void set_ononline(callback_for_ononline value);
		callback_for_ononline get_ononline();
		typedef Object* (*callback_for_ondurationchange)(Event* ev);
		void set_ondurationchange(callback_for_ondurationchange value);
		callback_for_ondurationchange get_ondurationchange();
		void set_frames(Window* value);
		Window* get_frames();
		typedef Object* (*callback_for_onblur)(FocusEvent* ev);
		void set_onblur(callback_for_onblur value);
		callback_for_onblur get_onblur();
		typedef Object* (*callback_for_onemptied)(Event* ev);
		void set_onemptied(callback_for_onemptied value);
		callback_for_onemptied get_onemptied();
		typedef Object* (*callback_for_onseeking)(Event* ev);
		void set_onseeking(callback_for_onseeking value);
		callback_for_onseeking get_onseeking();
		typedef Object* (*callback_for_oncanplay)(Event* ev);
		void set_oncanplay(callback_for_oncanplay value);
		callback_for_oncanplay get_oncanplay();
		typedef Object* (*callback_for_onstalled)(Event* ev);
		void set_onstalled(callback_for_onstalled value);
		callback_for_onstalled get_onstalled();
		typedef Object* (*callback_for_onmousemove)(MouseEvent* ev);
		void set_onmousemove(callback_for_onmousemove value);
		callback_for_onmousemove get_onmousemove();
		typedef Object* (*callback_for_onoffline)(Event* ev);
		void set_onoffline(callback_for_onoffline value);
		callback_for_onoffline get_onoffline();
		void set_length(double value);
		double get_length();
		typedef Object* (*callback_for_onbeforeunload)(BeforeUnloadEvent* ev);
		void set_onbeforeunload(callback_for_onbeforeunload value);
		callback_for_onbeforeunload get_onbeforeunload();
		typedef Object* (*callback_for_onratechange)(Event* ev);
		void set_onratechange(callback_for_onratechange value);
		callback_for_onratechange get_onratechange();
		typedef Object* (*callback_for_onstorage)(StorageEvent* ev);
		void set_onstorage(callback_for_onstorage value);
		callback_for_onstorage get_onstorage();
		typedef Object* (*callback_for_onloadstart)(Event* ev);
		void set_onloadstart(callback_for_onloadstart value);
		callback_for_onloadstart get_onloadstart();
		typedef Object* (*callback_for_ondragenter)(DragEvent* ev);
		void set_ondragenter(callback_for_ondragenter value);
		callback_for_ondragenter get_ondragenter();
		typedef Object* (*callback_for_onsubmit)(Event* ev);
		void set_onsubmit(callback_for_onsubmit value);
		callback_for_onsubmit get_onsubmit();
		void set_self(Window* value);
		Window* get_self();
		typedef Object* (*callback_for_onprogress)(Object* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_ondblclick)(MouseEvent* ev);
		void set_ondblclick(callback_for_ondblclick value);
		callback_for_ondblclick get_ondblclick();
		typedef Object* (*callback_for_oncontextmenu)(MouseEvent* ev);
		void set_oncontextmenu(callback_for_oncontextmenu value);
		callback_for_oncontextmenu get_oncontextmenu();
		typedef Object* (*callback_for_onchange)(Event* ev);
		void set_onchange(callback_for_onchange value);
		callback_for_onchange get_onchange();
		typedef Object* (*callback_for_onloadedmetadata)(Event* ev);
		void set_onloadedmetadata(callback_for_onloadedmetadata value);
		callback_for_onloadedmetadata get_onloadedmetadata();
		typedef Object* (*callback_for_onplay)(Event* ev);
		void set_onplay(callback_for_onplay value);
		callback_for_onplay get_onplay();
		void set_onerror(ErrorFunction* value);
		ErrorFunction* get_onerror();
		typedef Object* (*callback_for_onplaying)(Event* ev);
		void set_onplaying(callback_for_onplaying value);
		callback_for_onplaying get_onplaying();
		void set_parent(Window* value);
		Window* get_parent();
		void set_location(Location* value);
		Location* get_location();
		typedef Object* (*callback_for_oncanplaythrough)(Event* ev);
		void set_oncanplaythrough(callback_for_oncanplaythrough value);
		callback_for_oncanplaythrough get_oncanplaythrough();
		typedef Object* (*callback_for_onabort)(UIEvent* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		typedef Object* (*callback_for_onreadystatechange)(Event* ev);
		void set_onreadystatechange(callback_for_onreadystatechange value);
		callback_for_onreadystatechange get_onreadystatechange();
		typedef Object* (*callback_for_onkeypress)(KeyboardEvent* ev);
		void set_onkeypress(callback_for_onkeypress value);
		callback_for_onkeypress get_onkeypress();
		void set_frameElement(Element* value);
		Element* get_frameElement();
		typedef Object* (*callback_for_onloadeddata)(Event* ev);
		void set_onloadeddata(callback_for_onloadeddata value);
		callback_for_onloadeddata get_onloadeddata();
		typedef Object* (*callback_for_onsuspend)(Event* ev);
		void set_onsuspend(callback_for_onsuspend value);
		callback_for_onsuspend get_onsuspend();
		void set_window(Window* value);
		Window* get_window();
		typedef Object* (*callback_for_onfocus)(FocusEvent* ev);
		void set_onfocus(callback_for_onfocus value);
		callback_for_onfocus get_onfocus();
		typedef Object* (*callback_for_onmessage)(MessageEvent* ev);
		void set_onmessage(callback_for_onmessage value);
		callback_for_onmessage get_onmessage();
		typedef Object* (*callback_for_ontimeupdate)(Event* ev);
		void set_ontimeupdate(callback_for_ontimeupdate value);
		callback_for_ontimeupdate get_ontimeupdate();
		typedef Object* (*callback_for_onresize)(UIEvent* ev);
		void set_onresize(callback_for_onresize value);
		callback_for_onresize get_onresize();
		void set_navigator(Navigator* value);
		Navigator* get_navigator();
		typedef Object* (*callback_for_onselect)(UIEvent* ev);
		void set_onselect(callback_for_onselect value);
		callback_for_onselect get_onselect();
		typedef Object* (*callback_for_ondrop)(DragEvent* ev);
		void set_ondrop(callback_for_ondrop value);
		callback_for_ondrop get_ondrop();
		typedef Object* (*callback_for_onmouseout)(MouseEvent* ev);
		void set_onmouseout(callback_for_onmouseout value);
		callback_for_onmouseout get_onmouseout();
		typedef Object* (*callback_for_onended)(Event* ev);
		void set_onended(callback_for_onended value);
		callback_for_onended get_onended();
		typedef Object* (*callback_for_onhashchange)(Event* ev);
		void set_onhashchange(callback_for_onhashchange value);
		callback_for_onhashchange get_onhashchange();
		typedef Object* (*callback_for_onunload)(Event* ev);
		void set_onunload(callback_for_onunload value);
		callback_for_onunload get_onunload();
		typedef Object* (*callback_for_onscroll)(UIEvent* ev);
		void set_onscroll(callback_for_onscroll value);
		callback_for_onscroll get_onscroll();
		typedef Object* (*callback_for_onmousewheel)(MouseWheelEvent* ev);
		void set_onmousewheel(callback_for_onmousewheel value);
		callback_for_onmousewheel get_onmousewheel();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onvolumechange)(Event* ev);
		void set_onvolumechange(callback_for_onvolumechange value);
		callback_for_onvolumechange get_onvolumechange();
		typedef Object* (*callback_for_oninput)(Event* ev);
		void set_oninput(callback_for_oninput value);
		callback_for_oninput get_oninput();
		void alert();
		void alert(const String& message);
		void focus();
		void print();
		String* prompt();
		String* prompt(const String& message);
		String* prompt(const String& message, const String& defaul);
		String* toString();
		Window* open();
		Window* open(const String& url);
		Window* open(const String& url, const String& target, const String& features, Boolean replace);
		void close();
		Boolean confirm();
		Boolean confirm(const String& message);
		void postMessage(Object* message, const String& targetOrigin);
		void postMessage(Object* message, const String& targetOrigin, Object* ports);
		Object* showModalDialog();
		Object* showModalDialog(const String& url);
		Object* showModalDialog(const String& url, Object* argument, Object* options);
		void blur();
		Selection* getSelection();
		static void set_prototype(Window* value);
		static Window* get_prototype();
		Window();
	};

	class HTMLCollection: public MSHTMLCollectionExtensions {
	public:
		Element* operator[](double index);
		Element* operator[](const String& name);
		Element* operator()(Object* nameOrIndex, Object* optionalIndex);
		Element* operator()(const String& name);
		void set_length(double value);
		double get_length();
		Element* item();
		Element* item(Object* nameOrIndex);
		Element* item(Object* nameOrIndex, Object* optionalIndex);
		Element* namedItem(const String& name);
		static void set_prototype(HTMLCollection* value);
		static HTMLCollection* get_prototype();
		HTMLCollection();
	};

	class MSCSSProperties: public CSSStyleDeclaration , public MSCSSStyleDeclarationExtensions {
	public:
		void set_scrollbarShadowColor(const String& value);
		String* get_scrollbarShadowColor();
		void set_scrollbarHighlightColor(const String& value);
		String* get_scrollbarHighlightColor();
		void set_layoutGridChar(const String& value);
		String* get_layoutGridChar();
		void set_layoutGridType(const String& value);
		String* get_layoutGridType();
		void set_textAutospace(const String& value);
		String* get_textAutospace();
		void set_textKashidaSpace(const String& value);
		String* get_textKashidaSpace();
		void set_writingMode(const String& value);
		String* get_writingMode();
		void set_scrollbarFaceColor(const String& value);
		String* get_scrollbarFaceColor();
		void set_backgroundPositionY(const String& value);
		String* get_backgroundPositionY();
		void set_lineBreak(const String& value);
		String* get_lineBreak();
		void set_imeMode(const String& value);
		String* get_imeMode();
		void set_msBlockProgression(const String& value);
		String* get_msBlockProgression();
		void set_layoutGridLine(const String& value);
		String* get_layoutGridLine();
		void set_scrollbarBaseColor(const String& value);
		String* get_scrollbarBaseColor();
		void set_layoutGrid(const String& value);
		String* get_layoutGrid();
		void set_layoutFlow(const String& value);
		String* get_layoutFlow();
		void set_textKashida(const String& value);
		String* get_textKashida();
		void set_filter(const String& value);
		String* get_filter();
		void set_zoom(const String& value);
		String* get_zoom();
		void set_scrollbarArrowColor(const String& value);
		String* get_scrollbarArrowColor();
		void set_behavior(const String& value);
		String* get_behavior();
		void set_backgroundPositionX(const String& value);
		String* get_backgroundPositionX();
		void set_accelerator(const String& value);
		String* get_accelerator();
		void set_layoutGridMode(const String& value);
		String* get_layoutGridMode();
		void set_textJustifyTrim(const String& value);
		String* get_textJustifyTrim();
		void set_scrollbar3dLightColor(const String& value);
		String* get_scrollbar3dLightColor();
		void set_msInterpolationMode(const String& value);
		String* get_msInterpolationMode();
		void set_scrollbarTrackColor(const String& value);
		String* get_scrollbarTrackColor();
		void set_scrollbarDarkShadowColor(const String& value);
		String* get_scrollbarDarkShadowColor();
		void set_styleFloat(const String& value);
		String* get_styleFloat();
		static void set_prototype(MSCSSProperties* value);
		static MSCSSProperties* get_prototype();
		MSCSSProperties();
	};

	class HTMLImageElement: public HTMLElement , public DOML2DeprecatedMarginStyle , public DOML2DeprecatedBorderStyle , public DOML2DeprecatedAlignmentStyle_HTMLImageElement , public MSImageResourceExtensions , public MSHTMLImageElementExtensions , public MSDataBindingExtensions , public MSResourceMetadata {
	public:
		void set_width(double value);
		double get_width();
		void set_naturalHeight(double value);
		double get_naturalHeight();
		void set_alt(const String& value);
		String* get_alt();
		void set_src(const String& value);
		String* get_src();
		void set_useMap(const String& value);
		String* get_useMap();
		void set_naturalWidth(double value);
		double get_naturalWidth();
		void set_name(const String& value);
		String* get_name();
		void set_height(double value);
		double get_height();
		void set_longDesc(const String& value);
		String* get_longDesc();
		void set_isMap(Boolean value);
		Boolean get_isMap();
		void set_complete(Boolean value);
		Boolean get_complete();
		static void set_prototype(HTMLImageElement* value);
		static HTMLImageElement* get_prototype();
		HTMLImageElement();
	};

	class HTMLAreaElement: public HTMLElement , public MSHTMLAreaElementExtensions {
	public:
		void set_protocol(const String& value);
		String* get_protocol();
		void set_search(const String& value);
		String* get_search();
		void set_alt(const String& value);
		String* get_alt();
		void set_coords(const String& value);
		String* get_coords();
		void set_hostname(const String& value);
		String* get_hostname();
		void set_port(const String& value);
		String* get_port();
		void set_pathname(const String& value);
		String* get_pathname();
		void set_host(const String& value);
		String* get_host();
		void set_hash(const String& value);
		String* get_hash();
		void set_target(const String& value);
		String* get_target();
		void set_href(const String& value);
		String* get_href();
		void set_noHref(Boolean value);
		Boolean get_noHref();
		void set_shape(const String& value);
		String* get_shape();
		String* toString();
		static void set_prototype(HTMLAreaElement* value);
		static HTMLAreaElement* get_prototype();
		HTMLAreaElement();
	};

	class HTMLSourceElement: public HTMLElement {
	public:
		void set_src(const String& value);
		String* get_src();
		void set_media(const String& value);
		String* get_media();
		void set_type(const String& value);
		String* get_type();
		static void set_prototype(HTMLSourceElement* value);
		static HTMLSourceElement* get_prototype();
		HTMLSourceElement();
	};

	class HTMLTableRowElement: public HTMLElement , public MSBorderColorHighlightStyle_HTMLTableRowElement , public HTMLTableAlignment , public MSBorderColorStyle_HTMLTableRowElement , public DOML2DeprecatedAlignmentStyle_HTMLTableRowElement , public DOML2DeprecatedBackgroundColorStyle , public MSHTMLTableRowElementExtensions {
	public:
		void set_rowIndex(double value);
		double get_rowIndex();
		void set_cells(HTMLCollection* value);
		HTMLCollection* get_cells();
		void set_sectionRowIndex(double value);
		double get_sectionRowIndex();
		void deleteCell();
		void deleteCell(double index);
		HTMLElement* insertCell();
		HTMLElement* insertCell(double index);
		static void set_prototype(HTMLTableRowElement* value);
		static HTMLTableRowElement* get_prototype();
		HTMLTableRowElement();
	};

	class SVGPathSegLinetoHorizontalAbs: public SVGPathSeg {
	public:
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegLinetoHorizontalAbs* value);
		static SVGPathSegLinetoHorizontalAbs* get_prototype();
		SVGPathSegLinetoHorizontalAbs();
	};

	class SVGPathSegArcAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_sweepFlag(Boolean value);
		Boolean get_sweepFlag();
		void set_r2(double value);
		double get_r2();
		void set_x(double value);
		double get_x();
		void set_angle(double value);
		double get_angle();
		void set_r1(double value);
		double get_r1();
		void set_largeArcFlag(Boolean value);
		Boolean get_largeArcFlag();
		static void set_prototype(SVGPathSegArcAbs* value);
		static SVGPathSegArcAbs* get_prototype();
		SVGPathSegArcAbs();
	};

	class HTMLHtmlElement: public HTMLElement , public HTMLHtmlElementDOML2Deprecated {
	public:
		static void set_prototype(HTMLHtmlElement* value);
		static HTMLHtmlElement* get_prototype();
		HTMLHtmlElement();
	};

	class SVGPathSegClosePath: public SVGPathSeg {
	public:
		static void set_prototype(SVGPathSegClosePath* value);
		static SVGPathSegClosePath* get_prototype();
		SVGPathSegClosePath();
	};

	class HTMLFrameElement: public HTMLElement , public GetSVGDocument , public MSHTMLFrameElementExtensions , public MSDataBindingExtensions , public MSBorderColorStyle_HTMLFrameElement {
	public:
		void set_scrolling(const String& value);
		String* get_scrolling();
		void set_marginHeight(const String& value);
		String* get_marginHeight();
		void set_src(const String& value);
		String* get_src();
		void set_name(const String& value);
		String* get_name();
		void set_marginWidth(const String& value);
		String* get_marginWidth();
		void set_contentDocument(Document* value);
		Document* get_contentDocument();
		void set_longDesc(const String& value);
		String* get_longDesc();
		void set_noResize(Boolean value);
		Boolean get_noResize();
		static void set_prototype(HTMLFrameElement* value);
		static HTMLFrameElement* get_prototype();
		HTMLFrameElement();
	};

	class CSSMediaRule: public CSSRule {
	public:
		void set_media(MediaList* value);
		MediaList* get_media();
		void set_cssRules(CSSRuleList* value);
		CSSRuleList* get_cssRules();
		double insertRule(const String& rule);
		double insertRule(const String& rule, double index);
		void deleteRule();
		void deleteRule(double index);
		static void set_prototype(CSSMediaRule* value);
		static CSSMediaRule* get_prototype();
		CSSMediaRule();
	};

	class HTMLQuoteElement: public HTMLElement , public MSHTMLQuoteElementExtensions {
	public:
		void set_cite(const String& value);
		String* get_cite();
		static void set_prototype(HTMLQuoteElement* value);
		static HTMLQuoteElement* get_prototype();
		HTMLQuoteElement();
	};

	class HTMLDListElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction , public MSHTMLDListElementExtensions {
	public:
		static void set_prototype(HTMLDListElement* value);
		static HTMLDListElement* get_prototype();
		HTMLDListElement();
	};

	class SVGPathSegLinetoHorizontalRel: public SVGPathSeg {
	public:
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegLinetoHorizontalRel* value);
		static SVGPathSegLinetoHorizontalRel* get_prototype();
		SVGPathSegLinetoHorizontalRel();
	};

	class HTMLFrameSetElement: public HTMLElement , public MSHTMLFrameSetElementExtensions , public MSBorderColorStyle_HTMLFrameSetElement {
	public:
		typedef Object* (*callback_for_onresize)(UIEvent* ev);
		void set_onresize(callback_for_onresize value);
		callback_for_onresize get_onresize();
		typedef Object* (*callback_for_ononline)(Event* ev);
		void set_ononline(callback_for_ononline value);
		callback_for_ononline get_ononline();
		typedef Object* (*callback_for_onafterprint)(Event* ev);
		void set_onafterprint(callback_for_onafterprint value);
		callback_for_onafterprint get_onafterprint();
		typedef Object* (*callback_for_onbeforeprint)(Event* ev);
		void set_onbeforeprint(callback_for_onbeforeprint value);
		callback_for_onbeforeprint get_onbeforeprint();
		typedef Object* (*callback_for_onoffline)(Event* ev);
		void set_onoffline(callback_for_onoffline value);
		callback_for_onoffline get_onoffline();
		void set_rows(const String& value);
		String* get_rows();
		void set_cols(const String& value);
		String* get_cols();
		typedef Object* (*callback_for_onblur)(FocusEvent* ev);
		void set_onblur(callback_for_onblur value);
		callback_for_onblur get_onblur();
		typedef Object* (*callback_for_onunload)(Event* ev);
		void set_onunload(callback_for_onunload value);
		callback_for_onunload get_onunload();
		typedef Object* (*callback_for_onhashchange)(Event* ev);
		void set_onhashchange(callback_for_onhashchange value);
		callback_for_onhashchange get_onhashchange();
		typedef Object* (*callback_for_onfocus)(FocusEvent* ev);
		void set_onfocus(callback_for_onfocus value);
		callback_for_onfocus get_onfocus();
		typedef Object* (*callback_for_onmessage)(MessageEvent* ev);
		void set_onmessage(callback_for_onmessage value);
		callback_for_onmessage get_onmessage();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onerror)(Event* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onbeforeunload)(BeforeUnloadEvent* ev);
		void set_onbeforeunload(callback_for_onbeforeunload value);
		callback_for_onbeforeunload get_onbeforeunload();
		typedef Object* (*callback_for_onstorage)(StorageEvent* ev);
		void set_onstorage(callback_for_onstorage value);
		callback_for_onstorage get_onstorage();
		static void set_prototype(HTMLFrameSetElement* value);
		static HTMLFrameSetElement* get_prototype();
		HTMLFrameSetElement();
	};

	class MSHTMLPreElementExtensions: public DOML2DeprecatedTextFlowControl_HTMLBlockElement {
	public:
		void set_cite(const String& value);
		String* get_cite();
	};

	class HTMLLabelElement: public HTMLElement , public MSDataBindingExtensions , public MSHTMLLabelElementExtensions {
	public:
		void set_htmlFor(const String& value);
		String* get_htmlFor();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		static void set_prototype(HTMLLabelElement* value);
		static HTMLLabelElement* get_prototype();
		HTMLLabelElement();
	};

	class HTMLLegendElement: public HTMLElement , public DOML2DeprecatedAlignmentStyle_HTMLLegendElement , public MSDataBindingExtensions , public MSHTMLLegendElementExtensions {
	public:
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		static void set_prototype(HTMLLegendElement* value);
		static HTMLLegendElement* get_prototype();
		HTMLLegendElement();
	};

	class HTMLDirectoryElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction , public MSHTMLDirectoryElementExtensions {
	public:
		static void set_prototype(HTMLDirectoryElement* value);
		static HTMLDirectoryElement* get_prototype();
		HTMLDirectoryElement();
	};

	class HTMLLIElement: public HTMLElement , public DOML2DeprecatedListdoubleingAndBulletStyle , public MSHTMLLIElementExtensions {
	public:
		void set_value(double value);
		double get_value();
		static void set_prototype(HTMLLIElement* value);
		static HTMLLIElement* get_prototype();
		HTMLLIElement();
	};

	class SVGPathSegLinetoVerticalAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		static void set_prototype(SVGPathSegLinetoVerticalAbs* value);
		static SVGPathSegLinetoVerticalAbs* get_prototype();
		SVGPathSegLinetoVerticalAbs();
	};

	class MSCurrentStyleCSSProperties: public MSCSSProperties {
	public:
		void set_blockDirection(const String& value);
		String* get_blockDirection();
		void set_clipBottom(const String& value);
		String* get_clipBottom();
		void set_clipLeft(const String& value);
		String* get_clipLeft();
		void set_clipRight(const String& value);
		String* get_clipRight();
		void set_clipTop(const String& value);
		String* get_clipTop();
		void set_hasLayout(const String& value);
		String* get_hasLayout();
		static void set_prototype(MSCurrentStyleCSSProperties* value);
		static MSCurrentStyleCSSProperties* get_prototype();
		MSCurrentStyleCSSProperties();
	};

	class DocumentType: public Node {
	public:
		void set_name(const String& value);
		String* get_name();
		void set_notations(NamedNodeMap* value);
		NamedNodeMap* get_notations();
		void set_systemId(const String& value);
		String* get_systemId();
		void set_internalSubset(const String& value);
		String* get_internalSubset();
		void set_entities(NamedNodeMap* value);
		NamedNodeMap* get_entities();
		void set_publicId(const String& value);
		String* get_publicId();
		static void set_prototype(DocumentType* value);
		static DocumentType* get_prototype();
		DocumentType();
	};

	class MSHTMLInputElementExtensions: public DOML2DeprecatedMarginStyle_HTMLInputElement , public DOML2DeprecatedBorderStyle_HTMLInputElement {
	public:
		void set_status(Boolean value);
		Boolean get_status();
		void set_complete(Boolean value);
		Boolean get_complete();
		TextRange* createTextRange();
	};

	class HTMLTableSectionElement: public HTMLElement , public MSHTMLTableSectionElementExtensions , public DOML2DeprecatedAlignmentStyle_HTMLTableSectionElement , public HTMLTableAlignment {
	public:
		void set_rows(HTMLCollection* value);
		HTMLCollection* get_rows();
		void deleteRow();
		void deleteRow(double index);
		HTMLElement* insertRow();
		HTMLElement* insertRow(double index);
		static void set_prototype(HTMLTableSectionElement* value);
		static HTMLTableSectionElement* get_prototype();
		HTMLTableSectionElement();
	};

	class HTMLParamElement: public HTMLElement {
	public:
		void set_value(const String& value);
		String* get_value();
		void set_name(const String& value);
		String* get_name();
		void set_type(const String& value);
		String* get_type();
		void set_valueType(const String& value);
		String* get_valueType();
		static void set_prototype(HTMLParamElement* value);
		static HTMLParamElement* get_prototype();
		HTMLParamElement();
	};

	class HTMLPreElement: public HTMLElement , public DOML2DeprecatedWidthStyle , public MSHTMLPreElementExtensions {
	public:
		static void set_prototype(HTMLPreElement* value);
		static HTMLPreElement* get_prototype();
		HTMLPreElement();
	};

	class SVGPathSegArcRel: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_sweepFlag(Boolean value);
		Boolean get_sweepFlag();
		void set_r2(double value);
		double get_r2();
		void set_x(double value);
		double get_x();
		void set_angle(double value);
		double get_angle();
		void set_r1(double value);
		double get_r1();
		void set_largeArcFlag(Boolean value);
		Boolean get_largeArcFlag();
		static void set_prototype(SVGPathSegArcRel* value);
		static SVGPathSegArcRel* get_prototype();
		SVGPathSegArcRel();
	};

	class SVGPathSegMovetoAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegMovetoAbs* value);
		static SVGPathSegMovetoAbs* get_prototype();
		SVGPathSegMovetoAbs();
	};

	class HTMLPhraseElement: public HTMLElement {
	public:
		void set_dateTime(const String& value);
		String* get_dateTime();
		void set_cite(const String& value);
		String* get_cite();
		static void set_prototype(HTMLPhraseElement* value);
		static HTMLPhraseElement* get_prototype();
		HTMLPhraseElement();
	};

	class SVGPathSegCurvetoCubicRel: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_y1(double value);
		double get_y1();
		void set_x2(double value);
		double get_x2();
		void set_x(double value);
		double get_x();
		void set_x1(double value);
		double get_x1();
		void set_y2(double value);
		double get_y2();
		static void set_prototype(SVGPathSegCurvetoCubicRel* value);
		static SVGPathSegCurvetoCubicRel* get_prototype();
		SVGPathSegCurvetoCubicRel();
	};

	class HTMLTitleElement: public HTMLElement {
	public:
		void set_text(const String& value);
		String* get_text();
		static void set_prototype(HTMLTitleElement* value);
		static HTMLTitleElement* get_prototype();
		HTMLTitleElement();
	};

	class HTMLStyleElement: public HTMLElement , public MSLinkStyleExtensions , public LinkStyle {
	public:
		void set_media(const String& value);
		String* get_media();
		void set_type(const String& value);
		String* get_type();
		static void set_prototype(HTMLStyleElement* value);
		static HTMLStyleElement* get_prototype();
		HTMLStyleElement();
	};

	class CSSNamespaceRule: public CSSRule {
	public:
		void set_namespaceURI(const String& value);
		String* get_namespaceURI();
		void set_prefix(const String& value);
		String* get_prefix();
		static void set_prototype(CSSNamespaceRule* value);
		static CSSNamespaceRule* get_prototype();
		CSSNamespaceRule();
	};

	class HTMLUnknownElement: public HTMLElement , public MSDataBindingRecordSetReadonlyExtensions , public MSHTMLUnknownElementExtensions {
	public:
		static void set_prototype(HTMLUnknownElement* value);
		static HTMLUnknownElement* get_prototype();
		HTMLUnknownElement();
	};

	class HTMLTableCellElement: public HTMLElement , public DOML2DeprecatedTableCellHeight , public HTMLTableAlignment , public MSBorderColorHighlightStyle_HTMLTableCellElement , public DOML2DeprecatedWidthStyle_HTMLTableCellElement , public DOML2DeprecatedBackgroundStyle , public MSBorderColorStyle_HTMLTableCellElement , public MSHTMLTableCellElementExtensions , public DOML2DeprecatedAlignmentStyle_HTMLTableCellElement , public HTMLTableHeaderCellScope , public DOML2DeprecatedWordWrapSuppression , public DOML2DeprecatedBackgroundColorStyle {
	public:
		void set_headers(const String& value);
		String* get_headers();
		void set_abbr(const String& value);
		String* get_abbr();
		void set_rowSpan(double value);
		double get_rowSpan();
		void set_cellIndex(double value);
		double get_cellIndex();
		void set_colSpan(double value);
		double get_colSpan();
		void set_axis(const String& value);
		String* get_axis();
		static void set_prototype(HTMLTableCellElement* value);
		static HTMLTableCellElement* get_prototype();
		HTMLTableCellElement();
	};

	class HTMLBaseFontElement: public HTMLElement , public DOML2DeprecatedSizeProperty_HTMLBaseFontElement , public DOML2DeprecatedColorProperty {
	public:
		void set_face(const String& value);
		String* get_face();
		static void set_prototype(HTMLBaseFontElement* value);
		static HTMLBaseFontElement* get_prototype();
		HTMLBaseFontElement();
	};

	class CSSImportRule: public CSSRule {
	public:
		void set_styleSheet(CSSStyleSheet* value);
		CSSStyleSheet* get_styleSheet();
		void set_href(const String& value);
		String* get_href();
		void set_media(MediaList* value);
		MediaList* get_media();
		static void set_prototype(CSSImportRule* value);
		static CSSImportRule* get_prototype();
		CSSImportRule();
	};

	class HTMLMarqueeElement: public HTMLElement , public DOML2DeprecatedMarginStyle_HTMLMarqueeElement , public MSDataBindingExtensions , public MSHTMLMarqueeElementExtensions , public DOML2DeprecatedBackgroundColorStyle {
	public:
		void set_width(const String& value);
		String* get_width();
		typedef Object* (*callback_for_onbounce)(Event* ev);
		void set_onbounce(callback_for_onbounce value);
		callback_for_onbounce get_onbounce();
		void set_trueSpeed(Boolean value);
		Boolean get_trueSpeed();
		void set_scrollAmount(double value);
		double get_scrollAmount();
		void set_scrollDelay(double value);
		double get_scrollDelay();
		void set_behavior(const String& value);
		String* get_behavior();
		void set_height(const String& value);
		String* get_height();
		void set_loop(double value);
		double get_loop();
		void set_direction(const String& value);
		String* get_direction();
		typedef Object* (*callback_for_onstart)(Event* ev);
		void set_onstart(callback_for_onstart value);
		callback_for_onstart get_onstart();
		typedef Object* (*callback_for_onfinish)(Event* ev);
		void set_onfinish(callback_for_onfinish value);
		callback_for_onfinish get_onfinish();
		void stop();
		void start();
		static void set_prototype(HTMLMarqueeElement* value);
		static HTMLMarqueeElement* get_prototype();
		HTMLMarqueeElement();
	};

	class HTMLModElement: public HTMLElement , public MSHTMLModElementExtensions {
	public:
		void set_dateTime(const String& value);
		String* get_dateTime();
		void set_cite(const String& value);
		String* get_cite();
		static void set_prototype(HTMLModElement* value);
		static HTMLModElement* get_prototype();
		HTMLModElement();
	};

	class Event: public MSEventExtensions {
	public:
		void set_timeStamp(double value);
		double get_timeStamp();
		void set_defaultPrevented(Boolean value);
		Boolean get_defaultPrevented();
		void set_isTrusted(Boolean value);
		Boolean get_isTrusted();
		void set_currentTarget(EventTarget* value);
		EventTarget* get_currentTarget();
		void set_target(EventTarget* value);
		EventTarget* get_target();
		void set_eventPhase(double value);
		double get_eventPhase();
		void set_type(const String& value);
		String* get_type();
		void set_cancelable(Boolean value);
		Boolean get_cancelable();
		void set_bubbles(Boolean value);
		Boolean get_bubbles();
		void initEvent(const String& eventTypeArg, Boolean canBubbleArg, Boolean cancelableArg);
		void stopPropagation();
		void stopImmediatePropagation();
		void preventDefault();
		void set_CAPTURING_PHASE(double value);
		double get_CAPTURING_PHASE();
		void set_AT_TARGET(double value);
		double get_AT_TARGET();
		void set_BUBBLING_PHASE(double value);
		double get_BUBBLING_PHASE();
		static void set_prototype(Event* value);
		static Event* get_prototype();
		Event();
	};

	class HTMLTableColElement: public HTMLElement , public MSHTMLTableColElementExtensions , public HTMLTableAlignment , public DOML2DeprecatedAlignmentStyle_HTMLTableColElement {
	public:
		void set_width(Object* value);
		Object* get_width();
		void set_span(double value);
		double get_span();
		static void set_prototype(HTMLTableColElement* value);
		static HTMLTableColElement* get_prototype();
		HTMLTableColElement();
	};

	class HTMLDocument: public MSEventAttachmentTarget , public MSHTMLDocumentSelection , public MSHTMLDocumentExtensions , public MSNodeExtensions , public MSResourceMetadata , public MSHTMLDocumentEventExtensions , public MSHTMLDocumentViewExtensions {
	public:
		typedef Object* (*callback_for_ondragend)(DragEvent* ev);
		void set_ondragend(callback_for_ondragend value);
		callback_for_ondragend get_ondragend();
		typedef Object* (*callback_for_ondragover)(DragEvent* ev);
		void set_ondragover(callback_for_ondragover value);
		callback_for_ondragover get_ondragover();
		typedef Object* (*callback_for_onkeydown)(KeyboardEvent* ev);
		void set_onkeydown(callback_for_onkeydown value);
		callback_for_onkeydown get_onkeydown();
		void set_bgColor(const String& value);
		String* get_bgColor();
		typedef Object* (*callback_for_onkeyup)(KeyboardEvent* ev);
		void set_onkeyup(callback_for_onkeyup value);
		callback_for_onkeyup get_onkeyup();
		typedef Object* (*callback_for_onreset)(Event* ev);
		void set_onreset(callback_for_onreset value);
		callback_for_onreset get_onreset();
		typedef Object* (*callback_for_onmouseup)(MouseEvent* ev);
		void set_onmouseup(callback_for_onmouseup value);
		callback_for_onmouseup get_onmouseup();
		typedef Object* (*callback_for_ondragstart)(DragEvent* ev);
		void set_ondragstart(callback_for_ondragstart value);
		callback_for_ondragstart get_ondragstart();
		void set_scripts(HTMLCollection* value);
		HTMLCollection* get_scripts();
		typedef Object* (*callback_for_ondrag)(DragEvent* ev);
		void set_ondrag(callback_for_ondrag value);
		callback_for_ondrag get_ondrag();
		void set_linkColor(const String& value);
		String* get_linkColor();
		typedef Object* (*callback_for_ondragleave)(DragEvent* ev);
		void set_ondragleave(callback_for_ondragleave value);
		callback_for_ondragleave get_ondragleave();
		typedef Object* (*callback_for_onmouseover)(MouseEvent* ev);
		void set_onmouseover(callback_for_onmouseover value);
		callback_for_onmouseover get_onmouseover();
		typedef Object* (*callback_for_onpause)(Event* ev);
		void set_onpause(callback_for_onpause value);
		callback_for_onpause get_onpause();
		void set_charset(const String& value);
		String* get_charset();
		void set_vlinkColor(const String& value);
		String* get_vlinkColor();
		typedef Object* (*callback_for_onmousedown)(MouseEvent* ev);
		void set_onmousedown(callback_for_onmousedown value);
		callback_for_onmousedown get_onmousedown();
		typedef Object* (*callback_for_onseeked)(Event* ev);
		void set_onseeked(callback_for_onseeked value);
		callback_for_onseeked get_onseeked();
		void set_title(const String& value);
		String* get_title();
		typedef Object* (*callback_for_onclick)(MouseEvent* ev);
		void set_onclick(callback_for_onclick value);
		callback_for_onclick get_onclick();
		typedef Object* (*callback_for_onwaiting)(Event* ev);
		void set_onwaiting(callback_for_onwaiting value);
		callback_for_onwaiting get_onwaiting();
		void set_defaultCharset(const String& value);
		String* get_defaultCharset();
		void set_embeds(HTMLCollection* value);
		HTMLCollection* get_embeds();
		typedef Object* (*callback_for_ondurationchange)(Event* ev);
		void set_ondurationchange(callback_for_ondurationchange value);
		callback_for_ondurationchange get_ondurationchange();
		void set_all(HTMLCollection* value);
		HTMLCollection* get_all();
		void set_applets(HTMLCollection* value);
		HTMLCollection* get_applets();
		void set_forms(HTMLCollection* value);
		HTMLCollection* get_forms();
		typedef Object* (*callback_for_onblur)(FocusEvent* ev);
		void set_onblur(callback_for_onblur value);
		callback_for_onblur get_onblur();
		void set_dir(const String& value);
		String* get_dir();
		void set_body(HTMLElement* value);
		HTMLElement* get_body();
		void set_designMode(const String& value);
		String* get_designMode();
		typedef Object* (*callback_for_onemptied)(Event* ev);
		void set_onemptied(callback_for_onemptied value);
		callback_for_onemptied get_onemptied();
		void set_domain(const String& value);
		String* get_domain();
		typedef Object* (*callback_for_onseeking)(Event* ev);
		void set_onseeking(callback_for_onseeking value);
		callback_for_onseeking get_onseeking();
		typedef Object* (*callback_for_oncanplay)(Event* ev);
		void set_oncanplay(callback_for_oncanplay value);
		callback_for_oncanplay get_oncanplay();
		typedef Object* (*callback_for_onstalled)(Event* ev);
		void set_onstalled(callback_for_onstalled value);
		callback_for_onstalled get_onstalled();
		typedef Object* (*callback_for_onmousemove)(MouseEvent* ev);
		void set_onmousemove(callback_for_onmousemove value);
		callback_for_onmousemove get_onmousemove();
		typedef Object* (*callback_for_onratechange)(Event* ev);
		void set_onratechange(callback_for_onratechange value);
		callback_for_onratechange get_onratechange();
		typedef Object* (*callback_for_onloadstart)(Event* ev);
		void set_onloadstart(callback_for_onloadstart value);
		callback_for_onloadstart get_onloadstart();
		typedef Object* (*callback_for_ondragenter)(DragEvent* ev);
		void set_ondragenter(callback_for_ondragenter value);
		callback_for_ondragenter get_ondragenter();
		typedef Object* (*callback_for_onsubmit)(Event* ev);
		void set_onsubmit(callback_for_onsubmit value);
		callback_for_onsubmit get_onsubmit();
		typedef Object* (*callback_for_onprogress)(Object* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_ondblclick)(MouseEvent* ev);
		void set_ondblclick(callback_for_ondblclick value);
		callback_for_ondblclick get_ondblclick();
		typedef Object* (*callback_for_oncontextmenu)(MouseEvent* ev);
		void set_oncontextmenu(callback_for_oncontextmenu value);
		callback_for_oncontextmenu get_oncontextmenu();
		void set_activeElement(Element* value);
		Element* get_activeElement();
		typedef Object* (*callback_for_onchange)(Event* ev);
		void set_onchange(callback_for_onchange value);
		callback_for_onchange get_onchange();
		typedef Object* (*callback_for_onloadedmetadata)(Event* ev);
		void set_onloadedmetadata(callback_for_onloadedmetadata value);
		callback_for_onloadedmetadata get_onloadedmetadata();
		typedef Object* (*callback_for_onerror)(Event* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onplay)(Event* ev);
		void set_onplay(callback_for_onplay value);
		callback_for_onplay get_onplay();
		void set_links(HTMLCollection* value);
		HTMLCollection* get_links();
		typedef Object* (*callback_for_onplaying)(Event* ev);
		void set_onplaying(callback_for_onplaying value);
		callback_for_onplaying get_onplaying();
		void set_URL(const String& value);
		String* get_URL();
		void set_images(HTMLCollection* value);
		HTMLCollection* get_images();
		void set_head(HTMLHeadElement* value);
		HTMLHeadElement* get_head();
		void set_location(Location* value);
		Location* get_location();
		void set_cookie(const String& value);
		String* get_cookie();
		typedef Object* (*callback_for_oncanplaythrough)(Event* ev);
		void set_oncanplaythrough(callback_for_oncanplaythrough value);
		callback_for_oncanplaythrough get_oncanplaythrough();
		typedef Object* (*callback_for_onabort)(UIEvent* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		void set_characterSet(const String& value);
		String* get_characterSet();
		void set_anchors(HTMLCollection* value);
		HTMLCollection* get_anchors();
		void set_lastModified(const String& value);
		String* get_lastModified();
		typedef Object* (*callback_for_onreadystatechange)(Event* ev);
		void set_onreadystatechange(callback_for_onreadystatechange value);
		callback_for_onreadystatechange get_onreadystatechange();
		typedef Object* (*callback_for_onkeypress)(KeyboardEvent* ev);
		void set_onkeypress(callback_for_onkeypress value);
		callback_for_onkeypress get_onkeypress();
		typedef Object* (*callback_for_onloadeddata)(Event* ev);
		void set_onloadeddata(callback_for_onloadeddata value);
		callback_for_onloadeddata get_onloadeddata();
		void set_plugins(HTMLCollection* value);
		HTMLCollection* get_plugins();
		typedef Object* (*callback_for_onsuspend)(Event* ev);
		void set_onsuspend(callback_for_onsuspend value);
		callback_for_onsuspend get_onsuspend();
		void set_referrer(const String& value);
		String* get_referrer();
		void set_readyState(const String& value);
		String* get_readyState();
		void set_alinkColor(const String& value);
		String* get_alinkColor();
		typedef Object* (*callback_for_onfocus)(FocusEvent* ev);
		void set_onfocus(callback_for_onfocus value);
		callback_for_onfocus get_onfocus();
		void set_fgColor(const String& value);
		String* get_fgColor();
		typedef Object* (*callback_for_ontimeupdate)(Event* ev);
		void set_ontimeupdate(callback_for_ontimeupdate value);
		callback_for_ontimeupdate get_ontimeupdate();
		typedef Object* (*callback_for_onselect)(UIEvent* ev);
		void set_onselect(callback_for_onselect value);
		callback_for_onselect get_onselect();
		typedef Object* (*callback_for_ondrop)(DragEvent* ev);
		void set_ondrop(callback_for_ondrop value);
		callback_for_ondrop get_ondrop();
		typedef Object* (*callback_for_onmouseout)(MouseEvent* ev);
		void set_onmouseout(callback_for_onmouseout value);
		callback_for_onmouseout get_onmouseout();
		typedef Object* (*callback_for_onended)(Event* ev);
		void set_onended(callback_for_onended value);
		callback_for_onended get_onended();
		void set_compatMode(const String& value);
		String* get_compatMode();
		typedef Object* (*callback_for_onscroll)(UIEvent* ev);
		void set_onscroll(callback_for_onscroll value);
		callback_for_onscroll get_onscroll();
		typedef Object* (*callback_for_onmousewheel)(MouseWheelEvent* ev);
		void set_onmousewheel(callback_for_onmousewheel value);
		callback_for_onmousewheel get_onmousewheel();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onvolumechange)(Event* ev);
		void set_onvolumechange(callback_for_onvolumechange value);
		callback_for_onvolumechange get_onvolumechange();
		typedef Object* (*callback_for_oninput)(Event* ev);
		void set_oninput(callback_for_oninput value);
		callback_for_oninput get_oninput();
		String* queryCommandValue(const String& commandId);
		Boolean queryCommandIndeterm(const String& commandId);
		Boolean execCommand(const String& commandId);
		Boolean execCommand(const String& commandId, Boolean showUI);
		Boolean execCommand(const String& commandId, Boolean showUI, Object* value);
		NodeList* getElementsByName(const String& elementName);
		template<typename... Args> 
		void writeln(const Args&... args )
		{
			duettoVariadicTrap<void>(writeln<>,static_cast<const String&>(args)...);
		}
		Object* open();
		Object* open(const String& url);
		Object* open(const String& url, const String& name, const String& features, Boolean replace);
		Boolean queryCommandState(const String& commandId);
		void close();
		Boolean hasFocus();
		NodeList* getElementsByClassName(const String& classNames);
		Boolean queryCommandSupported(const String& commandId);
		Selection* getSelection();
		Boolean queryCommandEnabled(const String& commandId);
		template<typename... Args> 
		void write(const Args&... args )
		{
			duettoVariadicTrap<void>(write<>,static_cast<const String&>(args)...);
		}
		String* queryCommandText(const String& commandId);
	};

	class MSHTMLHeadingElementExtensions: public DOML2DeprecatedTextFlowControl_HTMLBlockElement {
	public:
	};

	class HTMLUListElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction , public DOML2DeprecatedListdoubleingAndBulletStyle , public MSHTMLUListElementExtensions {
	public:
		static void set_prototype(HTMLUListElement* value);
		static HTMLUListElement* get_prototype();
		HTMLUListElement();
	};

	class HTMLDivElement: public HTMLElement , public DOML2DeprecatedAlignmentStyle_HTMLDivElement , public MSHTMLDivElementExtensions , public MSDataBindingExtensions {
	public:
		static void set_prototype(HTMLDivElement* value);
		static HTMLDivElement* get_prototype();
		HTMLDivElement();
	};

	class ProcessingInstruction: public Node {
	public:
		void set_target(const String& value);
		String* get_target();
		void set_data(const String& value);
		String* get_data();
		static void set_prototype(ProcessingInstruction* value);
		static ProcessingInstruction* get_prototype();
		ProcessingInstruction();
	};

	class DocumentFragment: public Node , public NodeSelector , public MSEventAttachmentTarget , public MSNodeExtensions {
	public:
		static void set_prototype(DocumentFragment* value);
		static DocumentFragment* get_prototype();
		DocumentFragment();
	};

	class CSSPageRule: public CSSRule , public StyleSheetPage {
	public:
		void set_selectorText(const String& value);
		String* get_selectorText();
		void set_style(CSSStyleDeclaration* value);
		CSSStyleDeclaration* get_style();
		static void set_prototype(CSSPageRule* value);
		static CSSPageRule* get_prototype();
		CSSPageRule();
	};

	class HTMLBRElement: public HTMLElement , public DOML2DeprecatedTextFlowControl_HTMLBRElement {
	public:
		static void set_prototype(HTMLBRElement* value);
		static HTMLBRElement* get_prototype();
		HTMLBRElement();
	};

	class HTMLSpanElement: public HTMLElement , public MSHTMLSpanElementExtensions , public MSDataBindingExtensions {
	public:
		static void set_prototype(HTMLSpanElement* value);
		static HTMLSpanElement* get_prototype();
		HTMLSpanElement();
	};

	class HTMLHeadElement: public HTMLElement {
	public:
		void set_profile(const String& value);
		String* get_profile();
		static void set_prototype(HTMLHeadElement* value);
		static HTMLHeadElement* get_prototype();
		HTMLHeadElement();
	};

	class HTMLHeadingElement: public HTMLElement , public DOML2DeprecatedAlignmentStyle_HTMLHeadingElement , public MSHTMLHeadingElementExtensions {
	public:
		static void set_prototype(HTMLHeadingElement* value);
		static HTMLHeadingElement* get_prototype();
		HTMLHeadingElement();
	};

	class HTMLMediaElement: public HTMLElement {
	public:
		void set_initialTime(double value);
		double get_initialTime();
		void set_played(TimeRanges* value);
		TimeRanges* get_played();
		void set_currentSrc(const String& value);
		String* get_currentSrc();
		void set_readyState(const String& value);
		String* get_readyState();
		void set_autobuffer(Boolean value);
		Boolean get_autobuffer();
		void set_loop(Boolean value);
		Boolean get_loop();
		void set_ended(Boolean value);
		Boolean get_ended();
		void set_buffered(TimeRanges* value);
		TimeRanges* get_buffered();
		void set_error(MediaError* value);
		MediaError* get_error();
		void set_seekable(TimeRanges* value);
		TimeRanges* get_seekable();
		void set_autoplay(Boolean value);
		Boolean get_autoplay();
		void set_controls(Boolean value);
		Boolean get_controls();
		void set_volume(double value);
		double get_volume();
		void set_src(const String& value);
		String* get_src();
		void set_playbackRate(double value);
		double get_playbackRate();
		void set_duration(double value);
		double get_duration();
		void set_muted(Boolean value);
		Boolean get_muted();
		void set_defaultPlaybackRate(double value);
		double get_defaultPlaybackRate();
		void set_paused(Boolean value);
		Boolean get_paused();
		void set_seeking(Boolean value);
		Boolean get_seeking();
		void set_currentTime(double value);
		double get_currentTime();
		void set_preload(const String& value);
		String* get_preload();
		void set_networkState(double value);
		double get_networkState();
		void pause();
		void play();
		void load();
		String* canPlayType(const String& type);
		void set_HAVE_METADATA(double value);
		double get_HAVE_METADATA();
		void set_HAVE_CURRENT_DATA(double value);
		double get_HAVE_CURRENT_DATA();
		void set_HAVE_NOTHING(double value);
		double get_HAVE_NOTHING();
		void set_NETWORK_NO_SOURCE(double value);
		double get_NETWORK_NO_SOURCE();
		void set_HAVE_ENOUGH_DATA(double value);
		double get_HAVE_ENOUGH_DATA();
		void set_NETWORK_EMPTY(double value);
		double get_NETWORK_EMPTY();
		void set_NETWORK_LOADING(double value);
		double get_NETWORK_LOADING();
		void set_NETWORK_IDLE(double value);
		double get_NETWORK_IDLE();
		void set_HAVE_FUTURE_DATA(double value);
		double get_HAVE_FUTURE_DATA();
		static void set_prototype(HTMLMediaElement* value);
		static HTMLMediaElement* get_prototype();
		HTMLMediaElement();
	};

	class HTMLDTElement: public HTMLElement , public DOML2DeprecatedWordWrapSuppression_HTMLDTElement {
	public:
		static void set_prototype(HTMLDTElement* value);
		static HTMLDTElement* get_prototype();
		HTMLDTElement();
	};

	class MSHTMLParagraphElementExtensions: public DOML2DeprecatedTextFlowControl_HTMLBlockElement {
	public:
	};

	class HTMLBGSoundElement: public HTMLElement {
	public:
		void set_balance(Object* value);
		Object* get_balance();
		void set_volume(Object* value);
		Object* get_volume();
		void set_src(const String& value);
		String* get_src();
		void set_loop(double value);
		double get_loop();
		static void set_prototype(HTMLBGSoundElement* value);
		static HTMLBGSoundElement* get_prototype();
		HTMLBGSoundElement();
	};

	class HTMLHRElement: public HTMLElement , public DOML2DeprecatedWidthStyle_HTMLHRElement , public MSHTMLHRElementExtensions , public HTMLHRElementDOML2Deprecated , public DOML2DeprecatedAlignmentStyle_HTMLHRElement , public DOML2DeprecatedSizeProperty {
	public:
		static void set_prototype(HTMLHRElement* value);
		static HTMLHRElement* get_prototype();
		HTMLHRElement();
	};

	class StorageEvent: public Event {
	public:
		void set_oldValue(Object* value);
		Object* get_oldValue();
		void set_newValue(Object* value);
		Object* get_newValue();
		void set_url(const String& value);
		String* get_url();
		void set_storageArea(Storage* value);
		Storage* get_storageArea();
		void set_key(const String& value);
		String* get_key();
		void initStorageEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, const String& keyArg, Object* oldValueArg, Object* newValueArg, const String& urlArg, Storage* storageAreaArg);
		static void set_prototype(StorageEvent* value);
		static StorageEvent* get_prototype();
		StorageEvent();
	};

	class HTMLEmbedElement: public HTMLElement , public GetSVGDocument , public MSHTMLEmbedElementExtensions {
	public:
		void set_width(const String& value);
		String* get_width();
		void set_src(const String& value);
		String* get_src();
		void set_name(const String& value);
		String* get_name();
		void set_height(const String& value);
		String* get_height();
		static void set_prototype(HTMLEmbedElement* value);
		static HTMLEmbedElement* get_prototype();
		HTMLEmbedElement();
	};

	class CharacterData: public Node {
	public:
		void set_length(double value);
		double get_length();
		void set_data(const String& value);
		String* get_data();
		void deleteData(double offset, double count);
		void replaceData(double offset, double count, const String& arg);
		void appendData(const String& arg);
		void insertData(double offset, const String& arg);
		String* substringData(double offset, double count);
		static void set_prototype(CharacterData* value);
		static CharacterData* get_prototype();
		CharacterData();
	};

	class HTMLOptGroupElement: public HTMLElement , public MSDataBindingExtensions , public MSHTMLOptGroupElementExtensions {
	public:
		void set_label(const String& value);
		String* get_label();
		static void set_prototype(HTMLOptGroupElement* value);
		static HTMLOptGroupElement* get_prototype();
		HTMLOptGroupElement();
	};

	class HTMLIsIndexElement: public HTMLElement , public MSHTMLIsIndexElementExtensions {
	public:
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_prompt(const String& value);
		String* get_prompt();
		static void set_prototype(HTMLIsIndexElement* value);
		static HTMLIsIndexElement* get_prototype();
		HTMLIsIndexElement();
	};

	class Attr: public Node , public MSAttrExtensions {
	public:
		void set_specified(Boolean value);
		Boolean get_specified();
		void set_ownerElement(Element* value);
		Element* get_ownerElement();
		void set_value(const String& value);
		String* get_value();
		void set_name(const String& value);
		String* get_name();
		static void set_prototype(Attr* value);
		static Attr* get_prototype();
		Attr();
	};

	class ErrorEvent: public Event {
	public:
		void set_colno(double value);
		double get_colno();
		void set_filename(const String& value);
		String* get_filename();
		void set_lineno(double value);
		double get_lineno();
		void set_message(const String& value);
		String* get_message();
		void initErrorEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, const String& messageArg, const String& filenameArg, double linenoArg);
		static void set_prototype(ErrorEvent* value);
		static ErrorEvent* get_prototype();
		ErrorEvent();
	};

	class TrackEvent: public Event {
	public:
		void set_track(Object* value);
		Object* get_track();
		static void set_prototype(TrackEvent* value);
		static TrackEvent* get_prototype();
		TrackEvent();
	};

	class MSStreamReader: public MSBaseReader {
	public:
		void set_error(DOMError* value);
		DOMError* get_error();
		void readAsArrayBuffer(MSStream* stream);
		void readAsArrayBuffer(MSStream* stream, double size);
		void readAsBlob(MSStream* stream);
		void readAsBlob(MSStream* stream, double size);
		void readAsDataURL(MSStream* stream);
		void readAsDataURL(MSStream* stream, double size);
		void readAsText(MSStream* stream);
		void readAsText(MSStream* stream, const String& encoding);
		void readAsText(MSStream* stream, const String& encoding, double size);
		static void set_prototype(MSStreamReader* value);
		static MSStreamReader* get_prototype();
		MSStreamReader();
	};

	class TransitionEvent: public Event {
	public:
		void set_propertyName(const String& value);
		String* get_propertyName();
		void set_elapsedTime(double value);
		double get_elapsedTime();
		void initTransitionEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, const String& propertyNameArg, double elapsedTimeArg);
		static void set_prototype(TransitionEvent* value);
		static TransitionEvent* get_prototype();
		TransitionEvent();
	};

	class CloseEvent: public Event {
	public:
		void set_wasClean(Boolean value);
		Boolean get_wasClean();
		void set_reason(const String& value);
		String* get_reason();
		void set_code(double value);
		double get_code();
		void initCloseEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, Boolean wasCleanArg, double codeArg, const String& reasonArg);
		static void set_prototype(CloseEvent* value);
		static CloseEvent* get_prototype();
		CloseEvent();
	};

	class ProgressEvent: public Event {
	public:
		void set_loaded(double value);
		double get_loaded();
		void set_lengthComputable(Boolean value);
		Boolean get_lengthComputable();
		void set_total(double value);
		double get_total();
		void initProgressEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, Boolean lengthComputableArg, double loadedArg, double totalArg);
		static void set_prototype(ProgressEvent* value);
		static ProgressEvent* get_prototype();
		ProgressEvent();
	};

	class IDBVersionChangeEvent: public Event {
	public:
		void set_newVersion(double value);
		double get_newVersion();
		void set_oldVersion(double value);
		double get_oldVersion();
		static void set_prototype(IDBVersionChangeEvent* value);
		static IDBVersionChangeEvent* get_prototype();
		IDBVersionChangeEvent();
	};

	class File: public Blob {
	public:
		void set_lastModifiedDate(Object* value);
		Object* get_lastModifiedDate();
		void set_name(const String& value);
		String* get_name();
		static void set_prototype(File* value);
		static File* get_prototype();
		File();
	};

	class AnimationEvent: public Event {
	public:
		void set_animationName(const String& value);
		String* get_animationName();
		void set_elapsedTime(double value);
		double get_elapsedTime();
		void initAnimationEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, const String& animationNameArg, double elapsedTimeArg);
		static void set_prototype(AnimationEvent* value);
		static AnimationEvent* get_prototype();
		AnimationEvent();
	};

	class IDBOpenDBRequest: public IDBRequest {
	public:
		typedef Object* (*callback_for_onupgradeneeded)(IDBVersionChangeEvent* ev);
		void set_onupgradeneeded(callback_for_onupgradeneeded value);
		callback_for_onupgradeneeded get_onupgradeneeded();
		typedef Object* (*callback_for_onblocked)(Event* ev);
		void set_onblocked(callback_for_onblocked value);
		callback_for_onblocked get_onblocked();
		static void set_prototype(IDBOpenDBRequest* value);
		static IDBOpenDBRequest* get_prototype();
		IDBOpenDBRequest();
	};

	class HTMLProgressElement: public HTMLElement {
	public:
		void set_value(double value);
		double get_value();
		void set_max(double value);
		double get_max();
		void set_position(double value);
		double get_position();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		static void set_prototype(HTMLProgressElement* value);
		static HTMLProgressElement* get_prototype();
		HTMLProgressElement();
	};

	class MessageEvent: public Event {
	public:
		void set_ports(Object* value);
		Object* get_ports();
	};

	class PopStateEvent: public Event {
	public:
		void set_state(Object* value);
		Object* get_state();
		void initPopStateEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, Object* stateArg);
		static void set_prototype(PopStateEvent* value);
		static PopStateEvent* get_prototype();
		PopStateEvent();
	};

	class MSStyleCSSProperties: public MSCSSProperties {
	public:
		void set_pixelWidth(double value);
		double get_pixelWidth();
		void set_posHeight(double value);
		double get_posHeight();
		void set_posLeft(double value);
		double get_posLeft();
		void set_pixelTop(double value);
		double get_pixelTop();
		void set_pixelBottom(double value);
		double get_pixelBottom();
		void set_textDecorationNone(Boolean value);
		Boolean get_textDecorationNone();
		void set_pixelLeft(double value);
		double get_pixelLeft();
		void set_posTop(double value);
		double get_posTop();
		void set_posBottom(double value);
		double get_posBottom();
		void set_textDecorationOverline(Boolean value);
		Boolean get_textDecorationOverline();
		void set_posWidth(double value);
		double get_posWidth();
		void set_textDecorationLineThrough(Boolean value);
		Boolean get_textDecorationLineThrough();
		void set_pixelHeight(double value);
		double get_pixelHeight();
		void set_textDecorationBlink(Boolean value);
		Boolean get_textDecorationBlink();
		void set_posRight(double value);
		double get_posRight();
		void set_pixelRight(double value);
		double get_pixelRight();
		void set_textDecorationUnderline(Boolean value);
		Boolean get_textDecorationUnderline();
		static void set_prototype(MSStyleCSSProperties* value);
		static MSStyleCSSProperties* get_prototype();
		MSStyleCSSProperties();
	};

	class HTMLTableDataCellElement: public HTMLTableCellElement , public MSHTMLTableDataCellElementExtensions {
	public:
		static void set_prototype(HTMLTableDataCellElement* value);
		static HTMLTableDataCellElement* get_prototype();
		HTMLTableDataCellElement();
	};

	class Element: public Node , public NodeSelector , public ElementTraversal , public MSElementExtensions {
	public:
		void set_scrollTop(double value);
		double get_scrollTop();
		void set_clientLeft(double value);
		double get_clientLeft();
		void set_scrollLeft(double value);
		double get_scrollLeft();
		void set_tagName(const String& value);
		String* get_tagName();
		void set_clientWidth(double value);
		double get_clientWidth();
		void set_scrollWidth(double value);
		double get_scrollWidth();
		void set_clientHeight(double value);
		double get_clientHeight();
		void set_clientTop(double value);
		double get_clientTop();
		void set_scrollHeight(double value);
		double get_scrollHeight();
		String* getAttribute();
		String* getAttribute(const String& name);
		NodeList* getElementsByTagNameNS(const String& namespaceURI, const String& localName);
		Boolean hasAttributeNS(const String& namespaceURI, const String& localName);
		ClientRect* getBoundingClientRect();
		String* getAttributeNS(const String& namespaceURI, const String& localName);
		Attr* getAttributeNodeNS(const String& namespaceURI, const String& localName);
		Attr* setAttributeNodeNS(Attr* newAttr);
		Boolean hasAttribute(const String& name);
		void removeAttribute();
		void removeAttribute(const String& name);
		void setAttributeNS(const String& namespaceURI, const String& qualifiedName, const String& value);
		Attr* getAttributeNode(const String& name);
		NodeList* getElementsByTagName(const String& name);
		Attr* setAttributeNode(Attr* newAttr);
		ClientRectList* getClientRects();
		Attr* removeAttributeNode(Attr* oldAttr);
		void setAttribute();
		void setAttribute(const String& name);
		void setAttribute(const String& name, const String& value);
		void removeAttributeNS(const String& namespaceURI, const String& localName);
		static void set_prototype(Element* value);
		static Element* get_prototype();
		Element();
	};

	class HTMLParagraphElement: public HTMLElement , public DOML2DeprecatedAlignmentStyle_HTMLParagraphElement , public MSHTMLParagraphElementExtensions {
	public:
		static void set_prototype(HTMLParagraphElement* value);
		static HTMLParagraphElement* get_prototype();
		HTMLParagraphElement();
	};

	class HTMLAreasCollection: public HTMLCollection {
	public:
		void remove();
		void remove(double index);
		void add(HTMLElement* element);
		void add(HTMLElement* element, Object* before);
		static void set_prototype(HTMLAreasCollection* value);
		static HTMLAreasCollection* get_prototype();
		HTMLAreasCollection();
	};

	class MSSiteModeEvent: public Event {
	public:
		void set_buttonID(double value);
		double get_buttonID();
		void set_actionURL(const String& value);
		String* get_actionURL();
		static void set_prototype(MSSiteModeEvent* value);
		static MSSiteModeEvent* get_prototype();
		MSSiteModeEvent();
	};

	class SVGElement: public Element , public SVGElementEventHandlers {
	public:
		void set_xmlbase(const String& value);
		String* get_xmlbase();
		void set_viewportElement(SVGElement* value);
		SVGElement* get_viewportElement();
		void set_id(const String& value);
		String* get_id();
		void set_ownerSVGElement(SVGSVGElement* value);
		SVGSVGElement* get_ownerSVGElement();
		static void set_prototype(SVGElement* value);
		static SVGElement* get_prototype();
		SVGElement();
	};

	class SVGDefsElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests {
	public:
		static void set_prototype(SVGDefsElement* value);
		static SVGDefsElement* get_prototype();
		SVGDefsElement();
	};

	class HTMLTableHeaderCellElement: public HTMLTableCellElement , public HTMLTableHeaderCellScope {
	public:
		static void set_prototype(HTMLTableHeaderCellElement* value);
		static HTMLTableHeaderCellElement* get_prototype();
		HTMLTableHeaderCellElement();
	};

	class SVGEllipseElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests {
	public:
		void set_ry(SVGAnimatedLength* value);
		SVGAnimatedLength* get_ry();
		void set_cx(SVGAnimatedLength* value);
		SVGAnimatedLength* get_cx();
		void set_rx(SVGAnimatedLength* value);
		SVGAnimatedLength* get_rx();
		void set_cy(SVGAnimatedLength* value);
		SVGAnimatedLength* get_cy();
		static void set_prototype(SVGEllipseElement* value);
		static SVGEllipseElement* get_prototype();
		SVGEllipseElement();
	};

	class SVGAElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGURIReference {
	public:
		SVGAnimatedString* get_target();
		static void set_prototype(SVGAElement* value);
		static SVGAElement* get_prototype();
		SVGAElement();
	};

	class SVGSVGElement: public SVGElement , public SVGZoomAndPan , public SVGLangSpace , public SVGLocatable , public SVGTests , public SVGFitToViewBox , public SVGSVGElementEventHandlers , public SVGStylable , public DocumentEvent , public ViewCSS_SVGSVGElement {
	public:
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_contentStyleType(const String& value);
		String* get_contentStyleType();
		void set_screenPixelToMillimeterY(double value);
		double get_screenPixelToMillimeterY();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		void set_contentScriptType(const String& value);
		String* get_contentScriptType();
		void set_pixelUnitToMillimeterX(double value);
		double get_pixelUnitToMillimeterX();
		void set_currentTranslate(SVGPoint* value);
		SVGPoint* get_currentTranslate();
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_viewport(SVGRect* value);
		SVGRect* get_viewport();
		void set_currentScale(double value);
		double get_currentScale();
		void set_screenPixelToMillimeterX(double value);
		double get_screenPixelToMillimeterX();
		void set_pixelUnitToMillimeterY(double value);
		double get_pixelUnitToMillimeterY();
		void setCurrentTime(double seconds);
		SVGLength* createSVGLength();
		NodeList* getIntersectionList(SVGRect* rect, SVGElement* referenceElement);
		void unpauseAnimations();
		SVGRect* createSVGRect();
		Boolean checkIntersection(SVGElement* element, SVGRect* rect);
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
		Boolean checkEnclosure(SVGElement* element, SVGRect* rect);
		SVGMatrix* createSVGMatrix();
		SVGPoint* createSVGPoint();
		SVGdouble* createSVGdouble();
		SVGTransform* createSVGTransformFromMatrix(SVGMatrix* matrix);
		Element* getElementById(const String& elementId);
		static void set_prototype(SVGSVGElement* value);
		static SVGSVGElement* get_prototype();
		SVGSVGElement();
	};

	class SVGStyleElement: public SVGElement , public SVGLangSpace {
	public:
		void set_media(const String& value);
		String* get_media();
		void set_type(const String& value);
		String* get_type();
		void set_title(const String& value);
		String* get_title();
		static void set_prototype(SVGStyleElement* value);
		static SVGStyleElement* get_prototype();
		SVGStyleElement();
	};

	class MutationEvent: public Event {
	public:
		void set_newValue(const String& value);
		String* get_newValue();
		void set_attrChange(double value);
		double get_attrChange();
		void set_attrName(const String& value);
		String* get_attrName();
		void set_prevValue(const String& value);
		String* get_prevValue();
		void set_relatedNode(Node* value);
		Node* get_relatedNode();
		void initMutationEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, Node* relatedNodeArg, const String& prevValueArg, const String& newValueArg, const String& attrNameArg, double attrChangeArg);
		void set_MODIFICATION(double value);
		double get_MODIFICATION();
		void set_REMOVAL(double value);
		double get_REMOVAL();
		void set_ADDITION(double value);
		double get_ADDITION();
		static void set_prototype(MutationEvent* value);
		static MutationEvent* get_prototype();
		MutationEvent();
	};

	class SVGImageElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGURIReference {
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_preserveAspectRatio(SVGAnimatedPreserveAspectRatio* value);
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		static void set_prototype(SVGImageElement* value);
		static SVGImageElement* get_prototype();
		SVGImageElement();
	};

	class SVGMetadataElement: public SVGElement {
	public:
		static void set_prototype(SVGMetadataElement* value);
		static SVGMetadataElement* get_prototype();
		SVGMetadataElement();
	};

	class SVGPolygonElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGAnimatedPoints , public SVGTests {
	public:
		static void set_prototype(SVGPolygonElement* value);
		static SVGPolygonElement* get_prototype();
		SVGPolygonElement();
	};

	class SVGTextContentElement: public SVGElement , public SVGStylable , public SVGLangSpace , public SVGTests {
	public:
		void set_textLength(SVGAnimatedLength* value);
		SVGAnimatedLength* get_textLength();
		void set_lengthAdjust(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_lengthAdjust();
		double getCharNumAtPosition(SVGPoint* point);
		SVGPoint* getStartPositionOfChar(double charnum);
		SVGRect* getExtentOfChar(double charnum);
		double getComputedTextLength();
		double getSubStringLength(double charnum, double nchars);
		void selectSubString(double charnum, double nchars);
		double getdoubleOfChars();
		double getRotationOfChar(double charnum);
		SVGPoint* getEndPositionOfChar(double charnum);
		void set_LENGTHADJUST_SPACING(double value);
		double get_LENGTHADJUST_SPACING();
		void set_LENGTHADJUST_SPACINGANDGLYPHS(double value);
		double get_LENGTHADJUST_SPACINGANDGLYPHS();
		void set_LENGTHADJUST_UNKNOWN(double value);
		double get_LENGTHADJUST_UNKNOWN();
		static void set_prototype(SVGTextContentElement* value);
		static SVGTextContentElement* get_prototype();
		SVGTextContentElement();
	};

	class UIEvent: public Event {
	public:
		void set_detail(double value);
		double get_detail();
		void set_view(AbstractView* value);
		AbstractView* get_view();
		void initUIEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg);
		static void set_prototype(UIEvent* value);
		static UIEvent* get_prototype();
		UIEvent();
	};

	class SVGPathElement: public SVGElement , public SVGStylable , public SVGAnimatedPathData , public SVGTransformable , public SVGLangSpace , public SVGTests {
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
		SVGPathSegArcRel* createSVGPathSegArcRel(double x, double y, double r1, double r2, double angle, Boolean largeArcFlag, Boolean sweepFlag);
		SVGPathSegCurvetoQuadraticSmoothAbs* createSVGPathSegCurvetoQuadraticSmoothAbs(double x, double y);
		SVGPathSegLinetoHorizontalRel* createSVGPathSegLinetoHorizontalRel(double x);
		double getTotalLength();
		SVGPathSegCurvetoCubicSmoothRel* createSVGPathSegCurvetoCubicSmoothRel(double x, double y, double x2, double y2);
		SVGPathSegLinetoHorizontalAbs* createSVGPathSegLinetoHorizontalAbs(double x);
		SVGPathSegLinetoVerticalAbs* createSVGPathSegLinetoVerticalAbs(double y);
		SVGPathSegArcAbs* createSVGPathSegArcAbs(double x, double y, double r1, double r2, double angle, Boolean largeArcFlag, Boolean sweepFlag);
		static void set_prototype(SVGPathElement* value);
		static SVGPathElement* get_prototype();
		SVGPathElement();
	};

	class Text: public CharacterData , public MSNodeExtensions {
	public:
		void set_wholeText(const String& value);
		String* get_wholeText();
		Text* splitText(double offset);
		Text* replaceWholeText(const String& content);
		static void set_prototype(Text* value);
		static Text* get_prototype();
		Text();
	};

	class HTMLAudioElement: public HTMLMediaElement {
	public:
		static void set_prototype(HTMLAudioElement* value);
		static HTMLAudioElement* get_prototype();
		HTMLAudioElement();
	};

	class SVGCircleElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests {
	public:
		void set_cx(SVGAnimatedLength* value);
		SVGAnimatedLength* get_cx();
		void set_r(SVGAnimatedLength* value);
		SVGAnimatedLength* get_r();
		void set_cy(SVGAnimatedLength* value);
		SVGAnimatedLength* get_cy();
		static void set_prototype(SVGCircleElement* value);
		static SVGCircleElement* get_prototype();
		SVGCircleElement();
	};

	class CustomEvent: public Event {
	public:
		void set_detail(Object* value);
		Object* get_detail();
		void initCustomEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, Object* detailArg);
		static void set_prototype(CustomEvent* value);
		static CustomEvent* get_prototype();
		CustomEvent();
	};

	class BeforeUnloadEvent: public Event {
	public:
		void set_returnValue(const String& value);
		String* get_returnValue();
		static void set_prototype(BeforeUnloadEvent* value);
		static BeforeUnloadEvent* get_prototype();
		BeforeUnloadEvent();
	};

	class SVGUseElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGURIReference {
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_animatedInstanceRoot(SVGElementInstance* value);
		SVGElementInstance* get_animatedInstanceRoot();
		void set_instanceRoot(SVGElementInstance* value);
		SVGElementInstance* get_instanceRoot();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		static void set_prototype(SVGUseElement* value);
		static SVGUseElement* get_prototype();
		SVGUseElement();
	};

	class SVGRectElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests {
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_ry(SVGAnimatedLength* value);
		SVGAnimatedLength* get_ry();
		void set_rx(SVGAnimatedLength* value);
		SVGAnimatedLength* get_rx();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		static void set_prototype(SVGRectElement* value);
		static SVGRectElement* get_prototype();
		SVGRectElement();
	};

	class TextEvent: public UIEvent {
	public:
		void set_inputMethod(double value);
		double get_inputMethod();
		void set_data(const String& value);
		String* get_data();
		void set_locale(const String& value);
		String* get_locale();
		void initTextEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, const String& dataArg, double inputMethod, const String& locale);
		void set_DOM_INPUT_METHOD_KEYBOARD(double value);
		double get_DOM_INPUT_METHOD_KEYBOARD();
		void set_DOM_INPUT_METHOD_DROP(double value);
		double get_DOM_INPUT_METHOD_DROP();
		void set_DOM_INPUT_METHOD_IME(double value);
		double get_DOM_INPUT_METHOD_IME();
		void set_DOM_INPUT_METHOD_SCRIPT(double value);
		double get_DOM_INPUT_METHOD_SCRIPT();
		void set_DOM_INPUT_METHOD_VOICE(double value);
		double get_DOM_INPUT_METHOD_VOICE();
		void set_DOM_INPUT_METHOD_UNKNOWN(double value);
		double get_DOM_INPUT_METHOD_UNKNOWN();
		void set_DOM_INPUT_METHOD_PASTE(double value);
		double get_DOM_INPUT_METHOD_PASTE();
		void set_DOM_INPUT_METHOD_HANDWRITING(double value);
		double get_DOM_INPUT_METHOD_HANDWRITING();
		void set_DOM_INPUT_METHOD_OPTION(double value);
		double get_DOM_INPUT_METHOD_OPTION();
		void set_DOM_INPUT_METHOD_MULTIMODAL(double value);
		double get_DOM_INPUT_METHOD_MULTIMODAL();
		static void set_prototype(TextEvent* value);
		static TextEvent* get_prototype();
		TextEvent();
	};

	class SVGPolylineElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGAnimatedPoints , public SVGTests {
	public:
		static void set_prototype(SVGPolylineElement* value);
		static SVGPolylineElement* get_prototype();
		SVGPolylineElement();
	};

	class SVGTextPathElement: public SVGTextContentElement , public SVGURIReference {
	public:
		void set_startOffset(SVGAnimatedLength* value);
		SVGAnimatedLength* get_startOffset();
		void set_method(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_method();
		void set_spacing(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_spacing();
		void set_TEXTPATH_SPACINGTYPE_EXACT(double value);
		double get_TEXTPATH_SPACINGTYPE_EXACT();
		void set_TEXTPATH_METHODTYPE_STRETCH(double value);
		double get_TEXTPATH_METHODTYPE_STRETCH();
		void set_TEXTPATH_SPACINGTYPE_AUTO(double value);
		double get_TEXTPATH_SPACINGTYPE_AUTO();
		void set_TEXTPATH_SPACINGTYPE_UNKNOWN(double value);
		double get_TEXTPATH_SPACINGTYPE_UNKNOWN();
		void set_TEXTPATH_METHODTYPE_UNKNOWN(double value);
		double get_TEXTPATH_METHODTYPE_UNKNOWN();
		void set_TEXTPATH_METHODTYPE_ALIGN(double value);
		double get_TEXTPATH_METHODTYPE_ALIGN();
		static void set_prototype(SVGTextPathElement* value);
		static SVGTextPathElement* get_prototype();
		SVGTextPathElement();
	};

	class SVGGradientElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGURIReference {
	public:
		void set_spreadMethod(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_spreadMethod();
		void set_gradientTransform(SVGAnimatedTransformList* value);
		SVGAnimatedTransformList* get_gradientTransform();
		void set_gradientUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_gradientUnits();
		void set_SVG_SPREADMETHOD_REFLECT(double value);
		double get_SVG_SPREADMETHOD_REFLECT();
		void set_SVG_SPREADMETHOD_PAD(double value);
		double get_SVG_SPREADMETHOD_PAD();
		void set_SVG_SPREADMETHOD_UNKNOWN(double value);
		double get_SVG_SPREADMETHOD_UNKNOWN();
		void set_SVG_SPREADMETHOD_REPEAT(double value);
		double get_SVG_SPREADMETHOD_REPEAT();
		static void set_prototype(SVGGradientElement* value);
		static SVGGradientElement* get_prototype();
		SVGGradientElement();
	};

	class Comment: public CharacterData , public MSCommentExtensions {
	public:
		static void set_prototype(Comment* value);
		static Comment* get_prototype();
		Comment();
	};

	class SVGSwitchElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests {
	public:
		static void set_prototype(SVGSwitchElement* value);
		static SVGSwitchElement* get_prototype();
		SVGSwitchElement();
	};

	class SVGStopElement: public SVGElement , public SVGStylable {
	public:
		void set_offset(SVGAnimateddouble* value);
		SVGAnimateddouble* get_offset();
		static void set_prototype(SVGStopElement* value);
		static SVGStopElement* get_prototype();
		SVGStopElement();
	};

	class SVGSymbolElement: public SVGElement , public SVGStylable , public SVGLangSpace , public SVGFitToViewBox {
	public:
		static void set_prototype(SVGSymbolElement* value);
		static SVGSymbolElement* get_prototype();
		SVGSymbolElement();
	};

	class SVGMaskElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGLangSpace , public SVGTests {
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_maskUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_maskUnits();
		void set_maskContentUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_maskContentUnits();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		static void set_prototype(SVGMaskElement* value);
		static SVGMaskElement* get_prototype();
		SVGMaskElement();
	};

	class MSGestureEvent: public UIEvent {
	public:
		void set_offsetY(double value);
		double get_offsetY();
		void set_translationY(double value);
		double get_translationY();
		void set_velocityExpansion(double value);
		double get_velocityExpansion();
		void set_velocityY(double value);
		double get_velocityY();
		void set_velocityAngular(double value);
		double get_velocityAngular();
		void set_translationX(double value);
		double get_translationX();
		void set_velocityX(double value);
		double get_velocityX();
		void set_hwTimestamp(double value);
		double get_hwTimestamp();
		void set_offsetX(double value);
		double get_offsetX();
		void set_screenX(double value);
		double get_screenX();
		void set_rotation(double value);
		double get_rotation();
		void set_expansion(double value);
		double get_expansion();
		void set_clientY(double value);
		double get_clientY();
		void set_screenY(double value);
		double get_screenY();
		void set_scale(double value);
		double get_scale();
		void set_gestureObject(Object* value);
		Object* get_gestureObject();
		void set_clientX(double value);
		double get_clientX();
		void initGestureEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double offsetXArg, double offsetYArg, double translationXArg, double translationYArg, double scaleArg, double expansionArg, double rotationArg, double velocityXArg, double velocityYArg, double velocityExpansionArg, double velocityAngularArg, double hwTimestampArg);
		void set_MSGESTURE_FLAG_BEGIN(double value);
		double get_MSGESTURE_FLAG_BEGIN();
		void set_MSGESTURE_FLAG_END(double value);
		double get_MSGESTURE_FLAG_END();
		void set_MSGESTURE_FLAG_CANCEL(double value);
		double get_MSGESTURE_FLAG_CANCEL();
		void set_MSGESTURE_FLAG_INERTIA(double value);
		double get_MSGESTURE_FLAG_INERTIA();
		void set_MSGESTURE_FLAG_NONE(double value);
		double get_MSGESTURE_FLAG_NONE();
		static void set_prototype(MSGestureEvent* value);
		static MSGestureEvent* get_prototype();
		MSGestureEvent();
	};

	class SVGFilterElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGLangSpace , public SVGURIReference {
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_filterResX(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_filterResX();
		void set_filterUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_filterUnits();
		void set_primitiveUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_primitiveUnits();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		void set_filterResY(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_filterResY();
		void setFilterRes(double filterResX, double filterResY);
		static void set_prototype(SVGFilterElement* value);
		static SVGFilterElement* get_prototype();
		SVGFilterElement();
	};

	class SVGFEMergeNodeElement: public SVGElement {
	public:
		SVGAnimatedString* get_in1();
		static void set_prototype(SVGFEMergeNodeElement* value);
		static SVGFEMergeNodeElement* get_prototype();
		SVGFEMergeNodeElement();
	};

	class SVGFEFloodElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		static void set_prototype(SVGFEFloodElement* value);
		static SVGFEFloodElement* get_prototype();
		SVGFEFloodElement();
	};

	class SVGFETileElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		static void set_prototype(SVGFETileElement* value);
		static SVGFETileElement* get_prototype();
		SVGFETileElement();
	};

	class SVGFEBlendElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in2();
		void set_mode(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_mode();
		SVGAnimatedString* get_in1();
		void set_SVG_FEBLEND_MODE_DARKEN(double value);
		double get_SVG_FEBLEND_MODE_DARKEN();
		void set_SVG_FEBLEND_MODE_UNKNOWN(double value);
		double get_SVG_FEBLEND_MODE_UNKNOWN();
		void set_SVG_FEBLEND_MODE_MULTIPLY(double value);
		double get_SVG_FEBLEND_MODE_MULTIPLY();
		void set_SVG_FEBLEND_MODE_NORMAL(double value);
		double get_SVG_FEBLEND_MODE_NORMAL();
		void set_SVG_FEBLEND_MODE_SCREEN(double value);
		double get_SVG_FEBLEND_MODE_SCREEN();
		void set_SVG_FEBLEND_MODE_LIGHTEN(double value);
		double get_SVG_FEBLEND_MODE_LIGHTEN();
		static void set_prototype(SVGFEBlendElement* value);
		static SVGFEBlendElement* get_prototype();
		SVGFEBlendElement();
	};

	class SVGFEMergeElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		static void set_prototype(SVGFEMergeElement* value);
		static SVGFEMergeElement* get_prototype();
		SVGFEMergeElement();
	};

	class SVGFEPointLightElement: public SVGElement {
	public:
		void set_y(SVGAnimateddouble* value);
		SVGAnimateddouble* get_y();
		void set_x(SVGAnimateddouble* value);
		SVGAnimateddouble* get_x();
		void set_z(SVGAnimateddouble* value);
		SVGAnimateddouble* get_z();
		static void set_prototype(SVGFEPointLightElement* value);
		static SVGFEPointLightElement* get_prototype();
		SVGFEPointLightElement();
	};

	class SVGFEGaussianBlurElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_stdDeviationX(SVGAnimateddouble* value);
		SVGAnimateddouble* get_stdDeviationX();
		SVGAnimatedString* get_in1();
		void set_stdDeviationY(SVGAnimateddouble* value);
		SVGAnimateddouble* get_stdDeviationY();
		void setStdDeviation(double stdDeviationX, double stdDeviationY);
		static void set_prototype(SVGFEGaussianBlurElement* value);
		static SVGFEGaussianBlurElement* get_prototype();
		SVGFEGaussianBlurElement();
	};

	class SVGFESpecularLightingElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_kernelUnitLengthY(SVGAnimateddouble* value);
		SVGAnimateddouble* get_kernelUnitLengthY();
		void set_surfaceScale(SVGAnimateddouble* value);
		SVGAnimateddouble* get_surfaceScale();
		void set_specularExponent(SVGAnimateddouble* value);
		SVGAnimateddouble* get_specularExponent();
		SVGAnimatedString* get_in1();
		void set_kernelUnitLengthX(SVGAnimateddouble* value);
		SVGAnimateddouble* get_kernelUnitLengthX();
		void set_specularConstant(SVGAnimateddouble* value);
		SVGAnimateddouble* get_specularConstant();
		static void set_prototype(SVGFESpecularLightingElement* value);
		static SVGFESpecularLightingElement* get_prototype();
		SVGFESpecularLightingElement();
	};

	class SVGFEMorphologyElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_operator(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_operator();
		void set_radiusX(SVGAnimateddouble* value);
		SVGAnimateddouble* get_radiusX();
		void set_radiusY(SVGAnimateddouble* value);
		SVGAnimateddouble* get_radiusY();
		SVGAnimatedString* get_in1();
		void set_SVG_MORPHOLOGY_OPERATOR_UNKNOWN(double value);
		double get_SVG_MORPHOLOGY_OPERATOR_UNKNOWN();
		void set_SVG_MORPHOLOGY_OPERATOR_ERODE(double value);
		double get_SVG_MORPHOLOGY_OPERATOR_ERODE();
		void set_SVG_MORPHOLOGY_OPERATOR_DILATE(double value);
		double get_SVG_MORPHOLOGY_OPERATOR_DILATE();
		static void set_prototype(SVGFEMorphologyElement* value);
		static SVGFEMorphologyElement* get_prototype();
		SVGFEMorphologyElement();
	};

	class SVGFEDisplacementMapElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in2();
		void set_xChannelSelector(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_xChannelSelector();
		void set_yChannelSelector(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_yChannelSelector();
		void set_scale(SVGAnimateddouble* value);
		SVGAnimateddouble* get_scale();
		SVGAnimatedString* get_in1();
		void set_SVG_CHANNEL_B(double value);
		double get_SVG_CHANNEL_B();
		void set_SVG_CHANNEL_R(double value);
		double get_SVG_CHANNEL_R();
		void set_SVG_CHANNEL_G(double value);
		double get_SVG_CHANNEL_G();
		void set_SVG_CHANNEL_UNKNOWN(double value);
		double get_SVG_CHANNEL_UNKNOWN();
		void set_SVG_CHANNEL_A(double value);
		double get_SVG_CHANNEL_A();
		static void set_prototype(SVGFEDisplacementMapElement* value);
		static SVGFEDisplacementMapElement* get_prototype();
		SVGFEDisplacementMapElement();
	};

	class SVGComponentTransferFunctionElement: public SVGElement {
	public:
		void set_tableValues(SVGAnimateddoubleList* value);
		SVGAnimateddoubleList* get_tableValues();
		void set_slope(SVGAnimateddouble* value);
		SVGAnimateddouble* get_slope();
		void set_type(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_type();
		void set_exponent(SVGAnimateddouble* value);
		SVGAnimateddouble* get_exponent();
		void set_amplitude(SVGAnimateddouble* value);
		SVGAnimateddouble* get_amplitude();
		void set_intercept(SVGAnimateddouble* value);
		SVGAnimateddouble* get_intercept();
		void set_offset(SVGAnimateddouble* value);
		SVGAnimateddouble* get_offset();
		void set_SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN(double value);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN();
		void set_SVG_FECOMPONENTTRANSFER_TYPE_TABLE(double value);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_TABLE();
		void set_SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY(double value);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY();
		void set_SVG_FECOMPONENTTRANSFER_TYPE_GAMMA(double value);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_GAMMA();
		void set_SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE(double value);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE();
		void set_SVG_FECOMPONENTTRANSFER_TYPE_LINEAR(double value);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_LINEAR();
		static void set_prototype(SVGComponentTransferFunctionElement* value);
		static SVGComponentTransferFunctionElement* get_prototype();
		SVGComponentTransferFunctionElement();
	};

	class SVGFEDistantLightElement: public SVGElement {
	public:
		void set_azimuth(SVGAnimateddouble* value);
		SVGAnimateddouble* get_azimuth();
		void set_elevation(SVGAnimateddouble* value);
		SVGAnimateddouble* get_elevation();
		static void set_prototype(SVGFEDistantLightElement* value);
		static SVGFEDistantLightElement* get_prototype();
		SVGFEDistantLightElement();
	};

	class SVGFEFuncBElement: public SVGComponentTransferFunctionElement {
	public:
		static void set_prototype(SVGFEFuncBElement* value);
		static SVGFEFuncBElement* get_prototype();
		SVGFEFuncBElement();
	};

	class SVGFEConvolveMatrixElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_orderY(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_orderY();
		void set_kernelUnitLengthY(SVGAnimateddouble* value);
		SVGAnimateddouble* get_kernelUnitLengthY();
		void set_orderX(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_orderX();
		void set_preserveAlpha(SVGAnimatedBoolean* value);
		SVGAnimatedBoolean* get_preserveAlpha();
		void set_kernelMatrix(SVGAnimateddoubleList* value);
		SVGAnimateddoubleList* get_kernelMatrix();
		void set_edgeMode(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_edgeMode();
		void set_kernelUnitLengthX(SVGAnimateddouble* value);
		SVGAnimateddouble* get_kernelUnitLengthX();
		void set_bias(SVGAnimateddouble* value);
		SVGAnimateddouble* get_bias();
		void set_targetX(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_targetX();
		void set_targetY(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_targetY();
		void set_divisor(SVGAnimateddouble* value);
		SVGAnimateddouble* get_divisor();
		SVGAnimatedString* get_in1();
		void set_SVG_EDGEMODE_WRAP(double value);
		double get_SVG_EDGEMODE_WRAP();
		void set_SVG_EDGEMODE_DUPLICATE(double value);
		double get_SVG_EDGEMODE_DUPLICATE();
		void set_SVG_EDGEMODE_UNKNOWN(double value);
		double get_SVG_EDGEMODE_UNKNOWN();
		void set_SVG_EDGEMODE_NONE(double value);
		double get_SVG_EDGEMODE_NONE();
		static void set_prototype(SVGFEConvolveMatrixElement* value);
		static SVGFEConvolveMatrixElement* get_prototype();
		SVGFEConvolveMatrixElement();
	};

	class SVGFETurbulenceElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_baseFrequencyX(SVGAnimateddouble* value);
		SVGAnimateddouble* get_baseFrequencyX();
		void set_numOctaves(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_numOctaves();
		void set_type(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_type();
		void set_baseFrequencyY(SVGAnimateddouble* value);
		SVGAnimateddouble* get_baseFrequencyY();
		void set_stitchTiles(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_stitchTiles();
		void set_seed(SVGAnimateddouble* value);
		SVGAnimateddouble* get_seed();
		void set_SVG_STITCHTYPE_UNKNOWN(double value);
		double get_SVG_STITCHTYPE_UNKNOWN();
		void set_SVG_STITCHTYPE_NOSTITCH(double value);
		double get_SVG_STITCHTYPE_NOSTITCH();
		void set_SVG_TURBULENCE_TYPE_UNKNOWN(double value);
		double get_SVG_TURBULENCE_TYPE_UNKNOWN();
		void set_SVG_TURBULENCE_TYPE_TURBULENCE(double value);
		double get_SVG_TURBULENCE_TYPE_TURBULENCE();
		void set_SVG_TURBULENCE_TYPE_FRACTALNOISE(double value);
		double get_SVG_TURBULENCE_TYPE_FRACTALNOISE();
		void set_SVG_STITCHTYPE_STITCH(double value);
		double get_SVG_STITCHTYPE_STITCH();
		static void set_prototype(SVGFETurbulenceElement* value);
		static SVGFETurbulenceElement* get_prototype();
		SVGFETurbulenceElement();
	};

	class SVGFEFuncGElement: public SVGComponentTransferFunctionElement {
	public:
		static void set_prototype(SVGFEFuncGElement* value);
		static SVGFEFuncGElement* get_prototype();
		SVGFEFuncGElement();
	};

	class SVGFEColorMatrixElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		void set_type(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_type();
		void set_values(SVGAnimateddoubleList* value);
		SVGAnimateddoubleList* get_values();
		void set_SVG_FECOLORMATRIX_TYPE_SATURATE(double value);
		double get_SVG_FECOLORMATRIX_TYPE_SATURATE();
		void set_SVG_FECOLORMATRIX_TYPE_UNKNOWN(double value);
		double get_SVG_FECOLORMATRIX_TYPE_UNKNOWN();
		void set_SVG_FECOLORMATRIX_TYPE_MATRIX(double value);
		double get_SVG_FECOLORMATRIX_TYPE_MATRIX();
		void set_SVG_FECOLORMATRIX_TYPE_HUEROTATE(double value);
		double get_SVG_FECOLORMATRIX_TYPE_HUEROTATE();
		void set_SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA(double value);
		double get_SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA();
		static void set_prototype(SVGFEColorMatrixElement* value);
		static SVGFEColorMatrixElement* get_prototype();
		SVGFEColorMatrixElement();
	};

	class SVGFESpotLightElement: public SVGElement {
	public:
		void set_pointsAtY(SVGAnimateddouble* value);
		SVGAnimateddouble* get_pointsAtY();
		void set_y(SVGAnimateddouble* value);
		SVGAnimateddouble* get_y();
		void set_limitingConeAngle(SVGAnimateddouble* value);
		SVGAnimateddouble* get_limitingConeAngle();
		void set_specularExponent(SVGAnimateddouble* value);
		SVGAnimateddouble* get_specularExponent();
		void set_x(SVGAnimateddouble* value);
		SVGAnimateddouble* get_x();
		void set_pointsAtZ(SVGAnimateddouble* value);
		SVGAnimateddouble* get_pointsAtZ();
		void set_z(SVGAnimateddouble* value);
		SVGAnimateddouble* get_z();
		void set_pointsAtX(SVGAnimateddouble* value);
		SVGAnimateddouble* get_pointsAtX();
		static void set_prototype(SVGFESpotLightElement* value);
		static SVGFESpotLightElement* get_prototype();
		SVGFESpotLightElement();
	};

	class SVGFEOffsetElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_dy(SVGAnimateddouble* value);
		SVGAnimateddouble* get_dy();
		SVGAnimatedString* get_in1();
		void set_dx(SVGAnimateddouble* value);
		SVGAnimateddouble* get_dx();
		static void set_prototype(SVGFEOffsetElement* value);
		static SVGFEOffsetElement* get_prototype();
		SVGFEOffsetElement();
	};

	class MSManipulationEvent: public UIEvent {
	public:
		void set_lastState(double value);
		double get_lastState();
		void set_currentState(double value);
		double get_currentState();
		void initMSManipulationEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double lastState, double currentState);
		void set_MS_MANIPULATION_STATE_STOPPED(double value);
		double get_MS_MANIPULATION_STATE_STOPPED();
		void set_MS_MANIPULATION_STATE_ACTIVE(double value);
		double get_MS_MANIPULATION_STATE_ACTIVE();
		void set_MS_MANIPULATION_STATE_INERTIA(double value);
		double get_MS_MANIPULATION_STATE_INERTIA();
		static void set_prototype(MSManipulationEvent* value);
		static MSManipulationEvent* get_prototype();
		MSManipulationEvent();
	};

	class SVGFEImageElement: public SVGElement , public SVGLangSpace , public SVGFilterPrimitiveStandardAttributes , public SVGURIReference {
	public:
		void set_preserveAspectRatio(SVGAnimatedPreserveAspectRatio* value);
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
		static void set_prototype(SVGFEImageElement* value);
		static SVGFEImageElement* get_prototype();
		SVGFEImageElement();
	};

	class SVGFECompositeElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_operator(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_operator();
		SVGAnimatedString* get_in2();
		void set_k2(SVGAnimateddouble* value);
		SVGAnimateddouble* get_k2();
		void set_k1(SVGAnimateddouble* value);
		SVGAnimateddouble* get_k1();
		void set_k3(SVGAnimateddouble* value);
		SVGAnimateddouble* get_k3();
		SVGAnimatedString* get_in1();
		void set_k4(SVGAnimateddouble* value);
		SVGAnimateddouble* get_k4();
		void set_SVG_FECOMPOSITE_OPERATOR_OUT(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_OUT();
		void set_SVG_FECOMPOSITE_OPERATOR_OVER(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_OVER();
		void set_SVG_FECOMPOSITE_OPERATOR_XOR(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_XOR();
		void set_SVG_FECOMPOSITE_OPERATOR_ARITHMETIC(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_ARITHMETIC();
		void set_SVG_FECOMPOSITE_OPERATOR_UNKNOWN(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_UNKNOWN();
		void set_SVG_FECOMPOSITE_OPERATOR_IN(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_IN();
		void set_SVG_FECOMPOSITE_OPERATOR_ATOP(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_ATOP();
		static void set_prototype(SVGFECompositeElement* value);
		static SVGFECompositeElement* get_prototype();
		SVGFECompositeElement();
	};

	class SVGFEDiffuseLightingElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_kernelUnitLengthY(SVGAnimateddouble* value);
		SVGAnimateddouble* get_kernelUnitLengthY();
		void set_surfaceScale(SVGAnimateddouble* value);
		SVGAnimateddouble* get_surfaceScale();
		SVGAnimatedString* get_in1();
		void set_kernelUnitLengthX(SVGAnimateddouble* value);
		SVGAnimateddouble* get_kernelUnitLengthX();
		void set_diffuseConstant(SVGAnimateddouble* value);
		SVGAnimateddouble* get_diffuseConstant();
		static void set_prototype(SVGFEDiffuseLightingElement* value);
		static SVGFEDiffuseLightingElement* get_prototype();
		SVGFEDiffuseLightingElement();
	};

	class SVGFEComponentTransferElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		static void set_prototype(SVGFEComponentTransferElement* value);
		static SVGFEComponentTransferElement* get_prototype();
		SVGFEComponentTransferElement();
	};

	class CompositionEvent: public UIEvent {
	public:
		void set_data(const String& value);
		String* get_data();
		void set_locale(const String& value);
		String* get_locale();
		void initCompositionEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, const String& dataArg, const String& locale);
		static void set_prototype(CompositionEvent* value);
		static CompositionEvent* get_prototype();
		CompositionEvent();
	};

	class SVGMarkerElement: public SVGElement , public SVGStylable , public SVGLangSpace , public SVGFitToViewBox {
	public:
		void set_orientType(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_orientType();
		void set_markerUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_markerUnits();
		void set_markerWidth(SVGAnimatedLength* value);
		SVGAnimatedLength* get_markerWidth();
		void set_markerHeight(SVGAnimatedLength* value);
		SVGAnimatedLength* get_markerHeight();
		void set_orientAngle(SVGAnimatedAngle* value);
		SVGAnimatedAngle* get_orientAngle();
		void set_refY(SVGAnimatedLength* value);
		SVGAnimatedLength* get_refY();
		void set_refX(SVGAnimatedLength* value);
		SVGAnimatedLength* get_refX();
		void setOrientToAngle(SVGAngle* angle);
		void setOrientToAuto();
		void set_SVG_MARKER_ORIENT_UNKNOWN(double value);
		double get_SVG_MARKER_ORIENT_UNKNOWN();
		void set_SVG_MARKER_ORIENT_ANGLE(double value);
		double get_SVG_MARKER_ORIENT_ANGLE();
		void set_SVG_MARKERUNITS_UNKNOWN(double value);
		double get_SVG_MARKERUNITS_UNKNOWN();
		void set_SVG_MARKERUNITS_STROKEWIDTH(double value);
		double get_SVG_MARKERUNITS_STROKEWIDTH();
		void set_SVG_MARKER_ORIENT_AUTO(double value);
		double get_SVG_MARKER_ORIENT_AUTO();
		void set_SVG_MARKERUNITS_USERSPACEONUSE(double value);
		double get_SVG_MARKERUNITS_USERSPACEONUSE();
		static void set_prototype(SVGMarkerElement* value);
		static SVGMarkerElement* get_prototype();
		SVGMarkerElement();
	};

	class SVGGElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests {
	public:
		static void set_prototype(SVGGElement* value);
		static SVGGElement* get_prototype();
		SVGGElement();
	};

	class SVGZoomEvent: public UIEvent {
	public:
		void set_zoomRectScreen(SVGRect* value);
		SVGRect* get_zoomRectScreen();
		void set_previousScale(double value);
		double get_previousScale();
		void set_newScale(double value);
		double get_newScale();
		void set_previousTranslate(SVGPoint* value);
		SVGPoint* get_previousTranslate();
		void set_newTranslate(SVGPoint* value);
		SVGPoint* get_newTranslate();
		static void set_prototype(SVGZoomEvent* value);
		static SVGZoomEvent* get_prototype();
		SVGZoomEvent();
	};

	class SVGLineElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests {
	public:
		void set_y1(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y1();
		void set_x2(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x2();
		void set_x1(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x1();
		void set_y2(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y2();
		static void set_prototype(SVGLineElement* value);
		static SVGLineElement* get_prototype();
		SVGLineElement();
	};

	class SVGDescElement: public SVGElement , public SVGStylable , public SVGLangSpace {
	public:
		static void set_prototype(SVGDescElement* value);
		static SVGDescElement* get_prototype();
		SVGDescElement();
	};

	class SVGClipPathElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests {
	public:
		void set_clipPathUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_clipPathUnits();
		static void set_prototype(SVGClipPathElement* value);
		static SVGClipPathElement* get_prototype();
		SVGClipPathElement();
	};

	class MouseEvent: public UIEvent , public MSMouseEventExtensions {
	public:
		void set_pageX(double value);
		double get_pageX();
		void set_offsetY(double value);
		double get_offsetY();
		void set_x(double value);
		double get_x();
		void set_y(double value);
		double get_y();
		void set_altKey(Boolean value);
		Boolean get_altKey();
		void set_metaKey(Boolean value);
		Boolean get_metaKey();
		void set_ctrlKey(Boolean value);
		Boolean get_ctrlKey();
		void set_offsetX(double value);
		double get_offsetX();
		void set_screenX(double value);
		double get_screenX();
		void set_clientY(double value);
		double get_clientY();
		void set_shiftKey(Boolean value);
		Boolean get_shiftKey();
		void set_screenY(double value);
		double get_screenY();
		void set_relatedTarget(EventTarget* value);
		EventTarget* get_relatedTarget();
		void set_button(double value);
		double get_button();
		void set_pageY(double value);
		double get_pageY();
		void set_buttons(double value);
		double get_buttons();
		void set_clientX(double value);
		double get_clientX();
		void initMouseEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, Boolean ctrlKeyArg, Boolean altKeyArg, Boolean shiftKeyArg, Boolean metaKeyArg, double buttonArg, EventTarget* relatedTargetArg);
		Boolean getModifierState(const String& keyArg);
		static void set_prototype(MouseEvent* value);
		static MouseEvent* get_prototype();
		MouseEvent();
	};

	class SVGTextPositioningElement: public SVGTextContentElement {
	public:
		void set_y(SVGAnimatedLengthList* value);
		SVGAnimatedLengthList* get_y();
		void set_rotate(SVGAnimateddoubleList* value);
		SVGAnimateddoubleList* get_rotate();
		void set_dy(SVGAnimatedLengthList* value);
		SVGAnimatedLengthList* get_dy();
		void set_x(SVGAnimatedLengthList* value);
		SVGAnimatedLengthList* get_x();
		void set_dx(SVGAnimatedLengthList* value);
		SVGAnimatedLengthList* get_dx();
		static void set_prototype(SVGTextPositioningElement* value);
		static SVGTextPositioningElement* get_prototype();
		SVGTextPositioningElement();
	};

	class CDATASection: public Text {
	public:
		static void set_prototype(CDATASection* value);
		static CDATASection* get_prototype();
		CDATASection();
	};

	class SVGPatternElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGLangSpace , public SVGTests , public SVGFitToViewBox , public SVGURIReference {
	public:
		void set_patternUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_patternUnits();
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_patternContentUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_patternContentUnits();
		void set_patternTransform(SVGAnimatedTransformList* value);
		SVGAnimatedTransformList* get_patternTransform();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		static void set_prototype(SVGPatternElement* value);
		static SVGPatternElement* get_prototype();
		SVGPatternElement();
	};

	class SVGScriptElement: public SVGElement , public SVGURIReference {
	public:
		void set_type(const String& value);
		String* get_type();
		static void set_prototype(SVGScriptElement* value);
		static SVGScriptElement* get_prototype();
		SVGScriptElement();
	};

	class SVGViewElement: public SVGElement , public SVGZoomAndPan , public SVGFitToViewBox {
	public:
		void set_viewTarget(SVGStringList* value);
		SVGStringList* get_viewTarget();
		static void set_prototype(SVGViewElement* value);
		static SVGViewElement* get_prototype();
		SVGViewElement();
	};

	class SVGTitleElement: public SVGElement , public SVGStylable , public SVGLangSpace {
	public:
		static void set_prototype(SVGTitleElement* value);
		static SVGTitleElement* get_prototype();
		SVGTitleElement();
	};

	class MouseWheelEvent: public MouseEvent {
	public:
		void set_wheelDelta(double value);
		double get_wheelDelta();
		void initMouseWheelEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double buttonArg, EventTarget* relatedTargetArg, const String& modifiersListArg, double wheelDeltaArg);
		static void set_prototype(MouseWheelEvent* value);
		static MouseWheelEvent* get_prototype();
		MouseWheelEvent();
	};

	class KeyboardEvent: public UIEvent , public KeyboardEventExtensions {
	public:
		void set_location(double value);
		double get_location();
		void set_shiftKey(Boolean value);
		Boolean get_shiftKey();
		void set_locale(const String& value);
		String* get_locale();
		void set_key(const String& value);
		String* get_key();
		void set_altKey(Boolean value);
		Boolean get_altKey();
		void set_metaKey(Boolean value);
		Boolean get_metaKey();
		void set_char(const String& value);
		String* get_char();
		void set_ctrlKey(Boolean value);
		Boolean get_ctrlKey();
		void set_repeat(Boolean value);
		Boolean get_repeat();
		Boolean getModifierState(const String& keyArg);
		void initKeyboardEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, const String& keyArg, double locationArg, const String& modifiersListArg, Boolean repeat, const String& locale);
		void set_DOM_KEY_LOCATION_RIGHT(double value);
		double get_DOM_KEY_LOCATION_RIGHT();
		void set_DOM_KEY_LOCATION_STANDARD(double value);
		double get_DOM_KEY_LOCATION_STANDARD();
		void set_DOM_KEY_LOCATION_LEFT(double value);
		double get_DOM_KEY_LOCATION_LEFT();
		void set_DOM_KEY_LOCATION_NUMPAD(double value);
		double get_DOM_KEY_LOCATION_NUMPAD();
		void set_DOM_KEY_LOCATION_JOYSTICK(double value);
		double get_DOM_KEY_LOCATION_JOYSTICK();
		void set_DOM_KEY_LOCATION_MOBILE(double value);
		double get_DOM_KEY_LOCATION_MOBILE();
		static void set_prototype(KeyboardEvent* value);
		static KeyboardEvent* get_prototype();
		KeyboardEvent();
	};

	class FocusEvent: public UIEvent {
	public:
		void set_relatedTarget(EventTarget* value);
		EventTarget* get_relatedTarget();
		void initFocusEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, EventTarget* relatedTargetArg);
		static void set_prototype(FocusEvent* value);
		static FocusEvent* get_prototype();
		FocusEvent();
	};

	class SVGTextElement: public SVGTextPositioningElement , public SVGTransformable {
	public:
		static void set_prototype(SVGTextElement* value);
		static SVGTextElement* get_prototype();
		SVGTextElement();
	};

	class SVGTSpanElement: public SVGTextPositioningElement {
	public:
		static void set_prototype(SVGTSpanElement* value);
		static SVGTSpanElement* get_prototype();
		SVGTSpanElement();
	};

	class SVGRadialGradientElement: public SVGGradientElement {
	public:
		void set_cx(SVGAnimatedLength* value);
		SVGAnimatedLength* get_cx();
		void set_r(SVGAnimatedLength* value);
		SVGAnimatedLength* get_r();
		void set_cy(SVGAnimatedLength* value);
		SVGAnimatedLength* get_cy();
		void set_fx(SVGAnimatedLength* value);
		SVGAnimatedLength* get_fx();
		void set_fy(SVGAnimatedLength* value);
		SVGAnimatedLength* get_fy();
		static void set_prototype(SVGRadialGradientElement* value);
		static SVGRadialGradientElement* get_prototype();
		SVGRadialGradientElement();
	};

	class DragEvent: public MouseEvent {
	public:
		void set_dataTransfer(DataTransfer* value);
		DataTransfer* get_dataTransfer();
		void initDragEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, Boolean ctrlKeyArg, Boolean altKeyArg, Boolean shiftKeyArg, Boolean metaKeyArg, double buttonArg, EventTarget* relatedTargetArg, DataTransfer* dataTransferArg);
		static void set_prototype(DragEvent* value);
		static DragEvent* get_prototype();
		DragEvent();
	};

	class WheelEvent: public MouseEvent {
	public:
		void set_deltaZ(double value);
		double get_deltaZ();
		void set_deltaX(double value);
		double get_deltaX();
		void set_deltaMode(double value);
		double get_deltaMode();
		void set_deltaY(double value);
		double get_deltaY();
		void initWheelEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double buttonArg, EventTarget* relatedTargetArg, const String& modifiersListArg, double deltaXArg, double deltaYArg, double deltaZArg, double deltaMode);
		void set_DOM_DELTA_PIXEL(double value);
		double get_DOM_DELTA_PIXEL();
		void set_DOM_DELTA_LINE(double value);
		double get_DOM_DELTA_LINE();
		void set_DOM_DELTA_PAGE(double value);
		double get_DOM_DELTA_PAGE();
		static void set_prototype(WheelEvent* value);
		static WheelEvent* get_prototype();
		WheelEvent();
	};

	class SVGLinearGradientElement: public SVGGradientElement {
	public:
		void set_y1(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y1();
		void set_x2(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x2();
		void set_x1(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x1();
		void set_y2(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y2();
		static void set_prototype(SVGLinearGradientElement* value);
		static SVGLinearGradientElement* get_prototype();
		SVGLinearGradientElement();
	};

	class SVGFEFuncAElement: public SVGComponentTransferFunctionElement {
	public:
		static void set_prototype(SVGFEFuncAElement* value);
		static SVGFEFuncAElement* get_prototype();
		SVGFEFuncAElement();
	};

	class SVGFEFuncRElement: public SVGComponentTransferFunctionElement {
	public:
		static void set_prototype(SVGFEFuncRElement* value);
		static SVGFEFuncRElement* get_prototype();
		SVGFEFuncRElement();
	};

	class MSPointerEvent: public MouseEvent {
	public:
		void set_width(double value);
		double get_width();
		void set_rotation(double value);
		double get_rotation();
		void set_pressure(double value);
		double get_pressure();
		void set_pointerType(double value);
		double get_pointerType();
		void set_isPrimary(Boolean value);
		Boolean get_isPrimary();
		void set_tiltY(double value);
		double get_tiltY();
		void set_height(double value);
		double get_height();
		void set_intermediatePoints(Object* value);
		Object* get_intermediatePoints();
		void set_currentPoint(Object* value);
		Object* get_currentPoint();
		void set_tiltX(double value);
		double get_tiltX();
		void set_hwTimestamp(double value);
		double get_hwTimestamp();
		void set_pointerId(double value);
		double get_pointerId();
		void initPointerEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, Boolean ctrlKeyArg, Boolean altKeyArg, Boolean shiftKeyArg, Boolean metaKeyArg, double buttonArg, EventTarget* relatedTargetArg, double offsetXArg, double offsetYArg, double widthArg, double heightArg, double pressure, double rotation, double tiltX, double tiltY, double pointerIdArg, double pointerType, double hwTimestampArg, Boolean isPrimary);
		void getCurrentPoint(Element* element);
		void getIntermediatePoints(Element* element);
		void set_MSPOINTER_TYPE_PEN(double value);
		double get_MSPOINTER_TYPE_PEN();
		void set_MSPOINTER_TYPE_MOUSE(double value);
		double get_MSPOINTER_TYPE_MOUSE();
		void set_MSPOINTER_TYPE_TOUCH(double value);
		double get_MSPOINTER_TYPE_TOUCH();
		static void set_prototype(MSPointerEvent* value);
		static MSPointerEvent* get_prototype();
		MSPointerEvent();
	};
extern double NaN;
extern double Infinity;
extern Object* eval(const String& x);
extern double parseInt(const String& s);
extern double parseInt(const String& s, double radix);
extern double parseFloat(const String& string);
extern Boolean isNaN(double number);
extern Boolean isFinite(double number);
extern String* decodeURI(const String& encodedURI);
extern String* decodeURIComponent(const String& encodedURIComponent);
extern String* encodeURI(const String& uri);
extern String* encodeURIComponent(const String& uriComponent);
extern Math Math;
extern Date Date;
extern JSON JSON;
extern Object* (*ondragend)(DragEvent* ev);
extern Object* (*onkeydown)(KeyboardEvent* ev);
extern Object* (*ondragover)(DragEvent* ev);
extern Object* (*onkeyup)(KeyboardEvent* ev);
extern Object* (*onreset)(Event* ev);
extern Object* (*onmouseup)(MouseEvent* ev);
extern Object* (*ondragstart)(DragEvent* ev);
extern Object* (*ondrag)(DragEvent* ev);
extern Object* (*onmouseover)(MouseEvent* ev);
extern Object* (*ondragleave)(DragEvent* ev);
extern History* history;
extern String* name;
extern Object* (*onafterprint)(Event* ev);
extern Object* (*onpause)(Event* ev);
extern Object* (*onbeforeprint)(Event* ev);
extern Window* top;
extern Object* (*onmousedown)(MouseEvent* ev);
extern Object* (*onseeked)(Event* ev);
extern Window* opener;
extern Object* (*onclick)(MouseEvent* ev);
extern Object* (*onwaiting)(Event* ev);
extern Object* (*ononline)(Event* ev);
extern Object* (*ondurationchange)(Event* ev);
extern Window* frames;
extern Object* (*onblur)(FocusEvent* ev);
extern Object* (*onemptied)(Event* ev);
extern Object* (*onseeking)(Event* ev);
extern Object* (*oncanplay)(Event* ev);
extern Object* (*onstalled)(Event* ev);
extern Object* (*onmousemove)(MouseEvent* ev);
extern Object* (*onoffline)(Event* ev);
extern double length;
extern Object* (*onbeforeunload)(BeforeUnloadEvent* ev);
extern Object* (*onratechange)(Event* ev);
extern Object* (*onstorage)(StorageEvent* ev);
extern Object* (*onloadstart)(Event* ev);
extern Object* (*ondragenter)(DragEvent* ev);
extern Object* (*onsubmit)(Event* ev);
extern Window* self;
extern Object* (*onprogress)(Object* ev);
extern Object* (*ondblclick)(MouseEvent* ev);
extern Object* (*oncontextmenu)(MouseEvent* ev);
extern Object* (*onchange)(Event* ev);
extern Object* (*onloadedmetadata)(Event* ev);
extern Object* (*onplay)(Event* ev);
extern ErrorFunction* onerror;
extern Object* (*onplaying)(Event* ev);
extern Window* parent;
extern Location* location;
extern Object* (*oncanplaythrough)(Event* ev);
extern Object* (*onabort)(UIEvent* ev);
extern Object* (*onreadystatechange)(Event* ev);
extern Object* (*onkeypress)(KeyboardEvent* ev);
extern Element* frameElement;
extern Object* (*onloadeddata)(Event* ev);
extern Object* (*onsuspend)(Event* ev);
extern Window* window;
extern Object* (*onfocus)(FocusEvent* ev);
extern Object* (*onmessage)(MessageEvent* ev);
extern Object* (*ontimeupdate)(Event* ev);
extern Object* (*onresize)(UIEvent* ev);
extern Navigator* navigator;
extern Object* (*onselect)(UIEvent* ev);
extern Object* (*ondrop)(DragEvent* ev);
extern Object* (*onmouseout)(MouseEvent* ev);
extern Object* (*onended)(Event* ev);
extern Object* (*onhashchange)(Event* ev);
extern Object* (*onunload)(Event* ev);
extern Object* (*onscroll)(UIEvent* ev);
extern Object* (*onmousewheel)(MouseWheelEvent* ev);
extern Object* (*onload)(Event* ev);
extern Object* (*onvolumechange)(Event* ev);
extern Object* (*oninput)(Event* ev);
extern void alert();
extern void alert(const String& message);
extern void focus();
template<typename ...Args>
extern void print(const Args&... args)
{
	duettoVariadicTrap<void>(print<>,static_cast<const String&>(args)...);
}
extern String* prompt();
extern String* prompt(const String& message, const String& defaul);
extern String* toString();
extern Window* open();
extern Window* open(const String& url, const String& target, const String& features, Boolean replace);
extern void close();
extern Boolean confirm();
extern Boolean confirm(const String& message);
extern void postMessage(Object* message, const String& targetOrigin);
extern void postMessage(Object* message, const String& targetOrigin, Object* ports);
extern Object* showModalDialog();
extern Object* showModalDialog(const String& url, Object* argument, Object* options);
extern void blur();
extern Selection* getSelection();
extern CSSStyleDeclaration* getComputedStyle(Element* elt);
extern CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
extern Boolean attachEvent(const String& event, EventListener* listener);
extern void detachEvent(const String& event, EventListener* listener);
extern String* status;
extern Object* (*onmouseleave)(MouseEvent* ev);
extern double screenLeft;
extern Object* offscreenBuffering;
extern double maxConnectionsPerServer;
extern Object* (*onmouseenter)(MouseEvent* ev);
extern DataTransfer* clipboardData;
extern String* defaultStatus;
extern Navigator* clientInformation;
extern Boolean closed;
extern Object* (*onhelp)(Event* ev);
extern BrowserPublic* external;
extern MSEventObj* event;
extern Object* (*onfocusout)(FocusEvent* ev);
extern double screenTop;
extern Object* (*onfocusin)(FocusEvent* ev);
extern Window* showModelessDialog();
extern Window* showModelessDialog(const String& url, Object* argument, Object* options);
extern void navigate(const String& url);
extern void resizeBy();
extern void resizeBy(double x, double y);
extern Object* item(Object* index);
extern void resizeTo();
extern void resizeTo(double x, double y);
extern MSPopupWindow* createPopup();
extern MSPopupWindow* createPopup(Object* arguments);
extern String* toStaticHTML(const String& html);
extern Object* execScript(const String& code);
extern Object* execScript(const String& code, const String& language);
extern void msWriteProfilerMark(const String& profilerMarkName);
extern void moveTo();
extern void moveTo(double x, double y);
extern void moveBy();
extern void moveBy(double x, double y);
extern void showHelp(const String& url);
extern void showHelp(const String& url, Object* helpArg);
extern void showHelp(const String& url, Object* helpArg, const String& features);
extern Object* performance;
extern double outerWidth;
extern double pageXOffset;
extern double innerWidth;
extern double pageYOffset;
extern double screenY;
extern double outerHeight;
extern Screen* screen;
extern double innerHeight;
extern double screenX;
extern void scroll();
extern void scroll(double x, double y);
extern void scrollBy();
extern void scrollBy(double x, double y);
extern void scrollTo();
extern void scrollTo(double x, double y);
extern StyleMedia* styleMedia;
extern Document* document;
extern void removeEventListener(const String& type, EventListener* listener);
extern void removeEventListener(const String& type, EventListener* listener, Boolean useCapture);
extern void addEventListener(const String& type, EventListener* listener);
extern void addEventListener(const String& type, EventListener* listener, Boolean useCapture);
extern Boolean dispatchEvent(Event* evt);
extern Storage* localStorage;
extern Storage* sessionStorage;
extern void clearTimeout(double handle);
extern double setTimeout(Object* expression);
extern double setTimeout(Object* expression, double msec);
extern double setTimeout(Object* expression, double msec, Object* language);
extern void clearInterval(double handle);
extern double setInterval(Object* expression);
extern double setInterval(Object* expression, double msec);
extern double setInterval(Object* expression, double msec, Object* language);
extern URL* URL;
extern MSApp* MSApp;
extern Object* (*onpopstate)(PopStateEvent* ev);
extern ApplicationCache* applicationCache;
extern MediaQueryList* matchMedia(const String& mediaQuery);
extern MediaQueryList* msMatchMedia(const String& mediaQuery);
extern double animationStartTime;
extern double msAnimationStartTime;
extern void msCancelRequestAnimationFrame(double handle);
extern void cancelAnimationFrame(double handle);
extern double requestAnimationFrame(FrameRequestCallback* callback);
extern double msRequestAnimationFrame(FrameRequestCallback* callback);
extern String* btoa(const String& rawString);
extern String* atob(const String& encodedString);
extern IDBFactory* msIndexedDB;
extern IDBFactory* indexedDB;
extern Console* console;
template<typename ...Args>
extern void importScripts(const Args&... args /*{{ARRAY_BASE_TYPE=String*}}*/);

} 
#endif
