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

#ifndef _DUETTO_LIB_4a91e6c5
#define _DUETTO_LIB_4a91e6c5
#include "types.h"
namespace client
{
	class PropertyDescriptor;
	class PropertyDescriptorMap;
	class Object;
	class IArguments;
	class String;
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
	class Array;
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
	class SVGAnimatedNumberList;
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
	class DOML2DeprecatedListNumberingAndBulletStyle;
	class MSElementExtensions;
	class MSHTMLDocumentViewExtensions;
	class SVGAnimatedNumber;
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
	class SVGNumber;
	class MSCompatibleInfo;
	class MSHTMLDocumentEventExtensions;
	class SVGAnimatedRect;
	class SVGPathSegList;
	class MSImageResourceExtensions;
	class MSBorderColorHighlightStyle_HTMLTableRowElement;
	class PositionError;
	class BrowserPublic;
	class MSnsInfoCollection;
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
	class SVGNumberList;
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
	class MSnsInfo;
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
	class XMLHttpRequest;
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
	class HTMLCanvasElement;
	class HTMLTitleElement;
	class HTMLStyleElement;
	class CSSnsRule;
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
	class Document;
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
		void setHours(double hours, double min, double sec);
		void setHours(double hours, double min, double sec, double ms);
		void setUTCHours(double hours);
		void setUTCHours(double hours, double min);
		void setUTCHours(double hours, double min, double sec);
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
		Date(double year, double month, double date, double hours);
		Date(double year, double month, double date, double hours, double minutes);
		Date(double year, double month, double date, double hours, double minutes, double seconds);
		Date(double year, double month, double date, double hours, double minutes, double seconds, double ms);
		static double parse(const String& s);
		static double UTC(double year, double month);
		static double UTC(double year, double month, double date);
		static double UTC(double year, double month, double date, double hours);
		static double UTC(double year, double month, double date, double hours, double minutes);
		static double UTC(double year, double month, double date, double hours, double minutes, double seconds);
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
		Boolean get_ignoreCase();
		void set_multiline(Boolean value);
		Boolean get_multiline();
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
	};

	class EvalError: public Error {
	public:

		EvalError();
		EvalError(const String& message);
	};

	class RangeError: public Error {
	public:

		RangeError();
		RangeError(const String& message);
	};

	class ReferenceError: public Error {
	public:

		ReferenceError();
		ReferenceError(const String& message);
	};

	class SyntaxError: public Error {
	public:

		SyntaxError();
		SyntaxError(const String& message);
	};

	class TypeError: public Error {
	public:

		TypeError();
		TypeError(const String& message);
	};

	class URIError: public Error {
	public:

		URIError();
		URIError(const String& message);
	};

	class JSON{
	public:
		Object* parse(const String& text);
		String* stringify(double value);
		String* stringify(Object* value);
		String* stringify(Object* value, Object* (*replacer)(const String& key, Object* value));
		String* stringify(Object* value, Array* /*{ARRAY_BASE_TYPE=Object*}*/ replacer);
		String* stringify(Object* value, Object* (*replacer)(const String& key, Object* value), Object* space);
		String* stringify(Object* value, Array* /*{ARRAY_BASE_TYPE=Object*}*/ replacer, Object* space);
	};

	class ArrayBuffer{
	public:
		double get_byteLength();

	};

	class ArrayBufferView{
	public:
		void set_buffer(ArrayBuffer* value);
		ArrayBuffer* get_buffer();
		double get_byteOffset();
		double get_byteLength();
	};

	class Int8Array: public ArrayBufferView {
	public:
		double operator[](double index);
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
		DataView(ArrayBuffer* buffer);
		DataView(ArrayBuffer* buffer, double byteOffset);
		DataView(ArrayBuffer* buffer, double byteOffset, double length);
	};

	class NavigatorID{
	public:
		String* get_appVersion();
		String* get_appName();
		String* get_userAgent();
		void set_platform(const String& value);
		String* get_platform();
	};

	class TreeWalker{
	public:
		double get_whatToShow();
		void set_filter(NodeFilterCallback* value);
		NodeFilterCallback* get_filter();
		void set_root(Node* value);
		Node* get_root();
		Node* get_currentNode();
		Boolean get_expandEntityReferences();
		Node* previousSibling();
		Node* lastChild();
		Node* nextSibling();
		Node* nextNode();
		Node* parentNode();
		Node* firstChild();
		Node* previousNode();
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
		Performance();
		double now();
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
		Element* get_owningElement();
		void set_imports(StyleSheetList* value);
		StyleSheetList* get_imports();
		Boolean get_isAlternate();
		void set_rules(MSCSSRuleList* value);
		MSCSSRuleList* get_rules();
		Boolean get_isPrefAlternate();
		Boolean get_readOnly();
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
		double get_SVG_UNIT_TYPE_UNKNOWN();
		double get_SVG_UNIT_TYPE_OBJECTBOUNDINGBOX();
		double get_SVG_UNIT_TYPE_USERSPACEONUSE();
		SVGUnitTypes();
	};

	class DocumentRange{
	public:
		Range* createRange();
	};

	class CSS2Properties{
	public:
		String* get_backgroundAttachment();
		void set_visibility(const String& value);
		String* get_visibility();
		String* get_fontFamily();
		String* get_borderRightStyle();
		void set_clear(const String& value);
		String* get_clear();
		void set_content(const String& value);
		String* get_content();
		String* get_counterIncrement();
		void set_orphans(const String& value);
		String* get_orphans();
		String* get_marginBottom();
		String* get_borderStyle();
		String* get_counterReset();
		String* get_outlineWidth();
		String* get_marginRight();
		String* get_paddingLeft();
		String* get_borderBottom();
		String* get_marginTop();
		String* get_borderTopColor();
		void set_top(const String& value);
		String* get_top();
		String* get_fontWeight();
		String* get_textIndent();
		String* get_borderRight();
		void set_width(const String& value);
		String* get_width();
		String* get_listStyleImage();
		void set_cursor(const String& value);
		String* get_cursor();
		String* get_listStylePosition();
		String* get_borderTopStyle();
		void set_direction(const String& value);
		String* get_direction();
		String* get_maxWidth();
		void set_color(const String& value);
		String* get_color();
		void set_clip(const String& value);
		String* get_clip();
		String* get_borderRightWidth();
		String* get_verticalAlign();
		String* get_pageBreakAfter();
		void set_overflow(const String& value);
		String* get_overflow();
		String* get_borderBottomStyle();
		String* get_borderLeftStyle();
		String* get_fontStretch();
		String* get_emptyCells();
		void set_padding(const String& value);
		String* get_padding();
		String* get_paddingRight();
		void set_background(const String& value);
		String* get_background();
		void set_bottom(const String& value);
		String* get_bottom();
		void set_height(const String& value);
		String* get_height();
		String* get_paddingTop();
		void set_right(const String& value);
		String* get_right();
		String* get_borderLeftWidth();
		String* get_borderLeft();
		String* get_backgroundPosition();
		String* get_backgroundColor();
		void set_widows(const String& value);
		String* get_widows();
		String* get_lineHeight();
		String* get_pageBreakInside();
		String* get_borderTopWidth();
		void set_left(const String& value);
		String* get_left();
		String* get_outlineStyle();
		String* get_borderTop();
		String* get_paddingBottom();
		String* get_outlineColor();
		String* get_wordSpacing();
		void set_outline(const String& value);
		String* get_outline();
		void set_font(const String& value);
		String* get_font();
		String* get_marginLeft();
		void set_display(const String& value);
		String* get_display();
		String* get_maxHeight();
		String* get_cssFloat();
		String* get_letterSpacing();
		String* get_borderSpacing();
		String* get_backgroundRepeat();
		String* get_fontSizeAdjust();
		String* get_borderLeftColor();
		String* get_borderWidth();
		String* get_backgroundImage();
		String* get_listStyleType();
		String* get_whiteSpace();
		String* get_fontStyle();
		String* get_borderBottomColor();
		String* get_minWidth();
		void set_position(const String& value);
		String* get_position();
		String* get_zIndex();
		String* get_borderColor();
		String* get_listStyle();
		String* get_captionSide();
		String* get_borderCollapse();
		String* get_fontVariant();
		void set_quotes(const String& value);
		String* get_quotes();
		String* get_tableLayout();
		String* get_unicodeBidi();
		String* get_borderBottomWidth();
		String* get_minHeight();
		String* get_textDecoration();
		String* get_fontSize();
		void set_border(const String& value);
		String* get_border();
		String* get_pageBreakBefore();
		String* get_textAlign();
		String* get_textTransform();
		void set_margin(const String& value);
		String* get_margin();
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
		String* get_altHtml();
		String* get_BaseHref();
	};

	class DOML2DeprecatedListSpaceReduction{
	public:
		void set_compact(Boolean value);
		Boolean get_compact();
	};

	class CSS3Properties{
	public:
		String* get_textAlignLast();
		String* get_textUnderlinePosition();
		String* get_wordWrap();
		String* get_borderTopLeftRadius();
		String* get_backgroundClip();
		String* get_msTransformOrigin();
		void set_opacity(const String& value);
		String* get_opacity();
		String* get_overflowY();
		String* get_boxShadow();
		String* get_backgroundSize();
		String* get_wordBreak();
		String* get_boxSizing();
		String* get_rubyOverhang();
		String* get_rubyAlign();
		String* get_textJustify();
		String* get_borderRadius();
		String* get_overflowX();
		String* get_borderTopRightRadius();
		String* get_msTransform();
		String* get_borderBottomLeftRadius();
		String* get_rubyPosition();
		String* get_borderBottomRightRadius();
		String* get_backgroundOrigin();
		String* get_textOverflow();
	};

	class MSScriptHost{
	public:
		MSScriptHost();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class RangeException{
	public:
		void set_name(const String& value);
		String* get_name();
		void set_code(double value);
		double get_code();
		void set_message(const String& value);
		String* get_message();
		String* toString();
		double get_INVALID_NODE_TYPE_ERR();
		double get_BAD_BOUNDARYPOINTS_ERR();
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
		TextMetrics();
	};

	class DOML2DeprecatedWordWrapSuppression_HTMLBodyElement{
	public:
		Boolean get_noWrap();
	};

	class MSHTMLTableCaptionElementExtensions{
	public:
		String* get_vAlign();
	};

	class SVGAnimatedString{
	public:
		String* get_animVal();
		String* get_baseVal();
		SVGAnimatedString();
	};

	class StyleMedia{
	public:
		void set_type(const String& value);
		String* get_type();
		Boolean matchMedium(const String& mediaquery);
		StyleMedia();
	};

	class TextRange{
	public:
		double get_boundingLeft();
		String* get_htmlText();
		double get_offsetLeft();
		double get_boundingWidth();
		double get_boundingHeight();
		double get_boundingTop();
		void set_text(const String& value);
		String* get_text();
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
		TextRange();
	};

	class SVGTests{
	public:
		SVGStringList* get_requiredFeatures();
		SVGStringList* get_requiredExtensions();
		SVGStringList* get_systemLanguage();
		Boolean hasExtension(const String& extension);
	};

	class MSSelection{
	public:
		void set_type(const String& value);
		String* get_type();
		String* get_typeDetail();
		TextRange* createRange();
		void clear();
		TextRangeCollection* createRangeCollection();
		void empty();
		MSSelection();
	};

	class MSHTMLDListElementExtensions{
	public:
	};

	class Selection{
	public:
		Boolean get_isCollapsed();
		Node* get_anchorNode();
		Node* get_focusNode();
		double get_anchorOffset();
		double get_focusOffset();
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
		Selection();
	};

	class SVGAnimatedAngle{
	public:
		SVGAngle* get_animVal();
		SVGAngle* get_baseVal();
		SVGAnimatedAngle();
	};

	class NodeIterator{
	public:
		double get_whatToShow();
		void set_filter(NodeFilterCallback* value);
		NodeFilterCallback* get_filter();
		void set_root(Node* value);
		Node* get_root();
		Boolean get_expandEntityReferences();
		Node* nextNode();
		void detach();
		Node* previousNode();
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
		String* get_codeType();
		void set_standby(const String& value);
		String* get_standby();
		void set_classid(const String& value);
		String* get_classid();
		String* get_useMap();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_data(const String& value);
		String* get_data();
		Document* get_contentDocument();
		String* get_altHtml();
		void set_declare(Boolean value);
		Boolean get_declare();
		void set_type(const String& value);
		String* get_type();
		String* get_BaseHref();
	};

	class SVGLocatable{
	public:
		SVGElement* get_farthestViewportElement();
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
		Window* get_contentWindow();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		String* get_frameBorder();
		void set_height(Object* value);
		Object* get_height();
		void set_border(const String& value);
		String* get_border();
		Object* get_frameSpacing();
	};

	class WindowSessionStorage{
	public:
		Storage* get_sessionStorage();
	};

	class SVGAnimatedTransformList{
	public:
		SVGTransformList* get_animVal();
		SVGTransformList* get_baseVal();
		SVGAnimatedTransformList();
	};

	class SVGFitToViewBox{
	public:
		SVGAnimatedRect* get_viewBox();
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
	};

	class MSHTMLAnchorElementExtensions{
	public:
		String* get_nameProp();
		String* get_protocolLong();
		void set_urn(const String& value);
		String* get_urn();
		String* get_mimeType();
		String* get_Methods();
	};

	class SVGPointList{
	public:
		double get_numberOfItems();
		SVGPoint* replaceItem(SVGPoint* newItem, double index);
		SVGPoint* getItem(double index);
		void clear();
		SVGPoint* appendItem(SVGPoint* newItem);
		SVGPoint* initialize(SVGPoint* newItem);
		SVGPoint* removeItem(double index);
		SVGPoint* insertItemBefore(SVGPoint* newItem, double index);
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
		SVGLengthList* get_animVal();
		SVGLengthList* get_baseVal();
		SVGAnimatedLengthList();
	};

	class MSHTMLTableDataCellElementExtensions{
	public:
	};

	class SVGAnimatedPreserveAspectRatio{
	public:
		SVGPreserveAspectRatio* get_animVal();
		SVGPreserveAspectRatio* get_baseVal();
		SVGAnimatedPreserveAspectRatio();
	};

	class MSCSSStyleRuleExtensions{
	public:
		Boolean get_readOnly();
	};

	class StyleSheetPageList{
	public:
		StyleSheetPage* operator[](double index);
		void set_length(double value);
		double get_length();
		StyleSheetPage* item(double index);
		StyleSheetPageList();
	};

	class EventTarget{
	public:
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, Boolean useCapture);
		void addEventListener(const String& type, const EventListener& listener, Boolean useCapture);
		Boolean dispatchEvent(Event* evt);
	};

	class SVGAngle{
	public:
		String* get_valueAsString();
		double get_valueInSpecifiedUnits();
		void set_value(double value);
		double get_value();
		double get_unitType();
		void newValueSpecifiedUnits(double unitType, double valueInSpecifiedUnits);
		void convertToSpecifiedUnits(double unitType);
		double get_SVG_ANGLETYPE_RAD();
		double get_SVG_ANGLETYPE_UNKNOWN();
		double get_SVG_ANGLETYPE_UNSPECIFIED();
		double get_SVG_ANGLETYPE_DEG();
		double get_SVG_ANGLETYPE_GRAD();
		SVGAngle();
	};

	class MSHTMLLabelElementExtensions{
	public:
	};

	class CanvasGradient{
	public:
		void addColorStop(double offset, const String& color);
		CanvasGradient();
	};

	class MSHTMLBodyElementExtensions: public DOML2DeprecatedWordWrapSuppression_HTMLBodyElement {
	public:
		void set_scroll(const String& value);
		String* get_scroll();
		Object* get_bottomMargin();
		Object* get_topMargin();
		Object* get_rightMargin();
		String* get_bgProperties();
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
		MSCSSRuleList();
	};

	class CanvasRenderingContext2D{
	public:
		double get_shadowOffsetX();
		double get_lineWidth();
		double get_miterLimit();
		void set_canvas(HTMLCanvasElement* value);
		HTMLCanvasElement* get_canvas();
		Object* get_strokeStyle();
		void set_font(const String& value);
		String* get_font();
		double get_globalAlpha();
		String* get_globalCompositeOperation();
		double get_shadowOffsetY();
		Object* get_fillStyle();
		String* get_lineCap();
		double get_shadowBlur();
		String* get_textAlign();
		String* get_textBaseline();
		String* get_shadowColor();
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
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, double height);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, double height, double canvasOffsetX);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, double height, double canvasOffsetX, double canvasOffsetY);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, double height, double canvasOffsetX, double canvasOffsetY, double canvasImageWidth);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, double height, double canvasOffsetX, double canvasOffsetY, double canvasImageWidth, double canvasImageHeight);
		void transform(double m11, double m12, double m21, double m22, double dx, double dy);
		void stroke();
		void strokeRect(double x, double y, double w, double h);
		void strokeText(const String& text, double x, double y);
		void strokeText(const String& text, double x, double y, double maxWidth);
		void beginPath();
		void arcTo(double x1, double y1, double x2, double y2, double radius);
		CanvasGradient* createLinearGradient(double x0, double y0, double x1, double y1);
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
		double get_deviceXDPI();
		Boolean get_fontSmoothingEnabled();
		double get_bufferDepth();
		double get_logicalXDPI();
		double get_systemXDPI();
		double get_logicalYDPI();
		double get_systemYDPI();
		double get_updateInterval();
		double get_deviceYDPI();
	};

	class MSBorderColorStyle{
	public:
		Object* get_borderColor();
	};

	class SVGTransformList{
	public:
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
		SVGLength* get_animVal();
		SVGLength* get_baseVal();
		SVGAnimatedLength();
	};

	class SVGAnimatedPoints{
	public:
		void set_points(SVGPointList* value);
		SVGPointList* get_points();
		SVGPointList* get_animatedPoints();
	};

	class WindowModal{
	public:
		Object* get_dialogArguments();
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
		String* get_dataSrc();
		String* get_dataFormatAs();
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
		double get_colorDepth();
		double get_availWidth();
		double get_pixelDepth();
		double get_availHeight();
		void set_height(double value);
		double get_height();
		Screen();
	};

	class NavigatorGeolocation{
	public:
		void set_geolocation(Geolocation* value);
		Geolocation* get_geolocation();
	};

	class Coordinates{
	public:
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
		void set_types(DOMStringList* value);
		DOMStringList* get_types();
		void set_files(FileList* value);
		FileList* get_files();
		String* get_effectAllowed();
		String* get_dropEffect();
		Boolean clearData();
		Boolean clearData(const String& format);
		Boolean setData(const String& format, const String& data);
		String* getData(const String& format);
		DataTransfer();
	};

	class Range{
	public:
		double get_startOffset();
		void set_collapsed(Boolean value);
		Boolean get_collapsed();
		double get_endOffset();
		Node* get_startContainer();
		Node* get_endContainer();
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
		double get_END_TO_END();
		double get_START_TO_START();
		double get_START_TO_END();
		double get_END_TO_START();
		Range();
	};

	class SVGPoint{
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		SVGPoint* matrixTransform(SVGMatrix* matrix);
		SVGPoint();
	};

	class MSPluginsCollection{
	public:
		void set_length(double value);
		double get_length();
		void refresh();
		void refresh(Boolean reload);
		MSPluginsCollection();
	};

	class MSHTMLFontElementExtensions{
	public:
	};

	class SVGAnimatedNumberList{
	public:
		SVGNumberList* get_animVal();
		SVGNumberList* get_baseVal();
		SVGAnimatedNumberList();
	};

	class MSResourceMetadata{
	public:
		void set_protocol(const String& value);
		String* get_protocol();
		String* get_fileSize();
		String* get_fileUpdatedDate();
		String* get_nameProp();
		String* get_fileCreatedDate();
		String* get_fileModifiedDate();
		String* get_mimeType();
	};

	class MSHTMLQuoteElementExtensions{
	public:
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
		Boolean get_msPlayToPrimary();
		Boolean get_msPlayToDisabled();
		Object* get_msPlayToSource();
		MSHTMLImageElementExtensions();
	};

	class SVGAnimatedInteger{
	public:
		double get_animVal();
		double get_baseVal();
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
		double get_remainingSpace();
	};

	class MSLinkStyleExtensions{
	public:
		StyleSheet* get_styleSheet();
	};

	class MSHTMLCollectionExtensions{
	public:
		Object* urns(Object* urn);
		Object* tags(Object* tagName);
	};

	class DOML2DeprecatedWordWrapSuppression_HTMLDivElement{
	public:
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

	class DOML2DeprecatedListNumberingAndBulletStyle{
	public:
		void set_type(const String& value);
		String* get_type();
	};

	class MSHTMLDocumentViewExtensions{
	public:
		CSSStyleSheet* createStyleSheet();
		CSSStyleSheet* createStyleSheet(const String& href);
		CSSStyleSheet* createStyleSheet(const String& href, double index);
		Boolean get_msCSSOMElementFloatMetrics();
		NodeList* msElementsFromPoint(double x, double y);
		NodeList* msElementsFromRect(double left, double top, double width, double height);
		MSHTMLDocumentViewExtensions();
	};

	class SVGAnimatedNumber{
	public:
		double get_animVal();
		double get_baseVal();
		SVGAnimatedNumber();
	};

	class PerformanceTiming{
	public:
		double get_redirectStart();
		double get_domainLookupEnd();
		double get_responseStart();
		double get_domComplete();
		double get_domainLookupStart();
		double get_loadEventStart();
		double get_msFirstPaint();
		double get_unloadEventEnd();
		double get_fetchStart();
		double get_requestStart();
		double get_domInteractive();
		double get_navigationStart();
		double get_connectEnd();
		double get_loadEventEnd();
		double get_connectStart();
		double get_responseEnd();
		double get_domLoading();
		double get_redirectEnd();
		double get_unloadEventStart();
		double get_domContentLoadedEventStart();
		double get_domContentLoadedEventEnd();
		Object* toJSON();
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
		double get_DISPATCH_REQUEST_ERR();
		double get_UNSPECIFIED_EVENT_TYPE_ERR();
		EventException();
		void set_name(const String& value);
		String* get_name();
	};

	class MSBorderColorHighlightStyle_HTMLTableCellElement{
	public:
		Object* get_borderColorLight();
		Object* get_borderColorDark();
	};

	class DOMHTMLImplementation{
	public:
		Document* createHTMLDocument(const String& title);
	};

	class NavigatorOnLine{
	public:
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
		Storage* get_localStorage();
	};

	class SVGStringList{
	public:
		double get_numberOfItems();
		String* replaceItem(const String& newItem, double index);
		String* getItem(double index);
		void clear();
		String* appendItem(const String& newItem);
		String* initialize(const String& newItem);
		String* removeItem(double index);
		String* insertItemBefore(const String& newItem, double index);
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
		String* get_responseText();
		String* get_contentType();
		void open(const String& method, const String& url);
		void abort();
		void send();
		void send(Object* data);
		XDomainRequest();
	};

	class DOML2DeprecatedBackgroundColorStyle{
	public:
		Object* get_bgColor();
	};

	class ElementTraversal{
	public:
		double get_childElementCount();
		Element* get_previousElementSibling();
		Element* get_lastElementChild();
		Element* get_nextElementSibling();
		Element* get_firstElementChild();
	};

	class SVGLength{
	public:
		String* get_valueAsString();
		double get_valueInSpecifiedUnits();
		void set_value(double value);
		double get_value();
		double get_unitType();
		void newValueSpecifiedUnits(double unitType, double valueInSpecifiedUnits);
		void convertToSpecifiedUnits(double unitType);
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
		SVGLength();
	};

	class MSHTMLAreaElementExtensions{
	public:
	};

	class MSEventObj{
	public:
		String* get_nextPage();
		double get_keyCode();
		Element* get_toElement();
		Object* get_returnValue();
		String* get_dataFld();
		void set_y(double value);
		double get_y();
		DataTransfer* get_dataTransfer();
		String* get_propertyName();
		void set_url(const String& value);
		String* get_url();
		double get_offsetX();
		void set_recordset(Object* value);
		Object* get_recordset();
		double get_screenX();
		double get_buttonID();
		double get_wheelDelta();
		void set_reason(double value);
		double get_reason();
		void set_origin(const String& value);
		String* get_origin();
		void set_data(const String& value);
		String* get_data();
		Object* get_srcFilter();
		HTMLCollection* get_boundElements();
		Boolean get_cancelBubble();
		Boolean get_altLeft();
		double get_behaviorCookie();
		void set_bookmarks(BookmarkCollection* value);
		BookmarkCollection* get_bookmarks();
		void set_type(const String& value);
		String* get_type();
		void set_repeat(Boolean value);
		Boolean get_repeat();
		Element* get_srcElement();
		void set_source(Window* value);
		Window* get_source();
		Element* get_fromElement();
		double get_offsetY();
		void set_x(double value);
		double get_x();
		double get_behaviorPart();
		void set_qualifier(const String& value);
		String* get_qualifier();
		Boolean get_altKey();
		Boolean get_ctrlKey();
		double get_clientY();
		Boolean get_shiftKey();
		Boolean get_shiftLeft();
		Boolean get_contentOverflow();
		double get_screenY();
		Boolean get_ctrlLeft();
		void set_button(double value);
		double get_button();
		String* get_srcUrn();
		double get_clientX();
		String* get_actionURL();
		Object* getAttribute(const String& strAttributeName);
		Object* getAttribute(const String& strAttributeName, double lFlags);
		void setAttribute(const String& strAttributeName, Object* AttributeValue);
		void setAttribute(const String& strAttributeName, Object* AttributeValue, double lFlags);
		Boolean removeAttribute(const String& strAttributeName);
		Boolean removeAttribute(const String& strAttributeName, double lFlags);
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
		Location();
	};

	class MSHTMLOptGroupElementExtensions{
	public:
		void set_index(double value);
		double get_index();
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
		Object* get_borderColorLight();
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
		double get_SVG_TRANSFORM_SKEWX();
		double get_SVG_TRANSFORM_UNKNOWN();
		double get_SVG_TRANSFORM_SCALE();
		double get_SVG_TRANSFORM_TRANSLATE();
		double get_SVG_TRANSFORM_MATRIX();
		double get_SVG_TRANSFORM_ROTATE();
		double get_SVG_TRANSFORM_SKEWY();
		SVGTransform();
	};

	class MSCSSFilter{
	public:
		double get_Percent();
		Boolean get_Enabled();
		double get_Duration();
		void Play(double Duration);
		void Apply();
		void Stop();
		MSCSSFilter();
	};

	class ViewCSS_SVGSVGElement{
	public:
		CSSStyleDeclaration* getComputedStyle(Element* elt);
		CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
	};

	class SVGURIReference{
	public:
		void set_href(SVGAnimatedString* value);
		SVGAnimatedString* get_href();
	};

	class SVGPathSeg{
	public:
		double get_pathSegType();
		String* get_pathSegTypeAsLetter();
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

	class SVGNumber{
	public:
		void set_value(double value);
		double get_value();
		SVGNumber();
	};

	class MSCompatibleInfo{
	public:
		void set_version(const String& value);
		String* get_version();
		String* get_userAgent();
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
		SVGRect* get_animVal();
		SVGRect* get_baseVal();
		SVGAnimatedRect();
	};

	class SVGPathSegList{
	public:
		double get_numberOfItems();
		SVGPathSeg* replaceItem(SVGPathSeg* newItem, double index);
		SVGPathSeg* getItem(double index);
		void clear();
		SVGPathSeg* appendItem(SVGPathSeg* newItem);
		SVGPathSeg* initialize(SVGPathSeg* newItem);
		SVGPathSeg* removeItem(double index);
		SVGPathSeg* insertItemBefore(SVGPathSeg* newItem, double index);
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
		Object* get_borderColorLight();
		Object* get_borderColorDark();
	};

	class PositionError{
	public:
		void set_code(double value);
		double get_code();
		void set_message(const String& value);
		String* get_message();
		String* toString();
		double get_POSITION_UNAVAILABLE();
		double get_PERMISSION_DENIED();
		double get_TIMEOUT();
	};

	class BrowserPublic{
	public:
		BrowserPublic();
	};

	class MSnsInfoCollection{
	public:
		Object* operator[](const String& index);
		Object* operator()(Object* index);
		void set_length(double value);
		double get_length();
		Object* add();
		Object* add(const String& ns);
		Object* add(const String& ns, const String& urn);
		Object* add(const String& ns, const String& urn, Object* implementationUrl);
		Object* item(Object* index);
		MSnsInfoCollection();
	};

	class SVGElementInstance: public EventTarget {
	public:
		SVGElementInstance* get_previousSibling();
		SVGElementInstance* get_parentNode();
		SVGElementInstance* get_lastChild();
		SVGElementInstance* get_nextSibling();
		SVGElementInstanceList* get_childNodes();
		SVGUseElement* get_correspondingUseElement();
		SVGElement* get_correspondingElement();
		SVGElementInstance* get_firstChild();
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
		Geolocation();
	};

	class MSWindowModeless{
	public:
		Object* get_dialogTop();
		Object* get_dialogLeft();
		Object* get_dialogWidth();
		Object* get_dialogHeight();
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
		double get_keyCode();
		void set_which(double value);
		double get_which();
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
		History();
		void set_state(Object* value);
		Object* get_state();
		void replaceState(Object* statedata, const String& title);
		void replaceState(Object* statedata, const String& title, const String& url);
		void pushState(Object* statedata, const String& title);
		void pushState(Object* statedata, const String& title, const String& url);
	};

	class DocumentStyle{
	public:
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
		SVGPathSegCurvetoCubicAbs();
	};

	class TimeRanges{
	public:
		void set_length(double value);
		double get_length();
		double start(double index);
		double end(double index);
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
		SVGPathSegCurvetoQuadraticAbs();
	};

	class MSHTMLSelectElementExtensions{
	public:
	};

	class CSSRule{
	public:
		double get_KEYFRAMES_RULE();
		double get_KEYFRAME_RULE();
		double get_VIEWPORT_RULE();
		String* get_cssText();
		CSSStyleSheet* get_parentStyleSheet();
		CSSRule* get_parentRule();
		void set_type(double value);
		double get_type();
		double get_IMPORT_RULE();
		double get_MEDIA_RULE();
		double get_STYLE_RULE();
		double get_NAMESPACE_RULE();
		double get_PAGE_RULE();
		double get_UNKNOWN_RULE();
		double get_FONT_FACE_RULE();
		double get_CHARSET_RULE();
		CSSRule();
	};

	class SVGPathSegLinetoAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		SVGPathSegLinetoAbs();
	};

	class MSMouseEventExtensions{
	public:
		Element* get_toElement();
		double get_layerY();
		Element* get_fromElement();
		void set_which(double value);
		double get_which();
		double get_layerX();
	};

	class DOML2DeprecatedWordWrapSuppression{
	public:
		Boolean get_noWrap();
	};

	class MSPopupWindow{
	public:
		void set_document(HTMLDocument* value);
		HTMLDocument* get_document();
		Boolean get_isOpen();
		void show(double x, double y, double w, double h);
		void show(double x, double y, double w, double h, Object* element);
		void hide();
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
		ImageData();
	};

	class MSHTMLElementExtensions{
	public:
		typedef Object* (*callback_for_onmscontentzoom)(Object* ev);
		void set_onmscontentzoom(callback_for_onmscontentzoom value);
		callback_for_onmscontentzoom get_onmscontentzoom();
		typedef Object* (*callback_for_onmsmanipulationstatechanged)(Object* ev);
		void set_onmsmanipulationstatechanged(callback_for_onmsmanipulationstatechanged value);
		callback_for_onmsmanipulationstatechanged get_onmsmanipulationstatechanged();
		MSHTMLElementExtensions();
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
		String* get_uniqueID();
		typedef Object* (*callback_for_onhelp)(Event* ev);
		void set_onhelp(callback_for_onhelp value);
		callback_for_onhelp get_onhelp();
		typedef Object* (*callback_for_onbeforeactivate)(UIEvent* ev);
		void set_onbeforeactivate(callback_for_onbeforeactivate value);
		callback_for_onbeforeactivate get_onbeforeactivate();
		Boolean get_isMultiLine();
		double get_uniqueNumber();
		String* get_tagUrn();
		typedef Object* (*callback_for_onfocusout)(FocusEvent* ev);
		void set_onfocusout(callback_for_onfocusout value);
		callback_for_onfocusout get_onfocusout();
		typedef Object* (*callback_for_ondataavailable)(MSEventObj* ev);
		void set_ondataavailable(callback_for_ondataavailable value);
		callback_for_ondataavailable get_ondataavailable();
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
		Object* get_recordNumber();
		Element* get_parentTextEdit();
		typedef Object* (*callback_for_ondatasetcomplete)(MSEventObj* ev);
		void set_ondatasetcomplete(callback_for_ondatasetcomplete value);
		callback_for_ondatasetcomplete get_ondatasetcomplete();
		typedef Object* (*callback_for_onbeforedeactivate)(UIEvent* ev);
		void set_onbeforedeactivate(callback_for_onbeforedeactivate value);
		callback_for_onbeforedeactivate get_onbeforedeactivate();
		String* get_outerText();
		typedef Object* (*callback_for_onresizestart)(MSEventObj* ev);
		void set_onresizestart(callback_for_onresizestart value);
		callback_for_onresizestart get_onresizestart();
		typedef Object* (*callback_for_onactivate)(UIEvent* ev);
		void set_onactivate(callback_for_onactivate value);
		callback_for_onactivate get_onactivate();
		Boolean get_isTextEdit();
		Boolean get_isDisabled();
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
		Boolean get_canHaveHTML();
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
		HTMLElement* get_parentElement();
		typedef Object* (*callback_for_onrowenter)(MSEventObj* ev);
		void set_onrowenter(callback_for_onrowenter value);
		callback_for_onrowenter get_onrowenter();
		typedef Object* (*callback_for_onbeforeeditfocus)(MSEventObj* ev);
		void set_onbeforeeditfocus(callback_for_onbeforeeditfocus value);
		callback_for_onbeforeeditfocus get_onbeforeeditfocus();
		Boolean get_canHaveChildren();
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
		void set_name(const String& value);
		String* get_name();
		void set_code(double value);
		double get_code();
		void set_message(const String& value);
		String* get_message();
		String* toString();
		double get_SVG_MATRIX_NOT_INVERTABLE();
		double get_SVG_WRONG_TYPE_ERR();
		double get_SVG_INVALID_VALUE_ERR();
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
		String* get_vAlign();
		String* get_chOff();
	};

	class SVGAnimatedEnumeration{
	public:
		double get_animVal();
		double get_baseVal();
		SVGAnimatedEnumeration();
	};

	class DOML2DeprecatedSizeProperty{
	public:
		void set_size(double value);
		double get_size();
	};

	class MSBorderColorStyle_HTMLTableCellElement{
	public:
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
		String* get_msDoNotTrack();
	};

	class SVG1_1Properties{
	public:
		String* get_floodOpacity();
		String* get_floodColor();
		void set_filter(const String& value);
		String* get_filter();
		String* get_lightingColor();
		String* get_enableBackground();
		String* get_colorInterpolationFilters();
		SVG1_1Properties();
		String* get_fillRule();
		String* get_strokeLinecap();
		String* get_stopColor();
		String* get_glyphOrientationHorizontal();
		void set_kerning(const String& value);
		String* get_kerning();
		String* get_alignmentBaseline();
		String* get_dominantBaseline();
		void set_fill(const String& value);
		String* get_fill();
		String* get_strokeMiterlimit();
		void set_marker(const String& value);
		String* get_marker();
		String* get_glyphOrientationVertical();
		String* get_markerMid();
		String* get_textAnchor();
		String* get_fillOpacity();
		String* get_strokeDasharray();
		void set_mask(const String& value);
		String* get_mask();
		String* get_stopOpacity();
		void set_stroke(const String& value);
		String* get_stroke();
		String* get_strokeDashoffset();
		String* get_strokeOpacity();
		String* get_markerStart();
		String* get_pointerEvents();
		String* get_baselineShift();
		String* get_markerEnd();
		String* get_clipRule();
		String* get_strokeLinejoin();
		String* get_clipPath();
		String* get_strokeWidth();
	};

	class NamedNodeMap{
	public:
		Node* operator[](double index);
		Node* operator[](const String& name);
		void set_length(double value);
		double get_length();
		Node* removeNamedItemNS(const String& nsURI, const String& localName);
		Node* item(double index);
		Node* removeNamedItem(const String& name);
		Node* getNamedItem(const String& name);
		Node* setNamedItem(Node* arg);
		Node* getNamedItemNS(const String& nsURI, const String& localName);
		Node* setNamedItemNS(Node* arg);
		NamedNodeMap();
	};

	class MediaList{
	public:
		String* operator[](double index);
		void set_length(double value);
		double get_length();
		String* get_mediaText();
		void deleteMedium(const String& oldMedium);
		void appendMedium(const String& newMedium);
		String* item(double index);
		String* toString();
		MediaList();
	};

	class SVGPathSegCurvetoQuadraticSmoothAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		SVGPathSegCurvetoQuadraticSmoothAbs();
	};

	class SVGLengthList{
	public:
		double get_numberOfItems();
		SVGLength* replaceItem(SVGLength* newItem, double index);
		SVGLength* getItem(double index);
		void clear();
		SVGLength* appendItem(SVGLength* newItem);
		SVGLength* initialize(SVGLength* newItem);
		SVGLength* removeItem(double index);
		SVGLength* insertItemBefore(SVGLength* newItem, double index);
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
		SVGPathSegCurvetoCubicSmoothRel();
	};

	class MSBehaviorUrnsCollection{
	public:
		void set_length(double value);
		double get_length();
		String* item(double index);
		MSBehaviorUrnsCollection();
	};

	class CSSFontFaceRule: public CSSRule {
	public:
		void set_style(CSSStyleDeclaration* value);
		CSSStyleDeclaration* get_style();
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
		SVGPathSegList* get_pathSegList();
	};

	class Position{
	public:
		void set_timestamp(Date* value);
		Date* get_timestamp();
		void set_coords(Coordinates* value);
		Coordinates* get_coords();
		Position();
	};

	class BookmarkCollection{
	public:
		Object* operator[](double index);
		void set_length(double value);
		double get_length();
		Object* item(double index);
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
		Boolean get_noShade();
	};

	class NodeFilterCallback{
	public:
		template<typename... Args> 
		Object* operator()(const Args&... args /*{{ARRAY_BASE_TYPE=Object*}}*/);
	};

	class SVGZoomAndPan{
	public:
		double get_zoomAndPan();
		double get_SVG_ZOOMANDPAN_MAGNIFY();
		double get_SVG_ZOOMANDPAN_UNKNOWN();
		double get_SVG_ZOOMANDPAN_DISABLE();
		SVGZoomAndPan();
	};

	class MSEventExtensions{
	public:
		Boolean get_cancelBubble();
		Element* get_srcElement();
	};

	class ElementCSSInlineStyle: public MSElementCSSInlineStyleExtensions {
	public:
		MSStyleCSSProperties* get_runtimeStyle();
		MSCurrentStyleCSSProperties* get_currentStyle();
	};

	class DOMParser{
	public:
		Document* parseFromString(const String& source, const String& mimeType);
		DOMParser();
	};

	class MSMimeTypesCollection{
	public:
		void set_length(double value);
		double get_length();
		MSMimeTypesCollection();
	};

	class StyleSheet{
	public:
		void set_disabled(Boolean value);
		Boolean get_disabled();
		Node* get_ownerNode();
		StyleSheet* get_parentStyleSheet();
		void set_href(const String& value);
		String* get_href();
		void set_media(MediaList* value);
		MediaList* get_media();
		void set_type(const String& value);
		String* get_type();
		void set_title(const String& value);
		String* get_title();
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
		NodeList();
	};

	class XMLSerializer{
	public:
		String* serializeToString(Node* target);
		XMLSerializer();
	};

	class StyleSheetPage{
	public:
		String* get_pseudoClass();
		void set_selector(const String& value);
		String* get_selector();
	};

	class DOML2DeprecatedWordWrapSuppression_HTMLDDElement{
	public:
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
		NodeFilter();
	};

	class MSBorderColorStyle_HTMLFrameElement{
	public:
		Object* get_borderColor();
	};

	class MSHTMLOListElementExtensions{
	public:
	};

	class DOML2DeprecatedWordWrapSuppression_HTMLDTElement{
	public:
		Boolean get_noWrap();
	};

	class ScreenView: public AbstractView {
	public:
		double get_outerWidth();
		double get_pageXOffset();
		double get_innerWidth();
		double get_pageYOffset();
		double get_screenY();
		double get_outerHeight();
		void set_screen(Screen* value);
		Screen* get_screen();
		double get_innerHeight();
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
		double get_MEDIA_ERR_ABORTED();
		double get_MEDIA_ERR_NETWORK();
		double get_MEDIA_ERR_SRC_NOT_SUPPORTED();
		double get_MEDIA_ERR_DECODE();
		MediaError();
	};

	class SVGNumberList{
	public:
		double get_numberOfItems();
		SVGNumber* replaceItem(SVGNumber* newItem, double index);
		SVGNumber* getItem(double index);
		void clear();
		SVGNumber* appendItem(SVGNumber* newItem);
		SVGNumber* initialize(SVGNumber* newItem);
		SVGNumber* removeItem(double index);
		SVGNumber* insertItemBefore(SVGNumber* newItem, double index);
		SVGNumberList();
	};

	class CanvasPattern{
	public:
		CanvasPattern();
	};

	class MSHTMLFrameSetElementExtensions{
	public:
		void set_name(const String& value);
		String* get_name();
		String* get_frameBorder();
		void set_border(const String& value);
		String* get_border();
		Object* get_frameSpacing();
	};

	class DOML2DeprecatedTextFlowControl_HTMLBlockElement{
	public:
		void set_clear(const String& value);
		String* get_clear();
	};

	class PositionOptions{
	public:
		Boolean get_enableHighAccuracy();
		void set_timeout(double value);
		double get_timeout();
		double get_maximumAge();
	};

	class MSHTMLMenuElementExtensions{
	public:
	};

	class DocumentView{
	public:
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
		DOMException();
		void set_name(const String& value);
		String* get_name();
		double get_INVALID_NODE_TYPE_ERR();
		double get_DATA_CLONE_ERR();
		double get_TIMEOUT_ERR();
	};

	class MSCompatibleInfoCollection{
	public:
		void set_length(double value);
		double get_length();
		MSCompatibleInfo* item(double index);
		MSCompatibleInfoCollection();
	};

	class MSHTMLIsIndexElementExtensions{
	public:
		void set_action(const String& value);
		String* get_action();
	};

	class SVGAnimatedBoolean{
	public:
		Boolean get_animVal();
		Boolean get_baseVal();
		SVGAnimatedBoolean();
	};

	class MSHTMLIFrameElementExtensions: public DOML2DeprecatedMarginStyle_MSHTMLIFrameElementExtensions , public DOML2DeprecatedBorderStyle_MSHTMLIFrameElementExtensions {
	public:
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		Object* get_frameSpacing();
		Boolean get_noResize();
	};

	class SVGPreserveAspectRatio{
	public:
		void set_align(double value);
		double get_align();
		double get_meetOrSlice();
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
		SVGPreserveAspectRatio();
	};

	class MSBorderColorStyle_HTMLTableRowElement{
	public:
		Object* get_borderColor();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableCaptionElement{
	public:
		void set_align(const String& value);
		String* get_align();
	};

	class PerformanceNavigation{
	public:
		double get_redirectCount();
		void set_type(double value);
		double get_type();
		Object* toJSON();
		double get_TYPE_RELOAD();
		double get_TYPE_RESERVED();
		double get_TYPE_BACK_FORWARD();
		double get_TYPE_NAVIGATE();
		PerformanceNavigation();
	};

	class HTMLBodyElementDOML2Deprecated{
	public:
		void set_link(Object* value);
		Object* get_link();
		Object* get_aLink();
		void set_text(Object* value);
		Object* get_text();
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
		Object* get_responseBody();
		void set_timeout(double value);
		double get_timeout();
		typedef Object* (*callback_for_ontimeout)(Event* ev);
		void set_ontimeout(callback_for_ontimeout value);
		callback_for_ontimeout get_ontimeout();
		void set_response(Object* value);
		Object* get_response();
		typedef Object* (*callback_for_onprogress)(ProgressEvent* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_onabort)(Object* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		String* get_responseType();
		typedef Object* (*callback_for_onloadend)(ProgressEvent* ev);
		void set_onloadend(callback_for_onloadend value);
		callback_for_onloadend get_onloadend();
		void set_upload(XMLHttpRequestEventTarget* value);
		XMLHttpRequestEventTarget* get_upload();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onloadstart)(Object* ev);
		void set_onloadstart(callback_for_onloadstart value);
		callback_for_onloadstart get_onloadstart();
		MSXMLHttpRequestExtensions();
	};

	class ClientRectList{
	public:
		ClientRect* operator[](double index);
		void set_length(double value);
		double get_length();
		ClientRect* item(double index);
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
		String* get_validationMessage();
		void set_files(FileList* value);
		FileList* get_files();
		void set_max(const String& value);
		String* get_max();
		String* get_formTarget();
		Boolean get_willValidate();
		void set_step(const String& value);
		String* get_step();
		void set_autofocus(Boolean value);
		Boolean get_autofocus();
		void set_required(Boolean value);
		Boolean get_required();
		String* get_formEnctype();
		double get_valueAsNumber();
		void set_placeholder(const String& value);
		String* get_placeholder();
		String* get_formMethod();
		void set_list(HTMLElement* value);
		HTMLElement* get_list();
		void set_autocomplete(const String& value);
		String* get_autocomplete();
		void set_min(const String& value);
		String* get_min();
		String* get_formAction();
		void set_pattern(const String& value);
		String* get_pattern();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
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

	class MSElementExtensions{
	public:
		Boolean msMatchesSelector(const String& selectors);
		Boolean fireEvent(const String& eventName);
		Boolean fireEvent(const String& eventName, Object* eventObj);
		String* get_msRegionOverflow();
		typedef Object* (*callback_for_onmspointerdown)(Object* ev);
		void set_onmspointerdown(callback_for_onmspointerdown value);
		callback_for_onmspointerdown get_onmspointerdown();
		typedef Object* (*callback_for_onmsgotpointercapture)(Object* ev);
		void set_onmsgotpointercapture(callback_for_onmsgotpointercapture value);
		callback_for_onmsgotpointercapture get_onmsgotpointercapture();
		typedef Object* (*callback_for_onmsgesturedoubletap)(Object* ev);
		void set_onmsgesturedoubletap(callback_for_onmsgesturedoubletap value);
		callback_for_onmsgesturedoubletap get_onmsgesturedoubletap();
		typedef Object* (*callback_for_onmspointerhover)(Object* ev);
		void set_onmspointerhover(callback_for_onmspointerhover value);
		callback_for_onmspointerhover get_onmspointerhover();
		typedef Object* (*callback_for_onmsgesturehold)(Object* ev);
		void set_onmsgesturehold(callback_for_onmsgesturehold value);
		callback_for_onmsgesturehold get_onmsgesturehold();
		typedef Object* (*callback_for_onmspointermove)(Object* ev);
		void set_onmspointermove(callback_for_onmspointermove value);
		callback_for_onmspointermove get_onmspointermove();
		typedef Object* (*callback_for_onmsgesturechange)(Object* ev);
		void set_onmsgesturechange(callback_for_onmsgesturechange value);
		callback_for_onmsgesturechange get_onmsgesturechange();
		typedef Object* (*callback_for_onmsgesturestart)(Object* ev);
		void set_onmsgesturestart(callback_for_onmsgesturestart value);
		callback_for_onmsgesturestart get_onmsgesturestart();
		typedef Object* (*callback_for_onmspointercancel)(Object* ev);
		void set_onmspointercancel(callback_for_onmspointercancel value);
		callback_for_onmspointercancel get_onmspointercancel();
		typedef Object* (*callback_for_onmsgestureend)(Object* ev);
		void set_onmsgestureend(callback_for_onmsgestureend value);
		callback_for_onmsgestureend get_onmsgestureend();
		typedef Object* (*callback_for_onmsgesturetap)(Object* ev);
		void set_onmsgesturetap(callback_for_onmsgesturetap value);
		callback_for_onmsgesturetap get_onmsgesturetap();
		typedef Object* (*callback_for_onmspointerout)(Object* ev);
		void set_onmspointerout(callback_for_onmspointerout value);
		callback_for_onmspointerout get_onmspointerout();
		typedef Object* (*callback_for_onmsinertiastart)(Object* ev);
		void set_onmsinertiastart(callback_for_onmsinertiastart value);
		callback_for_onmsinertiastart get_onmsinertiastart();
		typedef Object* (*callback_for_onmslostpointercapture)(Object* ev);
		void set_onmslostpointercapture(callback_for_onmslostpointercapture value);
		callback_for_onmslostpointercapture get_onmslostpointercapture();
		typedef Object* (*callback_for_onmspointerover)(Object* ev);
		void set_onmspointerover(callback_for_onmspointerover value);
		callback_for_onmspointerover get_onmspointerover();
		double get_msContentZoomFactor();
		typedef Object* (*callback_for_onmspointerup)(Object* ev);
		void set_onmspointerup(callback_for_onmspointerup value);
		callback_for_onmspointerup get_onmspointerup();
		MSRangeCollection* msGetRegionContent();
		void msReleasePointerCapture(double pointerId);
		void msSetPointerCapture(double pointerId);
		MSElementExtensions();
	};

	class MSCSSScrollTranslationProperties{
	public:
		String* get_msScrollTranslation();
	};

	class MSGesture{
	public:
		void set_target(Element* value);
		Element* get_target();
		void addPointer(double pointerId);
		void stop();
		MSGesture();
	};

	class TextTrackCue: public EventTarget {
	public:
		typedef Object* (*callback_for_onenter)(Event* ev);
		void set_onenter(callback_for_onenter value);
		callback_for_onenter get_onenter();
		void set_track(TextTrack* value);
		TextTrack* get_track();
		double get_endTime();
		void set_text(const String& value);
		String* get_text();
		Boolean get_pauseOnExit();
		void set_id(const String& value);
		String* get_id();
		double get_startTime();
		typedef Object* (*callback_for_onexit)(Event* ev);
		void set_onexit(callback_for_onexit value);
		callback_for_onexit get_onexit();
		DocumentFragment* getCueAsHTML();
		TextTrackCue();
	};

	class CSSFlexibleBoxProperties{
	public:
		String* get_msFlex();
		String* get_msFlexDirection();
		String* get_msFlexNegative();
		String* get_msFlexPack();
		String* get_msFlexWrap();
		String* get_msFlexItemAlign();
		String* get_msFlexOrder();
		String* get_msFlexPositive();
		String* get_msFlexAlign();
		String* get_msFlexFlow();
		String* get_msFlexPreferredSize();
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
		DOMTokenList();
	};

	class MessageChannel{
	public:
		void set_port2(MessagePort* value);
		MessagePort* get_port2();
		void set_port1(MessagePort* value);
		MessagePort* get_port1();
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
		MediaQueryList();
	};

	class DOMError{
	public:
		void set_name(const String& value);
		String* get_name();
		String* toString();
		DOMError();
	};

	class CSSFontsProperties{
	public:
		String* get_msFontFeatureSettings();
		String* get_fontFeatureSettings();
	};

	class WebSocket: public EventTarget {
	public:
		void set_protocol(const String& value);
		String* get_protocol();
		double get_readyState();
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
		String* get_binaryType();
		void set_url(const String& value);
		String* get_url();
		void close();
		void close(double code);
		void close(double code, const String& reason);
		void send(Object* data);
		double get_OPEN();
		double get_CLOSING();
		double get_CONNECTING();
		double get_CLOSED();
		WebSocket(const String& url);
		WebSocket(const String& url, const String& prototcol);
		WebSocket(const String& url, Array* /*{ARRAY_BASE_TYPE=String*}*/ prototcol);
	};

	class IDBObjectStore{
	public:
		DOMStringList* get_indexNames();
		void set_name(const String& value);
		String* get_name();
		void set_transaction(IDBTransaction* value);
		IDBTransaction* get_transaction();
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
		IDBObjectStore();
	};

	class ObjectURLOptions{
	public:
		Boolean get_oneTimeOnly();
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
		void set_nss(MSnsInfoCollection* value);
		MSnsInfoCollection* get_nss();
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
		MSScriptHost* get_Script();
		typedef Object* (*callback_for_oncellchange)(MSEventObj* ev);
		void set_oncellchange(callback_for_oncellchange value);
		callback_for_oncellchange get_oncellchange();
		String* get_URLUnencoded();
		void updateSettings();
		Boolean execCommandShowHelp(const String& commandId);
		void releaseCapture();
		void focus();
		typedef Object* (*callback_for_onmspointerdown)(Object* ev);
		void set_onmspointerdown(callback_for_onmspointerdown value);
		callback_for_onmspointerdown get_onmspointerdown();
		typedef Object* (*callback_for_onmspointercancel)(Object* ev);
		void set_onmspointercancel(callback_for_onmspointercancel value);
		callback_for_onmspointercancel get_onmspointercancel();
		typedef Object* (*callback_for_onmsgesturedoubletap)(Object* ev);
		void set_onmsgesturedoubletap(callback_for_onmsgesturedoubletap value);
		callback_for_onmsgesturedoubletap get_onmsgesturedoubletap();
		typedef Object* (*callback_for_onmsgesturetap)(Object* ev);
		void set_onmsgesturetap(callback_for_onmsgesturetap value);
		callback_for_onmsgesturetap get_onmsgesturetap();
		typedef Object* (*callback_for_onmsgestureend)(Object* ev);
		void set_onmsgestureend(callback_for_onmsgestureend value);
		callback_for_onmsgestureend get_onmsgestureend();
		typedef Object* (*callback_for_onmspointerout)(Object* ev);
		void set_onmspointerout(callback_for_onmspointerout value);
		callback_for_onmspointerout get_onmspointerout();
		typedef Object* (*callback_for_onmsmanipulationstatechanged)(Object* ev);
		void set_onmsmanipulationstatechanged(callback_for_onmsmanipulationstatechanged value);
		callback_for_onmsmanipulationstatechanged get_onmsmanipulationstatechanged();
		typedef Object* (*callback_for_onmsinertiastart)(Object* ev);
		void set_onmsinertiastart(callback_for_onmsinertiastart value);
		callback_for_onmsinertiastart get_onmsinertiastart();
		typedef Object* (*callback_for_onmspointerhover)(Object* ev);
		void set_onmspointerhover(callback_for_onmspointerhover value);
		callback_for_onmspointerhover get_onmspointerhover();
		typedef Object* (*callback_for_onmscontentzoom)(Object* ev);
		void set_onmscontentzoom(callback_for_onmscontentzoom value);
		callback_for_onmscontentzoom get_onmscontentzoom();
		typedef Object* (*callback_for_onmsgesturehold)(Object* ev);
		void set_onmsgesturehold(callback_for_onmsgesturehold value);
		callback_for_onmsgesturehold get_onmsgesturehold();
		typedef Object* (*callback_for_onmspointermove)(Object* ev);
		void set_onmspointermove(callback_for_onmspointermove value);
		callback_for_onmspointermove get_onmspointermove();
		typedef Object* (*callback_for_onmspointerover)(Object* ev);
		void set_onmspointerover(callback_for_onmspointerover value);
		callback_for_onmspointerover get_onmspointerover();
		typedef Object* (*callback_for_onmsgesturechange)(Object* ev);
		void set_onmsgesturechange(callback_for_onmsgesturechange value);
		callback_for_onmsgesturechange get_onmsgesturechange();
		typedef Object* (*callback_for_onmsgesturestart)(Object* ev);
		void set_onmsgesturestart(callback_for_onmsgesturestart value);
		callback_for_onmsgesturestart get_onmsgesturestart();
		typedef Object* (*callback_for_onmspointerup)(Object* ev);
		void set_onmspointerup(callback_for_onmspointerup value);
		callback_for_onmspointerup get_onmspointerup();
		MSHTMLDocumentExtensions();
	};

	class MSCSSSelectionBoundaryProperties{
	public:
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
		void set_result(SVGAnimatedString* value);
		SVGAnimatedString* get_result();
	};

	class IDBIndex{
	public:
		void set_unique(Boolean value);
		Boolean get_unique();
		void set_name(const String& value);
		String* get_name();
		String* get_keyPath();
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
		IDBIndex();
	};

	class FileList{
	public:
		File* operator[](double index);
		void set_length(double value);
		double get_length();
		File* item(double index);
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
		Object* get_primaryKey();
		void advance(double count);
		IDBRequest* delet();
		void continu();
		void continu(Object* key);
		IDBRequest* update(Object* value);
		IDBCursor();
	};

	class CSSAnimationsProperties{
	public:
		String* get_animationFillMode();
		String* get_msAnimationDirection();
		String* get_msAnimationDelay();
		String* get_msAnimationFillMode();
		String* get_animationIterationCount();
		String* get_msAnimationPlayState();
		String* get_msAnimationIterationCount();
		String* get_animationDelay();
		String* get_animationTimingFunction();
		String* get_msAnimation();
		void set_animation(const String& value);
		String* get_animation();
		String* get_animationDirection();
		String* get_animationDuration();
		String* get_animationName();
		String* get_animationPlayState();
		String* get_msAnimationTimingFunction();
		String* get_msAnimationName();
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
		IDBCursorWithValue();
	};

	class HTMLTextAreaElement{
	public:
		String* get_validationMessage();
		void set_autofocus(Boolean value);
		Boolean get_autofocus();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_required(Boolean value);
		Boolean get_required();
		double get_maxLength();
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
		XMLHttpRequestEventTarget();
	};

	class IDBEnvironment{
	public:
		IDBFactory* get_msIndexedDB();
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
		AudioTrackList();
	};

	class MSBaseReader: public EventTarget {
	public:
		typedef Object* (*callback_for_onprogress)(ProgressEvent* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
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
		double get_LOADING();
		double get_EMPTY();
		double get_DONE();
	};

	class MSProtocol{
	public:
		void set_protocol(const String& value);
		String* get_protocol();
		MSProtocol();
	};

	class HTMLSelectElement{
	public:
		String* get_validationMessage();
		void set_autofocus(Boolean value);
		Boolean get_autofocus();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_required(Boolean value);
		Boolean get_required();
		Boolean get_willValidate();
		Boolean checkValidity();
		void setCustomValidity(const String& error);
	};

	class CSSTransitionsProperties{
	public:
		void set_transition(const String& value);
		String* get_transition();
		String* get_transitionDelay();
		String* get_transitionDuration();
		String* get_msTransitionTimingFunction();
		String* get_msTransition();
		String* get_msTransitionDuration();
		String* get_transitionTimingFunction();
		String* get_msTransitionDelay();
		String* get_transitionProperty();
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
		String* get_msContentZoomLimit();
		String* get_msContentZooming();
		String* get_msContentZoomSnapType();
		Object* get_msContentZoomLimitMax();
		String* get_msContentZoomSnapPoints();
		String* get_msContentZoomSnap();
		Object* get_msContentZoomLimitMin();
		String* get_msContentZoomChaining();
	};

	class MSRangeCollection{
	public:
		Range* operator[](double index);
		void set_length(double value);
		double get_length();
		Range* item(double index);
		MSRangeCollection();
	};

	class MSCSSPositionedFloatsProperties{
	public:
		Object* get_msWrapMargin();
		String* get_msWrapFlow();
	};

	class MSCSSRegionProperties{
	public:
		String* get_msFlowFrom();
		String* get_msFlowInto();
		String* get_msWrapThrough();
	};

	class IDBKeyRange{
	public:
		void set_upper(Object* value);
		Object* get_upper();
		Boolean get_upperOpen();
		void set_lower(Object* value);
		Object* get_lower();
		Boolean get_lowerOpen();
		IDBKeyRange* bound(Object* lower, Object* upper);
		IDBKeyRange* bound(Object* lower, Object* upper, Boolean lowerOpen);
		IDBKeyRange* bound(Object* lower, Object* upper, Boolean lowerOpen, Boolean upperOpen);
		IDBKeyRange* only(Object* value);
		IDBKeyRange* lowerBound(Object* bound);
		IDBKeyRange* lowerBound(Object* bound, Boolean open);
		IDBKeyRange* upperBound(Object* bound);
		IDBKeyRange* upperBound(Object* bound, Boolean open);
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
		IDBTransaction();
	};

	class MSWindowExtensions{
	public:
		void set_status(const String& value);
		String* get_status();
		typedef Object* (*callback_for_onmouseleave)(MouseEvent* ev);
		void set_onmouseleave(callback_for_onmouseleave value);
		callback_for_onmouseleave get_onmouseleave();
		double get_screenLeft();
		Object* get_offscreenBuffering();
		double get_maxConnectionsPerServer();
		typedef Object* (*callback_for_onmouseenter)(MouseEvent* ev);
		void set_onmouseenter(callback_for_onmouseenter value);
		callback_for_onmouseenter get_onmouseenter();
		DataTransfer* get_clipboardData();
		String* get_defaultStatus();
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
		double get_screenTop();
		typedef Object* (*callback_for_onfocusin)(FocusEvent* ev);
		void set_onfocusin(callback_for_onfocusin value);
		callback_for_onfocusin get_onfocusin();
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
		typedef Object* (*callback_for_onmspointerdown)(Object* ev);
		void set_onmspointerdown(callback_for_onmspointerdown value);
		callback_for_onmspointerdown get_onmspointerdown();
		typedef Object* (*callback_for_onmspointercancel)(Object* ev);
		void set_onmspointercancel(callback_for_onmspointercancel value);
		callback_for_onmspointercancel get_onmspointercancel();
		typedef Object* (*callback_for_onmsgesturedoubletap)(Object* ev);
		void set_onmsgesturedoubletap(callback_for_onmsgesturedoubletap value);
		callback_for_onmsgesturedoubletap get_onmsgesturedoubletap();
		typedef Object* (*callback_for_onmsgestureend)(Object* ev);
		void set_onmsgestureend(callback_for_onmsgestureend value);
		callback_for_onmsgestureend get_onmsgestureend();
		typedef Object* (*callback_for_onmsgesturetap)(Object* ev);
		void set_onmsgesturetap(callback_for_onmsgesturetap value);
		callback_for_onmsgesturetap get_onmsgesturetap();
		typedef Object* (*callback_for_onmspointerout)(Object* ev);
		void set_onmspointerout(callback_for_onmspointerout value);
		callback_for_onmspointerout get_onmspointerout();
		typedef Object* (*callback_for_onmspointerhover)(Object* ev);
		void set_onmspointerhover(callback_for_onmspointerhover value);
		callback_for_onmspointerhover get_onmspointerhover();
		typedef Object* (*callback_for_onmsinertiastart)(Object* ev);
		void set_onmsinertiastart(callback_for_onmsinertiastart value);
		callback_for_onmsinertiastart get_onmsinertiastart();
		typedef Object* (*callback_for_onmspointermove)(Object* ev);
		void set_onmspointermove(callback_for_onmspointermove value);
		callback_for_onmspointermove get_onmspointermove();
		typedef Object* (*callback_for_onmsgesturehold)(Object* ev);
		void set_onmsgesturehold(callback_for_onmsgesturehold value);
		callback_for_onmsgesturehold get_onmsgesturehold();
		typedef Object* (*callback_for_onmspointerover)(Object* ev);
		void set_onmspointerover(callback_for_onmspointerover value);
		callback_for_onmspointerover get_onmspointerover();
		typedef Object* (*callback_for_onmsgesturechange)(Object* ev);
		void set_onmsgesturechange(callback_for_onmsgesturechange value);
		callback_for_onmsgesturechange get_onmsgesturechange();
		typedef Object* (*callback_for_onmsgesturestart)(Object* ev);
		void set_onmsgesturestart(callback_for_onmsgesturestart value);
		callback_for_onmsgesturestart get_onmsgesturestart();
		typedef Object* (*callback_for_onmspointerup)(Object* ev);
		void set_onmspointerup(callback_for_onmspointerup value);
		callback_for_onmspointerup get_onmspointerup();
		Boolean msIsStaticHTML(const String& html);
		MSWindowExtensions();
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
		AudioTrack();
	};

	class TextTrackCueList{
	public:
		TextTrackCue* operator[](double index);
		void set_length(double value);
		double get_length();
		TextTrackCue* item(double index);
		TextTrackCue* getCueById(const String& id);
		TextTrackCueList();
	};

	class CSSKeyframesRule: public CSSRule {
	public:
		void set_name(const String& value);
		String* get_name();
		CSSRuleList* get_cssRules();
		CSSKeyframeRule* findRule(const String& rule);
		void deleteRule(const String& rule);
		void appendRule(const String& rule);
		CSSKeyframesRule();
	};

	class MSCSSTouchManipulationProperties{
	public:
		String* get_msScrollSnapPointsY();
		String* get_msOverflowStyle();
		Object* get_msScrollLimitXMax();
		String* get_msScrollSnapType();
		String* get_msScrollSnapPointsX();
		Object* get_msScrollLimitYMax();
		String* get_msScrollSnapY();
		Object* get_msScrollLimitXMin();
		Object* get_msScrollLimitYMin();
		String* get_msScrollChaining();
		String* get_msTouchAction();
		String* get_msScrollSnapX();
		String* get_msScrollLimit();
		String* get_msScrollRails();
		String* get_msTouchSelect();
	};

	class TextTrackList{
	public:
		TextTrack* operator[](double index);
		void set_length(double value);
		double get_length();
		TextTrack* item(double index);
		TextTrackList();
	};

	class WindowAnimationTiming{
	public:
		double get_animationStartTime();
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
		Console();
	};

	class DocumentVisibility{
	public:
		Boolean get_msHidden();
		String* get_msVisibilityState();
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
		IDBDatabase();
	};

	class MSProtocolsCollection{
	public:
		MSProtocolsCollection();
	};

	class DOMStringList{
	public:
		String* operator[](double index);
		void set_length(double value);
		double get_length();
		Boolean contains(const String& str);
		String* item(double index);
		DOMStringList();
	};

	class CSSMultiColumnProperties{
	public:
		String* get_breakAfter();
		String* get_columnSpan();
		String* get_columnRule();
		String* get_columnFill();
		String* get_columnRuleStyle();
		String* get_breakBefore();
		Object* get_columnCount();
		String* get_breakInside();
		Object* get_columnWidth();
		void set_columns(const String& value);
		String* get_columns();
		Object* get_columnRuleColor();
		Object* get_columnGap();
		Object* get_columnRuleWidth();
	};

	class HTMLButtonElement{
	public:
		String* get_validationMessage();
		String* get_formTarget();
		Boolean get_willValidate();
		String* get_formAction();
		void set_autofocus(Boolean value);
		Boolean get_autofocus();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		String* get_formNoValidate();
		String* get_formEnctype();
		String* get_formMethod();
		Boolean checkValidity();
		void setCustomValidity(const String& error);
	};

	class HTMLFormElement{
	public:
		void set_autocomplete(const String& value);
		String* get_autocomplete();
		Boolean get_noValidate();
		Boolean checkValidity();
	};

	class MSUnsafeFunctionCallback{
	public:
		Object* operator()();
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
		String* get_readyState();
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
		double get_ERROR();
		double get_SHOWING();
		double get_LOADING();
		double get_LOADED();
		double get_NONE();
		double get_HIDDEN();
		double get_DISABLED();
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
		String* get_readyState();
		void set_result(Object* value);
		Object* get_result();
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
		Blob* slice(double start, double end);
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
		double get_CHECKING();
		double get_UNCACHED();
		double get_UPDATEREADY();
		double get_DOWNLOADING();
		double get_IDLE();
		double get_OBSOLETE();
		ApplicationCache();
	};

	class MSHTMLVideoElementExtensions{
	public:
		Boolean get_msIsStereo3D();
		String* get_msStereo3DPackingMode();
		typedef Object* (*callback_for_onMSVideoOptimalLayoutChanged)(Object* ev);
		callback_for_onMSVideoOptimalLayoutChanged get_onMSVideoOptimalLayoutChanged();
		typedef Object* (*callback_for_onMSVideoFrameStepCompleted)(Object* ev);
		callback_for_onMSVideoFrameStepCompleted get_onMSVideoFrameStepCompleted();
		String* get_msStereo3DRenderMode();
		Boolean get_msIsLayoutOptimalForPlayback();
		Boolean get_msHorizontalMirror();
		typedef Object* (*callback_for_onMSVideoFormatChanged)(Object* ev);
		callback_for_onMSVideoFormatChanged get_onMSVideoFormatChanged();
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
		String* get_msBackfaceVisibility();
		String* get_perspectiveOrigin();
		String* get_transformStyle();
		String* get_backfaceVisibility();
		String* get_msPerspectiveOrigin();
		String* get_msTransformStyle();
		String* get_msPerspective();
	};

	class CSSKeyframeRule: public CSSRule {
	public:
		String* get_keyText();
		void set_style(CSSStyleDeclaration* value);
		CSSStyleDeclaration* get_style();
		CSSKeyframeRule();
	};

	class CSSGridProperties{
	public:
		String* get_msGridRows();
		Object* get_msGridColumnSpan();
		Object* get_msGridRow();
		Object* get_msGridRowSpan();
		String* get_msGridColumns();
		String* get_msGridColumnAlign();
		String* get_msGridRowAlign();
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
		MSStream();
	};

	class HTMLFieldSetElement{
	public:
		String* get_validationMessage();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
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
		DOMTokenList* get_classList();
		void set_draggable(Boolean value);
		Boolean get_draggable();
	};

	class DOMSettableTokenList: public DOMTokenList {
	public:
		void set_value(const String& value);
		String* get_value();
		DOMSettableTokenList();
	};

	class IDBFactory{
	public:
		IDBOpenDBRequest* open(const String& name);
		IDBOpenDBRequest* open(const String& name, double version);
		double cmp(Object* first, Object* second);
		IDBOpenDBRequest* deleteDatabase(const String& name);
		IDBFactory();
	};
/*classeRange duplicata*/

	class HTMLObjectElement{
	public:
		String* get_validationMessage();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		Boolean get_willValidate();
		Boolean checkValidity();
		void setCustomValidity(const String& error);
	};

	class CSSTextProperties{
	public:
		String* get_textShadow();
		Object* get_msHyphenateLimitLines();
		String* get_msHyphens();
		String* get_msHyphenateLimitChars();
		Object* get_msHyphenateLimitZone();
	};

	class CSS2DTransformsProperties{
	public:
		void set_transform(const String& value);
		String* get_transform();
		String* get_transformOrigin();
	};

	class MSCSSHighContrastProperties{
	public:
		String* get_msHighContrastAdjust();
	};

	class FormData{
	public:
		void append(Object* name, Object* value);
		void append(Object* name, Object* value, const String& blobName);
		FormData();
		FormData(HTMLFormElement* form);
	};

	class MSHTMLMediaElementExtensions{
	public:
		String* get_msAudioCategory();
		Boolean get_msRealTime();
		Boolean get_msPlayToPrimary();
		Boolean get_msPlayToDisabled();
		Object* get_msPlayToSource();
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
		Boolean get_customError();
		Boolean get_valueMissing();
		Boolean get_stepMismatch();
		Boolean get_rangeUnderflow();
		Boolean get_rangeOverflow();
		Boolean get_typeMismatch();
		Boolean get_patternMismatch();
		Boolean get_tooLong();
		void set_valid(Boolean value);
		Boolean get_valid();
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
		Worker(const String& stringUrl);
	};

	class HTMLIFrameElement{
	public:
		void set_sandbox(DOMSettableTokenList* value);
		DOMSettableTokenList* get_sandbox();
	};

	class MSMediaErrorExtensions{
	public:
		double get_msExtendedCode();
	};

	class MSNavigatorAbilities{
	public:
		MSProtocolsCollection* get_msProtocols();
		double get_msMaxTouchPoints();
		Boolean get_msPointerEnabled();
		Boolean get_msManipulationViewsEnabled();
		MSNavigatorAbilities();
		String* get_userLanguage();
		void set_plugins(MSPluginsCollection* value);
		MSPluginsCollection* get_plugins();
		Boolean get_cookieEnabled();
		String* get_appCodeName();
		String* get_cpuClass();
		String* get_appMinorVersion();
		double get_connectionSpeed();
		String* get_browserLanguage();
		MSMimeTypesCollection* get_mimeTypes();
		void set_product(const String& value);
		String* get_product();
		String* get_systemLanguage();
		Boolean javaEnabled();
		Boolean taintEnabled();
	};

	class HTMLTableElement: public HTMLElement , public DOML2DeprecatedBorderStyle_HTMLTableElement , public DOML2DeprecatedAlignmentStyle_HTMLTableElement , public MSBorderColorStyle , public MSDataBindingExtensions , public MSHTMLTableElementExtensions , public DOML2DeprecatedBackgroundStyle , public MSBorderColorHighlightStyle , public MSDataBindingTableExtensions , public DOML2DeprecatedBackgroundColorStyle {
	public:
		HTMLCollection* get_tBodies();
		void set_width(const String& value);
		String* get_width();
		HTMLTableSectionElement* get_tHead();
		String* get_cellSpacing();
		HTMLTableSectionElement* get_tFoot();
		void set_frame(const String& value);
		String* get_frame();
		void set_rows(HTMLCollection* value);
		HTMLCollection* get_rows();
		void set_rules(const String& value);
		String* get_rules();
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
		SVGPathSegCurvetoQuadraticRel();
	};

	class CSSStyleDeclaration: public CSS3Properties , public SVG1_1Properties , public CSS2Properties {
	public:
		String* operator[](double index);
		String* get_cssText();
		void set_length(double value);
		double get_length();
		CSSRule* get_parentRule();
		String* getPropertyPriority(const String& propertyName);
		String* getPropertyValue(const String& propertyName);
		String* removeProperty(const String& propertyName);
		String* item(double index);
		void setProperty(const String& propertyName, const String& value);
		void setProperty(const String& propertyName, const String& value, const String& priority);
		CSSStyleDeclaration();
	};

	class Navigator: public NavigatorID , public NavigatorOnLine , public NavigatorDoNotTrack , public NavigatorAbilities , public NavigatorGeolocation , public MSNavigatorAbilities {
	public:
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
		SVGPathSegCurvetoCubicSmoothAbs();
	};

	class MSHTMLDirectoryElementExtensions: public DOML2DeprecatedListNumberingAndBulletStyle {
	public:
	};

	class HTMLBaseElement: public HTMLElement {
	public:
		void set_target(const String& value);
		String* get_target();
		void set_href(const String& value);
		String* get_href();
		HTMLBaseElement();
	};

	class DOMImplementation: public DOMHTMLImplementation {
	public:
		DocumentType* createDocumentType(const String& qualifiedName, const String& publicId, const String& systemId);
		Document* createDocument(const String& nsURI, const String& qualifiedName, DocumentType* doctype);
		Boolean hasFeature(const String& feature);
		Boolean hasFeature(const String& feature, const String& version);
		DOMImplementation();
	};

	class HTMLNextIdElement: public HTMLElement {
	public:
		void set_n(const String& value);
		String* get_n();
		HTMLNextIdElement();
	};

	class SVGPathSegMovetoRel: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		SVGPathSegMovetoRel();
	};

	class Node: public EventTarget {
	public:
		double get_nodeType();
		Node* get_previousSibling();
		String* get_localName();
		String* get_nsURI();
		String* get_textContent();
		Node* get_parentNode();
		Node* get_nextSibling();
		String* get_nodeValue();
		Node* get_lastChild();
		NodeList* get_childNodes();
		String* get_nodeName();
		Document* get_ownerDocument();
		void set_attributes(Array* /*{ARRAY_BASE_TYPE=Attr}*/ value);
		Array* /*{ARRAY_BASE_TYPE=Attr}*/ get_attributes();
		Node* get_firstChild();
		void set_prefix(const String& value);
		String* get_prefix();
		Node* removeChild(Node* oldChild);
		Node* appendChild(Node* newChild);
		Boolean isSupported(const String& feature, const String& version);
		Boolean isEqualNode(Node* arg);
		String* lookupPrefix(const String& nsURI);
		Boolean isDefaultns(const String& nsURI);
		double compareDocumentPosition(Node* other);
		void normalize();
		Boolean isSameNode(Node* other);
		Boolean hasAttributes();
		String* lookupnsURI(const String& prefix);
		Node* cloneNode();
		Node* cloneNode(Boolean deep);
		Boolean hasChildNodes();
		Node* replaceChild(Node* newChild, Node* oldChild);
		Node* insertBefore(Node* newChild);
		Node* insertBefore(Node* newChild, Node* refChild);
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
		Node();
	};

	class SVGPathSegCurvetoQuadraticSmoothRel: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		SVGPathSegCurvetoQuadraticSmoothRel();
	};

	class HTMLAppletElement: public HTMLElement , public DOML2DeprecatedWidthStyle_HTMLAppletElement , public DOML2DeprecatedMarginStyle_HTMLObjectElement , public MSHTMLAppletElementExtensions , public MSDataBindingExtensions , public MSDataBindingRecordSetExtensions , public DOML2DeprecatedAlignmentStyle_HTMLObjectElement {
	public:
		void set_object(const String& value);
		String* get_object();
		void set_archive(const String& value);
		String* get_archive();
		String* get_codeBase();
		void set_alt(const String& value);
		String* get_alt();
		void set_name(const String& value);
		String* get_name();
		void set_height(const String& value);
		String* get_height();
		void set_code(const String& value);
		String* get_code();
		HTMLAppletElement();
	};

	class MSHTMLFieldSetElementExtensions: public DOML2DeprecatedAlignmentStyle_HTMLFieldSetElement {
	public:
	};

	class HTMLOListElement: public HTMLElement , public DOML2DeprecatedListNumberingAndBulletStyle , public DOML2DeprecatedListSpaceReduction , public MSHTMLOListElementExtensions {
	public:
		void set_start(double value);
		double get_start();
		HTMLOListElement();
	};

	class SVGPathSegLinetoVerticalRel: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		SVGPathSegLinetoVerticalRel();
	};
/*classeHTMLSelectElement duplicata*/

	class CSSStyleSheet: public StyleSheet , public MSCSSStyleSheetExtensions {
	public:
		CSSRule* get_ownerRule();
		CSSRuleList* get_cssRules();
		double insertRule(const String& rule);
		double insertRule(const String& rule, double index);
		void deleteRule();
		void deleteRule(double index);
		CSSStyleSheet();
	};

	class HTMLBlockElement: public HTMLElement , public DOML2DeprecatedTextFlowControl_HTMLBlockElement , public DOML2DeprecatedWidthStyle_HTMLBlockElement {
	public:
		void set_cite(const String& value);
		String* get_cite();
		HTMLBlockElement();
	};

	class HTMLMetaElement: public HTMLElement , public MSHTMLMetaElementExtensions {
	public:
		String* get_httpEquiv();
		void set_name(const String& value);
		String* get_name();
		void set_content(const String& value);
		String* get_content();
		void set_scheme(const String& value);
		String* get_scheme();
		HTMLMetaElement();
	};

	class HTMLDDElement: public HTMLElement , public DOML2DeprecatedWordWrapSuppression_HTMLDDElement {
	public:
		HTMLDDElement();
	};

	class CSSStyleRule: public CSSRule , public MSCSSStyleRuleExtensions {
	public:
		String* get_selectorText();
		void set_style(MSStyleCSSProperties* value);
		MSStyleCSSProperties* get_style();
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
		HTMLLinkElement();
	};

	class HTMLFontElement: public HTMLElement , public DOML2DeprecatedColorProperty , public MSHTMLFontElementExtensions , public DOML2DeprecatedSizeProperty {
	public:
		void set_face(const String& value);
		String* get_face();
		HTMLFontElement();
	};

	class MSnsInfo: public MSEventAttachmentTarget {
	public:
		void set_urn(const String& value);
		String* get_urn();
		typedef Object* (*callback_for_onreadystatechange)(Event* ev);
		void set_onreadystatechange(callback_for_onreadystatechange value);
		callback_for_onreadystatechange get_onreadystatechange();
		void set_name(const String& value);
		String* get_name();
		String* get_readyState();
		void doImport(const String& implementationUrl);
		MSnsInfo();
	};

	class HTMLTableCaptionElement: public HTMLElement , public MSHTMLTableCaptionElementExtensions , public DOML2DeprecatedAlignmentStyle_HTMLTableCaptionElement {
	public:
		HTMLTableCaptionElement();
	};

	class HTMLOptionElement: public HTMLElement , public MSDataBindingExtensions {
	public:
		void set_index(double value);
		double get_index();
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
		HTMLOptionElement();
	};

	class HTMLMapElement: public HTMLElement {
	public:
		void set_name(const String& value);
		String* get_name();
		void set_areas(HTMLAreasCollection* value);
		HTMLAreasCollection* get_areas();
		HTMLMapElement();
	};

	class HTMLMenuElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction , public MSHTMLMenuElementExtensions {
	public:
		void set_type(const String& value);
		String* get_type();
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
		Window* open(const String& url, const String& target);
		Window* open(const String& url, const String& target, const String& features);
		Window* open(const String& url, const String& target, const String& features, Boolean replace);
		void close();
		Boolean confirm();
		Boolean confirm(const String& message);
		void postMessage(Object* message, const String& targetOrigin);
		void postMessage(Object* message, const String& targetOrigin, Object* ports);
		Object* showModalDialog();
		Object* showModalDialog(const String& url);
		Object* showModalDialog(const String& url, Object* argument);
		Object* showModalDialog(const String& url, Object* argument, Object* options);
		void blur();
		Selection* getSelection();
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
		HTMLCollection();
	};

	class MSCSSProperties: public CSSStyleDeclaration , public MSCSSStyleDeclarationExtensions {
	public:
		String* get_scrollbarShadowColor();
		String* get_scrollbarHighlightColor();
		String* get_layoutGridChar();
		String* get_layoutGridType();
		String* get_textAutospace();
		String* get_textKashidaSpace();
		String* get_writingMode();
		String* get_scrollbarFaceColor();
		String* get_backgroundPositionY();
		String* get_lineBreak();
		String* get_imeMode();
		String* get_msBlockProgression();
		String* get_layoutGridLine();
		String* get_scrollbarBaseColor();
		String* get_layoutGrid();
		String* get_layoutFlow();
		String* get_textKashida();
		void set_filter(const String& value);
		String* get_filter();
		void set_zoom(const String& value);
		String* get_zoom();
		String* get_scrollbarArrowColor();
		void set_behavior(const String& value);
		String* get_behavior();
		String* get_backgroundPositionX();
		void set_accelerator(const String& value);
		String* get_accelerator();
		String* get_layoutGridMode();
		String* get_textJustifyTrim();
		String* get_scrollbar3dLightColor();
		String* get_msInterpolationMode();
		String* get_scrollbarTrackColor();
		String* get_scrollbarDarkShadowColor();
		String* get_styleFloat();
		MSCSSProperties();
	};

	class HTMLImageElement: public HTMLElement , public DOML2DeprecatedMarginStyle , public DOML2DeprecatedBorderStyle , public DOML2DeprecatedAlignmentStyle_HTMLImageElement , public MSImageResourceExtensions , public MSHTMLImageElementExtensions , public MSDataBindingExtensions , public MSResourceMetadata {
	public:
		void set_width(double value);
		double get_width();
		double get_naturalHeight();
		void set_alt(const String& value);
		String* get_alt();
		void set_src(const String& value);
		String* get_src();
		String* get_useMap();
		double get_naturalWidth();
		void set_name(const String& value);
		String* get_name();
		void set_height(double value);
		double get_height();
		String* get_longDesc();
		Boolean get_isMap();
		void set_complete(Boolean value);
		Boolean get_complete();
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
		Boolean get_noHref();
		void set_shape(const String& value);
		String* get_shape();
		String* toString();
		HTMLAreaElement();
	};
/*classeHTMLButtonElement duplicata*/

	class HTMLSourceElement: public HTMLElement {
	public:
		void set_src(const String& value);
		String* get_src();
		void set_media(const String& value);
		String* get_media();
		void set_type(const String& value);
		String* get_type();
		HTMLSourceElement();
	};
/*classeHTMLScriptElement duplicata*/

	class HTMLTableRowElement: public HTMLElement , public MSBorderColorHighlightStyle_HTMLTableRowElement , public HTMLTableAlignment , public MSBorderColorStyle_HTMLTableRowElement , public DOML2DeprecatedAlignmentStyle_HTMLTableRowElement , public DOML2DeprecatedBackgroundColorStyle , public MSHTMLTableRowElementExtensions {
	public:
		double get_rowIndex();
		void set_cells(HTMLCollection* value);
		HTMLCollection* get_cells();
		double get_sectionRowIndex();
		void deleteCell();
		void deleteCell(double index);
		HTMLElement* insertCell();
		HTMLElement* insertCell(double index);
		HTMLTableRowElement();
	};

	class SVGPathSegLinetoHorizontalAbs: public SVGPathSeg {
	public:
		void set_x(double value);
		double get_x();
		SVGPathSegLinetoHorizontalAbs();
	};

	class SVGPathSegArcAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		Boolean get_sweepFlag();
		void set_r2(double value);
		double get_r2();
		void set_x(double value);
		double get_x();
		void set_angle(double value);
		double get_angle();
		void set_r1(double value);
		double get_r1();
		Boolean get_largeArcFlag();
		SVGPathSegArcAbs();
	};

	class HTMLHtmlElement: public HTMLElement , public HTMLHtmlElementDOML2Deprecated {
	public:
		HTMLHtmlElement();
	};

	class SVGPathSegClosePath: public SVGPathSeg {
	public:
		SVGPathSegClosePath();
	};

	class HTMLFrameElement: public HTMLElement , public GetSVGDocument , public MSHTMLFrameElementExtensions , public MSDataBindingExtensions , public MSBorderColorStyle_HTMLFrameElement {
	public:
		void set_scrolling(const String& value);
		String* get_scrolling();
		String* get_marginHeight();
		void set_src(const String& value);
		String* get_src();
		void set_name(const String& value);
		String* get_name();
		String* get_marginWidth();
		Document* get_contentDocument();
		String* get_longDesc();
		Boolean get_noResize();
		HTMLFrameElement();
	};

	class CSSMediaRule: public CSSRule {
	public:
		void set_media(MediaList* value);
		MediaList* get_media();
		CSSRuleList* get_cssRules();
		double insertRule(const String& rule);
		double insertRule(const String& rule, double index);
		void deleteRule();
		void deleteRule(double index);
		CSSMediaRule();
	};

	class HTMLQuoteElement: public HTMLElement , public MSHTMLQuoteElementExtensions {
	public:
		void set_cite(const String& value);
		String* get_cite();
		HTMLQuoteElement();
	};

	class XMLHttpRequest: public EventTarget , public MSXMLHttpRequestExtensions {
	public:
		typedef Object* (*callback_for_onreadystatechange)(Event* ev);
		void set_onreadystatechange(callback_for_onreadystatechange value);
		callback_for_onreadystatechange get_onreadystatechange();
		void set_status(double value);
		double get_status();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		double get_readyState();
		String* get_responseText();
		Document* get_responseXML();
		String* get_statusText();
		void open(const String& method, const String& url);
		void open(const String& method, const String& url, Boolean async);
		void open(const String& method, const String& url, Boolean async, const String& user);
		void open(const String& method, const String& url, Boolean async, const String& user, const String& password);
		void send();
		void send(Object* data);
		void abort();
		String* getAllResponseHeaders();
		void setRequestHeader(const String& header, const String& value);
		String* getResponseHeader(const String& header);
		double get_LOADING();
		double get_DONE();
		double get_UNSENT();
		double get_OPENED();
		double get_HEADERS_RECEIVED();
		XMLHttpRequest();
	};

	class HTMLDListElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction , public MSHTMLDListElementExtensions {
	public:
		HTMLDListElement();
	};

	class SVGPathSegLinetoHorizontalRel: public SVGPathSeg {
	public:
		void set_x(double value);
		double get_x();
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
		HTMLFrameSetElement();
	};

	class MSHTMLPreElementExtensions: public DOML2DeprecatedTextFlowControl_HTMLBlockElement {
	public:
		void set_cite(const String& value);
		String* get_cite();
	};

	class HTMLLabelElement: public HTMLElement , public MSDataBindingExtensions , public MSHTMLLabelElementExtensions {
	public:
		String* get_htmlFor();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		HTMLLabelElement();
	};

	class HTMLLegendElement: public HTMLElement , public DOML2DeprecatedAlignmentStyle_HTMLLegendElement , public MSDataBindingExtensions , public MSHTMLLegendElementExtensions {
	public:
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		HTMLLegendElement();
	};

	class HTMLDirectoryElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction , public MSHTMLDirectoryElementExtensions {
	public:
		HTMLDirectoryElement();
	};

	class HTMLLIElement: public HTMLElement , public DOML2DeprecatedListNumberingAndBulletStyle , public MSHTMLLIElementExtensions {
	public:
		void set_value(double value);
		double get_value();
		HTMLLIElement();
	};

	class SVGPathSegLinetoVerticalAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		SVGPathSegLinetoVerticalAbs();
	};

	class MSCurrentStyleCSSProperties: public MSCSSProperties {
	public:
		String* get_blockDirection();
		String* get_clipBottom();
		String* get_clipLeft();
		String* get_clipRight();
		String* get_clipTop();
		String* get_hasLayout();
		MSCurrentStyleCSSProperties();
	};
/*classeHTMLIFrameElement duplicata*/
/*classeHTMLBodyElement duplicata*/

	class DocumentType: public Node {
	public:
		void set_name(const String& value);
		String* get_name();
		void set_notations(NamedNodeMap* value);
		NamedNodeMap* get_notations();
		String* get_systemId();
		String* get_internalSubset();
		void set_entities(NamedNodeMap* value);
		NamedNodeMap* get_entities();
		String* get_publicId();
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
		HTMLTableSectionElement();
	};
/*classeHTMLInputElement duplicata*/
/*classeHTMLAnchorElement duplicata*/

	class HTMLParamElement: public HTMLElement {
	public:
		void set_value(const String& value);
		String* get_value();
		void set_name(const String& value);
		String* get_name();
		void set_type(const String& value);
		String* get_type();
		String* get_valueType();
		HTMLParamElement();
	};

	class HTMLPreElement: public HTMLElement , public DOML2DeprecatedWidthStyle , public MSHTMLPreElementExtensions {
	public:
		HTMLPreElement();
	};

	class SVGPathSegArcRel: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		Boolean get_sweepFlag();
		void set_r2(double value);
		double get_r2();
		void set_x(double value);
		double get_x();
		void set_angle(double value);
		double get_angle();
		void set_r1(double value);
		double get_r1();
		Boolean get_largeArcFlag();
		SVGPathSegArcRel();
	};

	class SVGPathSegMovetoAbs: public SVGPathSeg {
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		SVGPathSegMovetoAbs();
	};

	class HTMLPhraseElement: public HTMLElement {
	public:
		String* get_dateTime();
		void set_cite(const String& value);
		String* get_cite();
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
		SVGPathSegCurvetoCubicRel();
	};

	class HTMLCanvasElement: public HTMLElement {
	public:
		void set_width(double value);
		double get_width();
		void set_height(double value);
		double get_height();
		String* toDataURL();
		template<typename... Args> 
		String* toDataURL(const String& type, const Args&... args )
		{
			duettoVariadicTrap<String*>(toDataURL<>,static_cast<const Object&>(args)...);
		}
		CanvasRenderingContext2D* getContext(const String& contextId);
		HTMLCanvasElement();
	};

	class HTMLTitleElement: public HTMLElement {
	public:
		void set_text(const String& value);
		String* get_text();
		HTMLTitleElement();
	};

	class HTMLStyleElement: public HTMLElement , public MSLinkStyleExtensions , public LinkStyle {
	public:
		void set_media(const String& value);
		String* get_media();
		void set_type(const String& value);
		String* get_type();
		HTMLStyleElement();
	};

	class CSSnsRule: public CSSRule {
	public:
		String* get_nsURI();
		void set_prefix(const String& value);
		String* get_prefix();
		CSSnsRule();
	};

	class HTMLUnknownElement: public HTMLElement , public MSDataBindingRecordSetReadonlyExtensions , public MSHTMLUnknownElementExtensions {
	public:
		HTMLUnknownElement();
	};

	class HTMLTableCellElement: public HTMLElement , public DOML2DeprecatedTableCellHeight , public HTMLTableAlignment , public MSBorderColorHighlightStyle_HTMLTableCellElement , public DOML2DeprecatedWidthStyle_HTMLTableCellElement , public DOML2DeprecatedBackgroundStyle , public MSBorderColorStyle_HTMLTableCellElement , public MSHTMLTableCellElementExtensions , public DOML2DeprecatedAlignmentStyle_HTMLTableCellElement , public HTMLTableHeaderCellScope , public DOML2DeprecatedWordWrapSuppression , public DOML2DeprecatedBackgroundColorStyle {
	public:
		void set_headers(const String& value);
		String* get_headers();
		void set_abbr(const String& value);
		String* get_abbr();
		double get_rowSpan();
		double get_cellIndex();
		double get_colSpan();
		void set_axis(const String& value);
		String* get_axis();
		HTMLTableCellElement();
	};

	class HTMLBaseFontElement: public HTMLElement , public DOML2DeprecatedSizeProperty_HTMLBaseFontElement , public DOML2DeprecatedColorProperty {
	public:
		void set_face(const String& value);
		String* get_face();
		HTMLBaseFontElement();
	};

	class CSSImportRule: public CSSRule {
	public:
		CSSStyleSheet* get_styleSheet();
		void set_href(const String& value);
		String* get_href();
		void set_media(MediaList* value);
		MediaList* get_media();
		CSSImportRule();
	};
/*classeHTMLTextAreaElement duplicata*/

	class HTMLMarqueeElement: public HTMLElement , public DOML2DeprecatedMarginStyle_HTMLMarqueeElement , public MSDataBindingExtensions , public MSHTMLMarqueeElementExtensions , public DOML2DeprecatedBackgroundColorStyle {
	public:
		void set_width(const String& value);
		String* get_width();
		typedef Object* (*callback_for_onbounce)(Event* ev);
		void set_onbounce(callback_for_onbounce value);
		callback_for_onbounce get_onbounce();
		Boolean get_trueSpeed();
		double get_scrollAmount();
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
		HTMLMarqueeElement();
	};

	class HTMLModElement: public HTMLElement , public MSHTMLModElementExtensions {
	public:
		String* get_dateTime();
		void set_cite(const String& value);
		String* get_cite();
		HTMLModElement();
	};

	class Event: public MSEventExtensions {
	public:
		double get_timeStamp();
		Boolean get_defaultPrevented();
		Boolean get_isTrusted();
		EventTarget* get_currentTarget();
		void set_target(EventTarget* value);
		EventTarget* get_target();
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
		double get_CAPTURING_PHASE();
		double get_AT_TARGET();
		double get_BUBBLING_PHASE();
		Event();
	};

	class HTMLTableColElement: public HTMLElement , public MSHTMLTableColElementExtensions , public HTMLTableAlignment , public DOML2DeprecatedAlignmentStyle_HTMLTableColElement {
	public:
		void set_width(Object* value);
		Object* get_width();
		void set_span(double value);
		double get_span();
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
		String* get_characterSet();
		void set_anchors(HTMLCollection* value);
		HTMLCollection* get_anchors();
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
		String* get_readyState();
		String* get_alinkColor();
		typedef Object* (*callback_for_onfocus)(FocusEvent* ev);
		void set_onfocus(callback_for_onfocus value);
		callback_for_onfocus get_onfocus();
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
		Object* open(const String& url, const String& name);
		Object* open(const String& url, const String& name, const String& features);
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

	class HTMLUListElement: public HTMLElement , public DOML2DeprecatedListSpaceReduction , public DOML2DeprecatedListNumberingAndBulletStyle , public MSHTMLUListElementExtensions {
	public:
		HTMLUListElement();
	};

	class HTMLDivElement: public HTMLElement , public DOML2DeprecatedAlignmentStyle_HTMLDivElement , public MSHTMLDivElementExtensions , public MSDataBindingExtensions {
	public:
		HTMLDivElement();
	};

	class ProcessingInstruction: public Node {
	public:
		void set_target(const String& value);
		String* get_target();
		void set_data(const String& value);
		String* get_data();
		ProcessingInstruction();
	};

	class DocumentFragment: public Node , public NodeSelector , public MSEventAttachmentTarget , public MSNodeExtensions {
	public:
		DocumentFragment();
	};

	class CSSPageRule: public CSSRule , public StyleSheetPage {
	public:
		String* get_selectorText();
		void set_style(CSSStyleDeclaration* value);
		CSSStyleDeclaration* get_style();
		CSSPageRule();
	};

	class HTMLBRElement: public HTMLElement , public DOML2DeprecatedTextFlowControl_HTMLBRElement {
	public:
		HTMLBRElement();
	};

	class HTMLSpanElement: public HTMLElement , public MSHTMLSpanElementExtensions , public MSDataBindingExtensions {
	public:
		HTMLSpanElement();
	};

	class HTMLHeadElement: public HTMLElement {
	public:
		void set_profile(const String& value);
		String* get_profile();
		HTMLHeadElement();
	};

	class HTMLHeadingElement: public HTMLElement , public DOML2DeprecatedAlignmentStyle_HTMLHeadingElement , public MSHTMLHeadingElementExtensions {
	public:
		HTMLHeadingElement();
	};
/*classeHTMLFormElement duplicata*/

	class HTMLMediaElement: public HTMLElement {
	public:
		double get_initialTime();
		void set_played(TimeRanges* value);
		TimeRanges* get_played();
		String* get_currentSrc();
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
		double get_playbackRate();
		void set_duration(double value);
		double get_duration();
		void set_muted(Boolean value);
		Boolean get_muted();
		double get_defaultPlaybackRate();
		void set_paused(Boolean value);
		Boolean get_paused();
		void set_seeking(Boolean value);
		Boolean get_seeking();
		double get_currentTime();
		void set_preload(const String& value);
		String* get_preload();
		double get_networkState();
		void pause();
		void play();
		void load();
		String* canPlayType(const String& type);
		double get_HAVE_METADATA();
		double get_HAVE_CURRENT_DATA();
		double get_HAVE_NOTHING();
		double get_NETWORK_NO_SOURCE();
		double get_HAVE_ENOUGH_DATA();
		double get_NETWORK_EMPTY();
		double get_NETWORK_LOADING();
		double get_NETWORK_IDLE();
		double get_HAVE_FUTURE_DATA();
		HTMLMediaElement();
	};

	class HTMLDTElement: public HTMLElement , public DOML2DeprecatedWordWrapSuppression_HTMLDTElement {
	public:
		HTMLDTElement();
	};

	class MSHTMLParagraphElementExtensions: public DOML2DeprecatedTextFlowControl_HTMLBlockElement {
	public:
	};
/*classeHTMLFieldSetElement duplicata*/

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
		HTMLBGSoundElement();
	};

	class HTMLHRElement: public HTMLElement , public DOML2DeprecatedWidthStyle_HTMLHRElement , public MSHTMLHRElementExtensions , public HTMLHRElementDOML2Deprecated , public DOML2DeprecatedAlignmentStyle_HTMLHRElement , public DOML2DeprecatedSizeProperty {
	public:
		HTMLHRElement();
	};
/*classeHTMLObjectElement duplicata*/

	class StorageEvent: public Event {
	public:
		Object* get_oldValue();
		Object* get_newValue();
		void set_url(const String& value);
		String* get_url();
		Storage* get_storageArea();
		void set_key(const String& value);
		String* get_key();
		void initStorageEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, const String& keyArg, Object* oldValueArg, Object* newValueArg, const String& urlArg, Storage* storageAreaArg);
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
		CharacterData();
	};

	class HTMLOptGroupElement: public HTMLElement , public MSDataBindingExtensions , public MSHTMLOptGroupElementExtensions {
	public:
		void set_label(const String& value);
		String* get_label();
		HTMLOptGroupElement();
	};

	class HTMLIsIndexElement: public HTMLElement , public MSHTMLIsIndexElementExtensions {
	public:
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_prompt(const String& value);
		String* get_prompt();
		HTMLIsIndexElement();
	};

	class Attr: public Node , public MSAttrExtensions {
	public:
		void set_specified(Boolean value);
		Boolean get_specified();
		Element* get_ownerElement();
		void set_value(const String& value);
		String* get_value();
		void set_name(const String& value);
		String* get_name();
		Attr();
	};
/*classeHTMLVideoElement duplicata*/

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
		ErrorEvent();
	};

	class TrackEvent: public Event {
	public:
		void set_track(Object* value);
		Object* get_track();
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
		MSStreamReader();
	};
/*classeWindowTimers duplicata*/
/*classeCSSStyleDeclaration duplicata*/
/*classeNavigator duplicata*/

	class TransitionEvent: public Event {
	public:
		String* get_propertyName();
		double get_elapsedTime();
		void initTransitionEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, const String& propertyNameArg, double elapsedTimeArg);
		TransitionEvent();
	};

	class CloseEvent: public Event {
	public:
		Boolean get_wasClean();
		void set_reason(const String& value);
		String* get_reason();
		void set_code(double value);
		double get_code();
		void initCloseEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, Boolean wasCleanArg, double codeArg, const String& reasonArg);
		CloseEvent();
	};

	class ProgressEvent: public Event {
	public:
		void set_loaded(double value);
		double get_loaded();
		Boolean get_lengthComputable();
		void set_total(double value);
		double get_total();
		void initProgressEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, Boolean lengthComputableArg, double loadedArg, double totalArg);
		ProgressEvent();
	};

	class IDBVersionChangeEvent: public Event {
	public:
		double get_newVersion();
		double get_oldVersion();
		IDBVersionChangeEvent();
	};

	class File: public Blob {
	public:
		Object* get_lastModifiedDate();
		void set_name(const String& value);
		String* get_name();
		File();
	};

	class AnimationEvent: public Event {
	public:
		String* get_animationName();
		double get_elapsedTime();
		void initAnimationEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, const String& animationNameArg, double elapsedTimeArg);
		AnimationEvent();
	};
/*classeWindow duplicata*/

	class IDBOpenDBRequest: public IDBRequest {
	public:
		typedef Object* (*callback_for_onupgradeneeded)(IDBVersionChangeEvent* ev);
		void set_onupgradeneeded(callback_for_onupgradeneeded value);
		callback_for_onupgradeneeded get_onupgradeneeded();
		typedef Object* (*callback_for_onblocked)(Event* ev);
		void set_onblocked(callback_for_onblocked value);
		callback_for_onblocked get_onblocked();
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
		HTMLProgressElement();
	};

	class MessageEvent: public Event {
	public:
		void set_ports(Object* value);
		Object* get_ports();
	};
/*classeHTMLMediaElement duplicata*/

	class PopStateEvent: public Event {
	public:
		void set_state(Object* value);
		Object* get_state();
		void initPopStateEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, Object* stateArg);
		PopStateEvent();
	};
/*classeMediaError duplicata*/

	class MSStyleCSSProperties: public MSCSSProperties {
	public:
		double get_pixelWidth();
		double get_posHeight();
		double get_posLeft();
		double get_pixelTop();
		double get_pixelBottom();
		Boolean get_textDecorationNone();
		double get_pixelLeft();
		double get_posTop();
		double get_posBottom();
		Boolean get_textDecorationOverline();
		double get_posWidth();
		Boolean get_textDecorationLineThrough();
		double get_pixelHeight();
		Boolean get_textDecorationBlink();
		double get_posRight();
		double get_pixelRight();
		Boolean get_textDecorationUnderline();
		MSStyleCSSProperties();
	};

	class HTMLTableDataCellElement: public HTMLTableCellElement , public MSHTMLTableDataCellElementExtensions {
	public:
		HTMLTableDataCellElement();
	};

	class Element: public Node , public NodeSelector , public ElementTraversal , public MSElementExtensions {
	public:
		double get_scrollTop();
		double get_clientLeft();
		double get_scrollLeft();
		String* get_tagName();
		double get_clientWidth();
		double get_scrollWidth();
		double get_clientHeight();
		double get_clientTop();
		double get_scrollHeight();
		String* getAttribute();
		String* getAttribute(const String& name);
		NodeList* getElementsByTagNameNS(const String& nsURI, const String& localName);
		Boolean hasAttributeNS(const String& nsURI, const String& localName);
		ClientRect* getBoundingClientRect();
		String* getAttributeNS(const String& nsURI, const String& localName);
		Attr* getAttributeNodeNS(const String& nsURI, const String& localName);
		Attr* setAttributeNodeNS(Attr* newAttr);
		Boolean hasAttribute(const String& name);
		void removeAttribute();
		void removeAttribute(const String& name);
		void setAttributeNS(const String& nsURI, const String& qualifiedName, const String& value);
		Attr* getAttributeNode(const String& name);
		NodeList* getElementsByTagName(const String& name);
		Attr* setAttributeNode(Attr* newAttr);
		ClientRectList* getClientRects();
		Attr* removeAttributeNode(Attr* oldAttr);
		void setAttribute();
		void setAttribute(const String& name);
		void setAttribute(const String& name, const String& value);
		void removeAttributeNS(const String& nsURI, const String& localName);
		Element();
	};

	class HTMLParagraphElement: public HTMLElement , public DOML2DeprecatedAlignmentStyle_HTMLParagraphElement , public MSHTMLParagraphElementExtensions {
	public:
		HTMLParagraphElement();
	};

	class HTMLAreasCollection: public HTMLCollection {
	public:
		void remove();
		void remove(double index);
		void add(HTMLElement* element);
		void add(HTMLElement* element, Object* before);
		HTMLAreasCollection();
	};

	class MSSiteModeEvent: public Event {
	public:
		double get_buttonID();
		String* get_actionURL();
		MSSiteModeEvent();
	};

	class Document: public Node , public DocumentStyle , public DocumentRange , public HTMLDocument , public NodeSelector , public DocumentEvent , public DocumentTraversal , public DocumentView , public SVGDocument , public DocumentVisibility {
	public:
		void set_doctype(DocumentType* value);
		DocumentType* get_doctype();
		String* get_xmlVersion();
		void set_implementation(DOMImplementation* value);
		DOMImplementation* get_implementation();
		String* get_xmlEncoding();
		Boolean get_xmlStandalone();
		HTMLElement* get_documentElement();
		String* get_inputEncoding();
		HTMLElement* createElement(const String& tagName);
		Node* adoptNode(Node* source);
		Comment* createComment(const String& data);
		DocumentFragment* createDocumentFragment();
		NodeList* getElementsByTagName(const String& tagname);
		NodeList* getElementsByTagNameNS(const String& nsURI, const String& localName);
		ProcessingInstruction* createProcessingInstruction(const String& target, const String& data);
		Element* createElementNS(const String& nsURI, const String& qualifiedName);
		Attr* createAttribute(const String& name);
		Text* createTextNode(const String& data);
		Node* importNode(Node* importedNode, Boolean deep);
		CDATASection* createCDATASection(const String& data);
		Attr* createAttributeNS(const String& nsURI, const String& qualifiedName);
		HTMLElement* getElementById(const String& elementId);
		void addEventListener(const String& type, const EventListener& listener);
		Document();
	};
/*classeMessageEvent duplicata*/

	class SVGElement: public Element , public SVGElementEventHandlers {
	public:
		void set_xmlbase(const String& value);
		String* get_xmlbase();
		SVGElement* get_viewportElement();
		void set_id(const String& value);
		String* get_id();
		SVGSVGElement* get_ownerSVGElement();
		SVGElement();
	};

	class SVGDefsElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests {
	public:
		SVGDefsElement();
	};

	class HTMLTableHeaderCellElement: public HTMLTableCellElement , public HTMLTableHeaderCellScope {
	public:
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
		SVGEllipseElement();
	};

	class SVGAElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGURIReference {
	public:
		void set_target(SVGAnimatedString* value);
		SVGAnimatedString* get_target();
		SVGAElement();
	};

	class SVGSVGElement: public SVGElement , public SVGZoomAndPan , public SVGLangSpace , public SVGLocatable , public SVGTests , public SVGFitToViewBox , public SVGSVGElementEventHandlers , public SVGStylable , public DocumentEvent , public ViewCSS_SVGSVGElement {
	public:
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		String* get_contentStyleType();
		double get_screenPixelToMillimeterY();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		String* get_contentScriptType();
		double get_pixelUnitToMillimeterX();
		SVGPoint* get_currentTranslate();
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_viewport(SVGRect* value);
		SVGRect* get_viewport();
		double get_currentScale();
		double get_screenPixelToMillimeterX();
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
		SVGNumber* createSVGNumber();
		SVGTransform* createSVGTransformFromMatrix(SVGMatrix* matrix);
		Element* getElementById(const String& elementId);
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
		SVGStyleElement();
	};

	class MutationEvent: public Event {
	public:
		String* get_newValue();
		double get_attrChange();
		String* get_attrName();
		String* get_prevValue();
		Node* get_relatedNode();
		void initMutationEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, Node* relatedNodeArg, const String& prevValueArg, const String& newValueArg, const String& attrNameArg, double attrChangeArg);
		double get_MODIFICATION();
		double get_REMOVAL();
		double get_ADDITION();
		MutationEvent();
	};

	class SVGImageElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGURIReference {
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		SVGImageElement();
	};

	class SVGMetadataElement: public SVGElement {
	public:
		SVGMetadataElement();
	};

	class SVGPolygonElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGAnimatedPoints , public SVGTests {
	public:
		SVGPolygonElement();
	};

	class SVGTextContentElement: public SVGElement , public SVGStylable , public SVGLangSpace , public SVGTests {
	public:
		SVGAnimatedLength* get_textLength();
		SVGAnimatedEnumeration* get_lengthAdjust();
		double getCharNumAtPosition(SVGPoint* point);
		SVGPoint* getStartPositionOfChar(double charnum);
		SVGRect* getExtentOfChar(double charnum);
		double getComputedTextLength();
		double getSubStringLength(double charnum, double nchars);
		void selectSubString(double charnum, double nchars);
		double getNumberOfChars();
		double getRotationOfChar(double charnum);
		SVGPoint* getEndPositionOfChar(double charnum);
		double get_LENGTHADJUST_SPACING();
		double get_LENGTHADJUST_SPACINGANDGLYPHS();
		double get_LENGTHADJUST_UNKNOWN();
		SVGTextContentElement();
	};

	class UIEvent: public Event {
	public:
		void set_detail(double value);
		double get_detail();
		void set_view(AbstractView* value);
		AbstractView* get_view();
		void initUIEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg);
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
		SVGPathElement();
	};

	class Text: public CharacterData , public MSNodeExtensions {
	public:
		String* get_wholeText();
		Text* splitText(double offset);
		Text* replaceWholeText(const String& content);
		Text();
	};

	class HTMLAudioElement: public HTMLMediaElement {
	public:
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
		SVGCircleElement();
	};

	class CustomEvent: public Event {
	public:
		void set_detail(Object* value);
		Object* get_detail();
		void initCustomEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, Object* detailArg);
		CustomEvent();
	};

	class BeforeUnloadEvent: public Event {
	public:
		String* get_returnValue();
		BeforeUnloadEvent();
	};

	class SVGUseElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests , public SVGURIReference {
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		SVGElementInstance* get_animatedInstanceRoot();
		SVGElementInstance* get_instanceRoot();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
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
		SVGRectElement();
	};

	class TextEvent: public UIEvent {
	public:
		double get_inputMethod();
		void set_data(const String& value);
		String* get_data();
		void set_locale(const String& value);
		String* get_locale();
		void initTextEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, const String& dataArg, double inputMethod, const String& locale);
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
		TextEvent();
	};

	class SVGPolylineElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGAnimatedPoints , public SVGTests {
	public:
		SVGPolylineElement();
	};

	class SVGTextPathElement: public SVGTextContentElement , public SVGURIReference {
	public:
		SVGAnimatedLength* get_startOffset();
		void set_method(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_method();
		void set_spacing(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_spacing();
		double get_TEXTPATH_SPACINGTYPE_EXACT();
		double get_TEXTPATH_METHODTYPE_STRETCH();
		double get_TEXTPATH_SPACINGTYPE_AUTO();
		double get_TEXTPATH_SPACINGTYPE_UNKNOWN();
		double get_TEXTPATH_METHODTYPE_UNKNOWN();
		double get_TEXTPATH_METHODTYPE_ALIGN();
		SVGTextPathElement();
	};

	class SVGGradientElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGURIReference {
	public:
		SVGAnimatedEnumeration* get_spreadMethod();
		SVGAnimatedTransformList* get_gradientTransform();
		SVGAnimatedEnumeration* get_gradientUnits();
		double get_SVG_SPREADMETHOD_REFLECT();
		double get_SVG_SPREADMETHOD_PAD();
		double get_SVG_SPREADMETHOD_UNKNOWN();
		double get_SVG_SPREADMETHOD_REPEAT();
		SVGGradientElement();
	};
/*classeHTMLElement duplicata*/

	class Comment: public CharacterData , public MSCommentExtensions {
	public:
		Comment();
	};

	class SVGSwitchElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests {
	public:
		SVGSwitchElement();
	};

	class SVGStopElement: public SVGElement , public SVGStylable {
	public:
		void set_offset(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_offset();
		SVGStopElement();
	};

	class SVGSymbolElement: public SVGElement , public SVGStylable , public SVGLangSpace , public SVGFitToViewBox {
	public:
		SVGSymbolElement();
	};

	class SVGMaskElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGLangSpace , public SVGTests {
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		SVGAnimatedEnumeration* get_maskUnits();
		SVGAnimatedEnumeration* get_maskContentUnits();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		SVGMaskElement();
	};

	class MSGestureEvent: public UIEvent {
	public:
		double get_offsetY();
		double get_translationY();
		double get_velocityExpansion();
		double get_velocityY();
		double get_velocityAngular();
		double get_translationX();
		double get_velocityX();
		double get_hwTimestamp();
		double get_offsetX();
		double get_screenX();
		void set_rotation(double value);
		double get_rotation();
		void set_expansion(double value);
		double get_expansion();
		double get_clientY();
		double get_screenY();
		void set_scale(double value);
		double get_scale();
		Object* get_gestureObject();
		double get_clientX();
		void initGestureEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double offsetXArg, double offsetYArg, double translationXArg, double translationYArg, double scaleArg, double expansionArg, double rotationArg, double velocityXArg, double velocityYArg, double velocityExpansionArg, double velocityAngularArg, double hwTimestampArg);
		double get_MSGESTURE_FLAG_BEGIN();
		double get_MSGESTURE_FLAG_END();
		double get_MSGESTURE_FLAG_CANCEL();
		double get_MSGESTURE_FLAG_INERTIA();
		double get_MSGESTURE_FLAG_NONE();
		MSGestureEvent();
	};

	class SVGFilterElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGLangSpace , public SVGURIReference {
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		SVGAnimatedInteger* get_filterResX();
		SVGAnimatedEnumeration* get_filterUnits();
		SVGAnimatedEnumeration* get_primitiveUnits();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		SVGAnimatedInteger* get_filterResY();
		void setFilterRes(double filterResX, double filterResY);
		SVGFilterElement();
	};

	class SVGFEMergeNodeElement: public SVGElement {
	public:
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		SVGFEMergeNodeElement();
	};

	class SVGFEFloodElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGFEFloodElement();
	};

	class SVGFETileElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		SVGFETileElement();
	};

	class SVGFEBlendElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_in2(SVGAnimatedString* value);
		SVGAnimatedString* get_in2();
		void set_mode(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_mode();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		double get_SVG_FEBLEND_MODE_DARKEN();
		double get_SVG_FEBLEND_MODE_UNKNOWN();
		double get_SVG_FEBLEND_MODE_MULTIPLY();
		double get_SVG_FEBLEND_MODE_NORMAL();
		double get_SVG_FEBLEND_MODE_SCREEN();
		double get_SVG_FEBLEND_MODE_LIGHTEN();
		SVGFEBlendElement();
	};

	class SVGFEMergeElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGFEMergeElement();
	};

	class SVGFEPointLightElement: public SVGElement {
	public:
		void set_y(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_y();
		void set_x(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_x();
		void set_z(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_z();
		SVGFEPointLightElement();
	};

	class SVGFEGaussianBlurElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_stdDeviationX();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		SVGAnimatedNumber* get_stdDeviationY();
		void setStdDeviation(double stdDeviationX, double stdDeviationY);
		SVGFEGaussianBlurElement();
	};

	class SVGFESpecularLightingElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_kernelUnitLengthY();
		SVGAnimatedNumber* get_surfaceScale();
		SVGAnimatedNumber* get_specularExponent();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		SVGAnimatedNumber* get_kernelUnitLengthX();
		SVGAnimatedNumber* get_specularConstant();
		SVGFESpecularLightingElement();
	};

	class SVGFEMorphologyElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_operator(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_operator();
		SVGAnimatedNumber* get_radiusX();
		SVGAnimatedNumber* get_radiusY();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		double get_SVG_MORPHOLOGY_OPERATOR_UNKNOWN();
		double get_SVG_MORPHOLOGY_OPERATOR_ERODE();
		double get_SVG_MORPHOLOGY_OPERATOR_DILATE();
		SVGFEMorphologyElement();
	};

	class SVGFEDisplacementMapElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_in2(SVGAnimatedString* value);
		SVGAnimatedString* get_in2();
		SVGAnimatedEnumeration* get_xChannelSelector();
		SVGAnimatedEnumeration* get_yChannelSelector();
		void set_scale(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_scale();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		double get_SVG_CHANNEL_B();
		double get_SVG_CHANNEL_R();
		double get_SVG_CHANNEL_G();
		double get_SVG_CHANNEL_UNKNOWN();
		double get_SVG_CHANNEL_A();
		SVGFEDisplacementMapElement();
	};

	class SVGComponentTransferFunctionElement: public SVGElement {
	public:
		SVGAnimatedNumberList* get_tableValues();
		void set_slope(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_slope();
		void set_type(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_type();
		void set_exponent(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_exponent();
		void set_amplitude(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_amplitude();
		void set_intercept(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_intercept();
		void set_offset(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_offset();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_TABLE();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_GAMMA();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_LINEAR();
		SVGComponentTransferFunctionElement();
	};

	class SVGFEDistantLightElement: public SVGElement {
	public:
		void set_azimuth(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_azimuth();
		void set_elevation(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_elevation();
		SVGFEDistantLightElement();
	};

	class SVGFEFuncBElement: public SVGComponentTransferFunctionElement {
	public:
		SVGFEFuncBElement();
	};

	class SVGFEConvolveMatrixElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedInteger* get_orderY();
		SVGAnimatedNumber* get_kernelUnitLengthY();
		SVGAnimatedInteger* get_orderX();
		SVGAnimatedBoolean* get_preserveAlpha();
		SVGAnimatedNumberList* get_kernelMatrix();
		SVGAnimatedEnumeration* get_edgeMode();
		SVGAnimatedNumber* get_kernelUnitLengthX();
		void set_bias(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_bias();
		SVGAnimatedInteger* get_targetX();
		SVGAnimatedInteger* get_targetY();
		void set_divisor(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_divisor();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		double get_SVG_EDGEMODE_WRAP();
		double get_SVG_EDGEMODE_DUPLICATE();
		double get_SVG_EDGEMODE_UNKNOWN();
		double get_SVG_EDGEMODE_NONE();
		SVGFEConvolveMatrixElement();
	};

	class SVGFETurbulenceElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_baseFrequencyX();
		SVGAnimatedInteger* get_numOctaves();
		void set_type(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_type();
		SVGAnimatedNumber* get_baseFrequencyY();
		SVGAnimatedEnumeration* get_stitchTiles();
		void set_seed(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_seed();
		double get_SVG_STITCHTYPE_UNKNOWN();
		double get_SVG_STITCHTYPE_NOSTITCH();
		double get_SVG_TURBULENCE_TYPE_UNKNOWN();
		double get_SVG_TURBULENCE_TYPE_TURBULENCE();
		double get_SVG_TURBULENCE_TYPE_FRACTALNOISE();
		double get_SVG_STITCHTYPE_STITCH();
		SVGFETurbulenceElement();
	};

	class SVGFEFuncGElement: public SVGComponentTransferFunctionElement {
	public:
		SVGFEFuncGElement();
	};

	class SVGFEColorMatrixElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_type(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_type();
		void set_values(SVGAnimatedNumberList* value);
		SVGAnimatedNumberList* get_values();
		double get_SVG_FECOLORMATRIX_TYPE_SATURATE();
		double get_SVG_FECOLORMATRIX_TYPE_UNKNOWN();
		double get_SVG_FECOLORMATRIX_TYPE_MATRIX();
		double get_SVG_FECOLORMATRIX_TYPE_HUEROTATE();
		double get_SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA();
		SVGFEColorMatrixElement();
	};

	class SVGFESpotLightElement: public SVGElement {
	public:
		SVGAnimatedNumber* get_pointsAtY();
		void set_y(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_y();
		SVGAnimatedNumber* get_limitingConeAngle();
		SVGAnimatedNumber* get_specularExponent();
		void set_x(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_x();
		SVGAnimatedNumber* get_pointsAtZ();
		void set_z(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_z();
		SVGAnimatedNumber* get_pointsAtX();
		SVGFESpotLightElement();
	};

	class SVGFEOffsetElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_dy(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_dy();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_dx(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_dx();
		SVGFEOffsetElement();
	};

	class MSManipulationEvent: public UIEvent {
	public:
		double get_lastState();
		double get_currentState();
		void initMSManipulationEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double lastState, double currentState);
		double get_MS_MANIPULATION_STATE_STOPPED();
		double get_MS_MANIPULATION_STATE_ACTIVE();
		double get_MS_MANIPULATION_STATE_INERTIA();
		MSManipulationEvent();
	};

	class SVGFEImageElement: public SVGElement , public SVGLangSpace , public SVGFilterPrimitiveStandardAttributes , public SVGURIReference {
	public:
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
		SVGFEImageElement();
	};

	class SVGFECompositeElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_operator(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_operator();
		void set_in2(SVGAnimatedString* value);
		SVGAnimatedString* get_in2();
		void set_k2(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_k2();
		void set_k1(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_k1();
		void set_k3(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_k3();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_k4(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_k4();
		double get_SVG_FECOMPOSITE_OPERATOR_OUT();
		double get_SVG_FECOMPOSITE_OPERATOR_OVER();
		double get_SVG_FECOMPOSITE_OPERATOR_XOR();
		double get_SVG_FECOMPOSITE_OPERATOR_ARITHMETIC();
		double get_SVG_FECOMPOSITE_OPERATOR_UNKNOWN();
		double get_SVG_FECOMPOSITE_OPERATOR_IN();
		double get_SVG_FECOMPOSITE_OPERATOR_ATOP();
		SVGFECompositeElement();
	};

	class SVGFEDiffuseLightingElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_kernelUnitLengthY();
		SVGAnimatedNumber* get_surfaceScale();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		SVGAnimatedNumber* get_kernelUnitLengthX();
		SVGAnimatedNumber* get_diffuseConstant();
		SVGFEDiffuseLightingElement();
	};

	class SVGFEComponentTransferElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		SVGFEComponentTransferElement();
	};

	class CompositionEvent: public UIEvent {
	public:
		void set_data(const String& value);
		String* get_data();
		void set_locale(const String& value);
		String* get_locale();
		void initCompositionEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, const String& dataArg, const String& locale);
		CompositionEvent();
	};

	class SVGMarkerElement: public SVGElement , public SVGStylable , public SVGLangSpace , public SVGFitToViewBox {
	public:
		SVGAnimatedEnumeration* get_orientType();
		SVGAnimatedEnumeration* get_markerUnits();
		SVGAnimatedLength* get_markerWidth();
		SVGAnimatedLength* get_markerHeight();
		SVGAnimatedAngle* get_orientAngle();
		SVGAnimatedLength* get_refY();
		SVGAnimatedLength* get_refX();
		void setOrientToAngle(SVGAngle* angle);
		void setOrientToAuto();
		double get_SVG_MARKER_ORIENT_UNKNOWN();
		double get_SVG_MARKER_ORIENT_ANGLE();
		double get_SVG_MARKERUNITS_UNKNOWN();
		double get_SVG_MARKERUNITS_STROKEWIDTH();
		double get_SVG_MARKER_ORIENT_AUTO();
		double get_SVG_MARKERUNITS_USERSPACEONUSE();
		SVGMarkerElement();
	};

	class SVGGElement: public SVGElement , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests {
	public:
		SVGGElement();
	};

	class SVGZoomEvent: public UIEvent {
	public:
		SVGRect* get_zoomRectScreen();
		double get_previousScale();
		double get_newScale();
		SVGPoint* get_previousTranslate();
		SVGPoint* get_newTranslate();
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
		SVGLineElement();
	};

	class SVGDescElement: public SVGElement , public SVGStylable , public SVGLangSpace {
	public:
		SVGDescElement();
	};

	class SVGClipPathElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGTransformable , public SVGLangSpace , public SVGTests {
	public:
		SVGAnimatedEnumeration* get_clipPathUnits();
		SVGClipPathElement();
	};

	class MouseEvent: public UIEvent , public MSMouseEventExtensions {
	public:
		double get_pageX();
		double get_offsetY();
		void set_x(double value);
		double get_x();
		void set_y(double value);
		double get_y();
		Boolean get_altKey();
		Boolean get_metaKey();
		Boolean get_ctrlKey();
		double get_offsetX();
		double get_screenX();
		double get_clientY();
		Boolean get_shiftKey();
		double get_screenY();
		EventTarget* get_relatedTarget();
		void set_button(double value);
		double get_button();
		double get_pageY();
		void set_buttons(double value);
		double get_buttons();
		double get_clientX();
		void initMouseEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, Boolean ctrlKeyArg, Boolean altKeyArg, Boolean shiftKeyArg, Boolean metaKeyArg, double buttonArg, EventTarget* relatedTargetArg);
		Boolean getModifierState(const String& keyArg);
		MouseEvent();
	};

	class SVGTextPositioningElement: public SVGTextContentElement {
	public:
		void set_y(SVGAnimatedLengthList* value);
		SVGAnimatedLengthList* get_y();
		void set_rotate(SVGAnimatedNumberList* value);
		SVGAnimatedNumberList* get_rotate();
		void set_dy(SVGAnimatedLengthList* value);
		SVGAnimatedLengthList* get_dy();
		void set_x(SVGAnimatedLengthList* value);
		SVGAnimatedLengthList* get_x();
		void set_dx(SVGAnimatedLengthList* value);
		SVGAnimatedLengthList* get_dx();
		SVGTextPositioningElement();
	};

	class CDATASection: public Text {
	public:
		CDATASection();
	};

	class SVGPatternElement: public SVGElement , public SVGUnitTypes , public SVGStylable , public SVGLangSpace , public SVGTests , public SVGFitToViewBox , public SVGURIReference {
	public:
		SVGAnimatedEnumeration* get_patternUnits();
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		SVGAnimatedEnumeration* get_patternContentUnits();
		SVGAnimatedTransformList* get_patternTransform();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		SVGPatternElement();
	};

	class SVGScriptElement: public SVGElement , public SVGURIReference {
	public:
		void set_type(const String& value);
		String* get_type();
		SVGScriptElement();
	};

	class SVGViewElement: public SVGElement , public SVGZoomAndPan , public SVGFitToViewBox {
	public:
		SVGStringList* get_viewTarget();
		SVGViewElement();
	};

	class SVGTitleElement: public SVGElement , public SVGStylable , public SVGLangSpace {
	public:
		SVGTitleElement();
	};

	class MouseWheelEvent: public MouseEvent {
	public:
		double get_wheelDelta();
		void initMouseWheelEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double buttonArg, EventTarget* relatedTargetArg, const String& modifiersListArg, double wheelDeltaArg);
		MouseWheelEvent();
	};

	class KeyboardEvent: public UIEvent , public KeyboardEventExtensions {
	public:
		void set_location(double value);
		double get_location();
		Boolean get_shiftKey();
		void set_locale(const String& value);
		String* get_locale();
		void set_key(const String& value);
		String* get_key();
		Boolean get_altKey();
		Boolean get_metaKey();
		void set_char(const String& value);
		String* get_char();
		Boolean get_ctrlKey();
		void set_repeat(Boolean value);
		Boolean get_repeat();
		Boolean getModifierState(const String& keyArg);
		void initKeyboardEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, const String& keyArg, double locationArg, const String& modifiersListArg, Boolean repeat, const String& locale);
		double get_DOM_KEY_LOCATION_RIGHT();
		double get_DOM_KEY_LOCATION_STANDARD();
		double get_DOM_KEY_LOCATION_LEFT();
		double get_DOM_KEY_LOCATION_NUMPAD();
		double get_DOM_KEY_LOCATION_JOYSTICK();
		double get_DOM_KEY_LOCATION_MOBILE();
		KeyboardEvent();
	};

	class FocusEvent: public UIEvent {
	public:
		EventTarget* get_relatedTarget();
		void initFocusEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, EventTarget* relatedTargetArg);
		FocusEvent();
	};

	class SVGTextElement: public SVGTextPositioningElement , public SVGTransformable {
	public:
		SVGTextElement();
	};

	class SVGTSpanElement: public SVGTextPositioningElement {
	public:
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
		SVGRadialGradientElement();
	};

	class DragEvent: public MouseEvent {
	public:
		DataTransfer* get_dataTransfer();
		void initDragEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, Boolean ctrlKeyArg, Boolean altKeyArg, Boolean shiftKeyArg, Boolean metaKeyArg, double buttonArg, EventTarget* relatedTargetArg, DataTransfer* dataTransferArg);
		DragEvent();
	};

	class WheelEvent: public MouseEvent {
	public:
		double get_deltaZ();
		double get_deltaX();
		double get_deltaMode();
		double get_deltaY();
		void initWheelEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double buttonArg, EventTarget* relatedTargetArg, const String& modifiersListArg, double deltaXArg, double deltaYArg, double deltaZArg, double deltaMode);
		double get_DOM_DELTA_PIXEL();
		double get_DOM_DELTA_LINE();
		double get_DOM_DELTA_PAGE();
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
		SVGLinearGradientElement();
	};

	class SVGFEFuncAElement: public SVGComponentTransferFunctionElement {
	public:
		SVGFEFuncAElement();
	};

	class SVGFEFuncRElement: public SVGComponentTransferFunctionElement {
	public:
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
		double get_pointerType();
		Boolean get_isPrimary();
		double get_tiltY();
		void set_height(double value);
		double get_height();
		Object* get_intermediatePoints();
		Object* get_currentPoint();
		double get_tiltX();
		double get_hwTimestamp();
		double get_pointerId();
		void initPointerEvent(const String& typeArg, Boolean canBubbleArg, Boolean cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, Boolean ctrlKeyArg, Boolean altKeyArg, Boolean shiftKeyArg, Boolean metaKeyArg, double buttonArg, EventTarget* relatedTargetArg, double offsetXArg, double offsetYArg, double widthArg, double heightArg, double pressure, double rotation, double tiltX, double tiltY, double pointerIdArg, double pointerType, double hwTimestampArg, Boolean isPrimary);
		void getCurrentPoint(Element* element);
		void getIntermediatePoints(Element* element);
		double get_MSPOINTER_TYPE_PEN();
		double get_MSPOINTER_TYPE_MOUSE();
		double get_MSPOINTER_TYPE_TOUCH();
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
extern History history;
extern String name;
extern Object* (*onafterprint)(Event* ev);
extern Object* (*onpause)(Event* ev);
extern Object* (*onbeforeprint)(Event* ev);
extern Window top;
extern Object* (*onmousedown)(MouseEvent* ev);
extern Object* (*onseeked)(Event* ev);
extern Window opener;
extern Object* (*onclick)(MouseEvent* ev);
extern Object* (*onwaiting)(Event* ev);
extern Object* (*ononline)(Event* ev);
extern Object* (*ondurationchange)(Event* ev);
extern Window frames;
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
extern Window self;
extern Object* (*onprogress)(Object* ev);
extern Object* (*ondblclick)(MouseEvent* ev);
extern Object* (*oncontextmenu)(MouseEvent* ev);
extern Object* (*onchange)(Event* ev);
extern Object* (*onloadedmetadata)(Event* ev);
extern Object* (*onplay)(Event* ev);
extern ErrorFunction onerror;
extern Object* (*onplaying)(Event* ev);
extern Window parent;
extern Location location;
extern Object* (*oncanplaythrough)(Event* ev);
extern Object* (*onabort)(UIEvent* ev);
extern Object* (*onreadystatechange)(Event* ev);
extern Object* (*onkeypress)(KeyboardEvent* ev);
extern Element frameElement;
extern Object* (*onloadeddata)(Event* ev);
extern Object* (*onsuspend)(Event* ev);
extern Window window;
extern Object* (*onfocus)(FocusEvent* ev);
extern Object* (*onmessage)(MessageEvent* ev);
extern Object* (*ontimeupdate)(Event* ev);
extern Object* (*onresize)(UIEvent* ev);
extern Navigator navigator;
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
extern void print();
extern String* prompt();
extern String* prompt(const String& message);
extern String* prompt(const String& message, const String& defaul);
extern String* toString();
extern Window* open();
extern Window* open(const String& url);
extern Window* open(const String& url);
extern Window* open(const String& url, const String& target);
extern Window* open(const String& url, const String& target, const String& features, Boolean replace);
extern void close();
extern Boolean confirm();
extern Boolean confirm(const String& message);
extern void postMessage(Object* message, const String& targetOrigin);
extern void postMessage(Object* message, const String& targetOrigin, Object* ports);
extern Object* showModalDialog();
extern Object* showModalDialog(const String& url);
extern Object* showModalDialog(const String& url, Object* argument, Object* options);
extern void blur();
extern Selection* getSelection();
extern CSSStyleDeclaration* getComputedStyle(Element* elt);
extern CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
extern Boolean attachEvent(const String& event, EventListener* listener);
extern void detachEvent(const String& event, EventListener* listener);
extern String status;
extern Object* (*onmouseleave)(MouseEvent* ev);
extern double screenLeft;
extern Object offscreenBuffering;
extern double maxConnectionsPerServer;
extern Object* (*onmouseenter)(MouseEvent* ev);
extern DataTransfer clipboardData;
extern String defaultStatus;
extern Navigator clientInformation;
extern Boolean closed;
extern Object* (*onhelp)(Event* ev);
extern BrowserPublic external;
extern MSEventObj event;
extern Object* (*onfocusout)(FocusEvent* ev);
extern double screenTop;
extern Object* (*onfocusin)(FocusEvent* ev);
extern Window* showModelessDialog();
extern Window* showModelessDialog(const String& url);
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
extern Object performance;
extern double outerWidth;
extern double pageXOffset;
extern double innerWidth;
extern double pageYOffset;
extern double screenY;
extern double outerHeight;
extern Screen screen;
extern double innerHeight;
extern double screenX;
extern void scroll();
extern void scroll(double x, double y);
extern void scrollBy();
extern void scrollBy(double x, double y);
extern void scrollTo();
extern void scrollTo(double x, double y);
extern StyleMedia styleMedia;
extern void removeEventListener(const String& type, EventListener* listener);
extern void removeEventListener(const String& type, EventListener* listener, Boolean useCapture);
extern void addEventListener(const String& type, EventListener* listener);
extern void addEventListener(const String& type, EventListener* listener, Boolean useCapture);
extern Boolean dispatchEvent(Event* evt);
extern Storage localStorage;
extern Storage sessionStorage;
extern void clearTimeout(double handle);
extern double setTimeout(Object* expression);
extern double setTimeout(Object* expression, double msec);
extern double setTimeout(Object* expression, double msec, Object* language);
extern void clearInterval(double handle);
extern double setInterval(Object* expression);
extern double setInterval(Object* expression, double msec);
extern double setInterval(Object* expression, double msec, Object* language);
extern URL URL;
extern MSApp MSApp;
extern Object* (*onpopstate)(PopStateEvent* ev);
extern ApplicationCache applicationCache;
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
extern IDBFactory msIndexedDB;
extern IDBFactory indexedDB;
extern Console console;
template<typename... Args> 
extern void importScripts(const Args&... args /*{{ARRAY_BASE_TYPE=String*}}*/);

} 
#endif
