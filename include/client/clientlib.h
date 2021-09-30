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

#include <stddef.h>
#include <cheerpintrin.h>

namespace [[cheerp::genericjs]] client
{
	class PropertyDescriptor;
	class PropertyDescriptorMap;
	class IArguments;
	template<class T>
	class ReadonlyArray;
	class TemplateStringsArray;
	class ImportMeta;
	class Math;
	class Date;
	class RegExpMatchArray;
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
	template<class T>
	class ConcatArray;
	template<class T>
	class TypedPropertyDescriptor;
	class Promise;
	template<class T>
	class ThisType;
	class ArrayBuffer;
	class ArrayBufferTypes;
	class ArrayBufferView;
	class DataView;
	class Int8Array;
	class Uint8Array;
	class Uint8ClampedArray;
	class Int16Array;
	class Uint16Array;
	class Int32Array;
	class Uint32Array;
	class Float32Array;
	class Float64Array;
	class Account;
	class EventListenerOptions;
	class AddEventListenerOptions;
	class Algorithm;
	class AesCbcParams;
	class AesCtrParams;
	class AesDerivedKeyParams;
	class AesGcmParams;
	class KeyAlgorithm;
	class AesKeyAlgorithm;
	class AesKeyGenParams;
	class AudioNodeOptions;
	class AnalyserOptions;
	class EventInit;
	class AnimationEventInit;
	class AssertionOptions;
	class AudioBufferOptions;
	class AudioBufferSourceOptions;
	class AudioContextInfo;
	class AudioContextOptions;
	class AudioParamDescriptor;
	class AudioProcessingEventInit;
	class AudioTimestamp;
	class BiquadFilterOptions;
	class ByteLengthChunk;
	class CacheQueryOptions;
	class ChannelMergerOptions;
	class ChannelSplitterOptions;
	class ClientData;
	class ClientQueryOptions;
	class CloseEventInit;
	class UIEventInit;
	class CompositionEventInit;
	class ExceptionInformation;
	class ConfirmSiteSpecificExceptionsInformation;
	class ConstantSourceOptions;
	class ConstrainBooleanParameters;
	class ConstrainDOMStringParameters;
	class DoubleRange;
	class ConstrainDoubleRange;
	class LongRange;
	class ConstrainLongRange;
	class ConstrainVideoFacingModeParameters;
	class ConvolverOptions;
	template<class T>
	class CustomEventInit;
	class DOMRectInit;
	class DelayOptions;
	class DeviceAccelerationDict;
	class DeviceLightEventInit;
	class DeviceMotionEventInit;
	class DeviceOrientationEventInit;
	class DeviceRotationRateDict;
	class DynamicsCompressorOptions;
	class EcKeyAlgorithm;
	class EcKeyGenParams;
	class EcKeyImportParams;
	class EcdhKeyDeriveParams;
	class EcdsaParams;
	class ErrorEventInit;
	class EventModifierInit;
	class ExtendableEventInit;
	class ExtendableMessageEventInit;
	class FetchEventInit;
	class FocusEventInit;
	class FocusNavigationEventInit;
	class FocusNavigationOrigin;
	class GainOptions;
	class GamepadEventInit;
	class GetNotificationOptions;
	class HashChangeEventInit;
	class HkdfParams;
	class HmacImportParams;
	class HmacKeyAlgorithm;
	class HmacKeyGenParams;
	class IDBIndexParameters;
	class IDBObjectStoreParameters;
	class IIRFilterOptions;
	class IntersectionObserverEntryInit;
	class IntersectionObserverInit;
	class JsonWebKey;
	class KeyboardEventInit;
	class MSAccountInfo;
	class RTCStats;
	class MSLocalClientEventBase;
	class MSAudioLocalClientEvent;
	class MSPayloadBase;
	class MSAudioRecvPayload;
	class MSAudioRecvSignal;
	class MSAudioSendPayload;
	class MSAudioSendSignal;
	class MSConnectivity;
	class MSCredentialFilter;
	class MSCredentialParameters;
	class MSCredentialSpec;
	class MSDCCEventInit;
	class MSDSHEventInit;
	class MSDelay;
	class MSDescription;
	class MSFIDOCredentialParameters;
	class MSIPAddressInfo;
	class MSIceWarningFlags;
	class MSJitter;
	class MSNetwork;
	class MSNetworkConnectivityInfo;
	class MSNetworkInterfaceType;
	class MSOutboundNetwork;
	class MSPacketLoss;
	class MSPortRange;
	class MSRelayAddress;
	class MSSignatureParameters;
	class MSTransportDiagnosticsStats;
	class MSUtilization;
	class MSVideoPayload;
	class MSVideoRecvPayload;
	class MSVideoResolutionDistribution;
	class MSVideoSendPayload;
	class MediaElementAudioSourceOptions;
	class MediaEncryptedEventInit;
	class MediaKeyMessageEventInit;
	class MediaKeySystemConfiguration;
	class MediaKeySystemMediaCapability;
	class MediaStreamConstraints;
	class MediaStreamErrorEventInit;
	class MediaStreamEventInit;
	class MediaStreamTrackEventInit;
	class MediaTrackCapabilities;
	class MediaTrackConstraintSet;
	class MediaTrackConstraints;
	class MediaTrackSettings;
	class MediaTrackSupportedConstraints;
	class MessageEventInit;
	class MouseEventInit;
	class MsZoomToOptions;
	class MutationObserverInit;
	class NotificationEventInit;
	class NotificationOptions;
	class ObjectURLOptions;
	class OfflineAudioCompletionEventInit;
	class OscillatorOptions;
	class PannerOptions;
	class PaymentCurrencyAmount;
	class PaymentDetailsBase;
	class PaymentDetailsInit;
	class PaymentDetailsModifier;
	class PaymentDetailsUpdate;
	class PaymentItem;
	class PaymentMethodData;
	class PaymentOptions;
	class PaymentRequestUpdateEventInit;
	class PaymentShippingOption;
	class Pbkdf2Params;
	class PeriodicWaveConstraints;
	class PeriodicWaveOptions;
	class PointerEventInit;
	class PopStateEventInit;
	class PositionOptions;
	class ProgressEventInit;
	class PushEventInit;
	class PushSubscriptionChangeInit;
	class PushSubscriptionOptionsInit;
	class QueuingStrategy;
	class RTCConfiguration;
	class RTCDTMFToneChangeEventInit;
	class RTCDtlsFingerprint;
	class RTCDtlsParameters;
	class RTCIceCandidateAttributes;
	class RTCIceCandidateComplete;
	class RTCIceCandidateDictionary;
	class RTCIceCandidateInit;
	class RTCIceCandidatePair;
	class RTCIceCandidatePairStats;
	class RTCIceGatherOptions;
	class RTCIceParameters;
	class RTCIceServer;
	class RTCRTPStreamStats;
	class RTCInboundRTPStreamStats;
	class RTCMediaStreamTrackStats;
	class RTCOfferOptions;
	class RTCOutboundRTPStreamStats;
	class RTCPeerConnectionIceEventInit;
	class RTCRtcpFeedback;
	class RTCRtcpParameters;
	class RTCRtpCapabilities;
	class RTCRtpCodecCapability;
	class RTCRtpCodecParameters;
	class RTCRtpContributingSource;
	class RTCRtpEncodingParameters;
	class RTCRtpFecParameters;
	class RTCRtpHeaderExtension;
	class RTCRtpHeaderExtensionParameters;
	class RTCRtpParameters;
	class RTCRtpRtxParameters;
	class RTCRtpUnhandled;
	class RTCSessionDescriptionInit;
	class RTCSrtpKeyParam;
	class RTCSrtpSdesParameters;
	class RTCSsrcRange;
	class RTCStatsReport;
	class RTCTransportStats;
	class RegistrationOptions;
	class RequestInit;
	class ResponseInit;
	class RsaHashedImportParams;
	class RsaKeyAlgorithm;
	class RsaHashedKeyAlgorithm;
	class RsaKeyGenParams;
	class RsaHashedKeyGenParams;
	class RsaOaepParams;
	class RsaOtherPrimesInfo;
	class RsaPssParams;
	class ScopedCredentialDescriptor;
	class ScopedCredentialOptions;
	class ScopedCredentialParameters;
	class SecurityPolicyViolationEventInit;
	class ServiceWorkerMessageEventInit;
	class SpeechSynthesisEventInit;
	class StereoPannerOptions;
	class StoreExceptionsInformation;
	class StoreSiteSpecificExceptionsInformation;
	class SyncEventInit;
	class TextDecodeOptions;
	class TextDecoderOptions;
	class TrackEventInit;
	class TransitionEventInit;
	class UnderlyingSink;
	class VRDisplayEventInit;
	class VRLayer;
	class VRStageParameters;
	class WaveShaperOptions;
	class WebAuthnExtensions;
	class WheelEventInit;
	class EventListener;
	class ANGLE_instanced_arrays;
	class AbortController;
	class AbortSignalEventMap;
	class EventTarget;
	class AbortSignal;
	class AbstractWorkerEventMap;
	class AbstractWorker;
	class AesCfbParams;
	class AesCmacParams;
	class AudioNode;
	class AnalyserNode;
	class Animation;
	class AnimationEffectReadOnly;
	class Event;
	class AnimationEvent;
	class AnimationKeyFrame;
	class AnimationOptions;
	class AnimationPlaybackEvent;
	class AnimationPlaybackEventInit;
	class AnimationTimeline;
	class ApplicationCacheEventMap;
	class ApplicationCache;
	class AssignedNodesOptions;
	class Node;
	class Attr;
	class AudioBuffer;
	class AudioBufferSourceNodeEventMap;
	class AudioBufferSourceNode;
	class AudioContextEventMap;
	class AudioContextBase;
	class AudioContext;
	class AudioDestinationNode;
	class AudioListener;
	class AudioParam;
	class AudioProcessingEvent;
	class AudioTrack;
	class AudioTrackListEventMap;
	class AudioTrackList;
	class BarProp;
	class BeforeUnloadEvent;
	class BhxBrowser;
	class BiquadFilterNode;
	class Blob;
	class BlobPropertyBag;
	class Body;
	class BroadcastChannel;
	class BroadcastChannelEventMap;
	class ByteLengthQueuingStrategy;
	class ChildNode;
	class CharacterData;
	class Text;
	class CDATASection;
	class CSS;
	class CSSRule;
	class CSSGroupingRule;
	class CSSConditionRule;
	class CSSFontFaceRule;
	class CSSImportRule;
	class CSSKeyframeRule;
	class CSSKeyframesRule;
	class CSSMediaRule;
	class CSSNamespaceRule;
	class CSSPageRule;
	class CSSRuleList;
	class CSSStyleDeclaration;
	class CSSStyleRule;
	class StyleSheet;
	class CSSStyleSheet;
	class CSSSupportsRule;
	class Cache;
	class CacheStorage;
	class Canvas2DContextAttributes;
	class CanvasGradient;
	class CanvasPathMethods;
	class CanvasPattern;
	class CanvasRenderingContext2D;
	class ChannelMergerNode;
	class ChannelSplitterNode;
	class ClientRect;
	class ClientRectList;
	class ClipboardEvent;
	class ClipboardEventInit;
	class CloseEvent;
	class Comment;
	class UIEvent;
	class CompositionEvent;
	class ComputedTimingProperties;
	class ConcatParams;
	class Console;
	class ContentScriptGlobalScope;
	class ConvolverNode;
	class Coordinates;
	class CountQueuingStrategy;
	class Crypto;
	class CryptoKey;
	class CryptoKeyPair;
	class CustomElementRegistry;
	template<class T>
	class CustomEvent;
	class DOMError;
	class DOMException;
	class DOMImplementation;
	class DOML2DeprecatedColorProperty;
	class DOML2DeprecatedSizeProperty;
	class DOMParser;
	class DOMRectReadOnly;
	class DOMRect;
	class DOMRectList;
	class DOMTokenList;
	class DOMSettableTokenList;
	class DOMStringList;
	class DOMStringMap;
	class TextTrackCue;
	class DataCue;
	class DataTransfer;
	class DataTransferItem;
	class DataTransferItemList;
	class DeferredPermissionRequest;
	class DelayNode;
	class DeviceAcceleration;
	class DeviceLightEvent;
	class DeviceMotionEvent;
	class DeviceOrientationEvent;
	class DeviceRotationRate;
	class DhImportKeyParams;
	class DhKeyAlgorithm;
	class DhKeyDeriveParams;
	class DhKeyGenParams;
	class GlobalEventHandlersEventMap;
	class DocumentEventMap;
	class GlobalEventHandlers;
	class ParentNode;
	class DocumentEvent;
	class Document;
	class DocumentFragment;
	class DocumentOrShadowRoot;
	class DocumentType;
	class MouseEvent;
	class DragEvent;
	class DynamicsCompressorNode;
	class EXT_blend_minmax;
	class EXT_frag_depth;
	class EXT_sRGB;
	class EXT_shader_texture_lod;
	class EXT_texture_filter_anisotropic;
	class ElementEventMap;
	class ElementTraversal;
	class Element;
	class ElementCSSInlineStyle;
	class ElementCreationOptions;
	class ElementDefinitionOptions;
	class ErrorEvent;
	class EventListenerObject;
	class EventSource;
	class EventSourceInit;
	class ExtensionScriptApis;
	class External;
	class File;
	class FileList;
	class FilePropertyBag;
	class FileReaderEventMap;
	class FileReader;
	class ProgressEvent;
	class FileReaderProgressEvent;
	class FocusEvent;
	class FocusNavigationEvent;
	class FormData;
	class GainNode;
	class Gamepad;
	class GamepadButton;
	class GamepadEvent;
	class GamepadHapticActuator;
	class GamepadPose;
	class Geolocation;
	class GetSVGDocument;
	class GlobalFetch;
	class HTMLAllCollection;
	class HTMLElement;
	class HTMLHyperlinkElementUtils;
	class HTMLAnchorElement;
	class HTMLAppletElement;
	class HTMLAreaElement;
	class HTMLCollectionBase;
	class HTMLAreasCollection;
	class HTMLMediaElement;
	class HTMLAudioElement;
	class HTMLBRElement;
	class HTMLBaseElement;
	class HTMLBaseFontElement;
	class HTMLElementEventMap;
	class WindowEventHandlersEventMap;
	class HTMLBodyElementEventMap;
	class WindowEventHandlers;
	class HTMLBodyElement;
	class HTMLButtonElement;
	class HTMLCanvasElement;
	class HTMLCollection;
	template<class T>
	class HTMLCollectionOf;
	class HTMLDListElement;
	class HTMLDataElement;
	class HTMLDataListElement;
	class HTMLDetailsElement;
	class HTMLDialogElement;
	class HTMLDirectoryElement;
	class HTMLDivElement;
	class HTMLDocument;
	class HTMLEmbedElement;
	class HTMLFieldSetElement;
	class HTMLFontElement;
	class HTMLFormControlsCollection;
	class HTMLFormElement;
	class HTMLFrameElementEventMap;
	class HTMLFrameElement;
	class HTMLFrameSetElementEventMap;
	class HTMLFrameSetElement;
	class HTMLHRElement;
	class HTMLHeadElement;
	class HTMLHeadingElement;
	class HTMLHtmlElement;
	class HTMLIFrameElementEventMap;
	class HTMLIFrameElement;
	class HTMLImageElement;
	class HTMLInputElement;
	class HTMLLIElement;
	class HTMLLabelElement;
	class HTMLLegendElement;
	class LinkStyle;
	class HTMLLinkElement;
	class HTMLMainElement;
	class HTMLMapElement;
	class HTMLMarqueeElementEventMap;
	class HTMLMarqueeElement;
	class HTMLMediaElementEventMap;
	class HTMLMenuElement;
	class HTMLMetaElement;
	class HTMLMeterElement;
	class HTMLModElement;
	class HTMLOListElement;
	class HTMLObjectElement;
	class HTMLOptGroupElement;
	class HTMLOptionElement;
	class HTMLOptionsCollection;
	class HTMLOutputElement;
	class HTMLParagraphElement;
	class HTMLParamElement;
	class HTMLPictureElement;
	class HTMLPreElement;
	class HTMLProgressElement;
	class HTMLQuoteElement;
	class HTMLScriptElement;
	class HTMLSelectElement;
	class HTMLSlotElement;
	class HTMLSourceElement;
	class HTMLSpanElement;
	class HTMLStyleElement;
	class HTMLSummaryElement;
	class HTMLTableCaptionElement;
	class HTMLTableCellElement;
	class HTMLTableColElement;
	class HTMLTableDataCellElement;
	class HTMLTableElement;
	class HTMLTableHeaderCellElement;
	class HTMLTableRowElement;
	class HTMLTableSectionElement;
	class HTMLTemplateElement;
	class HTMLTextAreaElement;
	class HTMLTimeElement;
	class HTMLTitleElement;
	class HTMLTrackElement;
	class HTMLUListElement;
	class HTMLUnknownElement;
	class HTMLVideoElementEventMap;
	class HTMLVideoElement;
	class HTMLegendElement;
	class HashChangeEvent;
	class Headers;
	class History;
	class HkdfCtrParams;
	class IDBArrayKey;
	class IDBCursor;
	class IDBCursorWithValue;
	class IDBDatabaseEventMap;
	class IDBDatabase;
	class IDBEnvironment;
	class IDBFactory;
	class IDBIndex;
	class IDBKeyRange;
	class IDBObjectStore;
	class IDBRequestEventMap;
	class IDBOpenDBRequestEventMap;
	class IDBRequest;
	class IDBOpenDBRequest;
	class IDBTransactionEventMap;
	class IDBTransaction;
	class IDBVersionChangeEvent;
	class IIRFilterNode;
	class ImageBitmap;
	class ImageBitmapOptions;
	class ImageData;
	class IntersectionObserver;
	class IntersectionObserverEntry;
	class KeyboardEvent;
	class ListeningStateChangedEvent;
	class Location;
	class MSAssertion;
	class MSBlobBuilder;
	class MSCredentials;
	class MSDCCEvent;
	class MSDSHEvent;
	class MSFIDOCredentialAssertion;
	class MSFIDOSignature;
	class MSFIDOSignatureAssertion;
	class MSFileSaver;
	class MSGesture;
	class MSGestureEvent;
	class MSGraphicsTrust;
	class MSInputMethodContextEventMap;
	class MSInputMethodContext;
	class MSMediaKeyError;
	class MSMediaKeyMessageEvent;
	class MSMediaKeyNeededEvent;
	class MSMediaKeySession;
	class MSMediaKeys;
	class MSNavigatorDoNotTrack;
	class MSPointerEvent;
	class MSStream;
	class MSStreamReaderEventMap;
	class MSStreamReader;
	class MediaDeviceInfo;
	class MediaDevicesEventMap;
	class MediaDevices;
	class MediaElementAudioSourceNode;
	class MediaEncryptedEvent;
	class MediaError;
	class MediaKeyMessageEvent;
	class MediaKeySession;
	class MediaKeyStatusMap;
	class MediaKeySystemAccess;
	class MediaKeys;
	class MediaList;
	class MediaQueryList;
	class MediaSource;
	class MediaStreamEventMap;
	class MediaStream;
	class MediaStreamAudioSourceNode;
	class MediaStreamError;
	class MediaStreamErrorEvent;
	class MediaStreamEvent;
	class MediaStreamTrackEventMap;
	class MediaStreamTrack;
	class MediaStreamTrackEvent;
	class MessageChannel;
	class MessageEvent;
	class MessagePortEventMap;
	class MessagePort;
	class MimeType;
	class MimeTypeArray;
	class MutationEvent;
	class MutationObserver;
	class MutationRecord;
	class NamedNodeMap;
	class NavigatorID;
	class NavigatorOnLine;
	class NavigatorContentUtils;
	class NavigatorStorageUtils;
	class NavigatorBeacon;
	class NavigatorConcurrentHardware;
	class NavigatorUserMedia;
	class NavigatorLanguage;
	class Navigator;
	class NodeFilter;
	class NodeIterator;
	class NodeList;
	template<class TNode>
	class NodeListOf;
	class NodeSelector;
	class NotificationEventMap;
	class Notification;
	class OfflineAudioCompletionEvent;
	class OfflineAudioContextEventMap;
	class OfflineAudioContext;
	class OscillatorNodeEventMap;
	class OscillatorNode;
	class OverflowEvent;
	class PageTransitionEvent;
	class PannerNode;
	class Path2D;
	class PaymentAddress;
	class PaymentRequestEventMap;
	class PaymentRequest;
	class PaymentRequestUpdateEvent;
	class PaymentResponse;
	class PerfWidgetExternal;
	class Performance;
	class PerformanceEntry;
	class PerformanceMark;
	class PerformanceMeasure;
	class PerformanceNavigation;
	class PerformanceNavigationTiming;
	class PerformanceResourceTiming;
	class PerformanceTiming;
	class PeriodicWave;
	class PermissionRequest;
	class PermissionRequestedEvent;
	class Plugin;
	class PluginArray;
	class PointerEvent;
	class PopStateEvent;
	class Position;
	class PositionError;
	class ProcessingInstruction;
	class PromiseRejectionEvent;
	class PromiseRejectionEventInit;
	class PushManager;
	class PushSubscription;
	class PushSubscriptionOptions;
	class RTCDTMFToneChangeEvent;
	class RTCDtlsTransportEventMap;
	class RTCStatsProvider;
	class RTCDtlsTransport;
	class RTCDtlsTransportStateChangedEvent;
	class RTCDtmfSenderEventMap;
	class RTCDtmfSender;
	class RTCIceCandidate;
	class RTCIceCandidatePairChangedEvent;
	class RTCIceGathererEventMap;
	class RTCIceGatherer;
	class RTCIceGathererEvent;
	class RTCIceTransportEventMap;
	class RTCIceTransport;
	class RTCIceTransportStateChangedEvent;
	class RTCPeerConnectionEventMap;
	class RTCPeerConnection;
	class RTCPeerConnectionIceEvent;
	class RTCRtpReceiverEventMap;
	class RTCRtpReceiver;
	class RTCRtpSenderEventMap;
	class RTCRtpSender;
	class RTCSessionDescription;
	class RTCSrtpSdesTransportEventMap;
	class RTCSrtpSdesTransport;
	class RTCSsrcConflictEvent;
	class RandomSource;
	class Range;
	class ReadableStream;
	class ReadableStreamReader;
	class Request;
	class Response;
	class SVGElement;
	class SVGTests;
	class SVGGraphicsElement;
	class SVGURIReference;
	class SVGAElement;
	class SVGAngle;
	class SVGAnimatedAngle;
	class SVGAnimatedBoolean;
	class SVGAnimatedEnumeration;
	class SVGAnimatedInteger;
	class SVGAnimatedLength;
	class SVGAnimatedLengthList;
	class SVGAnimatedNumber;
	class SVGAnimatedNumberList;
	class SVGAnimatedPoints;
	class SVGAnimatedPreserveAspectRatio;
	class SVGAnimatedRect;
	class SVGAnimatedString;
	class SVGAnimatedTransformList;
	class SVGCircleElement;
	class SVGUnitTypes;
	class SVGClipPathElement;
	class SVGComponentTransferFunctionElement;
	class SVGDefsElement;
	class SVGDescElement;
	class SVGElementEventMap;
	class SVGElementInstance;
	class SVGElementInstanceList;
	class SVGEllipseElement;
	class SVGFilterPrimitiveStandardAttributes;
	class SVGFEBlendElement;
	class SVGFEColorMatrixElement;
	class SVGFEComponentTransferElement;
	class SVGFECompositeElement;
	class SVGFEConvolveMatrixElement;
	class SVGFEDiffuseLightingElement;
	class SVGFEDisplacementMapElement;
	class SVGFEDistantLightElement;
	class SVGFEFloodElement;
	class SVGFEFuncAElement;
	class SVGFEFuncBElement;
	class SVGFEFuncGElement;
	class SVGFEFuncRElement;
	class SVGFEGaussianBlurElement;
	class SVGFEImageElement;
	class SVGFEMergeElement;
	class SVGFEMergeNodeElement;
	class SVGFEMorphologyElement;
	class SVGFEOffsetElement;
	class SVGFEPointLightElement;
	class SVGFESpecularLightingElement;
	class SVGFESpotLightElement;
	class SVGFETileElement;
	class SVGFETurbulenceElement;
	class SVGFilterElement;
	class SVGFitToViewBox;
	class SVGForeignObjectElement;
	class SVGGElement;
	class SVGGradientElement;
	class SVGImageElement;
	class SVGLength;
	class SVGLengthList;
	class SVGLineElement;
	class SVGLinearGradientElement;
	class SVGMarkerElement;
	class SVGMaskElement;
	class SVGMatrix;
	class SVGMetadataElement;
	class SVGNumber;
	class SVGNumberList;
	class SVGPathElement;
	class SVGPathSeg;
	class SVGPathSegArcAbs;
	class SVGPathSegArcRel;
	class SVGPathSegClosePath;
	class SVGPathSegCurvetoCubicAbs;
	class SVGPathSegCurvetoCubicRel;
	class SVGPathSegCurvetoCubicSmoothAbs;
	class SVGPathSegCurvetoCubicSmoothRel;
	class SVGPathSegCurvetoQuadraticAbs;
	class SVGPathSegCurvetoQuadraticRel;
	class SVGPathSegCurvetoQuadraticSmoothAbs;
	class SVGPathSegCurvetoQuadraticSmoothRel;
	class SVGPathSegLinetoAbs;
	class SVGPathSegLinetoHorizontalAbs;
	class SVGPathSegLinetoHorizontalRel;
	class SVGPathSegLinetoRel;
	class SVGPathSegLinetoVerticalAbs;
	class SVGPathSegLinetoVerticalRel;
	class SVGPathSegList;
	class SVGPathSegMovetoAbs;
	class SVGPathSegMovetoRel;
	class SVGPatternElement;
	class SVGPoint;
	class SVGPointList;
	class SVGPolygonElement;
	class SVGPolylineElement;
	class SVGPreserveAspectRatio;
	class SVGRadialGradientElement;
	class SVGRect;
	class SVGRectElement;
	class SVGSVGElementEventMap;
	class SVGZoomAndPan;
	class SVGSVGElement;
	class SVGScriptElement;
	class SVGStopElement;
	class SVGStringList;
	class SVGStylable;
	class SVGStyleElement;
	class SVGSwitchElement;
	class SVGSymbolElement;
	class SVGTextContentElement;
	class SVGTextPositioningElement;
	class SVGTSpanElement;
	class SVGTextElement;
	class SVGTextPathElement;
	class SVGTitleElement;
	class SVGTransform;
	class SVGTransformList;
	class SVGUseElement;
	class SVGViewElement;
	class SVGZoomEvent;
	class ScopedCredential;
	class ScopedCredentialInfo;
	class ScreenEventMap;
	class Screen;
	class ScriptProcessorNodeEventMap;
	class ScriptProcessorNode;
	class ScrollOptions;
	class ScrollIntoViewOptions;
	class ScrollToOptions;
	class SecurityPolicyViolationEvent;
	class Selection;
	class ServiceUIFrameContext;
	class ServiceWorkerEventMap;
	class ServiceWorker;
	class ServiceWorkerContainerEventMap;
	class ServiceWorkerContainer;
	class ServiceWorkerMessageEvent;
	class ServiceWorkerRegistrationEventMap;
	class ServiceWorkerRegistration;
	class ShadowRoot;
	class ShadowRootInit;
	class SourceBuffer;
	class SourceBufferList;
	class SpeechSynthesisEventMap;
	class SpeechSynthesis;
	class SpeechSynthesisEvent;
	class SpeechSynthesisUtteranceEventMap;
	class SpeechSynthesisUtterance;
	class SpeechSynthesisVoice;
	class StereoPannerNode;
	class Storage;
	class StorageEvent;
	class StorageEventInit;
	class StyleMedia;
	class StyleSheetList;
	class SubtleCrypto;
	class SyncManager;
	class TextDecoder;
	class TextEncoder;
	class TextEvent;
	class TextMetrics;
	class TextTrackEventMap;
	class TextTrack;
	class TextTrackCueEventMap;
	class TextTrackCueList;
	class TextTrackListEventMap;
	class TextTrackList;
	class TimeRanges;
	class Touch;
	class TouchEvent;
	class TouchEventInit;
	class TouchList;
	class TrackEvent;
	class TransitionEvent;
	class TreeWalker;
	class URL;
	class URLSearchParams;
	class VRDisplay;
	class VRDisplayCapabilities;
	class VRDisplayEvent;
	class VREyeParameters;
	class VRFieldOfView;
	class VRFrameData;
	class VRPose;
	class ValidityState;
	class VideoPlaybackQuality;
	class VideoTrack;
	class VideoTrackListEventMap;
	class VideoTrackList;
	class WaveShaperNode;
	class WebAuthentication;
	class WebAuthnAssertion;
	class WebKitCSSMatrix;
	class WebKitEntry;
	class WebKitDirectoryEntry;
	class WebKitDirectoryReader;
	class WebKitFileEntry;
	class WebKitFileSystem;
	class WebKitPoint;
	class WebSocketEventMap;
	class WebSocket;
	class WheelEvent;
	class WindowEventMap;
	class WindowTimersExtension;
	class WindowTimers;
	class WindowSessionStorage;
	class WindowLocalStorage;
	class WindowConsole;
	class WindowBase64;
	class Window;
	class WorkerEventMap;
	class Worker;
	class WritableStream;
	class WritableStreamDefaultController;
	class WritableStreamDefaultWriter;
	class XMLDocument;
	class XMLHttpRequestEventTargetEventMap;
	class XMLHttpRequestEventMap;
	class XMLHttpRequestEventTarget;
	class XMLHttpRequest;
	class XMLHttpRequestUpload;
	class XMLSerializer;
	class XPathEvaluator;
	class XPathExpression;
	class XPathNSResolver;
	class XPathResult;
	class XSLTProcessor;
	class webkitRTCPeerConnection;
	class DecodeErrorCallback;
	class DecodeSuccessCallback;
	class ErrorEventHandler;
	class EventHandlerNonNull;
	class ForEachCallback;
	class FrameRequestCallback;
	class FunctionStringCallback;
	class IntersectionObserverCallback;
	class MSLaunchUriCallback;
	class MediaQueryListListener;
	class MutationCallback;
	class NavigatorUserMediaErrorCallback;
	class NavigatorUserMediaSuccessCallback;
	class NotificationPermissionCallback;
	class PositionCallback;
	class PositionErrorCallback;
	class RTCPeerConnectionErrorCallback;
	class RTCSessionDescriptionCallback;
	class RTCStatsCallback;
	class VoidFunction;
	class WritableStreamChunkCallback;
	class WritableStreamDefaultControllerCallback;
	class WritableStreamErrorCallback;
	class HTMLElementTagNameMap;
	class SVGElementTagNameMap;
	class ElementTagNameMap;
	class ActiveXObject;
	class ITextWriter;
	class TextStreamBase;
	class TextStreamWriter;
	class TextStreamReader;
	class PropertyDescriptor: public Object{
	public:
		bool get_configurable();
		void set_configurable(bool);
		bool get_enumerable();
		void set_enumerable(bool);
		template<class ReturnType = Object*> ReturnType get_value();
		void set_value(Object*);
		bool get_writable();
		void set_writable(bool);
		template<class ReturnType = Object*> ReturnType get();
		void set(Object* v);
	};

	class PropertyDescriptorMap: public Object{
	public:
		PropertyDescriptor*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<PropertyDescriptor*>(this, 0)[index];
		}
		PropertyDescriptor* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<PropertyDescriptor*>(this, 0)[index];
		}
	};

	class IArguments: public Object{
	public:
		Object*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
		Object* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
		double get_length();
		void set_length(double);
		Function* get_callee();
		void set_callee(Function*);
	};

	template<class T>
	class ReadonlyArray: public Object{
	public:
		double get_length();
		String* toString();
		String* toLocaleString();
		template<typename... Args> Array* concat(Args&&... items) { return static_cast<const ReadonlyArray*>(this)->concat(static_cast<Object*>(static_cast<Args&&>(items))...); }
		Array* concat();
		String* join();
		String* join(const String& separator);
		Array* slice();
		Array* slice(double start);
		Array* slice(double start, double end);
		double indexOf(T* searchElement);
		double indexOf(T* searchElement, double fromIndex);
		double lastIndexOf(T* searchElement);
		double lastIndexOf(T* searchElement, double fromIndex);
		bool every(EventListener* callbackfn);
		bool every(EventListener* callbackfn, Object* thisArg);
		bool some(EventListener* callbackfn);
		bool some(EventListener* callbackfn, Object* thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(EventListener* callbackfn, Object* thisArg);
		template<class U> Array* map(EventListener* callbackfn);
		template<class U> Array* map(EventListener* callbackfn, Object* thisArg);
		Array* filter(EventListener* callbackfn);
		Array* filter(EventListener* callbackfn, Object* thisArg);
		T* reduce(EventListener* callbackfn);
		T* reduce(EventListener* callbackfn, T* initialValue);
		template<class U> U* reduce(EventListener* callbackfn, U* initialValue);
		T* reduceRight(EventListener* callbackfn);
		T* reduceRight(EventListener* callbackfn, T* initialValue);
		template<class U> U* reduceRight(EventListener* callbackfn, U* initialValue);
		T*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<T*>(this, 0)[index];
		}
		T* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<T*>(this, 0)[index];
		}
	private:
		template<typename... Args> Array* concat(Args... items) const;
	};

	class TemplateStringsArray: public ReadonlyArray<String> {
	public:
		ReadonlyArray<String>* get_raw();
	};

	class ImportMeta: public Object{
	public:
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
		template<typename... Args> double max(Args&&... values) { return static_cast<const Math*>(this)->max(static_cast<double>(static_cast<Args&&>(values))...); }
		double max();
		template<typename... Args> double min(Args&&... values) { return static_cast<const Math*>(this)->min(static_cast<double>(static_cast<Args&&>(values))...); }
		double min();
		double pow(double x, double y);
		double random();
		double round(double x);
		double sin(double x);
		double sqrt(double x);
		double tan(double x);
	private:
		template<typename... Args> double max(Args... values) const;
		template<typename... Args> double min(Args... values) const;
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
		EventListener* get_getVarDate();
		void set_getVarDate(EventListener*);
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
		static double parse(const String& s) [[cheerp::static]];
		static double UTC(double year, double month) [[cheerp::static]];
		static double UTC(double year, double month, double date) [[cheerp::static]];
		static double UTC(double year, double month, double date, double hours) [[cheerp::static]];
		static double UTC(double year, double month, double date, double hours, double minutes) [[cheerp::static]];
		static double UTC(double year, double month, double date, double hours, double minutes, double seconds) [[cheerp::static]];
		static double UTC(double year, double month, double date, double hours, double minutes, double seconds, double ms) [[cheerp::static]];
		static double now() [[cheerp::static]];
	};

	class RegExpMatchArray: public Array {
	public:
		double get_index();
		void set_index(double);
		String* get_input();
		void set_input(const String&);
	};

	class RegExpExecArray: public Array {
	public:
		double get_index();
		void set_index(double);
		String* get_input();
		void set_input(const String&);
	};

	class RegExp: public Object{
	public:
		RegExpExecArray* exec(const String& string);
		bool test(const String& string);
		String* get_source();
		bool get_global();
		bool get_ignoreCase();
		bool get_multiline();
		double get_lastIndex();
		void set_lastIndex(double);
		template<class ReturnType = Object*> ReturnType compile();
		RegExp(RegExp* pattern);
		RegExp(const String& pattern);
		RegExp(const String& pattern, const String& flags);
		RegExp* get_prototype();
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
		String* get_stack();
		void set_stack(const String&);
		Error();
		Error(const String& message);
		Error* get_prototype();
	};

	class EvalError: public Error {
	public:
		EvalError();
		EvalError(const String& message);
		EvalError* get_prototype();
	};

	class RangeError: public Error {
	public:
		RangeError();
		RangeError(const String& message);
		RangeError* get_prototype();
	};

	class ReferenceError: public Error {
	public:
		ReferenceError();
		ReferenceError(const String& message);
		ReferenceError* get_prototype();
	};

	class SyntaxError: public Error {
	public:
		SyntaxError();
		SyntaxError(const String& message);
		SyntaxError* get_prototype();
	};

	class TypeError: public Error {
	public:
		TypeError();
		TypeError(const String& message);
		TypeError* get_prototype();
	};

	class URIError: public Error {
	public:
		URIError();
		URIError(const String& message);
		URIError* get_prototype();
	};

	class JSON: public Object{
	public:
		template<class ReturnType = Object*> ReturnType parse(const String& text);
		template<class ReturnType = Object*> ReturnType parse(const String& text, EventListener* reviver);
		String* stringify(Object* value);
		String* stringify(Object* value, EventListener* replacer);
		String* stringify(Object* value, EventListener* replacer, const String& space);
		String* stringify(Object* value, EventListener* replacer, double space);
		String* stringify(Object* value, Array* replacer);
		String* stringify(Object* value, Array* replacer, const String& space);
		String* stringify(Object* value, Array* replacer, double space);
	};

	template<class T>
	class ConcatArray: public Object{
	public:
		double get_length();
		T*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<T*>(this, 0)[index];
		}
		T* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<T*>(this, 0)[index];
		}
		String* join();
		String* join(const String& separator);
		Array* slice();
		Array* slice(double start);
		Array* slice(double start, double end);
	};

	template<class T>
	class TypedPropertyDescriptor: public Object{
	public:
		bool get_enumerable();
		void set_enumerable(bool);
		bool get_configurable();
		void set_configurable(bool);
		bool get_writable();
		void set_writable(bool);
		T* get_value();
		void set_value(T*);
		EventListener* get_get();
		void set_get(EventListener*);
		EventListener* get_set();
		void set_set(EventListener*);
	};

	class Promise: public Object{
	public:
		Promise* then();
		Promise* then(EventListener* onfulfilled);
		Promise* then(EventListener* onfulfilled, EventListener* onrejected);
		Promise* _catch();
		Promise* _catch(EventListener* onrejected);
	};

	template<class T>
	class ThisType: public Object{
	public:
	};

	class ArrayBuffer: public Object{
	public:
		double get_byteLength();
		ArrayBuffer* slice(double begin);
		ArrayBuffer* slice(double begin, double end);
		ArrayBuffer* get_prototype();
		ArrayBuffer(double byteLength);
		static bool isView(Object* arg) [[cheerp::static]];
	};

	class ArrayBufferTypes: public Object{
	public:
		ArrayBuffer* get_ArrayBuffer();
		void set_ArrayBuffer(ArrayBuffer*);
	};

	class ArrayBufferView: public Object{
	public:
		ArrayBuffer* get_buffer();
		void set_buffer(ArrayBuffer*);
		double get_byteLength();
		void set_byteLength(double);
		double get_byteOffset();
		void set_byteOffset(double);
	};

	class DataView: public Object{
	public:
		ArrayBuffer* get_buffer();
		double get_byteLength();
		double get_byteOffset();
		double getFloat32(double byteOffset);
		double getFloat32(double byteOffset, bool littleEndian);
		double getFloat64(double byteOffset);
		double getFloat64(double byteOffset, bool littleEndian);
		double getInt8(double byteOffset);
		double getInt16(double byteOffset);
		double getInt16(double byteOffset, bool littleEndian);
		double getInt32(double byteOffset);
		double getInt32(double byteOffset, bool littleEndian);
		double getUint8(double byteOffset);
		double getUint16(double byteOffset);
		double getUint16(double byteOffset, bool littleEndian);
		double getUint32(double byteOffset);
		double getUint32(double byteOffset, bool littleEndian);
		void setFloat32(double byteOffset, double value);
		void setFloat32(double byteOffset, double value, bool littleEndian);
		void setFloat64(double byteOffset, double value);
		void setFloat64(double byteOffset, double value, bool littleEndian);
		void setInt8(double byteOffset, double value);
		void setInt16(double byteOffset, double value);
		void setInt16(double byteOffset, double value, bool littleEndian);
		void setInt32(double byteOffset, double value);
		void setInt32(double byteOffset, double value, bool littleEndian);
		void setUint8(double byteOffset, double value);
		void setUint16(double byteOffset, double value);
		void setUint16(double byteOffset, double value, bool littleEndian);
		void setUint32(double byteOffset, double value);
		void setUint32(double byteOffset, double value, bool littleEndian);
		template<class ArrayBufferLike> DataView(ArrayBufferLike* buffer);
		template<class ArrayBufferLike> DataView(ArrayBufferLike* buffer, double byteOffset);
		template<class ArrayBufferLike> DataView(ArrayBufferLike* buffer, double byteOffset, double byteLength);
	};

	class Int8Array: public ArrayBufferView {
	public:
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start);
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start, double end);
		bool every(EventListener* callbackfn);
		bool every(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType fill(double value);
		template<class ReturnType = Object*> ReturnType fill(double value, double start);
		template<class ReturnType = Object*> ReturnType fill(double value, double start, double end);
		Int8Array* filter(EventListener* callbackfn);
		Int8Array* filter(EventListener* callbackfn, Object* thisArg);
		double find(EventListener* predicate);
		double find(EventListener* predicate, Object* thisArg);
		double findIndex(EventListener* predicate);
		double findIndex(EventListener* predicate, Object* thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(EventListener* callbackfn, Object* thisArg);
		double indexOf(double searchElement);
		double indexOf(double searchElement, double fromIndex);
		String* join();
		String* join(const String& separator);
		double lastIndexOf(double searchElement);
		double lastIndexOf(double searchElement, double fromIndex);
		double get_length();
		Int8Array* map(EventListener* callbackfn);
		Int8Array* map(EventListener* callbackfn, Object* thisArg);
		double reduce(EventListener* callbackfn);
		double reduce(EventListener* callbackfn, double initialValue);
		template<class U> U* reduce(EventListener* callbackfn, U* initialValue);
		double reduceRight(EventListener* callbackfn);
		double reduceRight(EventListener* callbackfn, double initialValue);
		template<class U> U* reduceRight(EventListener* callbackfn, U* initialValue);
		Int8Array* reverse();
		template<class ArrayLike> void set(ArrayLike* array);
		template<class ArrayLike> void set(ArrayLike* array, double offset);
		Int8Array* slice();
		Int8Array* slice(double start);
		Int8Array* slice(double start, double end);
		bool some(EventListener* callbackfn);
		bool some(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType sort();
		template<class ReturnType = Object*> ReturnType sort(EventListener* compareFn);
		Int8Array* subarray(double begin);
		Int8Array* subarray(double begin, double end);
		String* toLocaleString();
		String* toString();
		char& operator[](int index)
		{
			return __builtin_cheerp_make_regular<char>(this, 0)[index];
		}
		char operator[](int index) const
		{
			return __builtin_cheerp_make_regular<char>(this, 0)[index];
		}
		Int8Array* get_prototype();
		Int8Array(double length);
		template<class ArrayLike> Int8Array(ArrayLike* arrayOrArrayBuffer);
		template<class ArrayBufferLike> Int8Array(ArrayBufferLike* buffer, double byteOffset);
		template<class ArrayBufferLike> Int8Array(ArrayBufferLike* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		template<typename... Args> static Int8Array* of(Args&&... items) { return of(static_cast<double>(static_cast<Args&&>(items))...); }
		static Int8Array* of() [[cheerp::static]];
		template<class ArrayLike> static Int8Array* from(ArrayLike* arrayLike) [[cheerp::static]];
		template<class ArrayLike> static Int8Array* from(ArrayLike* arrayLike, EventListener* mapfn) [[cheerp::static]];
		template<class ArrayLike> static Int8Array* from(ArrayLike* arrayLike, EventListener* mapfn, Object* thisArg) [[cheerp::static]];
	};

	class Uint8Array: public ArrayBufferView {
	public:
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start);
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start, double end);
		bool every(EventListener* callbackfn);
		bool every(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType fill(double value);
		template<class ReturnType = Object*> ReturnType fill(double value, double start);
		template<class ReturnType = Object*> ReturnType fill(double value, double start, double end);
		Uint8Array* filter(EventListener* callbackfn);
		Uint8Array* filter(EventListener* callbackfn, Object* thisArg);
		double find(EventListener* predicate);
		double find(EventListener* predicate, Object* thisArg);
		double findIndex(EventListener* predicate);
		double findIndex(EventListener* predicate, Object* thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(EventListener* callbackfn, Object* thisArg);
		double indexOf(double searchElement);
		double indexOf(double searchElement, double fromIndex);
		String* join();
		String* join(const String& separator);
		double lastIndexOf(double searchElement);
		double lastIndexOf(double searchElement, double fromIndex);
		double get_length();
		Uint8Array* map(EventListener* callbackfn);
		Uint8Array* map(EventListener* callbackfn, Object* thisArg);
		double reduce(EventListener* callbackfn);
		double reduce(EventListener* callbackfn, double initialValue);
		template<class U> U* reduce(EventListener* callbackfn, U* initialValue);
		double reduceRight(EventListener* callbackfn);
		double reduceRight(EventListener* callbackfn, double initialValue);
		template<class U> U* reduceRight(EventListener* callbackfn, U* initialValue);
		Uint8Array* reverse();
		template<class ArrayLike> void set(ArrayLike* array);
		template<class ArrayLike> void set(ArrayLike* array, double offset);
		Uint8Array* slice();
		Uint8Array* slice(double start);
		Uint8Array* slice(double start, double end);
		bool some(EventListener* callbackfn);
		bool some(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType sort();
		template<class ReturnType = Object*> ReturnType sort(EventListener* compareFn);
		Uint8Array* subarray(double begin);
		Uint8Array* subarray(double begin, double end);
		String* toLocaleString();
		String* toString();
		unsigned char& operator[](int index)
		{
			return __builtin_cheerp_make_regular<unsigned char>(this, 0)[index];
		}
		unsigned char operator[](int index) const
		{
			return __builtin_cheerp_make_regular<unsigned char>(this, 0)[index];
		}
		Uint8Array* get_prototype();
		Uint8Array(double length);
		template<class ArrayLike> Uint8Array(ArrayLike* arrayOrArrayBuffer);
		template<class ArrayBufferLike> Uint8Array(ArrayBufferLike* buffer, double byteOffset);
		template<class ArrayBufferLike> Uint8Array(ArrayBufferLike* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		template<typename... Args> static Uint8Array* of(Args&&... items) { return of(static_cast<double>(static_cast<Args&&>(items))...); }
		static Uint8Array* of() [[cheerp::static]];
		template<class ArrayLike> static Uint8Array* from(ArrayLike* arrayLike) [[cheerp::static]];
		template<class ArrayLike> static Uint8Array* from(ArrayLike* arrayLike, EventListener* mapfn) [[cheerp::static]];
		template<class ArrayLike> static Uint8Array* from(ArrayLike* arrayLike, EventListener* mapfn, Object* thisArg) [[cheerp::static]];
	};

	class Uint8ClampedArray: public ArrayBufferView {
	public:
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start);
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start, double end);
		bool every(EventListener* callbackfn);
		bool every(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType fill(double value);
		template<class ReturnType = Object*> ReturnType fill(double value, double start);
		template<class ReturnType = Object*> ReturnType fill(double value, double start, double end);
		Uint8ClampedArray* filter(EventListener* callbackfn);
		Uint8ClampedArray* filter(EventListener* callbackfn, Object* thisArg);
		double find(EventListener* predicate);
		double find(EventListener* predicate, Object* thisArg);
		double findIndex(EventListener* predicate);
		double findIndex(EventListener* predicate, Object* thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(EventListener* callbackfn, Object* thisArg);
		double indexOf(double searchElement);
		double indexOf(double searchElement, double fromIndex);
		String* join();
		String* join(const String& separator);
		double lastIndexOf(double searchElement);
		double lastIndexOf(double searchElement, double fromIndex);
		double get_length();
		Uint8ClampedArray* map(EventListener* callbackfn);
		Uint8ClampedArray* map(EventListener* callbackfn, Object* thisArg);
		double reduce(EventListener* callbackfn);
		double reduce(EventListener* callbackfn, double initialValue);
		template<class U> U* reduce(EventListener* callbackfn, U* initialValue);
		double reduceRight(EventListener* callbackfn);
		double reduceRight(EventListener* callbackfn, double initialValue);
		template<class U> U* reduceRight(EventListener* callbackfn, U* initialValue);
		Uint8ClampedArray* reverse();
		template<class ArrayLike> void set(ArrayLike* array);
		template<class ArrayLike> void set(ArrayLike* array, double offset);
		Uint8ClampedArray* slice();
		Uint8ClampedArray* slice(double start);
		Uint8ClampedArray* slice(double start, double end);
		bool some(EventListener* callbackfn);
		bool some(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType sort();
		template<class ReturnType = Object*> ReturnType sort(EventListener* compareFn);
		Uint8ClampedArray* subarray(double begin);
		Uint8ClampedArray* subarray(double begin, double end);
		String* toLocaleString();
		String* toString();
		double& operator[](int index)
		{
			return __builtin_cheerp_make_regular<double>(this, 0)[index];
		}
		double operator[](int index) const
		{
			return __builtin_cheerp_make_regular<double>(this, 0)[index];
		}
		Uint8ClampedArray* get_prototype();
		Uint8ClampedArray(double length);
		template<class ArrayLike> Uint8ClampedArray(ArrayLike* arrayOrArrayBuffer);
		template<class ArrayBufferLike> Uint8ClampedArray(ArrayBufferLike* buffer, double byteOffset);
		template<class ArrayBufferLike> Uint8ClampedArray(ArrayBufferLike* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		template<typename... Args> static Uint8ClampedArray* of(Args&&... items) { return of(static_cast<double>(static_cast<Args&&>(items))...); }
		static Uint8ClampedArray* of() [[cheerp::static]];
		template<class ArrayLike> static Uint8ClampedArray* from(ArrayLike* arrayLike) [[cheerp::static]];
		template<class ArrayLike> static Uint8ClampedArray* from(ArrayLike* arrayLike, EventListener* mapfn) [[cheerp::static]];
		template<class ArrayLike> static Uint8ClampedArray* from(ArrayLike* arrayLike, EventListener* mapfn, Object* thisArg) [[cheerp::static]];
	};

	class Int16Array: public ArrayBufferView {
	public:
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start);
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start, double end);
		bool every(EventListener* callbackfn);
		bool every(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType fill(double value);
		template<class ReturnType = Object*> ReturnType fill(double value, double start);
		template<class ReturnType = Object*> ReturnType fill(double value, double start, double end);
		Int16Array* filter(EventListener* callbackfn);
		Int16Array* filter(EventListener* callbackfn, Object* thisArg);
		double find(EventListener* predicate);
		double find(EventListener* predicate, Object* thisArg);
		double findIndex(EventListener* predicate);
		double findIndex(EventListener* predicate, Object* thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(EventListener* callbackfn, Object* thisArg);
		double indexOf(double searchElement);
		double indexOf(double searchElement, double fromIndex);
		String* join();
		String* join(const String& separator);
		double lastIndexOf(double searchElement);
		double lastIndexOf(double searchElement, double fromIndex);
		double get_length();
		Int16Array* map(EventListener* callbackfn);
		Int16Array* map(EventListener* callbackfn, Object* thisArg);
		double reduce(EventListener* callbackfn);
		double reduce(EventListener* callbackfn, double initialValue);
		template<class U> U* reduce(EventListener* callbackfn, U* initialValue);
		double reduceRight(EventListener* callbackfn);
		double reduceRight(EventListener* callbackfn, double initialValue);
		template<class U> U* reduceRight(EventListener* callbackfn, U* initialValue);
		Int16Array* reverse();
		template<class ArrayLike> void set(ArrayLike* array);
		template<class ArrayLike> void set(ArrayLike* array, double offset);
		Int16Array* slice();
		Int16Array* slice(double start);
		Int16Array* slice(double start, double end);
		bool some(EventListener* callbackfn);
		bool some(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType sort();
		template<class ReturnType = Object*> ReturnType sort(EventListener* compareFn);
		Int16Array* subarray(double begin);
		Int16Array* subarray(double begin, double end);
		String* toLocaleString();
		String* toString();
		short& operator[](int index)
		{
			return __builtin_cheerp_make_regular<short>(this, 0)[index];
		}
		short operator[](int index) const
		{
			return __builtin_cheerp_make_regular<short>(this, 0)[index];
		}
		Int16Array* get_prototype();
		Int16Array(double length);
		template<class ArrayLike> Int16Array(ArrayLike* arrayOrArrayBuffer);
		template<class ArrayBufferLike> Int16Array(ArrayBufferLike* buffer, double byteOffset);
		template<class ArrayBufferLike> Int16Array(ArrayBufferLike* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		template<typename... Args> static Int16Array* of(Args&&... items) { return of(static_cast<double>(static_cast<Args&&>(items))...); }
		static Int16Array* of() [[cheerp::static]];
		template<class ArrayLike> static Int16Array* from(ArrayLike* arrayLike) [[cheerp::static]];
		template<class ArrayLike> static Int16Array* from(ArrayLike* arrayLike, EventListener* mapfn) [[cheerp::static]];
		template<class ArrayLike> static Int16Array* from(ArrayLike* arrayLike, EventListener* mapfn, Object* thisArg) [[cheerp::static]];
	};

	class Uint16Array: public ArrayBufferView {
	public:
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start);
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start, double end);
		bool every(EventListener* callbackfn);
		bool every(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType fill(double value);
		template<class ReturnType = Object*> ReturnType fill(double value, double start);
		template<class ReturnType = Object*> ReturnType fill(double value, double start, double end);
		Uint16Array* filter(EventListener* callbackfn);
		Uint16Array* filter(EventListener* callbackfn, Object* thisArg);
		double find(EventListener* predicate);
		double find(EventListener* predicate, Object* thisArg);
		double findIndex(EventListener* predicate);
		double findIndex(EventListener* predicate, Object* thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(EventListener* callbackfn, Object* thisArg);
		double indexOf(double searchElement);
		double indexOf(double searchElement, double fromIndex);
		String* join();
		String* join(const String& separator);
		double lastIndexOf(double searchElement);
		double lastIndexOf(double searchElement, double fromIndex);
		double get_length();
		Uint16Array* map(EventListener* callbackfn);
		Uint16Array* map(EventListener* callbackfn, Object* thisArg);
		double reduce(EventListener* callbackfn);
		double reduce(EventListener* callbackfn, double initialValue);
		template<class U> U* reduce(EventListener* callbackfn, U* initialValue);
		double reduceRight(EventListener* callbackfn);
		double reduceRight(EventListener* callbackfn, double initialValue);
		template<class U> U* reduceRight(EventListener* callbackfn, U* initialValue);
		Uint16Array* reverse();
		template<class ArrayLike> void set(ArrayLike* array);
		template<class ArrayLike> void set(ArrayLike* array, double offset);
		Uint16Array* slice();
		Uint16Array* slice(double start);
		Uint16Array* slice(double start, double end);
		bool some(EventListener* callbackfn);
		bool some(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType sort();
		template<class ReturnType = Object*> ReturnType sort(EventListener* compareFn);
		Uint16Array* subarray(double begin);
		Uint16Array* subarray(double begin, double end);
		String* toLocaleString();
		String* toString();
		unsigned short& operator[](int index)
		{
			return __builtin_cheerp_make_regular<unsigned short>(this, 0)[index];
		}
		unsigned short operator[](int index) const
		{
			return __builtin_cheerp_make_regular<unsigned short>(this, 0)[index];
		}
		Uint16Array* get_prototype();
		Uint16Array(double length);
		template<class ArrayLike> Uint16Array(ArrayLike* arrayOrArrayBuffer);
		template<class ArrayBufferLike> Uint16Array(ArrayBufferLike* buffer, double byteOffset);
		template<class ArrayBufferLike> Uint16Array(ArrayBufferLike* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		template<typename... Args> static Uint16Array* of(Args&&... items) { return of(static_cast<double>(static_cast<Args&&>(items))...); }
		static Uint16Array* of() [[cheerp::static]];
		template<class ArrayLike> static Uint16Array* from(ArrayLike* arrayLike) [[cheerp::static]];
		template<class ArrayLike> static Uint16Array* from(ArrayLike* arrayLike, EventListener* mapfn) [[cheerp::static]];
		template<class ArrayLike> static Uint16Array* from(ArrayLike* arrayLike, EventListener* mapfn, Object* thisArg) [[cheerp::static]];
	};

	class Int32Array: public ArrayBufferView {
	public:
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start);
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start, double end);
		bool every(EventListener* callbackfn);
		bool every(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType fill(double value);
		template<class ReturnType = Object*> ReturnType fill(double value, double start);
		template<class ReturnType = Object*> ReturnType fill(double value, double start, double end);
		Int32Array* filter(EventListener* callbackfn);
		Int32Array* filter(EventListener* callbackfn, Object* thisArg);
		double find(EventListener* predicate);
		double find(EventListener* predicate, Object* thisArg);
		double findIndex(EventListener* predicate);
		double findIndex(EventListener* predicate, Object* thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(EventListener* callbackfn, Object* thisArg);
		double indexOf(double searchElement);
		double indexOf(double searchElement, double fromIndex);
		String* join();
		String* join(const String& separator);
		double lastIndexOf(double searchElement);
		double lastIndexOf(double searchElement, double fromIndex);
		double get_length();
		Int32Array* map(EventListener* callbackfn);
		Int32Array* map(EventListener* callbackfn, Object* thisArg);
		double reduce(EventListener* callbackfn);
		double reduce(EventListener* callbackfn, double initialValue);
		template<class U> U* reduce(EventListener* callbackfn, U* initialValue);
		double reduceRight(EventListener* callbackfn);
		double reduceRight(EventListener* callbackfn, double initialValue);
		template<class U> U* reduceRight(EventListener* callbackfn, U* initialValue);
		Int32Array* reverse();
		template<class ArrayLike> void set(ArrayLike* array);
		template<class ArrayLike> void set(ArrayLike* array, double offset);
		Int32Array* slice();
		Int32Array* slice(double start);
		Int32Array* slice(double start, double end);
		bool some(EventListener* callbackfn);
		bool some(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType sort();
		template<class ReturnType = Object*> ReturnType sort(EventListener* compareFn);
		Int32Array* subarray(double begin);
		Int32Array* subarray(double begin, double end);
		String* toLocaleString();
		String* toString();
		int& operator[](int index)
		{
			return __builtin_cheerp_make_regular<int>(this, 0)[index];
		}
		int operator[](int index) const
		{
			return __builtin_cheerp_make_regular<int>(this, 0)[index];
		}
		Int32Array* get_prototype();
		Int32Array(double length);
		template<class ArrayLike> Int32Array(ArrayLike* arrayOrArrayBuffer);
		template<class ArrayBufferLike> Int32Array(ArrayBufferLike* buffer, double byteOffset);
		template<class ArrayBufferLike> Int32Array(ArrayBufferLike* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		template<typename... Args> static Int32Array* of(Args&&... items) { return of(static_cast<double>(static_cast<Args&&>(items))...); }
		static Int32Array* of() [[cheerp::static]];
		template<class ArrayLike> static Int32Array* from(ArrayLike* arrayLike) [[cheerp::static]];
		template<class ArrayLike> static Int32Array* from(ArrayLike* arrayLike, EventListener* mapfn) [[cheerp::static]];
		template<class ArrayLike> static Int32Array* from(ArrayLike* arrayLike, EventListener* mapfn, Object* thisArg) [[cheerp::static]];
	};

	class Uint32Array: public ArrayBufferView {
	public:
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start);
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start, double end);
		bool every(EventListener* callbackfn);
		bool every(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType fill(double value);
		template<class ReturnType = Object*> ReturnType fill(double value, double start);
		template<class ReturnType = Object*> ReturnType fill(double value, double start, double end);
		Uint32Array* filter(EventListener* callbackfn);
		Uint32Array* filter(EventListener* callbackfn, Object* thisArg);
		double find(EventListener* predicate);
		double find(EventListener* predicate, Object* thisArg);
		double findIndex(EventListener* predicate);
		double findIndex(EventListener* predicate, Object* thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(EventListener* callbackfn, Object* thisArg);
		double indexOf(double searchElement);
		double indexOf(double searchElement, double fromIndex);
		String* join();
		String* join(const String& separator);
		double lastIndexOf(double searchElement);
		double lastIndexOf(double searchElement, double fromIndex);
		double get_length();
		Uint32Array* map(EventListener* callbackfn);
		Uint32Array* map(EventListener* callbackfn, Object* thisArg);
		double reduce(EventListener* callbackfn);
		double reduce(EventListener* callbackfn, double initialValue);
		template<class U> U* reduce(EventListener* callbackfn, U* initialValue);
		double reduceRight(EventListener* callbackfn);
		double reduceRight(EventListener* callbackfn, double initialValue);
		template<class U> U* reduceRight(EventListener* callbackfn, U* initialValue);
		Uint32Array* reverse();
		template<class ArrayLike> void set(ArrayLike* array);
		template<class ArrayLike> void set(ArrayLike* array, double offset);
		Uint32Array* slice();
		Uint32Array* slice(double start);
		Uint32Array* slice(double start, double end);
		bool some(EventListener* callbackfn);
		bool some(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType sort();
		template<class ReturnType = Object*> ReturnType sort(EventListener* compareFn);
		Uint32Array* subarray(double begin);
		Uint32Array* subarray(double begin, double end);
		String* toLocaleString();
		String* toString();
		unsigned int& operator[](int index)
		{
			return __builtin_cheerp_make_regular<unsigned int>(this, 0)[index];
		}
		unsigned int operator[](int index) const
		{
			return __builtin_cheerp_make_regular<unsigned int>(this, 0)[index];
		}
		Uint32Array* get_prototype();
		Uint32Array(double length);
		template<class ArrayLike> Uint32Array(ArrayLike* arrayOrArrayBuffer);
		template<class ArrayBufferLike> Uint32Array(ArrayBufferLike* buffer, double byteOffset);
		template<class ArrayBufferLike> Uint32Array(ArrayBufferLike* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		template<typename... Args> static Uint32Array* of(Args&&... items) { return of(static_cast<double>(static_cast<Args&&>(items))...); }
		static Uint32Array* of() [[cheerp::static]];
		template<class ArrayLike> static Uint32Array* from(ArrayLike* arrayLike) [[cheerp::static]];
		template<class ArrayLike> static Uint32Array* from(ArrayLike* arrayLike, EventListener* mapfn) [[cheerp::static]];
		template<class ArrayLike> static Uint32Array* from(ArrayLike* arrayLike, EventListener* mapfn, Object* thisArg) [[cheerp::static]];
	};

	class Float32Array: public ArrayBufferView {
	public:
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start);
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start, double end);
		bool every(EventListener* callbackfn);
		bool every(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType fill(double value);
		template<class ReturnType = Object*> ReturnType fill(double value, double start);
		template<class ReturnType = Object*> ReturnType fill(double value, double start, double end);
		Float32Array* filter(EventListener* callbackfn);
		Float32Array* filter(EventListener* callbackfn, Object* thisArg);
		double find(EventListener* predicate);
		double find(EventListener* predicate, Object* thisArg);
		double findIndex(EventListener* predicate);
		double findIndex(EventListener* predicate, Object* thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(EventListener* callbackfn, Object* thisArg);
		double indexOf(double searchElement);
		double indexOf(double searchElement, double fromIndex);
		String* join();
		String* join(const String& separator);
		double lastIndexOf(double searchElement);
		double lastIndexOf(double searchElement, double fromIndex);
		double get_length();
		Float32Array* map(EventListener* callbackfn);
		Float32Array* map(EventListener* callbackfn, Object* thisArg);
		double reduce(EventListener* callbackfn);
		double reduce(EventListener* callbackfn, double initialValue);
		template<class U> U* reduce(EventListener* callbackfn, U* initialValue);
		double reduceRight(EventListener* callbackfn);
		double reduceRight(EventListener* callbackfn, double initialValue);
		template<class U> U* reduceRight(EventListener* callbackfn, U* initialValue);
		Float32Array* reverse();
		template<class ArrayLike> void set(ArrayLike* array);
		template<class ArrayLike> void set(ArrayLike* array, double offset);
		Float32Array* slice();
		Float32Array* slice(double start);
		Float32Array* slice(double start, double end);
		bool some(EventListener* callbackfn);
		bool some(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType sort();
		template<class ReturnType = Object*> ReturnType sort(EventListener* compareFn);
		Float32Array* subarray(double begin);
		Float32Array* subarray(double begin, double end);
		String* toLocaleString();
		String* toString();
		float& operator[](int index)
		{
			return __builtin_cheerp_make_regular<float>(this, 0)[index];
		}
		float operator[](int index) const
		{
			return __builtin_cheerp_make_regular<float>(this, 0)[index];
		}
		Float32Array* get_prototype();
		Float32Array(double length);
		template<class ArrayLike> Float32Array(ArrayLike* arrayOrArrayBuffer);
		template<class ArrayBufferLike> Float32Array(ArrayBufferLike* buffer, double byteOffset);
		template<class ArrayBufferLike> Float32Array(ArrayBufferLike* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		template<typename... Args> static Float32Array* of(Args&&... items) { return of(static_cast<double>(static_cast<Args&&>(items))...); }
		static Float32Array* of() [[cheerp::static]];
		template<class ArrayLike> static Float32Array* from(ArrayLike* arrayLike) [[cheerp::static]];
		template<class ArrayLike> static Float32Array* from(ArrayLike* arrayLike, EventListener* mapfn) [[cheerp::static]];
		template<class ArrayLike> static Float32Array* from(ArrayLike* arrayLike, EventListener* mapfn, Object* thisArg) [[cheerp::static]];
	};

	class Float64Array: public ArrayBufferView {
	public:
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start);
		template<class ReturnType = Object*> ReturnType copyWithin(double target, double start, double end);
		bool every(EventListener* callbackfn);
		bool every(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType fill(double value);
		template<class ReturnType = Object*> ReturnType fill(double value, double start);
		template<class ReturnType = Object*> ReturnType fill(double value, double start, double end);
		Float64Array* filter(EventListener* callbackfn);
		Float64Array* filter(EventListener* callbackfn, Object* thisArg);
		double find(EventListener* predicate);
		double find(EventListener* predicate, Object* thisArg);
		double findIndex(EventListener* predicate);
		double findIndex(EventListener* predicate, Object* thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(EventListener* callbackfn, Object* thisArg);
		double indexOf(double searchElement);
		double indexOf(double searchElement, double fromIndex);
		String* join();
		String* join(const String& separator);
		double lastIndexOf(double searchElement);
		double lastIndexOf(double searchElement, double fromIndex);
		double get_length();
		Float64Array* map(EventListener* callbackfn);
		Float64Array* map(EventListener* callbackfn, Object* thisArg);
		double reduce(EventListener* callbackfn);
		double reduce(EventListener* callbackfn, double initialValue);
		template<class U> U* reduce(EventListener* callbackfn, U* initialValue);
		double reduceRight(EventListener* callbackfn);
		double reduceRight(EventListener* callbackfn, double initialValue);
		template<class U> U* reduceRight(EventListener* callbackfn, U* initialValue);
		Float64Array* reverse();
		template<class ArrayLike> void set(ArrayLike* array);
		template<class ArrayLike> void set(ArrayLike* array, double offset);
		Float64Array* slice();
		Float64Array* slice(double start);
		Float64Array* slice(double start, double end);
		bool some(EventListener* callbackfn);
		bool some(EventListener* callbackfn, Object* thisArg);
		template<class ReturnType = Object*> ReturnType sort();
		template<class ReturnType = Object*> ReturnType sort(EventListener* compareFn);
		Float64Array* subarray(double begin);
		Float64Array* subarray(double begin, double end);
		String* toLocaleString();
		String* toString();
		double& operator[](int index)
		{
			return __builtin_cheerp_make_regular<double>(this, 0)[index];
		}
		double operator[](int index) const
		{
			return __builtin_cheerp_make_regular<double>(this, 0)[index];
		}
		Float64Array* get_prototype();
		Float64Array(double length);
		template<class ArrayLike> Float64Array(ArrayLike* arrayOrArrayBuffer);
		template<class ArrayBufferLike> Float64Array(ArrayBufferLike* buffer, double byteOffset);
		template<class ArrayBufferLike> Float64Array(ArrayBufferLike* buffer, double byteOffset, double length);
		double get_BYTES_PER_ELEMENT();
		template<typename... Args> static Float64Array* of(Args&&... items) { return of(static_cast<double>(static_cast<Args&&>(items))...); }
		static Float64Array* of() [[cheerp::static]];
		template<class ArrayLike> static Float64Array* from(ArrayLike* arrayLike) [[cheerp::static]];
		template<class ArrayLike> static Float64Array* from(ArrayLike* arrayLike, EventListener* mapfn) [[cheerp::static]];
		template<class ArrayLike> static Float64Array* from(ArrayLike* arrayLike, EventListener* mapfn, Object* thisArg) [[cheerp::static]];
	};

	class Account: public Object{
	public:
		String* get_displayName();
		void set_displayName(const String&);
		String* get_id();
		void set_id(const String&);
		String* get_imageURL();
		void set_imageURL(const String&);
		String* get_name();
		void set_name(const String&);
		String* get_rpDisplayName();
		void set_rpDisplayName(const String&);
	};

	class EventListenerOptions: public Object{
	public:
		bool get_capture();
		void set_capture(bool);
	};

	class AddEventListenerOptions: public EventListenerOptions {
	public:
		bool get_once();
		void set_once(bool);
		bool get_passive();
		void set_passive(bool);
	};

	class Algorithm: public Object{
	public:
		String* get_name();
		void set_name(const String&);
	};

	class AesCbcParams: public Algorithm {
	public:
		Int8Array* get_iv();
		void set_iv(Int8Array*);
	};

	class AesCtrParams: public Algorithm {
	public:
		Int8Array* get_counter();
		void set_counter(Int8Array*);
		double get_length();
		void set_length(double);
	};

	class AesDerivedKeyParams: public Algorithm {
	public:
		double get_length();
		void set_length(double);
	};

	class AesGcmParams: public Algorithm {
	public:
		Int8Array* get_additionalData();
		void set_additionalData(Int8Array*);
		Int8Array* get_iv();
		void set_iv(Int8Array*);
		double get_tagLength();
		void set_tagLength(double);
	};

	class KeyAlgorithm: public Object{
	public:
		String* get_name();
		void set_name(const String&);
	};

	class AesKeyAlgorithm: public KeyAlgorithm {
	public:
		double get_length();
		void set_length(double);
	};

	class AesKeyGenParams: public Algorithm {
	public:
		double get_length();
		void set_length(double);
	};

	class AudioNodeOptions: public Object{
	public:
		double get_channelCount();
		void set_channelCount(double);
		String* get_channelCountMode();
		void set_channelCountMode(const String&);
		String* get_channelInterpretation();
		void set_channelInterpretation(const String&);
	};

	class AnalyserOptions: public AudioNodeOptions {
	public:
		double get_fftSize();
		void set_fftSize(double);
		double get_maxDecibels();
		void set_maxDecibels(double);
		double get_minDecibels();
		void set_minDecibels(double);
		double get_smoothingTimeConstant();
		void set_smoothingTimeConstant(double);
	};

	class EventInit: public Object{
	public:
		bool get_bubbles();
		void set_bubbles(bool);
		bool get_cancelable();
		void set_cancelable(bool);
		bool get_scoped();
		void set_scoped(bool);
	};

	class AnimationEventInit: public EventInit {
	public:
		String* get_animationName();
		void set_animationName(const String&);
		double get_elapsedTime();
		void set_elapsedTime(double);
	};

	class AssertionOptions: public Object{
	public:
		Array* get_allowList();
		void set_allowList(Array*);
		WebAuthnExtensions* get_extensions();
		void set_extensions(WebAuthnExtensions*);
		String* get_rpId();
		void set_rpId(const String&);
		double get_timeoutSeconds();
		void set_timeoutSeconds(double);
	};

	class AudioBufferOptions: public Object{
	public:
		double get_length();
		void set_length(double);
		double get_numberOfChannels();
		void set_numberOfChannels(double);
		double get_sampleRate();
		void set_sampleRate(double);
	};

	class AudioBufferSourceOptions: public Object{
	public:
		AudioBuffer* get_buffer();
		void set_buffer(AudioBuffer*);
		double get_detune();
		void set_detune(double);
		bool get_loop();
		void set_loop(bool);
		double get_loopEnd();
		void set_loopEnd(double);
		double get_loopStart();
		void set_loopStart(double);
		double get_playbackRate();
		void set_playbackRate(double);
	};

	class AudioContextInfo: public Object{
	public:
		double get_currentTime();
		void set_currentTime(double);
		double get_sampleRate();
		void set_sampleRate(double);
	};

	class AudioContextOptions: public Object{
	public:
		String* get_latencyHint();
		void set_latencyHint(const String&);
		double get_sampleRate();
		void set_sampleRate(double);
	};

	class AudioParamDescriptor: public Object{
	public:
		double get_defaultValue();
		void set_defaultValue(double);
		double get_maxValue();
		void set_maxValue(double);
		double get_minValue();
		void set_minValue(double);
		String* get_name();
		void set_name(const String&);
	};

	class AudioProcessingEventInit: public EventInit {
	public:
		AudioBuffer* get_inputBuffer();
		void set_inputBuffer(AudioBuffer*);
		AudioBuffer* get_outputBuffer();
		void set_outputBuffer(AudioBuffer*);
		double get_playbackTime();
		void set_playbackTime(double);
	};

	class AudioTimestamp: public Object{
	public:
		double get_contextTime();
		void set_contextTime(double);
		double get_performanceTime();
		void set_performanceTime(double);
	};

	class BiquadFilterOptions: public AudioNodeOptions {
	public:
		double get_Q();
		double get_detune();
		void set_detune(double);
		double get_frequency();
		void set_frequency(double);
		double get_gain();
		void set_gain(double);
		String* get_type();
		void set_type(const String&);
	};

	class ByteLengthChunk: public Object{
	public:
		double get_byteLength();
		void set_byteLength(double);
	};

	class CacheQueryOptions: public Object{
	public:
		String* get_cacheName();
		void set_cacheName(const String&);
		bool get_ignoreMethod();
		void set_ignoreMethod(bool);
		bool get_ignoreSearch();
		void set_ignoreSearch(bool);
		bool get_ignoreVary();
		void set_ignoreVary(bool);
	};

	class ChannelMergerOptions: public AudioNodeOptions {
	public:
		double get_numberOfInputs();
		void set_numberOfInputs(double);
	};

	class ChannelSplitterOptions: public AudioNodeOptions {
	public:
		double get_numberOfOutputs();
		void set_numberOfOutputs(double);
	};

	class ClientData: public Object{
	public:
		String* get_challenge();
		void set_challenge(const String&);
		WebAuthnExtensions* get_extensions();
		void set_extensions(WebAuthnExtensions*);
		String* get_hashAlg();
		void set_hashAlg(const String&);
		String* get_origin();
		void set_origin(const String&);
		String* get_rpId();
		void set_rpId(const String&);
		String* get_tokenBinding();
		void set_tokenBinding(const String&);
	};

	class ClientQueryOptions: public Object{
	public:
		bool get_includeReserved();
		void set_includeReserved(bool);
		bool get_includeUncontrolled();
		void set_includeUncontrolled(bool);
		String* get_type();
		void set_type(const String&);
	};

	class CloseEventInit: public EventInit {
	public:
		double get_code();
		void set_code(double);
		String* get_reason();
		void set_reason(const String&);
		bool get_wasClean();
		void set_wasClean(bool);
	};

	class UIEventInit: public EventInit {
	public:
		double get_detail();
		void set_detail(double);
		Window* get_view();
		void set_view(Window*);
	};

	class CompositionEventInit: public UIEventInit {
	public:
		String* get_data();
		void set_data(const String&);
	};

	class ExceptionInformation: public Object{
	public:
		String* get_domain();
		void set_domain(const String&);
	};

	class ConfirmSiteSpecificExceptionsInformation: public ExceptionInformation {
	public:
		Array* get_arrayOfDomainStrings();
		void set_arrayOfDomainStrings(Array*);
	};

	class ConstantSourceOptions: public Object{
	public:
		double get_offset();
		void set_offset(double);
	};

	class ConstrainBooleanParameters: public Object{
	public:
		bool get_exact();
		void set_exact(bool);
		bool get_ideal();
		void set_ideal(bool);
	};

	class ConstrainDOMStringParameters: public Object{
	public:
		String* get_exact();
		void set_exact(const String&);
		String* get_ideal();
		void set_ideal(const String&);
	};

	class DoubleRange: public Object{
	public:
		double get_max();
		void set_max(double);
		double get_min();
		void set_min(double);
	};

	class ConstrainDoubleRange: public DoubleRange {
	public:
		double get_exact();
		void set_exact(double);
		double get_ideal();
		void set_ideal(double);
	};

	class LongRange: public Object{
	public:
		double get_max();
		void set_max(double);
		double get_min();
		void set_min(double);
	};

	class ConstrainLongRange: public LongRange {
	public:
		double get_exact();
		void set_exact(double);
		double get_ideal();
		void set_ideal(double);
	};

	class ConstrainVideoFacingModeParameters: public Object{
	public:
		template<class ReturnType = Object*> ReturnType get_exact();
		void set_exact(Object*);
		template<class ReturnType = Object*> ReturnType get_ideal();
		void set_ideal(Object*);
	};

	class ConvolverOptions: public AudioNodeOptions {
	public:
		AudioBuffer* get_buffer();
		void set_buffer(AudioBuffer*);
		bool get_disableNormalization();
		void set_disableNormalization(bool);
	};

	template<class T>
	class CustomEventInit: public EventInit {
	public:
		T* get_detail();
		void set_detail(T*);
	};

	class DOMRectInit: public Object{
	public:
		double get_height();
		void set_height(double);
		double get_width();
		void set_width(double);
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
	};

	class DelayOptions: public AudioNodeOptions {
	public:
		double get_delayTime();
		void set_delayTime(double);
		double get_maxDelayTime();
		void set_maxDelayTime(double);
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

	class DeviceLightEventInit: public EventInit {
	public:
		double get_value();
		void set_value(double);
	};

	class DeviceMotionEventInit: public EventInit {
	public:
		DeviceAccelerationDict* get_acceleration();
		void set_acceleration(DeviceAccelerationDict*);
		DeviceAccelerationDict* get_accelerationIncludingGravity();
		void set_accelerationIncludingGravity(DeviceAccelerationDict*);
		double get_interval();
		void set_interval(double);
		DeviceRotationRateDict* get_rotationRate();
		void set_rotationRate(DeviceRotationRateDict*);
	};

	class DeviceOrientationEventInit: public EventInit {
	public:
		bool get_absolute();
		void set_absolute(bool);
		double get_alpha();
		void set_alpha(double);
		double get_beta();
		void set_beta(double);
		double get_gamma();
		void set_gamma(double);
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

	class DynamicsCompressorOptions: public AudioNodeOptions {
	public:
		double get_attack();
		void set_attack(double);
		double get_knee();
		void set_knee(double);
		double get_ratio();
		void set_ratio(double);
		double get_release();
		void set_release(double);
		double get_threshold();
		void set_threshold(double);
	};

	class EcKeyAlgorithm: public KeyAlgorithm {
	public:
		String* get_namedCurve();
		void set_namedCurve(const String&);
	};

	class EcKeyGenParams: public Algorithm {
	public:
		String* get_namedCurve();
		void set_namedCurve(const String&);
	};

	class EcKeyImportParams: public Algorithm {
	public:
		String* get_namedCurve();
		void set_namedCurve(const String&);
	};

	class EcdhKeyDeriveParams: public Algorithm {
	public:
		CryptoKey* get_public();
		void set_public(CryptoKey*);
	};

	class EcdsaParams: public Algorithm {
	public:
		String* get_hash();
		void set_hash(const String&);
	};

	class ErrorEventInit: public EventInit {
	public:
		double get_colno();
		void set_colno(double);
		template<class ReturnType = Object*> ReturnType get_error();
		void set_error(Object*);
		String* get_filename();
		void set_filename(const String&);
		double get_lineno();
		void set_lineno(double);
		String* get_message();
		void set_message(const String&);
	};

	class EventModifierInit: public UIEventInit {
	public:
		bool get_altKey();
		void set_altKey(bool);
		bool get_ctrlKey();
		void set_ctrlKey(bool);
		bool get_metaKey();
		void set_metaKey(bool);
		bool get_modifierAltGraph();
		void set_modifierAltGraph(bool);
		bool get_modifierCapsLock();
		void set_modifierCapsLock(bool);
		bool get_modifierFn();
		void set_modifierFn(bool);
		bool get_modifierFnLock();
		void set_modifierFnLock(bool);
		bool get_modifierHyper();
		void set_modifierHyper(bool);
		bool get_modifierNumLock();
		void set_modifierNumLock(bool);
		bool get_modifierOS();
		void set_modifierOS(bool);
		bool get_modifierScrollLock();
		void set_modifierScrollLock(bool);
		bool get_modifierSuper();
		void set_modifierSuper(bool);
		bool get_modifierSymbol();
		void set_modifierSymbol(bool);
		bool get_modifierSymbolLock();
		void set_modifierSymbolLock(bool);
		bool get_shiftKey();
		void set_shiftKey(bool);
	};

	class ExtendableEventInit: public EventInit {
	public:
	};

	class ExtendableMessageEventInit: public ExtendableEventInit {
	public:
		template<class ReturnType = Object*> ReturnType get_data();
		void set_data(Object*);
		String* get_lastEventId();
		void set_lastEventId(const String&);
		String* get_origin();
		void set_origin(const String&);
		Array* get_ports();
		void set_ports(Array*);
		template<class ReturnType = Object*> ReturnType get_source();
		void set_source(Object*);
	};

	class FetchEventInit: public ExtendableEventInit {
	public:
		String* get_clientId();
		void set_clientId(const String&);
		Request* get_request();
		void set_request(Request*);
		String* get_reservedClientId();
		void set_reservedClientId(const String&);
		String* get_targetClientId();
		void set_targetClientId(const String&);
	};

	class FocusEventInit: public UIEventInit {
	public:
		EventTarget* get_relatedTarget();
		void set_relatedTarget(EventTarget*);
	};

	class FocusNavigationEventInit: public EventInit {
	public:
		String* get_navigationReason();
		void set_navigationReason(const String&);
		double get_originHeight();
		void set_originHeight(double);
		double get_originLeft();
		void set_originLeft(double);
		double get_originTop();
		void set_originTop(double);
		double get_originWidth();
		void set_originWidth(double);
	};

	class FocusNavigationOrigin: public Object{
	public:
		double get_originHeight();
		void set_originHeight(double);
		double get_originLeft();
		void set_originLeft(double);
		double get_originTop();
		void set_originTop(double);
		double get_originWidth();
		void set_originWidth(double);
	};

	class GainOptions: public AudioNodeOptions {
	public:
		double get_gain();
		void set_gain(double);
	};

	class GamepadEventInit: public EventInit {
	public:
		Gamepad* get_gamepad();
		void set_gamepad(Gamepad*);
	};

	class GetNotificationOptions: public Object{
	public:
		String* get_tag();
		void set_tag(const String&);
	};

	class HashChangeEventInit: public EventInit {
	public:
		String* get_newURL();
		void set_newURL(const String&);
		String* get_oldURL();
		void set_oldURL(const String&);
	};

	class HkdfParams: public Algorithm {
	public:
		String* get_hash();
		void set_hash(const String&);
		Int8Array* get_info();
		void set_info(Int8Array*);
		Int8Array* get_salt();
		void set_salt(Int8Array*);
	};

	class HmacImportParams: public Algorithm {
	public:
		String* get_hash();
		void set_hash(const String&);
		double get_length();
		void set_length(double);
	};

	class HmacKeyAlgorithm: public KeyAlgorithm {
	public:
		KeyAlgorithm* get_hash();
		void set_hash(KeyAlgorithm*);
		double get_length();
		void set_length(double);
	};

	class HmacKeyGenParams: public Algorithm {
	public:
		String* get_hash();
		void set_hash(const String&);
		double get_length();
		void set_length(double);
	};

	class IDBIndexParameters: public Object{
	public:
		bool get_multiEntry();
		void set_multiEntry(bool);
		bool get_unique();
		void set_unique(bool);
	};

	class IDBObjectStoreParameters: public Object{
	public:
		bool get_autoIncrement();
		void set_autoIncrement(bool);
		String* get_keyPath();
		void set_keyPath(const String&);
	};

	class IIRFilterOptions: public AudioNodeOptions {
	public:
		Array* get_feedback();
		void set_feedback(Array*);
		Array* get_feedforward();
		void set_feedforward(Array*);
	};

	class IntersectionObserverEntryInit: public Object{
	public:
		DOMRectInit* get_boundingClientRect();
		void set_boundingClientRect(DOMRectInit*);
		DOMRectInit* get_intersectionRect();
		void set_intersectionRect(DOMRectInit*);
		bool get_isIntersecting();
		void set_isIntersecting(bool);
		DOMRectInit* get_rootBounds();
		void set_rootBounds(DOMRectInit*);
		Element* get_target();
		void set_target(Element*);
		double get_time();
		void set_time(double);
	};

	class IntersectionObserverInit: public Object{
	public:
		Element* get_root();
		void set_root(Element*);
		String* get_rootMargin();
		void set_rootMargin(const String&);
		double get_threshold();
		void set_threshold(double);
	};

	class JsonWebKey: public Object{
	public:
		String* get_alg();
		void set_alg(const String&);
		String* get_crv();
		void set_crv(const String&);
		String* get_d();
		void set_d(const String&);
		String* get_dp();
		void set_dp(const String&);
		String* get_dq();
		void set_dq(const String&);
		String* get_e();
		void set_e(const String&);
		bool get_ext();
		void set_ext(bool);
		String* get_k();
		void set_k(const String&);
		Array* get_key_ops();
		void set_key_ops(Array*);
		String* get_kty();
		void set_kty(const String&);
		String* get_n();
		void set_n(const String&);
		Array* get_oth();
		void set_oth(Array*);
		String* get_p();
		void set_p(const String&);
		String* get_q();
		void set_q(const String&);
		String* get_qi();
		void set_qi(const String&);
		String* get_use();
		void set_use(const String&);
		String* get_x();
		void set_x(const String&);
		String* get_y();
		void set_y(const String&);
	};

	class KeyboardEventInit: public EventModifierInit {
	public:
		String* get_code();
		void set_code(const String&);
		String* get_key();
		void set_key(const String&);
		double get_location();
		void set_location(double);
		bool get_repeat();
		void set_repeat(bool);
	};

	class MSAccountInfo: public Object{
	public:
		String* get_accountImageUri();
		void set_accountImageUri(const String&);
		String* get_accountName();
		void set_accountName(const String&);
		String* get_rpDisplayName();
		void set_rpDisplayName(const String&);
		String* get_userDisplayName();
		void set_userDisplayName(const String&);
		String* get_userId();
		void set_userId(const String&);
	};

	class RTCStats: public Object{
	public:
		String* get_id();
		void set_id(const String&);
		String* get_msType();
		void set_msType(const String&);
		double get_timestamp();
		void set_timestamp(double);
		String* get_type();
		void set_type(const String&);
	};

	class MSLocalClientEventBase: public RTCStats {
	public:
		double get_networkBandwidthLowEventRatio();
		void set_networkBandwidthLowEventRatio(double);
		double get_networkReceiveQualityEventRatio();
		void set_networkReceiveQualityEventRatio(double);
	};

	class MSAudioLocalClientEvent: public MSLocalClientEventBase {
	public:
		double get_cpuInsufficientEventRatio();
		void set_cpuInsufficientEventRatio(double);
		double get_deviceCaptureNotFunctioningEventRatio();
		void set_deviceCaptureNotFunctioningEventRatio(double);
		double get_deviceClippingEventRatio();
		void set_deviceClippingEventRatio(double);
		double get_deviceEchoEventRatio();
		void set_deviceEchoEventRatio(double);
		double get_deviceGlitchesEventRatio();
		void set_deviceGlitchesEventRatio(double);
		double get_deviceHalfDuplexAECEventRatio();
		void set_deviceHalfDuplexAECEventRatio(double);
		double get_deviceHowlingEventCount();
		void set_deviceHowlingEventCount(double);
		double get_deviceLowSNREventRatio();
		void set_deviceLowSNREventRatio(double);
		double get_deviceLowSpeechLevelEventRatio();
		void set_deviceLowSpeechLevelEventRatio(double);
		double get_deviceMultipleEndpointsEventCount();
		void set_deviceMultipleEndpointsEventCount(double);
		double get_deviceNearEndToEchoRatioEventRatio();
		void set_deviceNearEndToEchoRatioEventRatio(double);
		double get_deviceRenderMuteEventRatio();
		void set_deviceRenderMuteEventRatio(double);
		double get_deviceRenderNotFunctioningEventRatio();
		void set_deviceRenderNotFunctioningEventRatio(double);
		double get_deviceRenderZeroVolumeEventRatio();
		void set_deviceRenderZeroVolumeEventRatio(double);
		double get_networkDelayEventRatio();
		void set_networkDelayEventRatio(double);
		double get_networkSendQualityEventRatio();
		void set_networkSendQualityEventRatio(double);
	};

	class MSPayloadBase: public RTCStats {
	public:
		String* get_payloadDescription();
		void set_payloadDescription(const String&);
	};

	class MSAudioRecvPayload: public MSPayloadBase {
	public:
		double get_burstLossLength1();
		void set_burstLossLength1(double);
		double get_burstLossLength2();
		void set_burstLossLength2(double);
		double get_burstLossLength3();
		void set_burstLossLength3(double);
		double get_burstLossLength4();
		void set_burstLossLength4(double);
		double get_burstLossLength5();
		void set_burstLossLength5(double);
		double get_burstLossLength6();
		void set_burstLossLength6(double);
		double get_burstLossLength7();
		void set_burstLossLength7(double);
		double get_burstLossLength8OrHigher();
		void set_burstLossLength8OrHigher(double);
		double get_fecRecvDistance1();
		void set_fecRecvDistance1(double);
		double get_fecRecvDistance2();
		void set_fecRecvDistance2(double);
		double get_fecRecvDistance3();
		void set_fecRecvDistance3(double);
		double get_packetReorderDepthAvg();
		void set_packetReorderDepthAvg(double);
		double get_packetReorderDepthMax();
		void set_packetReorderDepthMax(double);
		double get_packetReorderRatio();
		void set_packetReorderRatio(double);
		double get_ratioCompressedSamplesAvg();
		void set_ratioCompressedSamplesAvg(double);
		double get_ratioConcealedSamplesAvg();
		void set_ratioConcealedSamplesAvg(double);
		double get_ratioStretchedSamplesAvg();
		void set_ratioStretchedSamplesAvg(double);
		double get_samplingRate();
		void set_samplingRate(double);
		MSAudioRecvSignal* get_signal();
		void set_signal(MSAudioRecvSignal*);
	};

	class MSAudioRecvSignal: public Object{
	public:
		double get_initialSignalLevelRMS();
		void set_initialSignalLevelRMS(double);
		double get_recvNoiseLevelCh1();
		void set_recvNoiseLevelCh1(double);
		double get_recvSignalLevelCh1();
		void set_recvSignalLevelCh1(double);
		double get_renderLoopbackSignalLevel();
		void set_renderLoopbackSignalLevel(double);
		double get_renderNoiseLevel();
		void set_renderNoiseLevel(double);
		double get_renderSignalLevel();
		void set_renderSignalLevel(double);
	};

	class MSAudioSendPayload: public MSPayloadBase {
	public:
		bool get_audioFECUsed();
		void set_audioFECUsed(bool);
		double get_samplingRate();
		void set_samplingRate(double);
		double get_sendMutePercent();
		void set_sendMutePercent(double);
		MSAudioSendSignal* get_signal();
		void set_signal(MSAudioSendSignal*);
	};

	class MSAudioSendSignal: public Object{
	public:
		double get_noiseLevel();
		void set_noiseLevel(double);
		double get_sendNoiseLevelCh1();
		void set_sendNoiseLevelCh1(double);
		double get_sendSignalLevelCh1();
		void set_sendSignalLevelCh1(double);
	};

	class MSConnectivity: public Object{
	public:
		String* get_iceType();
		void set_iceType(const String&);
		MSIceWarningFlags* get_iceWarningFlags();
		void set_iceWarningFlags(MSIceWarningFlags*);
		MSRelayAddress* get_relayAddress();
		void set_relayAddress(MSRelayAddress*);
	};

	class MSCredentialFilter: public Object{
	public:
		Array* get_accept();
		void set_accept(Array*);
	};

	class MSCredentialParameters: public Object{
	public:
		String* get_type();
		void set_type(const String&);
	};

	class MSCredentialSpec: public Object{
	public:
		String* get_id();
		void set_id(const String&);
		String* get_type();
		void set_type(const String&);
	};

	class MSDCCEventInit: public EventInit {
	public:
		double get_maxFr();
		void set_maxFr(double);
		double get_maxFs();
		void set_maxFs(double);
	};

	class MSDSHEventInit: public EventInit {
	public:
		Array* get_sources();
		void set_sources(Array*);
		double get_timestamp();
		void set_timestamp(double);
	};

	class MSDelay: public Object{
	public:
		double get_roundTrip();
		void set_roundTrip(double);
		double get_roundTripMax();
		void set_roundTripMax(double);
	};

	class MSDescription: public RTCStats {
	public:
		MSConnectivity* get_connectivity();
		void set_connectivity(MSConnectivity*);
		String* get_deviceDevName();
		void set_deviceDevName(const String&);
		MSIPAddressInfo* get_localAddr();
		void set_localAddr(MSIPAddressInfo*);
		MSNetworkConnectivityInfo* get_networkconnectivity();
		void set_networkconnectivity(MSNetworkConnectivityInfo*);
		MSIPAddressInfo* get_reflexiveLocalIPAddr();
		void set_reflexiveLocalIPAddr(MSIPAddressInfo*);
		MSIPAddressInfo* get_remoteAddr();
		void set_remoteAddr(MSIPAddressInfo*);
		String* get_transport();
		void set_transport(const String&);
	};

	class MSFIDOCredentialParameters: public MSCredentialParameters {
	public:
		String* get_algorithm();
		void set_algorithm(const String&);
		Array* get_authenticators();
		void set_authenticators(Array*);
	};

	class MSIPAddressInfo: public Object{
	public:
		String* get_ipAddr();
		void set_ipAddr(const String&);
		String* get_manufacturerMacAddrMask();
		void set_manufacturerMacAddrMask(const String&);
		double get_port();
		void set_port(double);
	};

	class MSIceWarningFlags: public Object{
	public:
		bool get_allocationMessageIntegrityFailed();
		void set_allocationMessageIntegrityFailed(bool);
		bool get_alternateServerReceived();
		void set_alternateServerReceived(bool);
		bool get_connCheckMessageIntegrityFailed();
		void set_connCheckMessageIntegrityFailed(bool);
		bool get_connCheckOtherError();
		void set_connCheckOtherError(bool);
		bool get_fipsAllocationFailure();
		void set_fipsAllocationFailure(bool);
		bool get_multipleRelayServersAttempted();
		void set_multipleRelayServersAttempted(bool);
		bool get_noRelayServersConfigured();
		void set_noRelayServersConfigured(bool);
		bool get_portRangeExhausted();
		void set_portRangeExhausted(bool);
		bool get_pseudoTLSFailure();
		void set_pseudoTLSFailure(bool);
		bool get_tcpNatConnectivityFailed();
		void set_tcpNatConnectivityFailed(bool);
		bool get_tcpRelayConnectivityFailed();
		void set_tcpRelayConnectivityFailed(bool);
		bool get_turnAuthUnknownUsernameError();
		void set_turnAuthUnknownUsernameError(bool);
		bool get_turnTcpAllocateFailed();
		void set_turnTcpAllocateFailed(bool);
		bool get_turnTcpSendFailed();
		void set_turnTcpSendFailed(bool);
		bool get_turnTcpTimedOut();
		void set_turnTcpTimedOut(bool);
		bool get_turnTurnTcpConnectivityFailed();
		void set_turnTurnTcpConnectivityFailed(bool);
		bool get_turnUdpAllocateFailed();
		void set_turnUdpAllocateFailed(bool);
		bool get_turnUdpSendFailed();
		void set_turnUdpSendFailed(bool);
		bool get_udpLocalConnectivityFailed();
		void set_udpLocalConnectivityFailed(bool);
		bool get_udpNatConnectivityFailed();
		void set_udpNatConnectivityFailed(bool);
		bool get_udpRelayConnectivityFailed();
		void set_udpRelayConnectivityFailed(bool);
		bool get_useCandidateChecksFailed();
		void set_useCandidateChecksFailed(bool);
	};

	class MSJitter: public Object{
	public:
		double get_interArrival();
		void set_interArrival(double);
		double get_interArrivalMax();
		void set_interArrivalMax(double);
		double get_interArrivalSD();
		void set_interArrivalSD(double);
	};

	class MSNetwork: public RTCStats {
	public:
		MSDelay* get_delay();
		void set_delay(MSDelay*);
		MSJitter* get_jitter();
		void set_jitter(MSJitter*);
		MSPacketLoss* get_packetLoss();
		void set_packetLoss(MSPacketLoss*);
		MSUtilization* get_utilization();
		void set_utilization(MSUtilization*);
	};

	class MSNetworkConnectivityInfo: public Object{
	public:
		double get_linkspeed();
		void set_linkspeed(double);
		String* get_networkConnectionDetails();
		void set_networkConnectionDetails(const String&);
		bool get_vpn();
		void set_vpn(bool);
	};

	class MSNetworkInterfaceType: public Object{
	public:
		bool get_interfaceTypeEthernet();
		void set_interfaceTypeEthernet(bool);
		bool get_interfaceTypePPP();
		void set_interfaceTypePPP(bool);
		bool get_interfaceTypeTunnel();
		void set_interfaceTypeTunnel(bool);
		bool get_interfaceTypeWWAN();
		void set_interfaceTypeWWAN(bool);
		bool get_interfaceTypeWireless();
		void set_interfaceTypeWireless(bool);
	};

	class MSOutboundNetwork: public MSNetwork {
	public:
		double get_appliedBandwidthLimit();
		void set_appliedBandwidthLimit(double);
	};

	class MSPacketLoss: public Object{
	public:
		double get_lossRate();
		void set_lossRate(double);
		double get_lossRateMax();
		void set_lossRateMax(double);
	};

	class MSPortRange: public Object{
	public:
		double get_max();
		void set_max(double);
		double get_min();
		void set_min(double);
	};

	class MSRelayAddress: public Object{
	public:
		double get_port();
		void set_port(double);
		String* get_relayAddress();
		void set_relayAddress(const String&);
	};

	class MSSignatureParameters: public Object{
	public:
		String* get_userPrompt();
		void set_userPrompt(const String&);
	};

	class MSTransportDiagnosticsStats: public RTCStats {
	public:
		double get_allocationTimeInMs();
		void set_allocationTimeInMs(double);
		String* get_baseAddress();
		void set_baseAddress(const String&);
		MSNetworkInterfaceType* get_baseInterface();
		void set_baseInterface(MSNetworkInterfaceType*);
		String* get_iceRole();
		void set_iceRole(const String&);
		MSIceWarningFlags* get_iceWarningFlags();
		void set_iceWarningFlags(MSIceWarningFlags*);
		MSNetworkInterfaceType* get_interfaces();
		void set_interfaces(MSNetworkInterfaceType*);
		String* get_localAddrType();
		void set_localAddrType(const String&);
		String* get_localAddress();
		void set_localAddress(const String&);
		MSNetworkInterfaceType* get_localInterface();
		void set_localInterface(MSNetworkInterfaceType*);
		String* get_localMR();
		void set_localMR(const String&);
		double get_localMRTCPPort();
		void set_localMRTCPPort(double);
		String* get_localSite();
		void set_localSite(const String&);
		String* get_msRtcEngineVersion();
		void set_msRtcEngineVersion(const String&);
		String* get_networkName();
		void set_networkName(const String&);
		double get_numConsentReqReceived();
		void set_numConsentReqReceived(double);
		double get_numConsentReqSent();
		void set_numConsentReqSent(double);
		double get_numConsentRespReceived();
		void set_numConsentRespReceived(double);
		double get_numConsentRespSent();
		void set_numConsentRespSent(double);
		double get_portRangeMax();
		void set_portRangeMax(double);
		double get_portRangeMin();
		void set_portRangeMin(double);
		String* get_protocol();
		void set_protocol(const String&);
		String* get_remoteAddrType();
		void set_remoteAddrType(const String&);
		String* get_remoteAddress();
		void set_remoteAddress(const String&);
		String* get_remoteMR();
		void set_remoteMR(const String&);
		double get_remoteMRTCPPort();
		void set_remoteMRTCPPort(double);
		String* get_remoteSite();
		void set_remoteSite(const String&);
		bool get_rtpRtcpMux();
		void set_rtpRtcpMux(bool);
		double get_stunVer();
		void set_stunVer(double);
	};

	class MSUtilization: public Object{
	public:
		double get_bandwidthEstimation();
		void set_bandwidthEstimation(double);
		double get_bandwidthEstimationAvg();
		void set_bandwidthEstimationAvg(double);
		double get_bandwidthEstimationMax();
		void set_bandwidthEstimationMax(double);
		double get_bandwidthEstimationMin();
		void set_bandwidthEstimationMin(double);
		double get_bandwidthEstimationStdDev();
		void set_bandwidthEstimationStdDev(double);
		double get_packets();
		void set_packets(double);
	};

	class MSVideoPayload: public MSPayloadBase {
	public:
		double get_durationSeconds();
		void set_durationSeconds(double);
		String* get_resolution();
		void set_resolution(const String&);
		double get_videoBitRateAvg();
		void set_videoBitRateAvg(double);
		double get_videoBitRateMax();
		void set_videoBitRateMax(double);
		double get_videoFrameRateAvg();
		void set_videoFrameRateAvg(double);
		double get_videoPacketLossRate();
		void set_videoPacketLossRate(double);
	};

	class MSVideoRecvPayload: public MSVideoPayload {
	public:
		double get_lowBitRateCallPercent();
		void set_lowBitRateCallPercent(double);
		double get_lowFrameRateCallPercent();
		void set_lowFrameRateCallPercent(double);
		double get_recvBitRateAverage();
		void set_recvBitRateAverage(double);
		double get_recvBitRateMaximum();
		void set_recvBitRateMaximum(double);
		String* get_recvCodecType();
		void set_recvCodecType(const String&);
		double get_recvFpsHarmonicAverage();
		void set_recvFpsHarmonicAverage(double);
		double get_recvFrameRateAverage();
		void set_recvFrameRateAverage(double);
		double get_recvNumResSwitches();
		void set_recvNumResSwitches(double);
		double get_recvReorderBufferMaxSuccessfullyOrderedExtent();
		void set_recvReorderBufferMaxSuccessfullyOrderedExtent(double);
		double get_recvReorderBufferMaxSuccessfullyOrderedLateTime();
		void set_recvReorderBufferMaxSuccessfullyOrderedLateTime(double);
		double get_recvReorderBufferPacketsDroppedDueToBufferExhaustion();
		void set_recvReorderBufferPacketsDroppedDueToBufferExhaustion(double);
		double get_recvReorderBufferPacketsDroppedDueToTimeout();
		void set_recvReorderBufferPacketsDroppedDueToTimeout(double);
		double get_recvReorderBufferReorderedPackets();
		void set_recvReorderBufferReorderedPackets(double);
		double get_recvResolutionHeight();
		void set_recvResolutionHeight(double);
		double get_recvResolutionWidth();
		void set_recvResolutionWidth(double);
		double get_recvVideoStreamsMax();
		void set_recvVideoStreamsMax(double);
		double get_recvVideoStreamsMin();
		void set_recvVideoStreamsMin(double);
		double get_recvVideoStreamsMode();
		void set_recvVideoStreamsMode(double);
		double get_reorderBufferTotalPackets();
		void set_reorderBufferTotalPackets(double);
		double get_videoFrameLossRate();
		void set_videoFrameLossRate(double);
		double get_videoPostFECPLR();
		void set_videoPostFECPLR(double);
		MSVideoResolutionDistribution* get_videoResolutions();
		void set_videoResolutions(MSVideoResolutionDistribution*);
	};

	class MSVideoResolutionDistribution: public Object{
	public:
		double get_cifQuality();
		void set_cifQuality(double);
		double get_h1080Quality();
		void set_h1080Quality(double);
		double get_h1440Quality();
		void set_h1440Quality(double);
		double get_h2160Quality();
		void set_h2160Quality(double);
		double get_h720Quality();
		void set_h720Quality(double);
		double get_vgaQuality();
		void set_vgaQuality(double);
	};

	class MSVideoSendPayload: public MSVideoPayload {
	public:
		double get_sendBitRateAverage();
		void set_sendBitRateAverage(double);
		double get_sendBitRateMaximum();
		void set_sendBitRateMaximum(double);
		double get_sendFrameRateAverage();
		void set_sendFrameRateAverage(double);
		double get_sendResolutionHeight();
		void set_sendResolutionHeight(double);
		double get_sendResolutionWidth();
		void set_sendResolutionWidth(double);
		double get_sendVideoStreamsMax();
		void set_sendVideoStreamsMax(double);
	};

	class MediaElementAudioSourceOptions: public Object{
	public:
		HTMLMediaElement* get_mediaElement();
		void set_mediaElement(HTMLMediaElement*);
	};

	class MediaEncryptedEventInit: public EventInit {
	public:
		ArrayBuffer* get_initData();
		void set_initData(ArrayBuffer*);
		String* get_initDataType();
		void set_initDataType(const String&);
	};

	class MediaKeyMessageEventInit: public EventInit {
	public:
		ArrayBuffer* get_message();
		void set_message(ArrayBuffer*);
		String* get_messageType();
		void set_messageType(const String&);
	};

	class MediaKeySystemConfiguration: public Object{
	public:
		Array* get_audioCapabilities();
		void set_audioCapabilities(Array*);
		String* get_distinctiveIdentifier();
		void set_distinctiveIdentifier(const String&);
		Array* get_initDataTypes();
		void set_initDataTypes(Array*);
		String* get_persistentState();
		void set_persistentState(const String&);
		Array* get_videoCapabilities();
		void set_videoCapabilities(Array*);
	};

	class MediaKeySystemMediaCapability: public Object{
	public:
		String* get_contentType();
		void set_contentType(const String&);
		String* get_robustness();
		void set_robustness(const String&);
	};

	class MediaStreamConstraints: public Object{
	public:
		bool get_audio();
		void set_audio(bool);
		bool get_video();
		void set_video(bool);
	};

	class MediaStreamErrorEventInit: public EventInit {
	public:
		MediaStreamError* get_error();
		void set_error(MediaStreamError*);
	};

	class MediaStreamEventInit: public EventInit {
	public:
		MediaStream* get_stream();
		void set_stream(MediaStream*);
	};

	class MediaStreamTrackEventInit: public EventInit {
	public:
		MediaStreamTrack* get_track();
		void set_track(MediaStreamTrack*);
	};

	class MediaTrackCapabilities: public Object{
	public:
		double get_aspectRatio();
		void set_aspectRatio(double);
		String* get_deviceId();
		void set_deviceId(const String&);
		Array* get_echoCancellation();
		void set_echoCancellation(Array*);
		String* get_facingMode();
		void set_facingMode(const String&);
		double get_frameRate();
		void set_frameRate(double);
		String* get_groupId();
		void set_groupId(const String&);
		double get_height();
		void set_height(double);
		double get_sampleRate();
		void set_sampleRate(double);
		double get_sampleSize();
		void set_sampleSize(double);
		double get_volume();
		void set_volume(double);
		double get_width();
		void set_width(double);
	};

	class MediaTrackConstraintSet: public Object{
	public:
		double get_aspectRatio();
		void set_aspectRatio(double);
		double get_channelCount();
		void set_channelCount(double);
		String* get_deviceId();
		void set_deviceId(const String&);
		String* get_displaySurface();
		void set_displaySurface(const String&);
		bool get_echoCancellation();
		void set_echoCancellation(bool);
		String* get_facingMode();
		void set_facingMode(const String&);
		double get_frameRate();
		void set_frameRate(double);
		String* get_groupId();
		void set_groupId(const String&);
		double get_height();
		void set_height(double);
		double get_latency();
		void set_latency(double);
		bool get_logicalSurface();
		void set_logicalSurface(bool);
		double get_sampleRate();
		void set_sampleRate(double);
		double get_sampleSize();
		void set_sampleSize(double);
		double get_volume();
		void set_volume(double);
		double get_width();
		void set_width(double);
	};

	class MediaTrackConstraints: public MediaTrackConstraintSet {
	public:
		Array* get_advanced();
		void set_advanced(Array*);
	};

	class MediaTrackSettings: public Object{
	public:
		double get_aspectRatio();
		void set_aspectRatio(double);
		String* get_deviceId();
		void set_deviceId(const String&);
		bool get_echoCancellation();
		void set_echoCancellation(bool);
		String* get_facingMode();
		void set_facingMode(const String&);
		double get_frameRate();
		void set_frameRate(double);
		String* get_groupId();
		void set_groupId(const String&);
		double get_height();
		void set_height(double);
		double get_sampleRate();
		void set_sampleRate(double);
		double get_sampleSize();
		void set_sampleSize(double);
		double get_volume();
		void set_volume(double);
		double get_width();
		void set_width(double);
	};

	class MediaTrackSupportedConstraints: public Object{
	public:
		bool get_aspectRatio();
		void set_aspectRatio(bool);
		bool get_deviceId();
		void set_deviceId(bool);
		bool get_echoCancellation();
		void set_echoCancellation(bool);
		bool get_facingMode();
		void set_facingMode(bool);
		bool get_frameRate();
		void set_frameRate(bool);
		bool get_groupId();
		void set_groupId(bool);
		bool get_height();
		void set_height(bool);
		bool get_sampleRate();
		void set_sampleRate(bool);
		bool get_sampleSize();
		void set_sampleSize(bool);
		bool get_volume();
		void set_volume(bool);
		bool get_width();
		void set_width(bool);
	};

	class MessageEventInit: public EventInit {
	public:
		String* get_channel();
		void set_channel(const String&);
		template<class ReturnType = Object*> ReturnType get_data();
		void set_data(Object*);
		String* get_lastEventId();
		void set_lastEventId(const String&);
		String* get_origin();
		void set_origin(const String&);
		Array* get_ports();
		void set_ports(Array*);
		Window* get_source();
		void set_source(Window*);
	};

	class MouseEventInit: public EventModifierInit {
	public:
		double get_button();
		void set_button(double);
		double get_buttons();
		void set_buttons(double);
		double get_clientX();
		void set_clientX(double);
		double get_clientY();
		void set_clientY(double);
		EventTarget* get_relatedTarget();
		void set_relatedTarget(EventTarget*);
		double get_screenX();
		void set_screenX(double);
		double get_screenY();
		void set_screenY(double);
	};

	class MsZoomToOptions: public Object{
	public:
		String* get_animate();
		void set_animate(const String&);
		double get_contentX();
		void set_contentX(double);
		double get_contentY();
		void set_contentY(double);
		double get_scaleFactor();
		void set_scaleFactor(double);
		String* get_viewportX();
		void set_viewportX(const String&);
		String* get_viewportY();
		void set_viewportY(const String&);
	};

	class MutationObserverInit: public Object{
	public:
		Array* get_attributeFilter();
		void set_attributeFilter(Array*);
		bool get_attributeOldValue();
		void set_attributeOldValue(bool);
		bool get_attributes();
		void set_attributes(bool);
		bool get_characterData();
		void set_characterData(bool);
		bool get_characterDataOldValue();
		void set_characterDataOldValue(bool);
		bool get_childList();
		void set_childList(bool);
		bool get_subtree();
		void set_subtree(bool);
	};

	class NotificationEventInit: public ExtendableEventInit {
	public:
		String* get_action();
		void set_action(const String&);
		Notification* get_notification();
		void set_notification(Notification*);
	};

	class NotificationOptions: public Object{
	public:
		String* get_body();
		void set_body(const String&);
		template<class ReturnType = Object*> ReturnType get_data();
		void set_data(Object*);
		String* get_dir();
		void set_dir(const String&);
		String* get_icon();
		void set_icon(const String&);
		String* get_lang();
		void set_lang(const String&);
		String* get_tag();
		void set_tag(const String&);
	};

	class ObjectURLOptions: public Object{
	public:
		bool get_oneTimeOnly();
		void set_oneTimeOnly(bool);
	};

	class OfflineAudioCompletionEventInit: public EventInit {
	public:
		AudioBuffer* get_renderedBuffer();
		void set_renderedBuffer(AudioBuffer*);
	};

	class OscillatorOptions: public AudioNodeOptions {
	public:
		double get_detune();
		void set_detune(double);
		double get_frequency();
		void set_frequency(double);
		PeriodicWave* get_periodicWave();
		void set_periodicWave(PeriodicWave*);
		String* get_type();
		void set_type(const String&);
	};

	class PannerOptions: public AudioNodeOptions {
	public:
		double get_coneInnerAngle();
		void set_coneInnerAngle(double);
		double get_coneOuterAngle();
		void set_coneOuterAngle(double);
		double get_coneOuterGain();
		void set_coneOuterGain(double);
		String* get_distanceModel();
		void set_distanceModel(const String&);
		double get_maxDistance();
		void set_maxDistance(double);
		double get_orientationX();
		void set_orientationX(double);
		double get_orientationY();
		void set_orientationY(double);
		double get_orientationZ();
		void set_orientationZ(double);
		String* get_panningModel();
		void set_panningModel(const String&);
		double get_positionX();
		void set_positionX(double);
		double get_positionY();
		void set_positionY(double);
		double get_positionZ();
		void set_positionZ(double);
		double get_refDistance();
		void set_refDistance(double);
		double get_rolloffFactor();
		void set_rolloffFactor(double);
	};

	class PaymentCurrencyAmount: public Object{
	public:
		String* get_currency();
		void set_currency(const String&);
		String* get_currencySystem();
		void set_currencySystem(const String&);
		String* get_value();
		void set_value(const String&);
	};

	class PaymentDetailsBase: public Object{
	public:
		Array* get_displayItems();
		void set_displayItems(Array*);
		Array* get_modifiers();
		void set_modifiers(Array*);
		Array* get_shippingOptions();
		void set_shippingOptions(Array*);
	};

	class PaymentDetailsInit: public PaymentDetailsBase {
	public:
		String* get_id();
		void set_id(const String&);
		PaymentItem* get_total();
		void set_total(PaymentItem*);
	};

	class PaymentDetailsModifier: public Object{
	public:
		Array* get_additionalDisplayItems();
		void set_additionalDisplayItems(Array*);
		template<class ReturnType = Object*> ReturnType get_data();
		void set_data(Object*);
		String* get_supportedMethods();
		void set_supportedMethods(const String&);
		PaymentItem* get_total();
		void set_total(PaymentItem*);
	};

	class PaymentDetailsUpdate: public PaymentDetailsBase {
	public:
		String* get_error();
		void set_error(const String&);
		PaymentItem* get_total();
		void set_total(PaymentItem*);
	};

	class PaymentItem: public Object{
	public:
		PaymentCurrencyAmount* get_amount();
		void set_amount(PaymentCurrencyAmount*);
		String* get_label();
		void set_label(const String&);
		bool get_pending();
		void set_pending(bool);
	};

	class PaymentMethodData: public Object{
	public:
		template<class ReturnType = Object*> ReturnType get_data();
		void set_data(Object*);
		String* get_supportedMethods();
		void set_supportedMethods(const String&);
	};

	class PaymentOptions: public Object{
	public:
		bool get_requestPayerEmail();
		void set_requestPayerEmail(bool);
		bool get_requestPayerName();
		void set_requestPayerName(bool);
		bool get_requestPayerPhone();
		void set_requestPayerPhone(bool);
		bool get_requestShipping();
		void set_requestShipping(bool);
		String* get_shippingType();
		void set_shippingType(const String&);
	};

	class PaymentRequestUpdateEventInit: public EventInit {
	public:
	};

	class PaymentShippingOption: public Object{
	public:
		PaymentCurrencyAmount* get_amount();
		void set_amount(PaymentCurrencyAmount*);
		String* get_id();
		void set_id(const String&);
		String* get_label();
		void set_label(const String&);
		bool get_selected();
		void set_selected(bool);
	};

	class Pbkdf2Params: public Algorithm {
	public:
		String* get_hash();
		void set_hash(const String&);
		double get_iterations();
		void set_iterations(double);
		Int8Array* get_salt();
		void set_salt(Int8Array*);
	};

	class PeriodicWaveConstraints: public Object{
	public:
		bool get_disableNormalization();
		void set_disableNormalization(bool);
	};

	class PeriodicWaveOptions: public PeriodicWaveConstraints {
	public:
		Array* get_imag();
		void set_imag(Array*);
		Array* get_real();
		void set_real(Array*);
	};

	class PointerEventInit: public MouseEventInit {
	public:
		double get_height();
		void set_height(double);
		bool get_isPrimary();
		void set_isPrimary(bool);
		double get_pointerId();
		void set_pointerId(double);
		String* get_pointerType();
		void set_pointerType(const String&);
		double get_pressure();
		void set_pressure(double);
		double get_tiltX();
		void set_tiltX(double);
		double get_tiltY();
		void set_tiltY(double);
		double get_width();
		void set_width(double);
	};

	class PopStateEventInit: public EventInit {
	public:
		template<class ReturnType = Object*> ReturnType get_state();
		void set_state(Object*);
	};

	class PositionOptions: public Object{
	public:
		bool get_enableHighAccuracy();
		void set_enableHighAccuracy(bool);
		double get_maximumAge();
		void set_maximumAge(double);
		double get_timeout();
		void set_timeout(double);
	};

	class ProgressEventInit: public EventInit {
	public:
		bool get_lengthComputable();
		void set_lengthComputable(bool);
		double get_loaded();
		void set_loaded(double);
		double get_total();
		void set_total(double);
	};

	class PushEventInit: public ExtendableEventInit {
	public:
		Int8Array* get_data();
		void set_data(Int8Array*);
	};

	class PushSubscriptionChangeInit: public ExtendableEventInit {
	public:
		PushSubscription* get_newSubscription();
		void set_newSubscription(PushSubscription*);
		PushSubscription* get_oldSubscription();
		void set_oldSubscription(PushSubscription*);
	};

	class PushSubscriptionOptionsInit: public Object{
	public:
		Int8Array* get_applicationServerKey();
		void set_applicationServerKey(Int8Array*);
		bool get_userVisibleOnly();
		void set_userVisibleOnly(bool);
	};

	class QueuingStrategy: public Object{
	public:
		double get_highWaterMark();
		void set_highWaterMark(double);
		EventListener* get_size();
		void set_size(EventListener*);
	};

	class RTCConfiguration: public Object{
	public:
		String* get_bundlePolicy();
		void set_bundlePolicy(const String&);
		Array* get_iceServers();
		void set_iceServers(Array*);
		String* get_iceTransportPolicy();
		void set_iceTransportPolicy(const String&);
		String* get_peerIdentity();
		void set_peerIdentity(const String&);
	};

	class RTCDTMFToneChangeEventInit: public EventInit {
	public:
		String* get_tone();
		void set_tone(const String&);
	};

	class RTCDtlsFingerprint: public Object{
	public:
		String* get_algorithm();
		void set_algorithm(const String&);
		String* get_value();
		void set_value(const String&);
	};

	class RTCDtlsParameters: public Object{
	public:
		Array* get_fingerprints();
		void set_fingerprints(Array*);
		String* get_role();
		void set_role(const String&);
	};

	class RTCIceCandidateAttributes: public RTCStats {
	public:
		String* get_addressSourceUrl();
		void set_addressSourceUrl(const String&);
		String* get_candidateType();
		void set_candidateType(const String&);
		String* get_ipAddress();
		void set_ipAddress(const String&);
		double get_portNumber();
		void set_portNumber(double);
		double get_priority();
		void set_priority(double);
		String* get_transport();
		void set_transport(const String&);
	};

	class RTCIceCandidateComplete: public Object{
	public:
	};

	class RTCIceCandidateDictionary: public Object{
	public:
		String* get_foundation();
		void set_foundation(const String&);
		String* get_ip();
		void set_ip(const String&);
		String* get_msMTurnSessionId();
		void set_msMTurnSessionId(const String&);
		double get_port();
		void set_port(double);
		double get_priority();
		void set_priority(double);
		String* get_protocol();
		void set_protocol(const String&);
		String* get_relatedAddress();
		void set_relatedAddress(const String&);
		double get_relatedPort();
		void set_relatedPort(double);
		String* get_tcpType();
		void set_tcpType(const String&);
		String* get_type();
		void set_type(const String&);
	};

	class RTCIceCandidateInit: public Object{
	public:
		String* get_candidate();
		void set_candidate(const String&);
		double get_sdpMLineIndex();
		void set_sdpMLineIndex(double);
		String* get_sdpMid();
		void set_sdpMid(const String&);
	};

	class RTCIceCandidatePair: public Object{
	public:
		RTCIceCandidateDictionary* get_local();
		void set_local(RTCIceCandidateDictionary*);
		RTCIceCandidateDictionary* get_remote();
		void set_remote(RTCIceCandidateDictionary*);
	};

	class RTCIceCandidatePairStats: public RTCStats {
	public:
		double get_availableIncomingBitrate();
		void set_availableIncomingBitrate(double);
		double get_availableOutgoingBitrate();
		void set_availableOutgoingBitrate(double);
		double get_bytesReceived();
		void set_bytesReceived(double);
		double get_bytesSent();
		void set_bytesSent(double);
		String* get_localCandidateId();
		void set_localCandidateId(const String&);
		bool get_nominated();
		void set_nominated(bool);
		double get_priority();
		void set_priority(double);
		bool get_readable();
		void set_readable(bool);
		String* get_remoteCandidateId();
		void set_remoteCandidateId(const String&);
		double get_roundTripTime();
		void set_roundTripTime(double);
		String* get_state();
		void set_state(const String&);
		String* get_transportId();
		void set_transportId(const String&);
		bool get_writable();
		void set_writable(bool);
	};

	class RTCIceGatherOptions: public Object{
	public:
		String* get_gatherPolicy();
		void set_gatherPolicy(const String&);
		Array* get_iceservers();
		void set_iceservers(Array*);
		MSPortRange* get_portRange();
		void set_portRange(MSPortRange*);
	};

	class RTCIceParameters: public Object{
	public:
		bool get_iceLite();
		void set_iceLite(bool);
		String* get_password();
		void set_password(const String&);
		String* get_usernameFragment();
		void set_usernameFragment(const String&);
	};

	class RTCIceServer: public Object{
	public:
		String* get_credential();
		void set_credential(const String&);
		template<class ReturnType = Object*> ReturnType get_urls();
		void set_urls(Object*);
		String* get_username();
		void set_username(const String&);
	};

	class RTCRTPStreamStats: public RTCStats {
	public:
		String* get_associateStatsId();
		void set_associateStatsId(const String&);
		String* get_codecId();
		void set_codecId(const String&);
		double get_firCount();
		void set_firCount(double);
		bool get_isRemote();
		void set_isRemote(bool);
		String* get_mediaTrackId();
		void set_mediaTrackId(const String&);
		String* get_mediaType();
		void set_mediaType(const String&);
		double get_nackCount();
		void set_nackCount(double);
		double get_pliCount();
		void set_pliCount(double);
		double get_sliCount();
		void set_sliCount(double);
		String* get_ssrc();
		void set_ssrc(const String&);
		String* get_transportId();
		void set_transportId(const String&);
	};

	class RTCInboundRTPStreamStats: public RTCRTPStreamStats {
	public:
		double get_bytesReceived();
		void set_bytesReceived(double);
		double get_fractionLost();
		void set_fractionLost(double);
		double get_jitter();
		void set_jitter(double);
		double get_packetsLost();
		void set_packetsLost(double);
		double get_packetsReceived();
		void set_packetsReceived(double);
	};

	class RTCMediaStreamTrackStats: public RTCStats {
	public:
		double get_audioLevel();
		void set_audioLevel(double);
		double get_echoReturnLoss();
		void set_echoReturnLoss(double);
		double get_echoReturnLossEnhancement();
		void set_echoReturnLossEnhancement(double);
		double get_frameHeight();
		void set_frameHeight(double);
		double get_frameWidth();
		void set_frameWidth(double);
		double get_framesCorrupted();
		void set_framesCorrupted(double);
		double get_framesDecoded();
		void set_framesDecoded(double);
		double get_framesDropped();
		void set_framesDropped(double);
		double get_framesPerSecond();
		void set_framesPerSecond(double);
		double get_framesReceived();
		void set_framesReceived(double);
		double get_framesSent();
		void set_framesSent(double);
		bool get_remoteSource();
		void set_remoteSource(bool);
		Array* get_ssrcIds();
		void set_ssrcIds(Array*);
		String* get_trackIdentifier();
		void set_trackIdentifier(const String&);
	};

	class RTCOfferOptions: public Object{
	public:
		bool get_iceRestart();
		void set_iceRestart(bool);
		double get_offerToReceiveAudio();
		void set_offerToReceiveAudio(double);
		double get_offerToReceiveVideo();
		void set_offerToReceiveVideo(double);
		bool get_voiceActivityDetection();
		void set_voiceActivityDetection(bool);
	};

	class RTCOutboundRTPStreamStats: public RTCRTPStreamStats {
	public:
		double get_bytesSent();
		void set_bytesSent(double);
		double get_packetsSent();
		void set_packetsSent(double);
		double get_roundTripTime();
		void set_roundTripTime(double);
		double get_targetBitrate();
		void set_targetBitrate(double);
	};

	class RTCPeerConnectionIceEventInit: public EventInit {
	public:
		RTCIceCandidate* get_candidate();
		void set_candidate(RTCIceCandidate*);
	};

	class RTCRtcpFeedback: public Object{
	public:
		String* get_parameter();
		void set_parameter(const String&);
		String* get_type();
		void set_type(const String&);
	};

	class RTCRtcpParameters: public Object{
	public:
		String* get_cname();
		void set_cname(const String&);
		bool get_mux();
		void set_mux(bool);
		bool get_reducedSize();
		void set_reducedSize(bool);
		double get_ssrc();
		void set_ssrc(double);
	};

	class RTCRtpCapabilities: public Object{
	public:
		Array* get_codecs();
		void set_codecs(Array*);
		Array* get_fecMechanisms();
		void set_fecMechanisms(Array*);
		Array* get_headerExtensions();
		void set_headerExtensions(Array*);
	};

	class RTCRtpCodecCapability: public Object{
	public:
		double get_clockRate();
		void set_clockRate(double);
		String* get_kind();
		void set_kind(const String&);
		double get_maxSpatialLayers();
		void set_maxSpatialLayers(double);
		double get_maxTemporalLayers();
		void set_maxTemporalLayers(double);
		double get_maxptime();
		void set_maxptime(double);
		String* get_name();
		void set_name(const String&);
		double get_numChannels();
		void set_numChannels(double);
		template<class ReturnType = Object*> ReturnType get_options();
		void set_options(Object*);
		template<class ReturnType = Object*> ReturnType get_parameters();
		void set_parameters(Object*);
		double get_preferredPayloadType();
		void set_preferredPayloadType(double);
		double get_ptime();
		void set_ptime(double);
		Array* get_rtcpFeedback();
		void set_rtcpFeedback(Array*);
		bool get_svcMultiStreamSupport();
		void set_svcMultiStreamSupport(bool);
	};

	class RTCRtpCodecParameters: public Object{
	public:
		double get_clockRate();
		void set_clockRate(double);
		double get_maxptime();
		void set_maxptime(double);
		String* get_name();
		void set_name(const String&);
		double get_numChannels();
		void set_numChannels(double);
		template<class ReturnType = Object*> ReturnType get_parameters();
		void set_parameters(Object*);
		double get_payloadType();
		void set_payloadType(double);
		double get_ptime();
		void set_ptime(double);
		Array* get_rtcpFeedback();
		void set_rtcpFeedback(Array*);
	};

	class RTCRtpContributingSource: public Object{
	public:
		double get_audioLevel();
		void set_audioLevel(double);
		double get_csrc();
		void set_csrc(double);
		double get_timestamp();
		void set_timestamp(double);
	};

	class RTCRtpEncodingParameters: public Object{
	public:
		bool get_active();
		void set_active(bool);
		double get_codecPayloadType();
		void set_codecPayloadType(double);
		Array* get_dependencyEncodingIds();
		void set_dependencyEncodingIds(Array*);
		String* get_encodingId();
		void set_encodingId(const String&);
		RTCRtpFecParameters* get_fec();
		void set_fec(RTCRtpFecParameters*);
		double get_framerateScale();
		void set_framerateScale(double);
		double get_maxBitrate();
		void set_maxBitrate(double);
		double get_maxFramerate();
		void set_maxFramerate(double);
		double get_minQuality();
		void set_minQuality(double);
		double get_priority();
		void set_priority(double);
		double get_resolutionScale();
		void set_resolutionScale(double);
		RTCRtpRtxParameters* get_rtx();
		void set_rtx(RTCRtpRtxParameters*);
		double get_ssrc();
		void set_ssrc(double);
		RTCSsrcRange* get_ssrcRange();
		void set_ssrcRange(RTCSsrcRange*);
	};

	class RTCRtpFecParameters: public Object{
	public:
		String* get_mechanism();
		void set_mechanism(const String&);
		double get_ssrc();
		void set_ssrc(double);
	};

	class RTCRtpHeaderExtension: public Object{
	public:
		String* get_kind();
		void set_kind(const String&);
		bool get_preferredEncrypt();
		void set_preferredEncrypt(bool);
		double get_preferredId();
		void set_preferredId(double);
		String* get_uri();
		void set_uri(const String&);
	};

	class RTCRtpHeaderExtensionParameters: public Object{
	public:
		bool get_encrypt();
		void set_encrypt(bool);
		double get_id();
		void set_id(double);
		String* get_uri();
		void set_uri(const String&);
	};

	class RTCRtpParameters: public Object{
	public:
		Array* get_codecs();
		void set_codecs(Array*);
		String* get_degradationPreference();
		void set_degradationPreference(const String&);
		Array* get_encodings();
		void set_encodings(Array*);
		Array* get_headerExtensions();
		void set_headerExtensions(Array*);
		String* get_muxId();
		void set_muxId(const String&);
		RTCRtcpParameters* get_rtcp();
		void set_rtcp(RTCRtcpParameters*);
	};

	class RTCRtpRtxParameters: public Object{
	public:
		double get_ssrc();
		void set_ssrc(double);
	};

	class RTCRtpUnhandled: public Object{
	public:
		String* get_muxId();
		void set_muxId(const String&);
		double get_payloadType();
		void set_payloadType(double);
		double get_ssrc();
		void set_ssrc(double);
	};

	class RTCSessionDescriptionInit: public Object{
	public:
		String* get_sdp();
		void set_sdp(const String&);
		String* get_type();
		void set_type(const String&);
	};

	class RTCSrtpKeyParam: public Object{
	public:
		String* get_keyMethod();
		void set_keyMethod(const String&);
		String* get_keySalt();
		void set_keySalt(const String&);
		String* get_lifetime();
		void set_lifetime(const String&);
		double get_mkiLength();
		void set_mkiLength(double);
		double get_mkiValue();
		void set_mkiValue(double);
	};

	class RTCSrtpSdesParameters: public Object{
	public:
		String* get_cryptoSuite();
		void set_cryptoSuite(const String&);
		Array* get_keyParams();
		void set_keyParams(Array*);
		Array* get_sessionParams();
		void set_sessionParams(Array*);
		double get_tag();
		void set_tag(double);
	};

	class RTCSsrcRange: public Object{
	public:
		double get_max();
		void set_max(double);
		double get_min();
		void set_min(double);
	};

	class RTCStatsReport: public Object{
	public:
	};

	class RTCTransportStats: public RTCStats {
	public:
		bool get_activeConnection();
		void set_activeConnection(bool);
		double get_bytesReceived();
		void set_bytesReceived(double);
		double get_bytesSent();
		void set_bytesSent(double);
		String* get_localCertificateId();
		void set_localCertificateId(const String&);
		String* get_remoteCertificateId();
		void set_remoteCertificateId(const String&);
		String* get_rtcpTransportStatsId();
		void set_rtcpTransportStatsId(const String&);
		String* get_selectedCandidatePairId();
		void set_selectedCandidatePairId(const String&);
	};

	class RegistrationOptions: public Object{
	public:
		String* get_scope();
		void set_scope(const String&);
	};

	class RequestInit: public Object{
	public:
		Blob* get_body();
		void set_body(Blob*);
		String* get_cache();
		void set_cache(const String&);
		String* get_credentials();
		void set_credentials(const String&);
		Headers* get_headers();
		void set_headers(Headers*);
		String* get_integrity();
		void set_integrity(const String&);
		bool get_keepalive();
		void set_keepalive(bool);
		String* get_method();
		void set_method(const String&);
		String* get_mode();
		void set_mode(const String&);
		String* get_redirect();
		void set_redirect(const String&);
		String* get_referrer();
		void set_referrer(const String&);
		String* get_referrerPolicy();
		void set_referrerPolicy(const String&);
		AbortSignal* get_signal();
		void set_signal(AbortSignal*);
		template<class ReturnType = Object*> ReturnType get_window();
		void set_window(Object*);
	};

	class ResponseInit: public Object{
	public:
		Headers* get_headers();
		void set_headers(Headers*);
		double get_status();
		void set_status(double);
		String* get_statusText();
		void set_statusText(const String&);
	};

	class RsaHashedImportParams: public Algorithm {
	public:
		String* get_hash();
		void set_hash(const String&);
	};

	class RsaKeyAlgorithm: public KeyAlgorithm {
	public:
		double get_modulusLength();
		void set_modulusLength(double);
		Uint8Array* get_publicExponent();
		void set_publicExponent(Uint8Array*);
	};

	class RsaHashedKeyAlgorithm: public RsaKeyAlgorithm {
	public:
		KeyAlgorithm* get_hash();
		void set_hash(KeyAlgorithm*);
	};

	class RsaKeyGenParams: public Algorithm {
	public:
		double get_modulusLength();
		void set_modulusLength(double);
		Uint8Array* get_publicExponent();
		void set_publicExponent(Uint8Array*);
	};

	class RsaHashedKeyGenParams: public RsaKeyGenParams {
	public:
		String* get_hash();
		void set_hash(const String&);
	};

	class RsaOaepParams: public Algorithm {
	public:
		Int8Array* get_label();
		void set_label(Int8Array*);
	};

	class RsaOtherPrimesInfo: public Object{
	public:
		String* get_d();
		void set_d(const String&);
		String* get_r();
		void set_r(const String&);
		String* get_t();
		void set_t(const String&);
	};

	class RsaPssParams: public Algorithm {
	public:
		double get_saltLength();
		void set_saltLength(double);
	};

	class ScopedCredentialDescriptor: public Object{
	public:
		Int8Array* get_id();
		void set_id(Int8Array*);
		Array* get_transports();
		void set_transports(Array*);
		String* get_type();
		void set_type(const String&);
	};

	class ScopedCredentialOptions: public Object{
	public:
		Array* get_excludeList();
		void set_excludeList(Array*);
		WebAuthnExtensions* get_extensions();
		void set_extensions(WebAuthnExtensions*);
		String* get_rpId();
		void set_rpId(const String&);
		double get_timeoutSeconds();
		void set_timeoutSeconds(double);
	};

	class ScopedCredentialParameters: public Object{
	public:
		String* get_algorithm();
		void set_algorithm(const String&);
		String* get_type();
		void set_type(const String&);
	};

	class SecurityPolicyViolationEventInit: public EventInit {
	public:
		String* get_blockedURI();
		void set_blockedURI(const String&);
		double get_columnNumber();
		void set_columnNumber(double);
		String* get_documentURI();
		void set_documentURI(const String&);
		String* get_effectiveDirective();
		void set_effectiveDirective(const String&);
		double get_lineNumber();
		void set_lineNumber(double);
		String* get_originalPolicy();
		void set_originalPolicy(const String&);
		String* get_referrer();
		void set_referrer(const String&);
		String* get_sourceFile();
		void set_sourceFile(const String&);
		double get_statusCode();
		void set_statusCode(double);
		String* get_violatedDirective();
		void set_violatedDirective(const String&);
	};

	class ServiceWorkerMessageEventInit: public EventInit {
	public:
		template<class ReturnType = Object*> ReturnType get_data();
		void set_data(Object*);
		String* get_lastEventId();
		void set_lastEventId(const String&);
		String* get_origin();
		void set_origin(const String&);
		Array* get_ports();
		void set_ports(Array*);
		ServiceWorker* get_source();
		void set_source(ServiceWorker*);
	};

	class SpeechSynthesisEventInit: public EventInit {
	public:
		double get_charIndex();
		void set_charIndex(double);
		double get_charLength();
		void set_charLength(double);
		double get_elapsedTime();
		void set_elapsedTime(double);
		String* get_name();
		void set_name(const String&);
		SpeechSynthesisUtterance* get_utterance();
		void set_utterance(SpeechSynthesisUtterance*);
	};

	class StereoPannerOptions: public AudioNodeOptions {
	public:
		double get_pan();
		void set_pan(double);
	};

	class StoreExceptionsInformation: public ExceptionInformation {
	public:
		String* get_detailURI();
		void set_detailURI(const String&);
		String* get_explanationString();
		void set_explanationString(const String&);
		String* get_siteName();
		void set_siteName(const String&);
	};

	class StoreSiteSpecificExceptionsInformation: public StoreExceptionsInformation {
	public:
		Array* get_arrayOfDomainStrings();
		void set_arrayOfDomainStrings(Array*);
	};

	class SyncEventInit: public ExtendableEventInit {
	public:
		bool get_lastChance();
		void set_lastChance(bool);
		String* get_tag();
		void set_tag(const String&);
	};

	class TextDecodeOptions: public Object{
	public:
		bool get_stream();
		void set_stream(bool);
	};

	class TextDecoderOptions: public Object{
	public:
		bool get_fatal();
		void set_fatal(bool);
		bool get_ignoreBOM();
		void set_ignoreBOM(bool);
	};

	class TrackEventInit: public EventInit {
	public:
		VideoTrack* get_track();
		void set_track(VideoTrack*);
	};

	class TransitionEventInit: public EventInit {
	public:
		double get_elapsedTime();
		void set_elapsedTime(double);
		String* get_propertyName();
		void set_propertyName(const String&);
	};

	class UnderlyingSink: public Object{
	public:
		EventListener* get_abort();
		void set_abort(EventListener*);
		EventListener* get_close();
		void set_close(EventListener*);
		EventListener* get_start();
		void set_start(EventListener*);
		EventListener* get_write();
		void set_write(EventListener*);
	};

	class VRDisplayEventInit: public EventInit {
	public:
		VRDisplay* get_display();
		void set_display(VRDisplay*);
		String* get_reason();
		void set_reason(const String&);
	};

	class VRLayer: public Object{
	public:
		Array* get_leftBounds();
		void set_leftBounds(Array*);
		Array* get_rightBounds();
		void set_rightBounds(Array*);
		HTMLCanvasElement* get_source();
		void set_source(HTMLCanvasElement*);
	};

	class VRStageParameters: public Object{
	public:
		Float32Array* get_sittingToStandingTransform();
		void set_sittingToStandingTransform(Float32Array*);
		double get_sizeX();
		void set_sizeX(double);
		double get_sizeY();
		void set_sizeY(double);
	};

	class WaveShaperOptions: public AudioNodeOptions {
	public:
		Array* get_curve();
		void set_curve(Array*);
		String* get_oversample();
		void set_oversample(const String&);
	};

	class WebAuthnExtensions: public Object{
	public:
	};

	class WheelEventInit: public MouseEventInit {
	public:
		double get_deltaMode();
		void set_deltaMode(double);
		double get_deltaX();
		void set_deltaX(double);
		double get_deltaY();
		void set_deltaY(double);
		double get_deltaZ();
		void set_deltaZ(double);
	};

	class EventListener: public Object{
	public:
	};

	class ANGLE_instanced_arrays: public Object{
	public:
		void drawArraysInstancedANGLE(double mode, double first, double count, double primcount);
		void drawElementsInstancedANGLE(double mode, double count, double type, double offset, double primcount);
		void vertexAttribDivisorANGLE(double index, double divisor);
		ANGLE_instanced_arrays* get_prototype();
		void set_prototype(ANGLE_instanced_arrays*);
		ANGLE_instanced_arrays();
		double get_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE();
	};

	class AbortController: public Object{
	public:
		AbortSignal* get_signal();
		void abort();
		AbortController* get_prototype();
		void set_prototype(AbortController*);
		AbortController();
	};

	class AbortSignalEventMap: public Object{
	public:
		ProgressEvent* get_abort();
		void set_abort(ProgressEvent*);
	};

	class [[cheerp::client_layout]] EventTarget: public Object{
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		bool dispatchEvent(Event* evt);
		void removeEventListener(const String& type);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, bool options);
		EventTarget* get_prototype();
		void set_prototype(EventTarget*);
		EventTarget();
	};

	class AbortSignal: public EventTarget {
	public:
		bool get_aborted();
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		AbortSignal* get_prototype();
		void set_prototype(AbortSignal*);
		AbortSignal();
	};

	class AbstractWorkerEventMap: public Object{
	public:
		ErrorEvent* get_error();
		void set_error(ErrorEvent*);
	};

	class [[cheerp::client_layout]] AbstractWorker{
	public:
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
	};

	class AesCfbParams: public Algorithm {
	public:
		Int8Array* get_iv();
		void set_iv(Int8Array*);
	};

	class AesCmacParams: public Algorithm {
	public:
		double get_length();
		void set_length(double);
	};

	class AudioNode: public EventTarget {
	public:
		double get_channelCount();
		void set_channelCount(double);
		String* get_channelCountMode();
		void set_channelCountMode(const String&);
		String* get_channelInterpretation();
		void set_channelInterpretation(const String&);
		AudioContext* get_context();
		double get_numberOfInputs();
		double get_numberOfOutputs();
		AudioNode* connect(AudioNode* destination);
		AudioNode* connect(AudioNode* destination, double output);
		AudioNode* connect(AudioNode* destination, double output, double input);
		void connect(AudioParam* destination);
		void connect(AudioParam* destination, double output);
		void disconnect();
		void disconnect(double output);
		void disconnect(AudioNode* destination);
		void disconnect(AudioNode* destination, double output);
		void disconnect(AudioNode* destination, double output, double input);
		void disconnect(AudioParam* destination);
		void disconnect(AudioParam* destination, double output);
		AudioNode* get_prototype();
		void set_prototype(AudioNode*);
		AudioNode();
	};

	class AnalyserNode: public AudioNode {
	public:
		double get_fftSize();
		void set_fftSize(double);
		double get_frequencyBinCount();
		double get_maxDecibels();
		void set_maxDecibels(double);
		double get_minDecibels();
		void set_minDecibels(double);
		double get_smoothingTimeConstant();
		void set_smoothingTimeConstant(double);
		void getByteFrequencyData(Uint8Array* array);
		void getByteTimeDomainData(Uint8Array* array);
		void getFloatFrequencyData(Float32Array* array);
		void getFloatTimeDomainData(Float32Array* array);
		AnalyserNode* get_prototype();
		void set_prototype(AnalyserNode*);
		AnalyserNode();
	};

	class Animation: public Object{
	public:
		double get_currentTime();
		void set_currentTime(double);
		AnimationEffectReadOnly* get_effect();
		void set_effect(AnimationEffectReadOnly*);
		Promise* get_finished();
		String* get_id();
		void set_id(const String&);
		bool get_pending();
		String* get_playState();
		double get_playbackRate();
		void set_playbackRate(double);
		Promise* get_ready();
		double get_startTime();
		void set_startTime(double);
		AnimationTimeline* get_timeline();
		void set_timeline(AnimationTimeline*);
		void cancel();
		void finish();
		EventListener* get_oncancel();
		void set_oncancel(EventListener*);
		EventListener* get_onfinish();
		void set_onfinish(EventListener*);
		void pause();
		void play();
		void reverse();
		Animation* get_prototype();
		void set_prototype(Animation*);
		Animation();
		Animation(AnimationEffectReadOnly* effect);
		Animation(AnimationEffectReadOnly* effect, AnimationTimeline* timeline);
	};

	class AnimationEffectReadOnly: public Object{
	public:
		double get_timing();
		ComputedTimingProperties* getComputedTiming();
	};

	class Event: public Object{
	public:
		bool get_bubbles();
		bool get_cancelBubble();
		void set_cancelBubble(bool);
		bool get_cancelable();
		EventTarget* get_currentTarget();
		bool get_defaultPrevented();
		double get_eventPhase();
		bool get_isTrusted();
		bool get_returnValue();
		void set_returnValue(bool);
		bool get_scoped();
		Element* get_srcElement();
		EventTarget* get_target();
		double get_timeStamp();
		String* get_type();
		Array* deepPath();
		void initEvent(const String& type);
		void initEvent(const String& type, bool bubbles);
		void initEvent(const String& type, bool bubbles, bool cancelable);
		void preventDefault();
		void stopImmediatePropagation();
		void stopPropagation();
		Event* get_prototype();
		void set_prototype(Event*);
		Event(const String& typeArg);
		Event(const String& typeArg, EventInit* eventInitDict);
		double get_AT_TARGET();
		double get_BUBBLING_PHASE();
		double get_CAPTURING_PHASE();
		double get_NONE();
	};

	class AnimationEvent: public Event {
	public:
		String* get_animationName();
		double get_elapsedTime();
		AnimationEvent* get_prototype();
		void set_prototype(AnimationEvent*);
		AnimationEvent(const String& typeArg);
		AnimationEvent(const String& typeArg, AnimationEventInit* eventInitDict);
	};

	class AnimationKeyFrame: public Object{
	public:
		String* get_easing();
		void set_easing(const String&);
		double get_offset();
		void set_offset(double);
		Object*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
		Object* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
	};

	class AnimationOptions: public Object{
	public:
		double get_delay();
		void set_delay(double);
		String* get_direction();
		void set_direction(const String&);
		double get_duration();
		void set_duration(double);
		String* get_easing();
		void set_easing(const String&);
		double get_endDelay();
		void set_endDelay(double);
		String* get_fill();
		void set_fill(const String&);
		String* get_id();
		void set_id(const String&);
		double get_iterationStart();
		void set_iterationStart(double);
		double get_iterations();
		void set_iterations(double);
	};

	class AnimationPlaybackEvent: public Event {
	public:
		double get_currentTime();
		double get_timelineTime();
		AnimationPlaybackEvent* get_prototype();
		void set_prototype(AnimationPlaybackEvent*);
		AnimationPlaybackEvent(const String& type);
		AnimationPlaybackEvent(const String& type, AnimationPlaybackEventInit* eventInitDict);
	};

	class AnimationPlaybackEventInit: public EventInit {
	public:
		double get_currentTime();
		void set_currentTime(double);
		double get_timelineTime();
		void set_timelineTime(double);
	};

	class AnimationTimeline: public Object{
	public:
		double get_currentTime();
	};

	class ApplicationCacheEventMap: public Object{
	public:
		Event* get_cached();
		void set_cached(Event*);
		Event* get_checking();
		void set_checking(Event*);
		Event* get_downloading();
		void set_downloading(Event*);
		Event* get_error();
		void set_error(Event*);
		Event* get_noupdate();
		void set_noupdate(Event*);
		Event* get_obsolete();
		void set_obsolete(Event*);
		ProgressEvent* get_progress();
		void set_progress(ProgressEvent*);
		Event* get_updateready();
		void set_updateready(Event*);
	};

	class ApplicationCache: public EventTarget {
	public:
		EventListener* get_oncached();
		void set_oncached(EventListener*);
		EventListener* get_onchecking();
		void set_onchecking(EventListener*);
		EventListener* get_ondownloading();
		void set_ondownloading(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onnoupdate();
		void set_onnoupdate(EventListener*);
		EventListener* get_onobsolete();
		void set_onobsolete(EventListener*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_onupdateready();
		void set_onupdateready(EventListener*);
		double get_status();
		void abort();
		void swapCache();
		void update();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		ApplicationCache* get_prototype();
		void set_prototype(ApplicationCache*);
		ApplicationCache();
		double get_CHECKING();
		double get_DOWNLOADING();
		double get_IDLE();
		double get_OBSOLETE();
		double get_UNCACHED();
		double get_UPDATEREADY();
	};

	class AssignedNodesOptions: public Object{
	public:
		bool get_flatten();
		void set_flatten(bool);
	};

	class [[cheerp::client_layout]] Node: public EventTarget {
	public:
		String* get_baseURI();
		NodeListOf<Node>* get_childNodes();
		Node* get_firstChild();
		bool get_isConnected();
		Node* get_lastChild();
		String* get_localName();
		String* get_namespaceURI();
		Node* get_nextSibling();
		String* get_nodeName();
		double get_nodeType();
		String* get_nodeValue();
		void set_nodeValue(const String&);
		Document* get_ownerDocument();
		HTMLElement* get_parentElement();
		Node* get_parentNode();
		Node* get_previousSibling();
		String* get_textContent();
		void set_textContent(const String&);
		Node* appendChild(Node* newChild);
		Node* cloneNode();
		Node* cloneNode(bool deep);
		double compareDocumentPosition(Node* other);
		bool contains(Node* child);
		bool hasChildNodes();
		Node* insertBefore(Node* newChild, Node* refChild);
		bool isDefaultNamespace(const String& namespaceURI);
		bool isEqualNode(Node* arg);
		bool isSameNode(Node* other);
		String* lookupNamespaceURI(const String& prefix);
		String* lookupPrefix(const String& namespaceURI);
		void normalize();
		Node* removeChild(Node* oldChild);
		Node* replaceChild(Node* newChild, Node* oldChild);
		Node* get_prototype();
		void set_prototype(Node*);
		Node();
		double get_ATTRIBUTE_NODE();
		double get_CDATA_SECTION_NODE();
		double get_COMMENT_NODE();
		double get_DOCUMENT_FRAGMENT_NODE();
		double get_DOCUMENT_NODE();
		double get_DOCUMENT_POSITION_CONTAINED_BY();
		double get_DOCUMENT_POSITION_CONTAINS();
		double get_DOCUMENT_POSITION_DISCONNECTED();
		double get_DOCUMENT_POSITION_FOLLOWING();
		double get_DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC();
		double get_DOCUMENT_POSITION_PRECEDING();
		double get_DOCUMENT_TYPE_NODE();
		double get_ELEMENT_NODE();
		double get_ENTITY_NODE();
		double get_ENTITY_REFERENCE_NODE();
		double get_NOTATION_NODE();
		double get_PROCESSING_INSTRUCTION_NODE();
		double get_TEXT_NODE();
	};

	class Attr: public Node {
	public:
		String* get_name();
		Element* get_ownerElement();
		String* get_prefix();
		bool get_specified();
		String* get_value();
		void set_value(const String&);
		Attr* get_prototype();
		void set_prototype(Attr*);
		Attr();
	};

	class AudioBuffer: public Object{
	public:
		double get_duration();
		double get_length();
		double get_numberOfChannels();
		double get_sampleRate();
		void copyFromChannel(Float32Array* destination, double channelNumber);
		void copyFromChannel(Float32Array* destination, double channelNumber, double startInChannel);
		void copyToChannel(Float32Array* source, double channelNumber);
		void copyToChannel(Float32Array* source, double channelNumber, double startInChannel);
		Float32Array* getChannelData(double channel);
		AudioBuffer* get_prototype();
		void set_prototype(AudioBuffer*);
		AudioBuffer();
	};

	class AudioBufferSourceNodeEventMap: public Object{
	public:
		Event* get_ended();
		void set_ended(Event*);
	};

	class AudioBufferSourceNode: public AudioNode {
	public:
		AudioBuffer* get_buffer();
		void set_buffer(AudioBuffer*);
		AudioParam* get_detune();
		bool get_loop();
		void set_loop(bool);
		double get_loopEnd();
		void set_loopEnd(double);
		double get_loopStart();
		void set_loopStart(double);
		EventListener* get_onended();
		void set_onended(EventListener*);
		AudioParam* get_playbackRate();
		void start();
		void start(double when);
		void start(double when, double offset);
		void start(double when, double offset, double duration);
		void stop();
		void stop(double when);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		AudioBufferSourceNode* get_prototype();
		void set_prototype(AudioBufferSourceNode*);
		AudioBufferSourceNode();
	};

	class AudioContextEventMap: public Object{
	public:
		Event* get_statechange();
		void set_statechange(Event*);
	};

	class AudioContextBase: public EventTarget {
	public:
		double get_currentTime();
		AudioDestinationNode* get_destination();
		AudioListener* get_listener();
		EventListener* get_onstatechange();
		void set_onstatechange(EventListener*);
		double get_sampleRate();
		String* get_state();
		Promise* close();
		AnalyserNode* createAnalyser();
		BiquadFilterNode* createBiquadFilter();
		AudioBuffer* createBuffer(double numberOfChannels, double length, double sampleRate);
		AudioBufferSourceNode* createBufferSource();
		ChannelMergerNode* createChannelMerger();
		ChannelMergerNode* createChannelMerger(double numberOfInputs);
		ChannelSplitterNode* createChannelSplitter();
		ChannelSplitterNode* createChannelSplitter(double numberOfOutputs);
		ConvolverNode* createConvolver();
		DelayNode* createDelay();
		DelayNode* createDelay(double maxDelayTime);
		DynamicsCompressorNode* createDynamicsCompressor();
		GainNode* createGain();
		IIRFilterNode* createIIRFilter(Array* feedforward, Array* feedback);
		MediaElementAudioSourceNode* createMediaElementSource(HTMLMediaElement* mediaElement);
		MediaStreamAudioSourceNode* createMediaStreamSource(MediaStream* mediaStream);
		OscillatorNode* createOscillator();
		PannerNode* createPanner();
		PeriodicWave* createPeriodicWave(Float32Array* real, Float32Array* imag);
		PeriodicWave* createPeriodicWave(Float32Array* real, Float32Array* imag, PeriodicWaveConstraints* constraints);
		ScriptProcessorNode* createScriptProcessor();
		ScriptProcessorNode* createScriptProcessor(double bufferSize);
		ScriptProcessorNode* createScriptProcessor(double bufferSize, double numberOfInputChannels);
		ScriptProcessorNode* createScriptProcessor(double bufferSize, double numberOfInputChannels, double numberOfOutputChannels);
		StereoPannerNode* createStereoPanner();
		WaveShaperNode* createWaveShaper();
		Promise* decodeAudioData(ArrayBuffer* audioData);
		Promise* decodeAudioData(ArrayBuffer* audioData, EventListener* successCallback);
		Promise* decodeAudioData(ArrayBuffer* audioData, EventListener* successCallback, EventListener* errorCallback);
		Promise* resume();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
	};

	class AudioContext: public AudioContextBase {
	public:
		Promise* suspend();
		AudioContext* get_prototype();
		void set_prototype(AudioContext*);
		AudioContext();
	};

	class AudioDestinationNode: public AudioNode {
	public:
		double get_maxChannelCount();
		AudioDestinationNode* get_prototype();
		void set_prototype(AudioDestinationNode*);
		AudioDestinationNode();
	};

	class AudioListener: public Object{
	public:
		double get_dopplerFactor();
		void set_dopplerFactor(double);
		double get_speedOfSound();
		void set_speedOfSound(double);
		void setOrientation(double x, double y, double z, double xUp, double yUp, double zUp);
		void setPosition(double x, double y, double z);
		void setVelocity(double x, double y, double z);
		AudioListener* get_prototype();
		void set_prototype(AudioListener*);
		AudioListener();
	};

	class AudioParam: public Object{
	public:
		double get_defaultValue();
		double get_value();
		void set_value(double);
		AudioParam* cancelScheduledValues(double cancelTime);
		AudioParam* exponentialRampToValueAtTime(double value, double endTime);
		AudioParam* linearRampToValueAtTime(double value, double endTime);
		AudioParam* setTargetAtTime(double target, double startTime, double timeConstant);
		AudioParam* setValueAtTime(double value, double startTime);
		AudioParam* setValueCurveAtTime(Array* values, double startTime, double duration);
		AudioParam* get_prototype();
		void set_prototype(AudioParam*);
		AudioParam();
	};

	class AudioProcessingEvent: public Event {
	public:
		AudioBuffer* get_inputBuffer();
		AudioBuffer* get_outputBuffer();
		double get_playbackTime();
		AudioProcessingEvent* get_prototype();
		void set_prototype(AudioProcessingEvent*);
		AudioProcessingEvent();
	};

	class AudioTrack: public Object{
	public:
		bool get_enabled();
		void set_enabled(bool);
		String* get_id();
		String* get_kind();
		void set_kind(const String&);
		String* get_label();
		String* get_language();
		void set_language(const String&);
		SourceBuffer* get_sourceBuffer();
		AudioTrack* get_prototype();
		void set_prototype(AudioTrack*);
		AudioTrack();
	};

	class AudioTrackListEventMap: public Object{
	public:
		TrackEvent* get_addtrack();
		void set_addtrack(TrackEvent*);
		Event* get_change();
		void set_change(Event*);
		TrackEvent* get_removetrack();
		void set_removetrack(TrackEvent*);
	};

	class AudioTrackList: public EventTarget {
	public:
		double get_length();
		EventListener* get_onaddtrack();
		void set_onaddtrack(EventListener*);
		EventListener* get_onchange();
		void set_onchange(EventListener*);
		EventListener* get_onremovetrack();
		void set_onremovetrack(EventListener*);
		AudioTrack* getTrackById(const String& id);
		AudioTrack* item(double index);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		AudioTrack*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<AudioTrack*>(this, 0)[index];
		}
		AudioTrack* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<AudioTrack*>(this, 0)[index];
		}
		AudioTrackList* get_prototype();
		void set_prototype(AudioTrackList*);
		AudioTrackList();
	};

	class BarProp: public Object{
	public:
		bool get_visible();
		BarProp* get_prototype();
		void set_prototype(BarProp*);
		BarProp();
	};

	class BeforeUnloadEvent: public Event {
	public:
		template<class ReturnType = Object*> ReturnType get_returnValue();
		void set_returnValue(Object*);
		BeforeUnloadEvent* get_prototype();
		void set_prototype(BeforeUnloadEvent*);
		BeforeUnloadEvent();
	};

	class BhxBrowser: public Object{
	public:
		DOMException* get_lastError();
		bool checkMatchesGlobExpression(const String& pattern, const String& value);
		bool checkMatchesUriExpression(const String& pattern, const String& value);
		void clearLastError();
		double currentWindowId();
		void fireExtensionApiTelemetry(const String& functionName, bool isSucceeded, bool isSupported, const String& errorString);
		void genericFunction(double functionId, Object* destination);
		void genericFunction(double functionId, Object* destination, const String& parameters);
		void genericFunction(double functionId, Object* destination, const String& parameters, double callbackId);
		String* genericSynchronousFunction(double functionId);
		String* genericSynchronousFunction(double functionId, const String& parameters);
		String* getExtensionId();
		template<class ReturnType = Object*> ReturnType getThisAddress();
		void registerGenericFunctionCallbackHandler(Function* callbackHandler);
		void registerGenericListenerHandler(Function* eventHandler);
		void setLastError(const String& parameters);
		void webPlatformGenericFunction(Object* destination);
		void webPlatformGenericFunction(Object* destination, const String& parameters);
		void webPlatformGenericFunction(Object* destination, const String& parameters, double callbackId);
		BhxBrowser* get_prototype();
		void set_prototype(BhxBrowser*);
		BhxBrowser();
	};

	class BiquadFilterNode: public AudioNode {
	public:
		AudioParam* get_detune();
		AudioParam* get_frequency();
		AudioParam* get_gain();
		String* get_type();
		void set_type(const String&);
		void getFrequencyResponse(Float32Array* frequencyHz, Float32Array* magResponse, Float32Array* phaseResponse);
		BiquadFilterNode* get_prototype();
		void set_prototype(BiquadFilterNode*);
		BiquadFilterNode();
	};

	class Blob: public Object{
	public:
		double get_size();
		String* get_type();
		void msClose();
		template<class ReturnType = Object*> ReturnType msDetachStream();
		Blob* slice();
		Blob* slice(double start);
		Blob* slice(double start, double end);
		Blob* slice(double start, double end, const String& contentType);
		Blob* get_prototype();
		void set_prototype(Blob*);
		Blob();
		Blob(Array* blobParts);
		Blob(Array* blobParts, BlobPropertyBag* options);
	};

	class BlobPropertyBag: public Object{
	public:
		String* get_endings();
		void set_endings(const String&);
		String* get_type();
		void set_type(const String&);
	};

	class Body: public Object{
	public:
		bool get_bodyUsed();
		Promise* arrayBuffer();
		Promise* blob();
		Promise* formData();
		Promise* json();
		Promise* text();
	};

	class BroadcastChannel: public EventTarget {
	public:
		String* get_name();
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		EventListener* get_onmessageerror();
		void set_onmessageerror(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void close();
		void postMessage(Object* message);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		BroadcastChannel* get_prototype();
		void set_prototype(BroadcastChannel*);
		BroadcastChannel(const String& name);
	};

	class BroadcastChannelEventMap: public Object{
	public:
		MessageEvent* get_message();
		void set_message(MessageEvent*);
		MessageEvent* get_messageerror();
		void set_messageerror(MessageEvent*);
	};

	class ByteLengthQueuingStrategy: public Object{
	public:
		double get_highWaterMark();
		void set_highWaterMark(double);
		double size();
		double size(Object* chunk);
		ByteLengthQueuingStrategy* get_prototype();
		void set_prototype(ByteLengthQueuingStrategy*);
		ByteLengthQueuingStrategy(QueuingStrategy* strategy);
	};

	class [[cheerp::client_layout]] ChildNode{
	public:
		void remove();
	};

	class CharacterData: public Node , public ChildNode {
	public:
		String* get_data();
		void set_data(const String&);
		double get_length();
		void appendData(const String& arg);
		void deleteData(double offset, double count);
		void insertData(double offset, const String& arg);
		void replaceData(double offset, double count, const String& arg);
		String* substringData(double offset, double count);
		CharacterData* get_prototype();
		void set_prototype(CharacterData*);
		CharacterData();
	};

	class Text: public CharacterData {
	public:
		HTMLSlotElement* get_assignedSlot();
		String* get_wholeText();
		Text* splitText(double offset);
		Text* get_prototype();
		void set_prototype(Text*);
		Text();
		Text(const String& data);
	};

	class CDATASection: public Text {
	public:
		CDATASection* get_prototype();
		void set_prototype(CDATASection*);
		CDATASection();
	};

	class CSS: public Object{
	public:
		String* escape(const String& value);
		bool supports(const String& property);
		bool supports(const String& property, const String& value);
	};

	class CSSRule: public Object{
	public:
		String* get_cssText();
		void set_cssText(const String&);
		CSSRule* get_parentRule();
		CSSStyleSheet* get_parentStyleSheet();
		double get_type();
		CSSRule* get_prototype();
		void set_prototype(CSSRule*);
		CSSRule();
		double get_CHARSET_RULE();
		double get_FONT_FACE_RULE();
		double get_IMPORT_RULE();
		double get_KEYFRAMES_RULE();
		double get_KEYFRAME_RULE();
		double get_MEDIA_RULE();
		double get_NAMESPACE_RULE();
		double get_PAGE_RULE();
		double get_STYLE_RULE();
		double get_SUPPORTS_RULE();
		double get_UNKNOWN_RULE();
		double get_VIEWPORT_RULE();
	};

	class CSSGroupingRule: public CSSRule {
	public:
		CSSRuleList* get_cssRules();
		void deleteRule(double index);
		double insertRule(const String& rule, double index);
		CSSGroupingRule* get_prototype();
		void set_prototype(CSSGroupingRule*);
		CSSGroupingRule();
	};

	class CSSConditionRule: public CSSGroupingRule {
	public:
		String* get_conditionText();
		void set_conditionText(const String&);
		CSSConditionRule* get_prototype();
		void set_prototype(CSSConditionRule*);
		CSSConditionRule();
	};

	class CSSFontFaceRule: public CSSRule {
	public:
		CSSStyleDeclaration* get_style();
		CSSFontFaceRule* get_prototype();
		void set_prototype(CSSFontFaceRule*);
		CSSFontFaceRule();
	};

	class CSSImportRule: public CSSRule {
	public:
		String* get_href();
		MediaList* get_media();
		CSSStyleSheet* get_styleSheet();
		CSSImportRule* get_prototype();
		void set_prototype(CSSImportRule*);
		CSSImportRule();
	};

	class CSSKeyframeRule: public CSSRule {
	public:
		String* get_keyText();
		void set_keyText(const String&);
		CSSStyleDeclaration* get_style();
		CSSKeyframeRule* get_prototype();
		void set_prototype(CSSKeyframeRule*);
		CSSKeyframeRule();
	};

	class CSSKeyframesRule: public CSSRule {
	public:
		CSSRuleList* get_cssRules();
		String* get_name();
		void set_name(const String&);
		void appendRule(const String& rule);
		void deleteRule(const String& rule);
		CSSKeyframeRule* findRule(const String& rule);
		CSSKeyframesRule* get_prototype();
		void set_prototype(CSSKeyframesRule*);
		CSSKeyframesRule();
	};

	class CSSMediaRule: public CSSConditionRule {
	public:
		MediaList* get_media();
		CSSMediaRule* get_prototype();
		void set_prototype(CSSMediaRule*);
		CSSMediaRule();
	};

	class CSSNamespaceRule: public CSSRule {
	public:
		String* get_namespaceURI();
		String* get_prefix();
		CSSNamespaceRule* get_prototype();
		void set_prototype(CSSNamespaceRule*);
		CSSNamespaceRule();
	};

	class CSSPageRule: public CSSRule {
	public:
		String* get_pseudoClass();
		String* get_selector();
		String* get_selectorText();
		void set_selectorText(const String&);
		CSSStyleDeclaration* get_style();
		CSSPageRule* get_prototype();
		void set_prototype(CSSPageRule*);
		CSSPageRule();
	};

	class CSSRuleList: public Object{
	public:
		double get_length();
		CSSRule* item(double index);
		CSSRule*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<CSSRule*>(this, 0)[index];
		}
		CSSRule* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<CSSRule*>(this, 0)[index];
		}
		CSSRuleList* get_prototype();
		void set_prototype(CSSRuleList*);
		CSSRuleList();
	};

	class CSSStyleDeclaration: public Object{
	public:
		String* get_alignContent();
		void set_alignContent(const String&);
		String* get_alignItems();
		void set_alignItems(const String&);
		String* get_alignSelf();
		void set_alignSelf(const String&);
		String* get_alignmentBaseline();
		void set_alignmentBaseline(const String&);
		String* get_animation();
		void set_animation(const String&);
		String* get_animationDelay();
		void set_animationDelay(const String&);
		String* get_animationDirection();
		void set_animationDirection(const String&);
		String* get_animationDuration();
		void set_animationDuration(const String&);
		String* get_animationFillMode();
		void set_animationFillMode(const String&);
		String* get_animationIterationCount();
		void set_animationIterationCount(const String&);
		String* get_animationName();
		void set_animationName(const String&);
		String* get_animationPlayState();
		void set_animationPlayState(const String&);
		String* get_animationTimingFunction();
		void set_animationTimingFunction(const String&);
		String* get_backfaceVisibility();
		void set_backfaceVisibility(const String&);
		String* get_background();
		void set_background(const String&);
		String* get_backgroundAttachment();
		void set_backgroundAttachment(const String&);
		String* get_backgroundClip();
		void set_backgroundClip(const String&);
		String* get_backgroundColor();
		void set_backgroundColor(const String&);
		String* get_backgroundImage();
		void set_backgroundImage(const String&);
		String* get_backgroundOrigin();
		void set_backgroundOrigin(const String&);
		String* get_backgroundPosition();
		void set_backgroundPosition(const String&);
		String* get_backgroundPositionX();
		void set_backgroundPositionX(const String&);
		String* get_backgroundPositionY();
		void set_backgroundPositionY(const String&);
		String* get_backgroundRepeat();
		void set_backgroundRepeat(const String&);
		String* get_backgroundSize();
		void set_backgroundSize(const String&);
		String* get_baselineShift();
		void set_baselineShift(const String&);
		String* get_border();
		void set_border(const String&);
		String* get_borderBottom();
		void set_borderBottom(const String&);
		String* get_borderBottomColor();
		void set_borderBottomColor(const String&);
		String* get_borderBottomLeftRadius();
		void set_borderBottomLeftRadius(const String&);
		String* get_borderBottomRightRadius();
		void set_borderBottomRightRadius(const String&);
		String* get_borderBottomStyle();
		void set_borderBottomStyle(const String&);
		String* get_borderBottomWidth();
		void set_borderBottomWidth(const String&);
		String* get_borderCollapse();
		void set_borderCollapse(const String&);
		String* get_borderColor();
		void set_borderColor(const String&);
		String* get_borderImage();
		void set_borderImage(const String&);
		String* get_borderImageOutset();
		void set_borderImageOutset(const String&);
		String* get_borderImageRepeat();
		void set_borderImageRepeat(const String&);
		String* get_borderImageSlice();
		void set_borderImageSlice(const String&);
		String* get_borderImageSource();
		void set_borderImageSource(const String&);
		String* get_borderImageWidth();
		void set_borderImageWidth(const String&);
		String* get_borderLeft();
		void set_borderLeft(const String&);
		String* get_borderLeftColor();
		void set_borderLeftColor(const String&);
		String* get_borderLeftStyle();
		void set_borderLeftStyle(const String&);
		String* get_borderLeftWidth();
		void set_borderLeftWidth(const String&);
		String* get_borderRadius();
		void set_borderRadius(const String&);
		String* get_borderRight();
		void set_borderRight(const String&);
		String* get_borderRightColor();
		void set_borderRightColor(const String&);
		String* get_borderRightStyle();
		void set_borderRightStyle(const String&);
		String* get_borderRightWidth();
		void set_borderRightWidth(const String&);
		String* get_borderSpacing();
		void set_borderSpacing(const String&);
		String* get_borderStyle();
		void set_borderStyle(const String&);
		String* get_borderTop();
		void set_borderTop(const String&);
		String* get_borderTopColor();
		void set_borderTopColor(const String&);
		String* get_borderTopLeftRadius();
		void set_borderTopLeftRadius(const String&);
		String* get_borderTopRightRadius();
		void set_borderTopRightRadius(const String&);
		String* get_borderTopStyle();
		void set_borderTopStyle(const String&);
		String* get_borderTopWidth();
		void set_borderTopWidth(const String&);
		String* get_borderWidth();
		void set_borderWidth(const String&);
		String* get_bottom();
		void set_bottom(const String&);
		String* get_boxShadow();
		void set_boxShadow(const String&);
		String* get_boxSizing();
		void set_boxSizing(const String&);
		String* get_breakAfter();
		void set_breakAfter(const String&);
		String* get_breakBefore();
		void set_breakBefore(const String&);
		String* get_breakInside();
		void set_breakInside(const String&);
		String* get_captionSide();
		void set_captionSide(const String&);
		String* get_clear();
		void set_clear(const String&);
		String* get_clip();
		void set_clip(const String&);
		String* get_clipPath();
		void set_clipPath(const String&);
		String* get_clipRule();
		void set_clipRule(const String&);
		String* get_color();
		void set_color(const String&);
		String* get_colorInterpolationFilters();
		void set_colorInterpolationFilters(const String&);
		template<class ReturnType = Object*> ReturnType get_columnCount();
		void set_columnCount(Object*);
		String* get_columnFill();
		void set_columnFill(const String&);
		template<class ReturnType = Object*> ReturnType get_columnGap();
		void set_columnGap(Object*);
		String* get_columnRule();
		void set_columnRule(const String&);
		template<class ReturnType = Object*> ReturnType get_columnRuleColor();
		void set_columnRuleColor(Object*);
		String* get_columnRuleStyle();
		void set_columnRuleStyle(const String&);
		template<class ReturnType = Object*> ReturnType get_columnRuleWidth();
		void set_columnRuleWidth(Object*);
		String* get_columnSpan();
		void set_columnSpan(const String&);
		template<class ReturnType = Object*> ReturnType get_columnWidth();
		void set_columnWidth(Object*);
		String* get_columns();
		void set_columns(const String&);
		String* get_content();
		void set_content(const String&);
		String* get_counterIncrement();
		void set_counterIncrement(const String&);
		String* get_counterReset();
		void set_counterReset(const String&);
		String* get_cssFloat();
		void set_cssFloat(const String&);
		String* get_cssText();
		void set_cssText(const String&);
		String* get_cursor();
		void set_cursor(const String&);
		String* get_direction();
		void set_direction(const String&);
		String* get_display();
		void set_display(const String&);
		String* get_dominantBaseline();
		void set_dominantBaseline(const String&);
		String* get_emptyCells();
		void set_emptyCells(const String&);
		String* get_enableBackground();
		void set_enableBackground(const String&);
		String* get_fill();
		void set_fill(const String&);
		String* get_fillOpacity();
		void set_fillOpacity(const String&);
		String* get_fillRule();
		void set_fillRule(const String&);
		String* get_filter();
		void set_filter(const String&);
		String* get_flex();
		void set_flex(const String&);
		String* get_flexBasis();
		void set_flexBasis(const String&);
		String* get_flexDirection();
		void set_flexDirection(const String&);
		String* get_flexFlow();
		void set_flexFlow(const String&);
		String* get_flexGrow();
		void set_flexGrow(const String&);
		String* get_flexShrink();
		void set_flexShrink(const String&);
		String* get_flexWrap();
		void set_flexWrap(const String&);
		String* get_floodColor();
		void set_floodColor(const String&);
		String* get_floodOpacity();
		void set_floodOpacity(const String&);
		String* get_font();
		void set_font(const String&);
		String* get_fontFamily();
		void set_fontFamily(const String&);
		String* get_fontFeatureSettings();
		void set_fontFeatureSettings(const String&);
		String* get_fontSize();
		void set_fontSize(const String&);
		String* get_fontSizeAdjust();
		void set_fontSizeAdjust(const String&);
		String* get_fontStretch();
		void set_fontStretch(const String&);
		String* get_fontStyle();
		void set_fontStyle(const String&);
		String* get_fontVariant();
		void set_fontVariant(const String&);
		String* get_fontWeight();
		void set_fontWeight(const String&);
		String* get_gap();
		void set_gap(const String&);
		String* get_glyphOrientationHorizontal();
		void set_glyphOrientationHorizontal(const String&);
		String* get_glyphOrientationVertical();
		void set_glyphOrientationVertical(const String&);
		String* get_grid();
		void set_grid(const String&);
		String* get_gridArea();
		void set_gridArea(const String&);
		String* get_gridAutoColumns();
		void set_gridAutoColumns(const String&);
		String* get_gridAutoFlow();
		void set_gridAutoFlow(const String&);
		String* get_gridAutoRows();
		void set_gridAutoRows(const String&);
		String* get_gridColumn();
		void set_gridColumn(const String&);
		String* get_gridColumnEnd();
		void set_gridColumnEnd(const String&);
		String* get_gridColumnGap();
		void set_gridColumnGap(const String&);
		String* get_gridColumnStart();
		void set_gridColumnStart(const String&);
		String* get_gridGap();
		void set_gridGap(const String&);
		String* get_gridRow();
		void set_gridRow(const String&);
		String* get_gridRowEnd();
		void set_gridRowEnd(const String&);
		String* get_gridRowGap();
		void set_gridRowGap(const String&);
		String* get_gridRowStart();
		void set_gridRowStart(const String&);
		String* get_gridTemplate();
		void set_gridTemplate(const String&);
		String* get_gridTemplateAreas();
		void set_gridTemplateAreas(const String&);
		String* get_gridTemplateColumns();
		void set_gridTemplateColumns(const String&);
		String* get_gridTemplateRows();
		void set_gridTemplateRows(const String&);
		String* get_height();
		void set_height(const String&);
		String* get_imeMode();
		void set_imeMode(const String&);
		String* get_justifyContent();
		void set_justifyContent(const String&);
		String* get_justifyItems();
		void set_justifyItems(const String&);
		String* get_justifySelf();
		void set_justifySelf(const String&);
		String* get_kerning();
		void set_kerning(const String&);
		String* get_layoutGrid();
		void set_layoutGrid(const String&);
		String* get_layoutGridChar();
		void set_layoutGridChar(const String&);
		String* get_layoutGridLine();
		void set_layoutGridLine(const String&);
		String* get_layoutGridMode();
		void set_layoutGridMode(const String&);
		String* get_layoutGridType();
		void set_layoutGridType(const String&);
		String* get_left();
		void set_left(const String&);
		double get_length();
		String* get_letterSpacing();
		void set_letterSpacing(const String&);
		String* get_lightingColor();
		void set_lightingColor(const String&);
		String* get_lineBreak();
		void set_lineBreak(const String&);
		String* get_lineHeight();
		void set_lineHeight(const String&);
		String* get_listStyle();
		void set_listStyle(const String&);
		String* get_listStyleImage();
		void set_listStyleImage(const String&);
		String* get_listStylePosition();
		void set_listStylePosition(const String&);
		String* get_listStyleType();
		void set_listStyleType(const String&);
		String* get_margin();
		void set_margin(const String&);
		String* get_marginBottom();
		void set_marginBottom(const String&);
		String* get_marginLeft();
		void set_marginLeft(const String&);
		String* get_marginRight();
		void set_marginRight(const String&);
		String* get_marginTop();
		void set_marginTop(const String&);
		String* get_marker();
		void set_marker(const String&);
		String* get_markerEnd();
		void set_markerEnd(const String&);
		String* get_markerMid();
		void set_markerMid(const String&);
		String* get_markerStart();
		void set_markerStart(const String&);
		String* get_mask();
		void set_mask(const String&);
		String* get_maskImage();
		void set_maskImage(const String&);
		String* get_maxHeight();
		void set_maxHeight(const String&);
		String* get_maxWidth();
		void set_maxWidth(const String&);
		String* get_minHeight();
		void set_minHeight(const String&);
		String* get_minWidth();
		void set_minWidth(const String&);
		String* get_msContentZoomChaining();
		void set_msContentZoomChaining(const String&);
		String* get_msContentZoomLimit();
		void set_msContentZoomLimit(const String&);
		template<class ReturnType = Object*> ReturnType get_msContentZoomLimitMax();
		void set_msContentZoomLimitMax(Object*);
		template<class ReturnType = Object*> ReturnType get_msContentZoomLimitMin();
		void set_msContentZoomLimitMin(Object*);
		String* get_msContentZoomSnap();
		void set_msContentZoomSnap(const String&);
		String* get_msContentZoomSnapPoints();
		void set_msContentZoomSnapPoints(const String&);
		String* get_msContentZoomSnapType();
		void set_msContentZoomSnapType(const String&);
		String* get_msContentZooming();
		void set_msContentZooming(const String&);
		String* get_msFlowFrom();
		void set_msFlowFrom(const String&);
		String* get_msFlowInto();
		void set_msFlowInto(const String&);
		String* get_msFontFeatureSettings();
		void set_msFontFeatureSettings(const String&);
		template<class ReturnType = Object*> ReturnType get_msGridColumn();
		void set_msGridColumn(Object*);
		String* get_msGridColumnAlign();
		void set_msGridColumnAlign(const String&);
		template<class ReturnType = Object*> ReturnType get_msGridColumnSpan();
		void set_msGridColumnSpan(Object*);
		String* get_msGridColumns();
		void set_msGridColumns(const String&);
		template<class ReturnType = Object*> ReturnType get_msGridRow();
		void set_msGridRow(Object*);
		String* get_msGridRowAlign();
		void set_msGridRowAlign(const String&);
		template<class ReturnType = Object*> ReturnType get_msGridRowSpan();
		void set_msGridRowSpan(Object*);
		String* get_msGridRows();
		void set_msGridRows(const String&);
		String* get_msHighContrastAdjust();
		void set_msHighContrastAdjust(const String&);
		String* get_msHyphenateLimitChars();
		void set_msHyphenateLimitChars(const String&);
		template<class ReturnType = Object*> ReturnType get_msHyphenateLimitLines();
		void set_msHyphenateLimitLines(Object*);
		template<class ReturnType = Object*> ReturnType get_msHyphenateLimitZone();
		void set_msHyphenateLimitZone(Object*);
		String* get_msHyphens();
		void set_msHyphens(const String&);
		String* get_msImeAlign();
		void set_msImeAlign(const String&);
		String* get_msOverflowStyle();
		void set_msOverflowStyle(const String&);
		String* get_msScrollChaining();
		void set_msScrollChaining(const String&);
		String* get_msScrollLimit();
		void set_msScrollLimit(const String&);
		template<class ReturnType = Object*> ReturnType get_msScrollLimitXMax();
		void set_msScrollLimitXMax(Object*);
		template<class ReturnType = Object*> ReturnType get_msScrollLimitXMin();
		void set_msScrollLimitXMin(Object*);
		template<class ReturnType = Object*> ReturnType get_msScrollLimitYMax();
		void set_msScrollLimitYMax(Object*);
		template<class ReturnType = Object*> ReturnType get_msScrollLimitYMin();
		void set_msScrollLimitYMin(Object*);
		String* get_msScrollRails();
		void set_msScrollRails(const String&);
		String* get_msScrollSnapPointsX();
		void set_msScrollSnapPointsX(const String&);
		String* get_msScrollSnapPointsY();
		void set_msScrollSnapPointsY(const String&);
		String* get_msScrollSnapType();
		void set_msScrollSnapType(const String&);
		String* get_msScrollSnapX();
		void set_msScrollSnapX(const String&);
		String* get_msScrollSnapY();
		void set_msScrollSnapY(const String&);
		String* get_msScrollTranslation();
		void set_msScrollTranslation(const String&);
		String* get_msTextCombineHorizontal();
		void set_msTextCombineHorizontal(const String&);
		template<class ReturnType = Object*> ReturnType get_msTextSizeAdjust();
		void set_msTextSizeAdjust(Object*);
		String* get_msTouchAction();
		void set_msTouchAction(const String&);
		String* get_msTouchSelect();
		void set_msTouchSelect(const String&);
		String* get_msUserSelect();
		void set_msUserSelect(const String&);
		String* get_msWrapFlow();
		void set_msWrapFlow(const String&);
		template<class ReturnType = Object*> ReturnType get_msWrapMargin();
		void set_msWrapMargin(Object*);
		String* get_msWrapThrough();
		void set_msWrapThrough(const String&);
		String* get_objectFit();
		void set_objectFit(const String&);
		String* get_objectPosition();
		void set_objectPosition(const String&);
		String* get_opacity();
		void set_opacity(const String&);
		String* get_order();
		void set_order(const String&);
		String* get_orphans();
		void set_orphans(const String&);
		String* get_outline();
		void set_outline(const String&);
		String* get_outlineColor();
		void set_outlineColor(const String&);
		String* get_outlineOffset();
		void set_outlineOffset(const String&);
		String* get_outlineStyle();
		void set_outlineStyle(const String&);
		String* get_outlineWidth();
		void set_outlineWidth(const String&);
		String* get_overflow();
		void set_overflow(const String&);
		String* get_overflowX();
		void set_overflowX(const String&);
		String* get_overflowY();
		void set_overflowY(const String&);
		String* get_padding();
		void set_padding(const String&);
		String* get_paddingBottom();
		void set_paddingBottom(const String&);
		String* get_paddingLeft();
		void set_paddingLeft(const String&);
		String* get_paddingRight();
		void set_paddingRight(const String&);
		String* get_paddingTop();
		void set_paddingTop(const String&);
		String* get_pageBreakAfter();
		void set_pageBreakAfter(const String&);
		String* get_pageBreakBefore();
		void set_pageBreakBefore(const String&);
		String* get_pageBreakInside();
		void set_pageBreakInside(const String&);
		CSSRule* get_parentRule();
		String* get_penAction();
		void set_penAction(const String&);
		String* get_perspective();
		void set_perspective(const String&);
		String* get_perspectiveOrigin();
		void set_perspectiveOrigin(const String&);
		String* get_pointerEvents();
		void set_pointerEvents(const String&);
		String* get_position();
		void set_position(const String&);
		String* get_quotes();
		void set_quotes(const String&);
		String* get_resize();
		void set_resize(const String&);
		String* get_right();
		void set_right(const String&);
		String* get_rotate();
		void set_rotate(const String&);
		String* get_rowGap();
		void set_rowGap(const String&);
		String* get_rubyAlign();
		void set_rubyAlign(const String&);
		String* get_rubyOverhang();
		void set_rubyOverhang(const String&);
		String* get_rubyPosition();
		void set_rubyPosition(const String&);
		String* get_scale();
		void set_scale(const String&);
		String* get_stopColor();
		void set_stopColor(const String&);
		String* get_stopOpacity();
		void set_stopOpacity(const String&);
		String* get_stroke();
		void set_stroke(const String&);
		String* get_strokeDasharray();
		void set_strokeDasharray(const String&);
		String* get_strokeDashoffset();
		void set_strokeDashoffset(const String&);
		String* get_strokeLinecap();
		void set_strokeLinecap(const String&);
		String* get_strokeLinejoin();
		void set_strokeLinejoin(const String&);
		String* get_strokeMiterlimit();
		void set_strokeMiterlimit(const String&);
		String* get_strokeOpacity();
		void set_strokeOpacity(const String&);
		String* get_strokeWidth();
		void set_strokeWidth(const String&);
		String* get_tableLayout();
		void set_tableLayout(const String&);
		String* get_textAlign();
		void set_textAlign(const String&);
		String* get_textAlignLast();
		void set_textAlignLast(const String&);
		String* get_textAnchor();
		void set_textAnchor(const String&);
		String* get_textCombineUpright();
		void set_textCombineUpright(const String&);
		String* get_textDecoration();
		void set_textDecoration(const String&);
		String* get_textIndent();
		void set_textIndent(const String&);
		String* get_textJustify();
		void set_textJustify(const String&);
		String* get_textKashida();
		void set_textKashida(const String&);
		String* get_textKashidaSpace();
		void set_textKashidaSpace(const String&);
		String* get_textOverflow();
		void set_textOverflow(const String&);
		String* get_textShadow();
		void set_textShadow(const String&);
		String* get_textTransform();
		void set_textTransform(const String&);
		String* get_textUnderlinePosition();
		void set_textUnderlinePosition(const String&);
		String* get_top();
		void set_top(const String&);
		String* get_touchAction();
		void set_touchAction(const String&);
		String* get_transform();
		void set_transform(const String&);
		String* get_transformOrigin();
		void set_transformOrigin(const String&);
		String* get_transformStyle();
		void set_transformStyle(const String&);
		String* get_transition();
		void set_transition(const String&);
		String* get_transitionDelay();
		void set_transitionDelay(const String&);
		String* get_transitionDuration();
		void set_transitionDuration(const String&);
		String* get_transitionProperty();
		void set_transitionProperty(const String&);
		String* get_transitionTimingFunction();
		void set_transitionTimingFunction(const String&);
		String* get_translate();
		void set_translate(const String&);
		String* get_unicodeBidi();
		void set_unicodeBidi(const String&);
		String* get_userSelect();
		void set_userSelect(const String&);
		String* get_verticalAlign();
		void set_verticalAlign(const String&);
		String* get_visibility();
		void set_visibility(const String&);
		String* get_webkitAlignContent();
		void set_webkitAlignContent(const String&);
		String* get_webkitAlignItems();
		void set_webkitAlignItems(const String&);
		String* get_webkitAlignSelf();
		void set_webkitAlignSelf(const String&);
		String* get_webkitAnimation();
		void set_webkitAnimation(const String&);
		String* get_webkitAnimationDelay();
		void set_webkitAnimationDelay(const String&);
		String* get_webkitAnimationDirection();
		void set_webkitAnimationDirection(const String&);
		String* get_webkitAnimationDuration();
		void set_webkitAnimationDuration(const String&);
		String* get_webkitAnimationFillMode();
		void set_webkitAnimationFillMode(const String&);
		String* get_webkitAnimationIterationCount();
		void set_webkitAnimationIterationCount(const String&);
		String* get_webkitAnimationName();
		void set_webkitAnimationName(const String&);
		String* get_webkitAnimationPlayState();
		void set_webkitAnimationPlayState(const String&);
		String* get_webkitAnimationTimingFunction();
		void set_webkitAnimationTimingFunction(const String&);
		String* get_webkitAppearance();
		void set_webkitAppearance(const String&);
		String* get_webkitBackfaceVisibility();
		void set_webkitBackfaceVisibility(const String&);
		String* get_webkitBackgroundClip();
		void set_webkitBackgroundClip(const String&);
		String* get_webkitBackgroundOrigin();
		void set_webkitBackgroundOrigin(const String&);
		String* get_webkitBackgroundSize();
		void set_webkitBackgroundSize(const String&);
		String* get_webkitBorderBottomLeftRadius();
		void set_webkitBorderBottomLeftRadius(const String&);
		String* get_webkitBorderBottomRightRadius();
		void set_webkitBorderBottomRightRadius(const String&);
		String* get_webkitBorderImage();
		void set_webkitBorderImage(const String&);
		String* get_webkitBorderRadius();
		void set_webkitBorderRadius(const String&);
		String* get_webkitBorderTopLeftRadius();
		void set_webkitBorderTopLeftRadius(const String&);
		String* get_webkitBorderTopRightRadius();
		void set_webkitBorderTopRightRadius(const String&);
		String* get_webkitBoxAlign();
		void set_webkitBoxAlign(const String&);
		String* get_webkitBoxDirection();
		void set_webkitBoxDirection(const String&);
		String* get_webkitBoxFlex();
		void set_webkitBoxFlex(const String&);
		String* get_webkitBoxOrdinalGroup();
		void set_webkitBoxOrdinalGroup(const String&);
		String* get_webkitBoxOrient();
		void set_webkitBoxOrient(const String&);
		String* get_webkitBoxPack();
		void set_webkitBoxPack(const String&);
		String* get_webkitBoxSizing();
		void set_webkitBoxSizing(const String&);
		String* get_webkitColumnBreakAfter();
		void set_webkitColumnBreakAfter(const String&);
		String* get_webkitColumnBreakBefore();
		void set_webkitColumnBreakBefore(const String&);
		String* get_webkitColumnBreakInside();
		void set_webkitColumnBreakInside(const String&);
		template<class ReturnType = Object*> ReturnType get_webkitColumnCount();
		void set_webkitColumnCount(Object*);
		template<class ReturnType = Object*> ReturnType get_webkitColumnGap();
		void set_webkitColumnGap(Object*);
		String* get_webkitColumnRule();
		void set_webkitColumnRule(const String&);
		template<class ReturnType = Object*> ReturnType get_webkitColumnRuleColor();
		void set_webkitColumnRuleColor(Object*);
		String* get_webkitColumnRuleStyle();
		void set_webkitColumnRuleStyle(const String&);
		template<class ReturnType = Object*> ReturnType get_webkitColumnRuleWidth();
		void set_webkitColumnRuleWidth(Object*);
		String* get_webkitColumnSpan();
		void set_webkitColumnSpan(const String&);
		template<class ReturnType = Object*> ReturnType get_webkitColumnWidth();
		void set_webkitColumnWidth(Object*);
		String* get_webkitColumns();
		void set_webkitColumns(const String&);
		String* get_webkitFilter();
		void set_webkitFilter(const String&);
		String* get_webkitFlex();
		void set_webkitFlex(const String&);
		String* get_webkitFlexBasis();
		void set_webkitFlexBasis(const String&);
		String* get_webkitFlexDirection();
		void set_webkitFlexDirection(const String&);
		String* get_webkitFlexFlow();
		void set_webkitFlexFlow(const String&);
		String* get_webkitFlexGrow();
		void set_webkitFlexGrow(const String&);
		String* get_webkitFlexShrink();
		void set_webkitFlexShrink(const String&);
		String* get_webkitFlexWrap();
		void set_webkitFlexWrap(const String&);
		String* get_webkitJustifyContent();
		void set_webkitJustifyContent(const String&);
		String* get_webkitOrder();
		void set_webkitOrder(const String&);
		String* get_webkitPerspective();
		void set_webkitPerspective(const String&);
		String* get_webkitPerspectiveOrigin();
		void set_webkitPerspectiveOrigin(const String&);
		String* get_webkitTapHighlightColor();
		void set_webkitTapHighlightColor(const String&);
		String* get_webkitTextFillColor();
		void set_webkitTextFillColor(const String&);
		template<class ReturnType = Object*> ReturnType get_webkitTextSizeAdjust();
		void set_webkitTextSizeAdjust(Object*);
		String* get_webkitTextStroke();
		void set_webkitTextStroke(const String&);
		String* get_webkitTextStrokeColor();
		void set_webkitTextStrokeColor(const String&);
		String* get_webkitTextStrokeWidth();
		void set_webkitTextStrokeWidth(const String&);
		String* get_webkitTransform();
		void set_webkitTransform(const String&);
		String* get_webkitTransformOrigin();
		void set_webkitTransformOrigin(const String&);
		String* get_webkitTransformStyle();
		void set_webkitTransformStyle(const String&);
		String* get_webkitTransition();
		void set_webkitTransition(const String&);
		String* get_webkitTransitionDelay();
		void set_webkitTransitionDelay(const String&);
		String* get_webkitTransitionDuration();
		void set_webkitTransitionDuration(const String&);
		String* get_webkitTransitionProperty();
		void set_webkitTransitionProperty(const String&);
		String* get_webkitTransitionTimingFunction();
		void set_webkitTransitionTimingFunction(const String&);
		String* get_webkitUserModify();
		void set_webkitUserModify(const String&);
		String* get_webkitUserSelect();
		void set_webkitUserSelect(const String&);
		String* get_webkitWritingMode();
		void set_webkitWritingMode(const String&);
		String* get_whiteSpace();
		void set_whiteSpace(const String&);
		String* get_widows();
		void set_widows(const String&);
		String* get_width();
		void set_width(const String&);
		String* get_wordBreak();
		void set_wordBreak(const String&);
		String* get_wordSpacing();
		void set_wordSpacing(const String&);
		String* get_wordWrap();
		void set_wordWrap(const String&);
		String* get_writingMode();
		void set_writingMode(const String&);
		String* get_zIndex();
		void set_zIndex(const String&);
		String* get_zoom();
		void set_zoom(const String&);
		String* getPropertyPriority(const String& propertyName);
		String* getPropertyValue(const String& propertyName);
		String* item(double index);
		String* removeProperty(const String& propertyName);
		void setProperty(const String& propertyName, const String& value);
		void setProperty(const String& propertyName, const String& value, const String& priority);
		String*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<String*>(this, 0)[index];
		}
		String* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<String*>(this, 0)[index];
		}
		CSSStyleDeclaration* get_prototype();
		void set_prototype(CSSStyleDeclaration*);
		CSSStyleDeclaration();
	};

	class CSSStyleRule: public CSSRule {
	public:
		String* get_selectorText();
		void set_selectorText(const String&);
		CSSStyleDeclaration* get_style();
		CSSStyleRule* get_prototype();
		void set_prototype(CSSStyleRule*);
		CSSStyleRule();
	};

	class StyleSheet: public Object{
	public:
		bool get_disabled();
		void set_disabled(bool);
		String* get_href();
		MediaList* get_media();
		Node* get_ownerNode();
		StyleSheet* get_parentStyleSheet();
		String* get_title();
		String* get_type();
		StyleSheet* get_prototype();
		void set_prototype(StyleSheet*);
		StyleSheet();
	};

	class CSSStyleSheet: public StyleSheet {
	public:
		CSSRuleList* get_cssRules();
		String* get_cssText();
		void set_cssText(const String&);
		String* get_id();
		StyleSheetList* get_imports();
		bool get_isAlternate();
		bool get_isPrefAlternate();
		CSSRule* get_ownerRule();
		Element* get_owningElement();
		template<class ReturnType = Object*> ReturnType get_pages();
		bool get_readOnly();
		CSSRuleList* get_rules();
		double addImport(const String& bstrURL);
		double addImport(const String& bstrURL, double lIndex);
		double addPageRule(const String& bstrSelector, const String& bstrStyle);
		double addPageRule(const String& bstrSelector, const String& bstrStyle, double lIndex);
		double addRule(const String& bstrSelector);
		double addRule(const String& bstrSelector, const String& bstrStyle);
		double addRule(const String& bstrSelector, const String& bstrStyle, double lIndex);
		void deleteRule();
		void deleteRule(double index);
		double insertRule(const String& rule);
		double insertRule(const String& rule, double index);
		void removeImport(double lIndex);
		void removeRule(double lIndex);
		CSSStyleSheet* get_prototype();
		void set_prototype(CSSStyleSheet*);
		CSSStyleSheet();
	};

	class CSSSupportsRule: public CSSConditionRule {
	public:
		CSSSupportsRule* get_prototype();
		void set_prototype(CSSSupportsRule*);
		CSSSupportsRule();
	};

	class Cache: public Object{
	public:
		Promise* add(Request* request);
		Promise* add(const String& request);
		Promise* addAll(Array* requests);
		Promise* _delete(Request* request);
		Promise* _delete(Request* request, CacheQueryOptions* options);
		Promise* _delete(const String& request);
		Promise* _delete(const String& request, CacheQueryOptions* options);
		Promise* keys();
		Promise* keys(Request* request);
		Promise* keys(Request* request, CacheQueryOptions* options);
		Promise* keys(const String& request);
		Promise* keys(const String& request, CacheQueryOptions* options);
		Promise* match(Request* request);
		Promise* match(Request* request, CacheQueryOptions* options);
		Promise* match(const String& request);
		Promise* match(const String& request, CacheQueryOptions* options);
		Promise* matchAll();
		Promise* matchAll(Request* request);
		Promise* matchAll(Request* request, CacheQueryOptions* options);
		Promise* matchAll(const String& request);
		Promise* matchAll(const String& request, CacheQueryOptions* options);
		Promise* put(Request* request, Response* response);
		Promise* put(const String& request, Response* response);
		Cache* get_prototype();
		void set_prototype(Cache*);
		Cache();
	};

	class CacheStorage: public Object{
	public:
		Promise* _delete(const String& cacheName);
		Promise* has(const String& cacheName);
		Promise* keys();
		Promise* match(Request* request);
		Promise* match(Request* request, CacheQueryOptions* options);
		Promise* match(const String& request);
		Promise* match(const String& request, CacheQueryOptions* options);
		Promise* open(const String& cacheName);
		CacheStorage* get_prototype();
		void set_prototype(CacheStorage*);
		CacheStorage();
	};

	class Canvas2DContextAttributes: public Object{
	public:
		bool get_alpha();
		void set_alpha(bool);
		bool get_storage();
		void set_storage(bool);
		bool get_willReadFrequently();
		void set_willReadFrequently(bool);
		Object*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
		Object* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
	};

	class CanvasGradient: public Object{
	public:
		void addColorStop(double offset, const String& color);
		CanvasGradient* get_prototype();
		void set_prototype(CanvasGradient*);
		CanvasGradient();
	};

	class CanvasPathMethods: public Object{
	public:
		void arc(double x, double y, double radius, double startAngle, double endAngle);
		void arc(double x, double y, double radius, double startAngle, double endAngle, bool anticlockwise);
		void arcTo(double x1, double y1, double x2, double y2, double radius);
		void arcTo(double x1, double y1, double x2, double y2, double radiusX, double radiusY, double rotation);
		void bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);
		void closePath();
		void ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);
		void ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool anticlockwise);
		void lineTo(double x, double y);
		void moveTo(double x, double y);
		void quadraticCurveTo(double cpx, double cpy, double x, double y);
		void rect(double x, double y, double w, double h);
	};

	class CanvasPattern: public Object{
	public:
		void setTransform(SVGMatrix* matrix);
		CanvasPattern* get_prototype();
		void set_prototype(CanvasPattern*);
		CanvasPattern();
	};

	class CanvasRenderingContext2D: public CanvasPathMethods {
	public:
		HTMLCanvasElement* get_canvas();
		String* get_fillStyle();
		void set_fillStyle(const String&);
		String* get_font();
		void set_font(const String&);
		double get_globalAlpha();
		void set_globalAlpha(double);
		String* get_globalCompositeOperation();
		void set_globalCompositeOperation(const String&);
		bool get_imageSmoothingEnabled();
		void set_imageSmoothingEnabled(bool);
		String* get_lineCap();
		void set_lineCap(const String&);
		double get_lineDashOffset();
		void set_lineDashOffset(double);
		String* get_lineJoin();
		void set_lineJoin(const String&);
		double get_lineWidth();
		void set_lineWidth(double);
		double get_miterLimit();
		void set_miterLimit(double);
		bool get_mozImageSmoothingEnabled();
		void set_mozImageSmoothingEnabled(bool);
		String* get_msFillRule();
		void set_msFillRule(const String&);
		bool get_oImageSmoothingEnabled();
		void set_oImageSmoothingEnabled(bool);
		double get_shadowBlur();
		void set_shadowBlur(double);
		String* get_shadowColor();
		void set_shadowColor(const String&);
		double get_shadowOffsetX();
		void set_shadowOffsetX(double);
		double get_shadowOffsetY();
		void set_shadowOffsetY(double);
		String* get_strokeStyle();
		void set_strokeStyle(const String&);
		String* get_textAlign();
		void set_textAlign(const String&);
		String* get_textBaseline();
		void set_textBaseline(const String&);
		bool get_webkitImageSmoothingEnabled();
		void set_webkitImageSmoothingEnabled(bool);
		void beginPath();
		void clearRect(double x, double y, double w, double h);
		void clip();
		void clip(Path2D* path);
		ImageData* createImageData(double imageDataOrSw);
		ImageData* createImageData(double imageDataOrSw, double sh);
		ImageData* createImageData(ImageData* imageDataOrSw);
		ImageData* createImageData(ImageData* imageDataOrSw, double sh);
		CanvasGradient* createLinearGradient(double x0, double y0, double x1, double y1);
		CanvasPattern* createPattern(HTMLImageElement* image, const String& repetition);
		CanvasPattern* createPattern(HTMLCanvasElement* image, const String& repetition);
		CanvasPattern* createPattern(HTMLVideoElement* image, const String& repetition);
		CanvasGradient* createRadialGradient(double x0, double y0, double r0, double x1, double y1, double r1);
		void drawFocusIfNeeded(Element* element);
		void drawFocusIfNeeded(Path2D* path, Element* element);
		void drawImage(HTMLImageElement* image, double dstX, double dstY);
		void drawImage(HTMLCanvasElement* image, double dstX, double dstY);
		void drawImage(HTMLVideoElement* image, double dstX, double dstY);
		void drawImage(ImageBitmap* image, double dstX, double dstY);
		void drawImage(HTMLImageElement* image, double dstX, double dstY, double dstW, double dstH);
		void drawImage(HTMLCanvasElement* image, double dstX, double dstY, double dstW, double dstH);
		void drawImage(HTMLVideoElement* image, double dstX, double dstY, double dstW, double dstH);
		void drawImage(ImageBitmap* image, double dstX, double dstY, double dstW, double dstH);
		void drawImage(HTMLImageElement* image, double srcX, double srcY, double srcW, double srcH, double dstX, double dstY, double dstW, double dstH);
		void drawImage(HTMLCanvasElement* image, double srcX, double srcY, double srcW, double srcH, double dstX, double dstY, double dstW, double dstH);
		void drawImage(HTMLVideoElement* image, double srcX, double srcY, double srcW, double srcH, double dstX, double dstY, double dstW, double dstH);
		void drawImage(ImageBitmap* image, double srcX, double srcY, double srcW, double srcH, double dstX, double dstY, double dstW, double dstH);
		void fill();
		void fill(Path2D* path);
		void fillRect(double x, double y, double w, double h);
		void fillText(const String& text, double x, double y);
		void fillText(const String& text, double x, double y, double maxWidth);
		ImageData* getImageData(double sx, double sy, double sw, double sh);
		Array* getLineDash();
		bool isPointInPath(double x, double y);
		bool isPointInPath(Path2D* path, double x, double y);
		bool isPointInStroke(double x, double y);
		bool isPointInStroke(Path2D* path, double x, double y);
		TextMetrics* measureText(const String& text);
		void putImageData(ImageData* imagedata, double dx, double dy);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX, double dirtyY);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX, double dirtyY, double dirtyWidth);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX, double dirtyY, double dirtyWidth, double dirtyHeight);
		void restore();
		void rotate(double angle);
		void save();
		void scale(double x, double y);
		void setLineDash(Array* segments);
		void setTransform(double m11, double m12, double m21, double m22, double dx, double dy);
		void stroke();
		void stroke(Path2D* path);
		void strokeRect(double x, double y, double w, double h);
		void strokeText(const String& text, double x, double y);
		void strokeText(const String& text, double x, double y, double maxWidth);
		void transform(double m11, double m12, double m21, double m22, double dx, double dy);
		void translate(double x, double y);
		CanvasRenderingContext2D* get_prototype();
		void set_prototype(CanvasRenderingContext2D*);
		CanvasRenderingContext2D();
	};

	class ChannelMergerNode: public AudioNode {
	public:
		ChannelMergerNode* get_prototype();
		void set_prototype(ChannelMergerNode*);
		ChannelMergerNode();
	};

	class ChannelSplitterNode: public AudioNode {
	public:
		ChannelSplitterNode* get_prototype();
		void set_prototype(ChannelSplitterNode*);
		ChannelSplitterNode();
	};

	class ClientRect: public Object{
	public:
		double get_bottom();
		void set_bottom(double);
		double get_height();
		double get_left();
		void set_left(double);
		double get_right();
		void set_right(double);
		double get_top();
		void set_top(double);
		double get_width();
		ClientRect* get_prototype();
		void set_prototype(ClientRect*);
		ClientRect();
	};

	class ClientRectList: public Object{
	public:
		double get_length();
		ClientRect* item(double index);
		ClientRect*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<ClientRect*>(this, 0)[index];
		}
		ClientRect* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<ClientRect*>(this, 0)[index];
		}
		ClientRectList* get_prototype();
		void set_prototype(ClientRectList*);
		ClientRectList();
	};

	class ClipboardEvent: public Event {
	public:
		DataTransfer* get_clipboardData();
		ClipboardEvent* get_prototype();
		void set_prototype(ClipboardEvent*);
		ClipboardEvent(const String& type);
		ClipboardEvent(const String& type, ClipboardEventInit* eventInitDict);
	};

	class ClipboardEventInit: public EventInit {
	public:
		String* get_data();
		void set_data(const String&);
		String* get_dataType();
		void set_dataType(const String&);
	};

	class CloseEvent: public Event {
	public:
		double get_code();
		String* get_reason();
		bool get_wasClean();
		void initCloseEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, bool wasCleanArg, double codeArg, const String& reasonArg);
		CloseEvent* get_prototype();
		void set_prototype(CloseEvent*);
		CloseEvent(const String& type);
		CloseEvent(const String& type, CloseEventInit* eventInitDict);
	};

	class Comment: public CharacterData {
	public:
		String* get_text();
		void set_text(const String&);
		Comment* get_prototype();
		void set_prototype(Comment*);
		Comment();
		Comment(const String& data);
	};

	class UIEvent: public Event {
	public:
		double get_detail();
		Window* get_view();
		void initUIEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg);
		UIEvent* get_prototype();
		void set_prototype(UIEvent*);
		UIEvent(const String& typeArg);
		UIEvent(const String& typeArg, UIEventInit* eventInitDict);
	};

	class CompositionEvent: public UIEvent {
	public:
		String* get_data();
		String* get_locale();
		void initCompositionEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, const String& dataArg, const String& locale);
		CompositionEvent* get_prototype();
		void set_prototype(CompositionEvent*);
		CompositionEvent(const String& typeArg);
		CompositionEvent(const String& typeArg, CompositionEventInit* eventInitDict);
	};

	class ComputedTimingProperties: public Object{
	public:
		double get_activeDuration();
		void set_activeDuration(double);
		double get_currentIteration();
		void set_currentIteration(double);
		double get_endTime();
		void set_endTime(double);
		double get_localTime();
		void set_localTime(double);
		double get_progress();
		void set_progress(double);
	};

	class ConcatParams: public Algorithm {
	public:
		Uint8Array* get_algorithmId();
		void set_algorithmId(Uint8Array*);
		String* get_hash();
		void set_hash(const String&);
		Uint8Array* get_partyUInfo();
		void set_partyUInfo(Uint8Array*);
		Uint8Array* get_partyVInfo();
		void set_partyVInfo(Uint8Array*);
		Uint8Array* get_privateInfo();
		void set_privateInfo(Uint8Array*);
		Uint8Array* get_publicInfo();
		void set_publicInfo(Uint8Array*);
	};

	class Console: public Object{
	public:
		template<class ReturnType = Object*> ReturnType get_memory();
		void set_memory(Object*);
		void _assert();
		void _assert(bool condition);
		template<typename... Args> void _assert(bool condition, const String& message, Args&&... data) { return static_cast<const Console*>(this)->_assert(condition, message, static_cast<Object*>(static_cast<Args&&>(data))...); }
		void _assert(bool condition, const String& message);
		void clear();
		void count();
		void count(const String& label);
		void debug();
		template<typename... Args> void debug(const String& message, Args&&... optionalParams) { return static_cast<const Console*>(this)->debug(message, static_cast<const String&>(static_cast<Args&&>(optionalParams))...); }
		void debug(const String& message);
		void dir();
		template<typename... Args> void dir(Object* value, Args&&... optionalParams) { return static_cast<const Console*>(this)->dir(value, static_cast<Object*>(static_cast<Args&&>(optionalParams))...); }
		void dir(Object* value);
		void dirxml(Object* value);
		void error();
		template<typename... Args> void error(const String& message, Args&&... optionalParams) { return static_cast<const Console*>(this)->error(message, static_cast<const String&>(static_cast<Args&&>(optionalParams))...); }
		void error(const String& message);
		void exception();
		template<typename... Args> void exception(const String& message, Args&&... optionalParams) { return static_cast<const Console*>(this)->exception(message, static_cast<Object*>(static_cast<Args&&>(optionalParams))...); }
		void exception(const String& message);
		void group();
		template<typename... Args> void group(const String& groupTitle, Args&&... optionalParams) { return static_cast<const Console*>(this)->group(groupTitle, static_cast<Object*>(static_cast<Args&&>(optionalParams))...); }
		void group(const String& groupTitle);
		void groupCollapsed();
		template<typename... Args> void groupCollapsed(const String& groupTitle, Args&&... optionalParams) { return static_cast<const Console*>(this)->groupCollapsed(groupTitle, static_cast<Object*>(static_cast<Args&&>(optionalParams))...); }
		void groupCollapsed(const String& groupTitle);
		void groupEnd();
		void info();
		template<typename... Args> void info(const String& message, Args&&... optionalParams) { return static_cast<const Console*>(this)->info(message, static_cast<const String&>(static_cast<Args&&>(optionalParams))...); }
		void info(const String& message);
		void log();
		template<typename... Args> void log(const String& message, Args&&... optionalParams) { return static_cast<const Console*>(this)->log(message, static_cast<const String&>(static_cast<Args&&>(optionalParams))...); }
		void log(const String& message);
		void markTimeline();
		void markTimeline(const String& label);
		bool msIsIndependentlyComposed(Element* element);
		void profile();
		void profile(const String& reportName);
		void profileEnd();
		void select(Element* element);
		template<typename... Args> void table(Args&&... tabularData) { return static_cast<const Console*>(this)->table(static_cast<Object*>(static_cast<Args&&>(tabularData))...); }
		void table();
		void time();
		void time(const String& label);
		void timeEnd();
		void timeEnd(const String& label);
		void timeStamp();
		void timeStamp(const String& label);
		void timeline();
		void timeline(const String& label);
		void timelineEnd();
		void timelineEnd(const String& label);
		void warn();
		template<typename... Args> void warn(const String& message, Args&&... optionalParams) { return static_cast<const Console*>(this)->warn(message, static_cast<const String&>(static_cast<Args&&>(optionalParams))...); }
		void warn(const String& message);
		Console* get_prototype();
		void set_prototype(Console*);
		Console();
	private:
		template<typename... Args> void _assert(bool condition, const String& message, Args... data) const;
		template<typename... Args> void debug(const String& message, Args&&... optionalParams) const;
		template<typename... Args> void dir(Object* value, Args... optionalParams) const;
		template<typename... Args> void error(const String& message, Args&&... optionalParams) const;
		template<typename... Args> void exception(const String& message, Args... optionalParams) const;
		template<typename... Args> void group(const String& groupTitle, Args... optionalParams) const;
		template<typename... Args> void groupCollapsed(const String& groupTitle, Args... optionalParams) const;
		template<typename... Args> void info(const String& message, Args&&... optionalParams) const;
		template<typename... Args> void log(const String& message, Args&&... optionalParams) const;
		template<typename... Args> void table(Args... tabularData) const;
		template<typename... Args> void warn(const String& message, Args&&... optionalParams) const;
	};

	class ContentScriptGlobalScope: public EventTarget {
	public:
		ExtensionScriptApis* get_msContentScript();
		Window* get_window();
		ContentScriptGlobalScope* get_prototype();
		void set_prototype(ContentScriptGlobalScope*);
		ContentScriptGlobalScope();
	};

	class ConvolverNode: public AudioNode {
	public:
		AudioBuffer* get_buffer();
		void set_buffer(AudioBuffer*);
		bool get_normalize();
		void set_normalize(bool);
		ConvolverNode* get_prototype();
		void set_prototype(ConvolverNode*);
		ConvolverNode();
	};

	class Coordinates: public Object{
	public:
		double get_accuracy();
		double get_altitude();
		double get_altitudeAccuracy();
		double get_heading();
		double get_latitude();
		double get_longitude();
		double get_speed();
		Coordinates* get_prototype();
		void set_prototype(Coordinates*);
		Coordinates();
	};

	class CountQueuingStrategy: public Object{
	public:
		double get_highWaterMark();
		void set_highWaterMark(double);
		double size();
		CountQueuingStrategy* get_prototype();
		void set_prototype(CountQueuingStrategy*);
		CountQueuingStrategy(QueuingStrategy* strategy);
	};

	class Crypto: public Object{
	public:
		SubtleCrypto* get_subtle();
		Int8Array* getRandomValues(Int8Array* array);
		Int8Array* getRandomValues(Int16Array* array);
		Int8Array* getRandomValues(Int32Array* array);
		Int8Array* getRandomValues(Uint8Array* array);
		Int8Array* getRandomValues(Uint16Array* array);
		Int8Array* getRandomValues(Uint32Array* array);
		Int8Array* getRandomValues(Uint8ClampedArray* array);
		Int8Array* getRandomValues(Float32Array* array);
		Int8Array* getRandomValues(Float64Array* array);
		Int8Array* getRandomValues(DataView* array);
		Crypto* get_prototype();
		void set_prototype(Crypto*);
		Crypto();
	};

	class CryptoKey: public Object{
	public:
		KeyAlgorithm* get_algorithm();
		bool get_extractable();
		String* get_type();
		Array* get_usages();
		CryptoKey* get_prototype();
		void set_prototype(CryptoKey*);
		CryptoKey();
	};

	class CryptoKeyPair: public Object{
	public:
		CryptoKey* get_privateKey();
		void set_privateKey(CryptoKey*);
		CryptoKey* get_publicKey();
		void set_publicKey(CryptoKey*);
		CryptoKeyPair* get_prototype();
		void set_prototype(CryptoKeyPair*);
		CryptoKeyPair();
	};

	class CustomElementRegistry: public Object{
	public:
		void define(const String& name, Function* constructor);
		void define(const String& name, Function* constructor, ElementDefinitionOptions* options);
		template<class ReturnType = Object*> ReturnType get(const String& name);
		Promise* whenDefined(const String& name);
	};

	template<class T>
	class CustomEvent: public Event {
	public:
		T* get_detail();
		void initCustomEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, T* detailArg);
		CustomEvent* get_prototype();
		void set_prototype(CustomEvent*);
		CustomEvent(const String& typeArg);
		CustomEvent(const String& typeArg, CustomEventInit<T>* eventInitDict);
	};

	class DOMError: public Object{
	public:
		String* get_name();
		String* toString();
		DOMError* get_prototype();
		void set_prototype(DOMError*);
		DOMError();
	};

	class DOMException: public Object{
	public:
		double get_code();
		String* get_message();
		String* get_name();
		String* toString();
		DOMException* get_prototype();
		void set_prototype(DOMException*);
		DOMException();
		DOMException(const String& message);
		DOMException(const String& message, const String& name);
		double get_ABORT_ERR();
		double get_DATA_CLONE_ERR();
		double get_DOMSTRING_SIZE_ERR();
		double get_HIERARCHY_REQUEST_ERR();
		double get_INDEX_SIZE_ERR();
		double get_INUSE_ATTRIBUTE_ERR();
		double get_INVALID_ACCESS_ERR();
		double get_INVALID_CHARACTER_ERR();
		double get_INVALID_MODIFICATION_ERR();
		double get_INVALID_NODE_TYPE_ERR();
		double get_INVALID_STATE_ERR();
		double get_NAMESPACE_ERR();
		double get_NETWORK_ERR();
		double get_NOT_FOUND_ERR();
		double get_NOT_SUPPORTED_ERR();
		double get_NO_DATA_ALLOWED_ERR();
		double get_NO_MODIFICATION_ALLOWED_ERR();
		double get_PARSE_ERR();
		double get_QUOTA_EXCEEDED_ERR();
		double get_SECURITY_ERR();
		double get_SERIALIZE_ERR();
		double get_SYNTAX_ERR();
		double get_TIMEOUT_ERR();
		double get_TYPE_MISMATCH_ERR();
		double get_URL_MISMATCH_ERR();
		double get_VALIDATION_ERR();
		double get_WRONG_DOCUMENT_ERR();
	};

	class DOMImplementation: public Object{
	public:
		Document* createDocument(const String& namespaceURI, const String& qualifiedName, DocumentType* doctype);
		DocumentType* createDocumentType(const String& qualifiedName, const String& publicId, const String& systemId);
		Document* createHTMLDocument();
		Document* createHTMLDocument(const String& title);
		bool hasFeature(const String& feature, const String& version);
		DOMImplementation* get_prototype();
		void set_prototype(DOMImplementation*);
		DOMImplementation();
	};

	class [[cheerp::client_layout]] DOML2DeprecatedColorProperty{
	public:
		String* get_color();
		void set_color(const String&);
	};

	class [[cheerp::client_layout]] DOML2DeprecatedSizeProperty{
	public:
		double get_size();
		void set_size(double);
	};

	class DOMParser: public Object{
	public:
		Document* parseFromString(const String& source, const String& mimeType);
		DOMParser* get_prototype();
		void set_prototype(DOMParser*);
		DOMParser();
	};

	class DOMRectReadOnly: public Object{
	public:
		double get_bottom();
		double get_height();
		double get_left();
		double get_right();
		double get_top();
		double get_width();
		double get_x();
		double get_y();
		DOMRectReadOnly* get_prototype();
		void set_prototype(DOMRectReadOnly*);
		DOMRectReadOnly();
		DOMRectReadOnly(double x);
		DOMRectReadOnly(double x, double y);
		DOMRectReadOnly(double x, double y, double width);
		DOMRectReadOnly(double x, double y, double width, double height);
		static DOMRectReadOnly* fromRect() [[cheerp::static]];
		static DOMRectReadOnly* fromRect(DOMRectInit* rectangle) [[cheerp::static]];
	};

	class DOMRect: public DOMRectReadOnly {
	public:
		double get_height();
		void set_height(double);
		double get_width();
		void set_width(double);
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		DOMRect* get_prototype();
		void set_prototype(DOMRect*);
		DOMRect();
		DOMRect(double x);
		DOMRect(double x, double y);
		DOMRect(double x, double y, double width);
		DOMRect(double x, double y, double width, double height);
		static DOMRect* fromRect() [[cheerp::static]];
		static DOMRect* fromRect(DOMRectInit* rectangle) [[cheerp::static]];
	};

	class DOMRectList: public Object{
	public:
		double get_length();
		DOMRect* item(double index);
		DOMRect*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<DOMRect*>(this, 0)[index];
		}
		DOMRect* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<DOMRect*>(this, 0)[index];
		}
	};

	class DOMTokenList: public Object{
	public:
		double get_length();
		template<typename... Args> void add(Args&&... tokens) { return static_cast<const DOMTokenList*>(this)->add(static_cast<const String&>(static_cast<Args&&>(tokens))...); }
		void add();
		bool contains(const String& token);
		String* item(double index);
		template<typename... Args> void remove(Args&&... tokens) { return static_cast<const DOMTokenList*>(this)->remove(static_cast<const String&>(static_cast<Args&&>(tokens))...); }
		void remove();
		void replace(const String& oldToken, const String& newToken);
		String* toString();
		bool toggle(const String& token);
		bool toggle(const String& token, bool force);
		String*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<String*>(this, 0)[index];
		}
		String* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<String*>(this, 0)[index];
		}
		DOMTokenList* get_prototype();
		void set_prototype(DOMTokenList*);
		DOMTokenList();
	private:
		template<typename... Args> void add(Args&&... tokens) const;
		template<typename... Args> void remove(Args&&... tokens) const;
	};

	class DOMSettableTokenList: public DOMTokenList {
	public:
		String* get_value();
		void set_value(const String&);
		DOMSettableTokenList* get_prototype();
		void set_prototype(DOMSettableTokenList*);
		DOMSettableTokenList();
	};

	class DOMStringList: public Object{
	public:
		double get_length();
		bool contains(const String& str);
		String* item(double index);
		String*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<String*>(this, 0)[index];
		}
		String* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<String*>(this, 0)[index];
		}
		DOMStringList* get_prototype();
		void set_prototype(DOMStringList*);
		DOMStringList();
	};

	class DOMStringMap: public Object{
	public:
		Object*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
		Object* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
		DOMStringMap* get_prototype();
		void set_prototype(DOMStringMap*);
		DOMStringMap();
	};

	class TextTrackCue: public EventTarget {
	public:
		double get_endTime();
		void set_endTime(double);
		String* get_id();
		void set_id(const String&);
		EventListener* get_onenter();
		void set_onenter(EventListener*);
		EventListener* get_onexit();
		void set_onexit(EventListener*);
		bool get_pauseOnExit();
		void set_pauseOnExit(bool);
		double get_startTime();
		void set_startTime(double);
		String* get_text();
		void set_text(const String&);
		TextTrack* get_track();
		DocumentFragment* getCueAsHTML();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		TextTrackCue* get_prototype();
		void set_prototype(TextTrackCue*);
		TextTrackCue(double startTime, double endTime, const String& text);
	};

	class DataCue: public TextTrackCue {
	public:
		ArrayBuffer* get_data();
		void set_data(ArrayBuffer*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		DataCue* get_prototype();
		void set_prototype(DataCue*);
		DataCue();
	};

	class DataTransfer: public Object{
	public:
		String* get_dropEffect();
		void set_dropEffect(const String&);
		String* get_effectAllowed();
		void set_effectAllowed(const String&);
		FileList* get_files();
		DataTransferItemList* get_items();
		Array* get_types();
		bool clearData();
		bool clearData(const String& format);
		String* getData(const String& format);
		bool setData(const String& format, const String& data);
		void setDragImage(Element* image, double x, double y);
		DataTransfer* get_prototype();
		void set_prototype(DataTransfer*);
		DataTransfer();
	};

	class DataTransferItem: public Object{
	public:
		String* get_kind();
		String* get_type();
		File* getAsFile();
		void getAsString(EventListener* _callback);
		template<class ReturnType = Object*> ReturnType webkitGetAsEntry();
		DataTransferItem* get_prototype();
		void set_prototype(DataTransferItem*);
		DataTransferItem();
	};

	class DataTransferItemList: public Object{
	public:
		double get_length();
		DataTransferItem* add(File* data);
		DataTransferItem* add(const String& data, const String& type);
		void clear();
		DataTransferItem* item(double index);
		void remove(double index);
		DataTransferItem*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<DataTransferItem*>(this, 0)[index];
		}
		DataTransferItem* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<DataTransferItem*>(this, 0)[index];
		}
		DataTransferItemList* get_prototype();
		void set_prototype(DataTransferItemList*);
		DataTransferItemList();
	};

	class DeferredPermissionRequest: public Object{
	public:
		double get_id();
		String* get_type();
		String* get_uri();
		void allow();
		void deny();
		DeferredPermissionRequest* get_prototype();
		void set_prototype(DeferredPermissionRequest*);
		DeferredPermissionRequest();
	};

	class DelayNode: public AudioNode {
	public:
		AudioParam* get_delayTime();
		DelayNode* get_prototype();
		void set_prototype(DelayNode*);
		DelayNode();
	};

	class DeviceAcceleration: public Object{
	public:
		double get_x();
		double get_y();
		double get_z();
		DeviceAcceleration* get_prototype();
		void set_prototype(DeviceAcceleration*);
		DeviceAcceleration();
	};

	class DeviceLightEvent: public Event {
	public:
		double get_value();
		DeviceLightEvent* get_prototype();
		void set_prototype(DeviceLightEvent*);
		DeviceLightEvent(const String& typeArg);
		DeviceLightEvent(const String& typeArg, DeviceLightEventInit* eventInitDict);
	};

	class DeviceMotionEvent: public Event {
	public:
		DeviceAcceleration* get_acceleration();
		DeviceAcceleration* get_accelerationIncludingGravity();
		double get_interval();
		DeviceRotationRate* get_rotationRate();
		void initDeviceMotionEvent(const String& type, bool bubbles, bool cancelable, DeviceAccelerationDict* acceleration, DeviceAccelerationDict* accelerationIncludingGravity, DeviceRotationRateDict* rotationRate, double interval);
		DeviceMotionEvent* get_prototype();
		void set_prototype(DeviceMotionEvent*);
		DeviceMotionEvent(const String& typeArg);
		DeviceMotionEvent(const String& typeArg, DeviceMotionEventInit* eventInitDict);
	};

	class DeviceOrientationEvent: public Event {
	public:
		bool get_absolute();
		double get_alpha();
		double get_beta();
		double get_gamma();
		void initDeviceOrientationEvent(const String& type, bool bubbles, bool cancelable, double alpha, double beta, double gamma, bool absolute);
		DeviceOrientationEvent* get_prototype();
		void set_prototype(DeviceOrientationEvent*);
		DeviceOrientationEvent(const String& typeArg);
		DeviceOrientationEvent(const String& typeArg, DeviceOrientationEventInit* eventInitDict);
	};

	class DeviceRotationRate: public Object{
	public:
		double get_alpha();
		double get_beta();
		double get_gamma();
		DeviceRotationRate* get_prototype();
		void set_prototype(DeviceRotationRate*);
		DeviceRotationRate();
	};

	class DhImportKeyParams: public Algorithm {
	public:
		Uint8Array* get_generator();
		void set_generator(Uint8Array*);
		Uint8Array* get_prime();
		void set_prime(Uint8Array*);
	};

	class DhKeyAlgorithm: public KeyAlgorithm {
	public:
		Uint8Array* get_generator();
		void set_generator(Uint8Array*);
		Uint8Array* get_prime();
		void set_prime(Uint8Array*);
	};

	class DhKeyDeriveParams: public Algorithm {
	public:
		CryptoKey* get_public();
		void set_public(CryptoKey*);
	};

	class DhKeyGenParams: public Algorithm {
	public:
		Uint8Array* get_generator();
		void set_generator(Uint8Array*);
		Uint8Array* get_prime();
		void set_prime(Uint8Array*);
	};

	class GlobalEventHandlersEventMap: public Object{
	public:
		PointerEvent* get_pointercancel();
		void set_pointercancel(PointerEvent*);
		PointerEvent* get_pointerdown();
		void set_pointerdown(PointerEvent*);
		PointerEvent* get_pointerenter();
		void set_pointerenter(PointerEvent*);
		PointerEvent* get_pointerleave();
		void set_pointerleave(PointerEvent*);
		PointerEvent* get_pointermove();
		void set_pointermove(PointerEvent*);
		PointerEvent* get_pointerout();
		void set_pointerout(PointerEvent*);
		PointerEvent* get_pointerover();
		void set_pointerover(PointerEvent*);
		PointerEvent* get_pointerup();
		void set_pointerup(PointerEvent*);
		WheelEvent* get_wheel();
		void set_wheel(WheelEvent*);
	};

	class DocumentEventMap: public GlobalEventHandlersEventMap {
	public:
		UIEvent* get_abort();
		void set_abort(UIEvent*);
		Event* get_activate();
		void set_activate(Event*);
		Event* get_beforeactivate();
		void set_beforeactivate(Event*);
		Event* get_beforedeactivate();
		void set_beforedeactivate(Event*);
		FocusEvent* get_blur();
		void set_blur(FocusEvent*);
		Event* get_canplay();
		void set_canplay(Event*);
		Event* get_canplaythrough();
		void set_canplaythrough(Event*);
		Event* get_change();
		void set_change(Event*);
		MouseEvent* get_click();
		void set_click(MouseEvent*);
		PointerEvent* get_contextmenu();
		void set_contextmenu(PointerEvent*);
		MouseEvent* get_dblclick();
		void set_dblclick(MouseEvent*);
		Event* get_deactivate();
		void set_deactivate(Event*);
		DragEvent* get_drag();
		void set_drag(DragEvent*);
		DragEvent* get_dragend();
		void set_dragend(DragEvent*);
		DragEvent* get_dragenter();
		void set_dragenter(DragEvent*);
		DragEvent* get_dragleave();
		void set_dragleave(DragEvent*);
		DragEvent* get_dragover();
		void set_dragover(DragEvent*);
		DragEvent* get_dragstart();
		void set_dragstart(DragEvent*);
		DragEvent* get_drop();
		void set_drop(DragEvent*);
		Event* get_durationchange();
		void set_durationchange(Event*);
		Event* get_emptied();
		void set_emptied(Event*);
		Event* get_ended();
		void set_ended(Event*);
		ErrorEvent* get_error();
		void set_error(ErrorEvent*);
		FocusEvent* get_focus();
		void set_focus(FocusEvent*);
		Event* get_fullscreenchange();
		void set_fullscreenchange(Event*);
		Event* get_fullscreenerror();
		void set_fullscreenerror(Event*);
		Event* get_input();
		void set_input(Event*);
		Event* get_invalid();
		void set_invalid(Event*);
		KeyboardEvent* get_keydown();
		void set_keydown(KeyboardEvent*);
		KeyboardEvent* get_keypress();
		void set_keypress(KeyboardEvent*);
		KeyboardEvent* get_keyup();
		void set_keyup(KeyboardEvent*);
		Event* get_load();
		void set_load(Event*);
		Event* get_loadeddata();
		void set_loadeddata(Event*);
		Event* get_loadedmetadata();
		void set_loadedmetadata(Event*);
		Event* get_loadstart();
		void set_loadstart(Event*);
		MouseEvent* get_mousedown();
		void set_mousedown(MouseEvent*);
		MouseEvent* get_mousemove();
		void set_mousemove(MouseEvent*);
		MouseEvent* get_mouseout();
		void set_mouseout(MouseEvent*);
		MouseEvent* get_mouseover();
		void set_mouseover(MouseEvent*);
		MouseEvent* get_mouseup();
		void set_mouseup(MouseEvent*);
		WheelEvent* get_mousewheel();
		void set_mousewheel(WheelEvent*);
		Event* get_MSContentZoom();
		void set_MSContentZoom(Event*);
		Event* get_MSGestureChange();
		void set_MSGestureChange(Event*);
		Event* get_MSGestureDoubleTap();
		void set_MSGestureDoubleTap(Event*);
		Event* get_MSGestureEnd();
		void set_MSGestureEnd(Event*);
		Event* get_MSGestureHold();
		void set_MSGestureHold(Event*);
		Event* get_MSGestureStart();
		void set_MSGestureStart(Event*);
		Event* get_MSGestureTap();
		void set_MSGestureTap(Event*);
		Event* get_MSInertiaStart();
		void set_MSInertiaStart(Event*);
		Event* get_MSManipulationStateChanged();
		void set_MSManipulationStateChanged(Event*);
		Event* get_MSPointerCancel();
		void set_MSPointerCancel(Event*);
		Event* get_MSPointerDown();
		void set_MSPointerDown(Event*);
		Event* get_MSPointerEnter();
		void set_MSPointerEnter(Event*);
		Event* get_MSPointerLeave();
		void set_MSPointerLeave(Event*);
		Event* get_MSPointerMove();
		void set_MSPointerMove(Event*);
		Event* get_MSPointerOut();
		void set_MSPointerOut(Event*);
		Event* get_MSPointerOver();
		void set_MSPointerOver(Event*);
		Event* get_MSPointerUp();
		void set_MSPointerUp(Event*);
		Event* get_mssitemodejumplistitemremoved();
		void set_mssitemodejumplistitemremoved(Event*);
		Event* get_msthumbnailclick();
		void set_msthumbnailclick(Event*);
		Event* get_pause();
		void set_pause(Event*);
		Event* get_play();
		void set_play(Event*);
		Event* get_playing();
		void set_playing(Event*);
		Event* get_pointerlockchange();
		void set_pointerlockchange(Event*);
		Event* get_pointerlockerror();
		void set_pointerlockerror(Event*);
		ProgressEvent* get_progress();
		void set_progress(ProgressEvent*);
		Event* get_ratechange();
		void set_ratechange(Event*);
		Event* get_readystatechange();
		void set_readystatechange(Event*);
		Event* get_reset();
		void set_reset(Event*);
		UIEvent* get_scroll();
		void set_scroll(UIEvent*);
		Event* get_seeked();
		void set_seeked(Event*);
		Event* get_seeking();
		void set_seeking(Event*);
		UIEvent* get_select();
		void set_select(UIEvent*);
		Event* get_selectionchange();
		void set_selectionchange(Event*);
		Event* get_selectstart();
		void set_selectstart(Event*);
		Event* get_stalled();
		void set_stalled(Event*);
		Event* get_stop();
		void set_stop(Event*);
		Event* get_submit();
		void set_submit(Event*);
		Event* get_suspend();
		void set_suspend(Event*);
		Event* get_timeupdate();
		void set_timeupdate(Event*);
		TouchEvent* get_touchcancel();
		void set_touchcancel(TouchEvent*);
		TouchEvent* get_touchend();
		void set_touchend(TouchEvent*);
		TouchEvent* get_touchmove();
		void set_touchmove(TouchEvent*);
		TouchEvent* get_touchstart();
		void set_touchstart(TouchEvent*);
		Event* get_volumechange();
		void set_volumechange(Event*);
		Event* get_waiting();
		void set_waiting(Event*);
		Event* get_webkitfullscreenchange();
		void set_webkitfullscreenchange(Event*);
		Event* get_webkitfullscreenerror();
		void set_webkitfullscreenerror(Event*);
	};

	class [[cheerp::client_layout]] GlobalEventHandlers{
	public:
		EventListener* get_onpointercancel();
		void set_onpointercancel(EventListener*);
		EventListener* get_onpointerdown();
		void set_onpointerdown(EventListener*);
		EventListener* get_onpointerenter();
		void set_onpointerenter(EventListener*);
		EventListener* get_onpointerleave();
		void set_onpointerleave(EventListener*);
		EventListener* get_onpointermove();
		void set_onpointermove(EventListener*);
		EventListener* get_onpointerout();
		void set_onpointerout(EventListener*);
		EventListener* get_onpointerover();
		void set_onpointerover(EventListener*);
		EventListener* get_onpointerup();
		void set_onpointerup(EventListener*);
		EventListener* get_onwheel();
		void set_onwheel(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
	};

	class [[cheerp::client_layout]] ParentNode{
	public:
		double get_childElementCount();
		Element* get_firstElementChild();
		Element* get_lastElementChild();
		HTMLCollection* get_children();
		Element* querySelector(const String& selectors);
		NodeListOf<Element>* querySelectorAll(const String& selectors);
	};

	class [[cheerp::client_layout]] DocumentEvent{
	public:
		Event* createEvent(const String& eventInterface);
	};

	class Document: public Node , public GlobalEventHandlers , public ParentNode , public DocumentEvent {
	public:
		String* get_URLUnencoded();
		Element* get_activeElement();
		String* get_alinkColor();
		void set_alinkColor(const String&);
		HTMLAllCollection* get_all();
		HTMLCollectionOf<HTMLAnchorElement>* get_anchors();
		HTMLCollectionOf<HTMLAppletElement>* get_applets();
		String* get_bgColor();
		void set_bgColor(const String&);
		HTMLElement* get_body();
		void set_body(HTMLElement*);
		String* get_characterSet();
		String* get_charset();
		void set_charset(const String&);
		String* get_compatMode();
		String* get_cookie();
		void set_cookie(const String&);
		HTMLScriptElement* get_currentScript();
		Window* get_defaultView();
		String* get_designMode();
		void set_designMode(const String&);
		String* get_dir();
		void set_dir(const String&);
		DocumentType* get_doctype();
		HTMLElement* get_documentElement();
		String* get_domain();
		void set_domain(const String&);
		HTMLCollectionOf<HTMLEmbedElement>* get_embeds();
		String* get_fgColor();
		void set_fgColor(const String&);
		HTMLCollectionOf<HTMLFormElement>* get_forms();
		Element* get_fullscreenElement();
		bool get_fullscreenEnabled();
		HTMLHeadElement* get_head();
		bool get_hidden();
		HTMLCollectionOf<HTMLImageElement>* get_images();
		DOMImplementation* get_implementation();
		String* get_inputEncoding();
		String* get_lastModified();
		String* get_linkColor();
		void set_linkColor(const String&);
		HTMLCollectionOf<Object>* get_links();
		Location* get_location();
		void set_location(Location*);
		bool get_msCSSOMElementFloatMetrics();
		void set_msCSSOMElementFloatMetrics(bool);
		bool get_msCapsLockWarningOff();
		void set_msCapsLockWarningOff(bool);
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_onactivate();
		void set_onactivate(EventListener*);
		EventListener* get_onbeforeactivate();
		void set_onbeforeactivate(EventListener*);
		EventListener* get_onbeforedeactivate();
		void set_onbeforedeactivate(EventListener*);
		EventListener* get_onblur();
		void set_onblur(EventListener*);
		EventListener* get_oncanplay();
		void set_oncanplay(EventListener*);
		EventListener* get_oncanplaythrough();
		void set_oncanplaythrough(EventListener*);
		EventListener* get_onchange();
		void set_onchange(EventListener*);
		EventListener* get_onclick();
		void set_onclick(EventListener*);
		EventListener* get_oncontextmenu();
		void set_oncontextmenu(EventListener*);
		EventListener* get_ondblclick();
		void set_ondblclick(EventListener*);
		EventListener* get_ondeactivate();
		void set_ondeactivate(EventListener*);
		EventListener* get_ondrag();
		void set_ondrag(EventListener*);
		EventListener* get_ondragend();
		void set_ondragend(EventListener*);
		EventListener* get_ondragenter();
		void set_ondragenter(EventListener*);
		EventListener* get_ondragleave();
		void set_ondragleave(EventListener*);
		EventListener* get_ondragover();
		void set_ondragover(EventListener*);
		EventListener* get_ondragstart();
		void set_ondragstart(EventListener*);
		EventListener* get_ondrop();
		void set_ondrop(EventListener*);
		EventListener* get_ondurationchange();
		void set_ondurationchange(EventListener*);
		EventListener* get_onemptied();
		void set_onemptied(EventListener*);
		EventListener* get_onended();
		void set_onended(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onfocus();
		void set_onfocus(EventListener*);
		EventListener* get_onfullscreenchange();
		void set_onfullscreenchange(EventListener*);
		EventListener* get_onfullscreenerror();
		void set_onfullscreenerror(EventListener*);
		EventListener* get_oninput();
		void set_oninput(EventListener*);
		EventListener* get_oninvalid();
		void set_oninvalid(EventListener*);
		EventListener* get_onkeydown();
		void set_onkeydown(EventListener*);
		EventListener* get_onkeypress();
		void set_onkeypress(EventListener*);
		EventListener* get_onkeyup();
		void set_onkeyup(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onloadeddata();
		void set_onloadeddata(EventListener*);
		EventListener* get_onloadedmetadata();
		void set_onloadedmetadata(EventListener*);
		EventListener* get_onloadstart();
		void set_onloadstart(EventListener*);
		EventListener* get_onmousedown();
		void set_onmousedown(EventListener*);
		EventListener* get_onmousemove();
		void set_onmousemove(EventListener*);
		EventListener* get_onmouseout();
		void set_onmouseout(EventListener*);
		EventListener* get_onmouseover();
		void set_onmouseover(EventListener*);
		EventListener* get_onmouseup();
		void set_onmouseup(EventListener*);
		EventListener* get_onmousewheel();
		void set_onmousewheel(EventListener*);
		EventListener* get_onmscontentzoom();
		void set_onmscontentzoom(EventListener*);
		EventListener* get_onmsgesturechange();
		void set_onmsgesturechange(EventListener*);
		EventListener* get_onmsgesturedoubletap();
		void set_onmsgesturedoubletap(EventListener*);
		EventListener* get_onmsgestureend();
		void set_onmsgestureend(EventListener*);
		EventListener* get_onmsgesturehold();
		void set_onmsgesturehold(EventListener*);
		EventListener* get_onmsgesturestart();
		void set_onmsgesturestart(EventListener*);
		EventListener* get_onmsgesturetap();
		void set_onmsgesturetap(EventListener*);
		EventListener* get_onmsinertiastart();
		void set_onmsinertiastart(EventListener*);
		EventListener* get_onmsmanipulationstatechanged();
		void set_onmsmanipulationstatechanged(EventListener*);
		EventListener* get_onmspointercancel();
		void set_onmspointercancel(EventListener*);
		EventListener* get_onmspointerdown();
		void set_onmspointerdown(EventListener*);
		EventListener* get_onmspointerenter();
		void set_onmspointerenter(EventListener*);
		EventListener* get_onmspointerleave();
		void set_onmspointerleave(EventListener*);
		EventListener* get_onmspointermove();
		void set_onmspointermove(EventListener*);
		EventListener* get_onmspointerout();
		void set_onmspointerout(EventListener*);
		EventListener* get_onmspointerover();
		void set_onmspointerover(EventListener*);
		EventListener* get_onmspointerup();
		void set_onmspointerup(EventListener*);
		EventListener* get_onmssitemodejumplistitemremoved();
		void set_onmssitemodejumplistitemremoved(EventListener*);
		EventListener* get_onmsthumbnailclick();
		void set_onmsthumbnailclick(EventListener*);
		EventListener* get_onpause();
		void set_onpause(EventListener*);
		EventListener* get_onplay();
		void set_onplay(EventListener*);
		EventListener* get_onplaying();
		void set_onplaying(EventListener*);
		EventListener* get_onpointerlockchange();
		void set_onpointerlockchange(EventListener*);
		EventListener* get_onpointerlockerror();
		void set_onpointerlockerror(EventListener*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_onratechange();
		void set_onratechange(EventListener*);
		EventListener* get_onreadystatechange();
		void set_onreadystatechange(EventListener*);
		EventListener* get_onreset();
		void set_onreset(EventListener*);
		EventListener* get_onscroll();
		void set_onscroll(EventListener*);
		EventListener* get_onseeked();
		void set_onseeked(EventListener*);
		EventListener* get_onseeking();
		void set_onseeking(EventListener*);
		EventListener* get_onselect();
		void set_onselect(EventListener*);
		EventListener* get_onselectionchange();
		void set_onselectionchange(EventListener*);
		EventListener* get_onselectstart();
		void set_onselectstart(EventListener*);
		EventListener* get_onstalled();
		void set_onstalled(EventListener*);
		EventListener* get_onstop();
		void set_onstop(EventListener*);
		EventListener* get_onsubmit();
		void set_onsubmit(EventListener*);
		EventListener* get_onsuspend();
		void set_onsuspend(EventListener*);
		EventListener* get_ontimeupdate();
		void set_ontimeupdate(EventListener*);
		EventListener* get_ontouchcancel();
		void set_ontouchcancel(EventListener*);
		EventListener* get_ontouchend();
		void set_ontouchend(EventListener*);
		EventListener* get_ontouchmove();
		void set_ontouchmove(EventListener*);
		EventListener* get_ontouchstart();
		void set_ontouchstart(EventListener*);
		EventListener* get_onvisibilitychange();
		void set_onvisibilitychange(EventListener*);
		EventListener* get_onvolumechange();
		void set_onvolumechange(EventListener*);
		EventListener* get_onwaiting();
		void set_onwaiting(EventListener*);
		EventListener* get_onwebkitfullscreenchange();
		void set_onwebkitfullscreenchange(EventListener*);
		EventListener* get_onwebkitfullscreenerror();
		void set_onwebkitfullscreenerror(EventListener*);
		HTMLCollectionOf<HTMLEmbedElement>* get_plugins();
		Element* get_pointerLockElement();
		String* get_readyState();
		String* get_referrer();
		SVGSVGElement* get_rootElement();
		HTMLCollectionOf<HTMLScriptElement>* get_scripts();
		Element* get_scrollingElement();
		StyleSheetList* get_styleSheets();
		String* get_title();
		void set_title(const String&);
		String* get_visibilityState();
		String* get_vlinkColor();
		void set_vlinkColor(const String&);
		Element* get_webkitCurrentFullScreenElement();
		Element* get_webkitFullscreenElement();
		bool get_webkitFullscreenEnabled();
		bool get_webkitIsFullScreen();
		String* get_xmlEncoding();
		bool get_xmlStandalone();
		void set_xmlStandalone(bool);
		String* get_xmlVersion();
		void set_xmlVersion(const String&);
		Node* adoptNode(Node* source);
		void captureEvents();
		Range* caretRangeFromPoint(double x, double y);
		void clear();
		void close();
		Attr* createAttribute(const String& name);
		Attr* createAttributeNS(const String& namespaceURI, const String& qualifiedName);
		CDATASection* createCDATASection(const String& data);
		Comment* createComment(const String& data);
		DocumentFragment* createDocumentFragment();
		HTMLElement* createElement(const String& tagName);
		HTMLElement* createElement(const String& tagName, ElementCreationOptions* options);
		Element* createElementNS(const String& namespaceURI, const String& qualifiedName);
		XPathExpression* createExpression(const String& expression, XPathNSResolver* resolver);
		XPathNSResolver* createNSResolver(Node* nodeResolver);
		NodeIterator* createNodeIterator(Node* root);
		NodeIterator* createNodeIterator(Node* root, double whatToShow);
		NodeIterator* createNodeIterator(Node* root, double whatToShow, NodeFilter* filter);
		NodeIterator* createNodeIterator(Node* root, double whatToShow, NodeFilter* filter, bool entityReferenceExpansion);
		ProcessingInstruction* createProcessingInstruction(const String& target, const String& data);
		Range* createRange();
		Text* createTextNode(const String& data);
		Touch* createTouch(Window* view, EventTarget* target, double identifier, double pageX, double pageY, double screenX, double screenY);
		template<typename... Args> TouchList* createTouchList(Args&&... touches) { return static_cast<const Document*>(this)->createTouchList(static_cast<Touch*>(static_cast<Args&&>(touches))...); }
		TouchList* createTouchList();
		TreeWalker* createTreeWalker(Node* root);
		TreeWalker* createTreeWalker(Node* root, double whatToShow);
		TreeWalker* createTreeWalker(Node* root, double whatToShow, NodeFilter* filter);
		TreeWalker* createTreeWalker(Node* root, double whatToShow, NodeFilter* filter, bool entityReferenceExpansion);
		Element* elementFromPoint(double x, double y);
		Array* elementsFromPoint(double x, double y);
		XPathResult* evaluate(const String& expression, Node* contextNode, XPathNSResolver* resolver, double type, XPathResult* result);
		bool execCommand(const String& commandId);
		bool execCommand(const String& commandId, bool showUI);
		bool execCommand(const String& commandId, bool showUI, Object* value);
		bool execCommandShowHelp(const String& commandId);
		void exitFullscreen();
		void exitPointerLock();
		void focus();
		HTMLElement* getElementById(const String& elementId);
		HTMLCollectionOf<Element>* getElementsByClassName(const String& classNames);
		NodeListOf<HTMLElement>* getElementsByName(const String& elementName);
		NodeListOf<Element>* getElementsByTagName(const String& tagname);
		HTMLCollectionOf<Element>* getElementsByTagNameNS(const String& namespaceURI, const String& localName);
		Selection* getSelection();
		bool hasFocus();
		Node* importNode(Node* importedNode, bool deep);
		NodeListOf<Element>* msElementsFromPoint(double x, double y);
		NodeListOf<Element>* msElementsFromRect(double left, double top, double width, double height);
		Document* open();
		Document* open(const String& url);
		Document* open(const String& url, const String& name);
		Document* open(const String& url, const String& name, const String& features);
		Document* open(const String& url, const String& name, const String& features, bool replace);
		bool queryCommandEnabled(const String& commandId);
		bool queryCommandIndeterm(const String& commandId);
		bool queryCommandState(const String& commandId);
		bool queryCommandSupported(const String& commandId);
		String* queryCommandText(const String& commandId);
		String* queryCommandValue(const String& commandId);
		void releaseEvents();
		void updateSettings();
		void webkitCancelFullScreen();
		void webkitExitFullscreen();
		template<typename... Args> void write(Args&&... content) { return static_cast<const Document*>(this)->write(static_cast<const String&>(static_cast<Args&&>(content))...); }
		void write();
		template<typename... Args> void writeln(Args&&... content) { return static_cast<const Document*>(this)->writeln(static_cast<const String&>(static_cast<Args&&>(content))...); }
		void writeln();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		Document* get_prototype();
		void set_prototype(Document*);
		Document();
	private:
		template<typename... Args> TouchList* createTouchList(Args&&... touches) const;
		template<typename... Args> void write(Args&&... content) const;
		template<typename... Args> void writeln(Args&&... content) const;
	};

	class [[cheerp::client_layout]] DocumentFragment: public Node , public ParentNode {
	public:
		HTMLElement* getElementById(const String& elementId);
		DocumentFragment* get_prototype();
		void set_prototype(DocumentFragment*);
		DocumentFragment();
	};

	class DocumentOrShadowRoot: public Object{
	public:
		Element* get_activeElement();
		StyleSheetList* get_styleSheets();
		Element* elementFromPoint(double x, double y);
		Array* elementsFromPoint(double x, double y);
		Selection* getSelection();
	};

	class DocumentType: public Node , public ChildNode {
	public:
		NamedNodeMap* get_entities();
		String* get_internalSubset();
		String* get_name();
		NamedNodeMap* get_notations();
		String* get_publicId();
		String* get_systemId();
		DocumentType* get_prototype();
		void set_prototype(DocumentType*);
		DocumentType();
	};

	class MouseEvent: public UIEvent {
	public:
		bool get_altKey();
		double get_button();
		double get_buttons();
		double get_clientX();
		double get_clientY();
		bool get_ctrlKey();
		Element* get_fromElement();
		double get_layerX();
		double get_layerY();
		bool get_metaKey();
		double get_movementX();
		double get_movementY();
		double get_offsetX();
		double get_offsetY();
		double get_pageX();
		double get_pageY();
		EventTarget* get_relatedTarget();
		double get_screenX();
		double get_screenY();
		bool get_shiftKey();
		Element* get_toElement();
		double get_which();
		double get_x();
		double get_y();
		bool getModifierState(const String& keyArg);
		void initMouseEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, double buttonArg, EventTarget* relatedTargetArg);
		MouseEvent* get_prototype();
		void set_prototype(MouseEvent*);
		MouseEvent(const String& typeArg);
		MouseEvent(const String& typeArg, MouseEventInit* eventInitDict);
	};

	class DragEvent: public MouseEvent {
	public:
		DataTransfer* get_dataTransfer();
		void initDragEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, double buttonArg, EventTarget* relatedTargetArg, DataTransfer* dataTransferArg);
		void msConvertURL(File* file, const String& targetType);
		void msConvertURL(File* file, const String& targetType, const String& targetURL);
		DragEvent* get_prototype();
		void set_prototype(DragEvent*);
	};

	class DynamicsCompressorNode: public AudioNode {
	public:
		AudioParam* get_attack();
		AudioParam* get_knee();
		AudioParam* get_ratio();
		double get_reduction();
		AudioParam* get_release();
		AudioParam* get_threshold();
		DynamicsCompressorNode* get_prototype();
		void set_prototype(DynamicsCompressorNode*);
		DynamicsCompressorNode();
	};

	class EXT_blend_minmax: public Object{
	public:
		double get_MAX_EXT();
		double get_MIN_EXT();
	};

	class EXT_frag_depth: public Object{
	public:
	};

	class EXT_sRGB: public Object{
	public:
		double get_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT();
		double get_SRGB8_ALPHA8_EXT();
		double get_SRGB_ALPHA_EXT();
		double get_SRGB_EXT();
	};

	class EXT_shader_texture_lod: public Object{
	public:
	};

	class EXT_texture_filter_anisotropic: public Object{
	public:
		EXT_texture_filter_anisotropic* get_prototype();
		void set_prototype(EXT_texture_filter_anisotropic*);
		EXT_texture_filter_anisotropic();
		double get_MAX_TEXTURE_MAX_ANISOTROPY_EXT();
		double get_TEXTURE_MAX_ANISOTROPY_EXT();
	};

	class ElementEventMap: public GlobalEventHandlersEventMap {
	public:
		Event* get_ariarequest();
		void set_ariarequest(Event*);
		Event* get_command();
		void set_command(Event*);
		PointerEvent* get_gotpointercapture();
		void set_gotpointercapture(PointerEvent*);
		PointerEvent* get_lostpointercapture();
		void set_lostpointercapture(PointerEvent*);
		Event* get_MSGestureChange();
		void set_MSGestureChange(Event*);
		Event* get_MSGestureDoubleTap();
		void set_MSGestureDoubleTap(Event*);
		Event* get_MSGestureEnd();
		void set_MSGestureEnd(Event*);
		Event* get_MSGestureHold();
		void set_MSGestureHold(Event*);
		Event* get_MSGestureStart();
		void set_MSGestureStart(Event*);
		Event* get_MSGestureTap();
		void set_MSGestureTap(Event*);
		Event* get_MSGotPointerCapture();
		void set_MSGotPointerCapture(Event*);
		Event* get_MSInertiaStart();
		void set_MSInertiaStart(Event*);
		Event* get_MSLostPointerCapture();
		void set_MSLostPointerCapture(Event*);
		Event* get_MSPointerCancel();
		void set_MSPointerCancel(Event*);
		Event* get_MSPointerDown();
		void set_MSPointerDown(Event*);
		Event* get_MSPointerEnter();
		void set_MSPointerEnter(Event*);
		Event* get_MSPointerLeave();
		void set_MSPointerLeave(Event*);
		Event* get_MSPointerMove();
		void set_MSPointerMove(Event*);
		Event* get_MSPointerOut();
		void set_MSPointerOut(Event*);
		Event* get_MSPointerOver();
		void set_MSPointerOver(Event*);
		Event* get_MSPointerUp();
		void set_MSPointerUp(Event*);
		TouchEvent* get_touchcancel();
		void set_touchcancel(TouchEvent*);
		TouchEvent* get_touchend();
		void set_touchend(TouchEvent*);
		TouchEvent* get_touchmove();
		void set_touchmove(TouchEvent*);
		TouchEvent* get_touchstart();
		void set_touchstart(TouchEvent*);
		Event* get_webkitfullscreenchange();
		void set_webkitfullscreenchange(Event*);
		Event* get_webkitfullscreenerror();
		void set_webkitfullscreenerror(Event*);
	};

	class [[cheerp::client_layout]] ElementTraversal{
	public:
		double get_childElementCount();
		Element* get_firstElementChild();
		Element* get_lastElementChild();
		Element* get_nextElementSibling();
		Element* get_previousElementSibling();
	};

	class Element: public Node , public GlobalEventHandlers , public ElementTraversal , public ParentNode , public ChildNode {
	public:
		HTMLSlotElement* get_assignedSlot();
		NamedNodeMap* get_attributes();
		DOMTokenList* get_classList();
		String* get_className();
		void set_className(const String&);
		double get_clientHeight();
		double get_clientLeft();
		double get_clientTop();
		double get_clientWidth();
		String* get_id();
		void set_id(const String&);
		String* get_innerHTML();
		void set_innerHTML(const String&);
		double get_msContentZoomFactor();
		void set_msContentZoomFactor(double);
		String* get_msRegionOverflow();
		EventListener* get_onariarequest();
		void set_onariarequest(EventListener*);
		EventListener* get_oncommand();
		void set_oncommand(EventListener*);
		EventListener* get_ongotpointercapture();
		void set_ongotpointercapture(EventListener*);
		EventListener* get_onlostpointercapture();
		void set_onlostpointercapture(EventListener*);
		EventListener* get_onmsgesturechange();
		void set_onmsgesturechange(EventListener*);
		EventListener* get_onmsgesturedoubletap();
		void set_onmsgesturedoubletap(EventListener*);
		EventListener* get_onmsgestureend();
		void set_onmsgestureend(EventListener*);
		EventListener* get_onmsgesturehold();
		void set_onmsgesturehold(EventListener*);
		EventListener* get_onmsgesturestart();
		void set_onmsgesturestart(EventListener*);
		EventListener* get_onmsgesturetap();
		void set_onmsgesturetap(EventListener*);
		EventListener* get_onmsgotpointercapture();
		void set_onmsgotpointercapture(EventListener*);
		EventListener* get_onmsinertiastart();
		void set_onmsinertiastart(EventListener*);
		EventListener* get_onmslostpointercapture();
		void set_onmslostpointercapture(EventListener*);
		EventListener* get_onmspointercancel();
		void set_onmspointercancel(EventListener*);
		EventListener* get_onmspointerdown();
		void set_onmspointerdown(EventListener*);
		EventListener* get_onmspointerenter();
		void set_onmspointerenter(EventListener*);
		EventListener* get_onmspointerleave();
		void set_onmspointerleave(EventListener*);
		EventListener* get_onmspointermove();
		void set_onmspointermove(EventListener*);
		EventListener* get_onmspointerout();
		void set_onmspointerout(EventListener*);
		EventListener* get_onmspointerover();
		void set_onmspointerover(EventListener*);
		EventListener* get_onmspointerup();
		void set_onmspointerup(EventListener*);
		EventListener* get_ontouchcancel();
		void set_ontouchcancel(EventListener*);
		EventListener* get_ontouchend();
		void set_ontouchend(EventListener*);
		EventListener* get_ontouchmove();
		void set_ontouchmove(EventListener*);
		EventListener* get_ontouchstart();
		void set_ontouchstart(EventListener*);
		EventListener* get_onwebkitfullscreenchange();
		void set_onwebkitfullscreenchange(EventListener*);
		EventListener* get_onwebkitfullscreenerror();
		void set_onwebkitfullscreenerror(EventListener*);
		String* get_outerHTML();
		void set_outerHTML(const String&);
		String* get_prefix();
		double get_scrollHeight();
		double get_scrollLeft();
		void set_scrollLeft(double);
		double get_scrollTop();
		void set_scrollTop(double);
		double get_scrollWidth();
		ShadowRoot* get_shadowRoot();
		String* get_slot();
		void set_slot(const String&);
		String* get_tagName();
		ShadowRoot* attachShadow(ShadowRootInit* shadowRootInitDict);
		Element* closest(const String& selector);
		String* getAttribute(const String& qualifiedName);
		String* getAttributeNS(const String& namespaceURI, const String& localName);
		Attr* getAttributeNode(const String& name);
		Attr* getAttributeNodeNS(const String& namespaceURI, const String& localName);
		ClientRect* getBoundingClientRect();
		ClientRectList* getClientRects();
		NodeListOf<Element>* getElementsByClassName(const String& classNames);
		NodeListOf<Element>* getElementsByTagName(const String& name);
		HTMLCollectionOf<Element>* getElementsByTagNameNS(const String& namespaceURI, const String& localName);
		bool hasAttribute(const String& name);
		bool hasAttributeNS(const String& namespaceURI, const String& localName);
		bool hasAttributes();
		bool matches(const String& selectors);
		template<class ReturnType = Object*> ReturnType msGetRegionContent();
		ClientRect* msGetUntransformedBounds();
		bool msMatchesSelector(const String& selectors);
		void msReleasePointerCapture(double pointerId);
		void msSetPointerCapture(double pointerId);
		void msZoomTo(MsZoomToOptions* args);
		void releasePointerCapture(double pointerId);
		void removeAttribute(const String& qualifiedName);
		void removeAttributeNS(const String& namespaceURI, const String& localName);
		Attr* removeAttributeNode(Attr* oldAttr);
		void requestFullscreen();
		void requestPointerLock();
		void scroll(ScrollToOptions* options);
		void scroll(double x, double y);
		void scrollBy(ScrollToOptions* options);
		void scrollBy(double x, double y);
		void scrollIntoView();
		void scrollIntoView(bool arg);
		void scrollIntoView(ScrollIntoViewOptions* arg);
		void scrollTo(ScrollToOptions* options);
		void scrollTo(double x, double y);
		void setAttribute(const String& qualifiedName, const String& value);
		void setAttributeNS(const String& namespaceURI, const String& qualifiedName, const String& value);
		Attr* setAttributeNode(Attr* newAttr);
		Attr* setAttributeNodeNS(Attr* newAttr);
		void setPointerCapture(double pointerId);
		bool webkitMatchesSelector(const String& selectors);
		void webkitRequestFullScreen();
		void webkitRequestFullscreen();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		Element* get_prototype();
		void set_prototype(Element*);
		Element();
	};

	class [[cheerp::client_layout]] ElementCSSInlineStyle{
	public:
		CSSStyleDeclaration* get_style();
	};

	class ElementCreationOptions: public Object{
	public:
		String* get_is();
		void set_is(const String&);
	};

	class ElementDefinitionOptions: public Object{
	public:
		String* get_extends();
		void set_extends(const String&);
	};

	class ErrorEvent: public Event {
	public:
		double get_colno();
		template<class ReturnType = Object*> ReturnType get_error();
		String* get_filename();
		double get_lineno();
		String* get_message();
		void initErrorEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, const String& messageArg, const String& filenameArg, double linenoArg);
		ErrorEvent* get_prototype();
		void set_prototype(ErrorEvent*);
		ErrorEvent(const String& typeArg);
		ErrorEvent(const String& typeArg, ErrorEventInit* eventInitDict);
	};

	class EventListenerObject: public Object{
	public:
		void handleEvent(Event* evt);
	};

	class EventSource: public EventTarget {
	public:
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		EventListener* get_onopen();
		void set_onopen(EventListener*);
		double get_readyState();
		String* get_url();
		bool get_withCredentials();
		void close();
		EventSource* get_prototype();
		void set_prototype(EventSource*);
		EventSource(const String& url);
		EventSource(const String& url, EventSourceInit* eventSourceInitDict);
	};

	class EventSourceInit: public Object{
	public:
		bool get_withCredentials();
	};

	class ExtensionScriptApis: public Object{
	public:
		double extensionIdToShortId(const String& extensionId);
		void fireExtensionApiTelemetry(const String& functionName, bool isSucceeded, bool isSupported, const String& errorString);
		void genericFunction(Object* routerAddress);
		void genericFunction(Object* routerAddress, const String& parameters);
		void genericFunction(Object* routerAddress, const String& parameters, double callbackId);
		String* genericSynchronousFunction(double functionId);
		String* genericSynchronousFunction(double functionId, const String& parameters);
		void genericWebRuntimeCallout(Object* to, Object* from, const String& payload);
		String* getExtensionId();
		void registerGenericFunctionCallbackHandler(Function* callbackHandler);
		void registerGenericPersistentCallbackHandler(Function* callbackHandler);
		template<class ReturnType = Object*> ReturnType registerWebRuntimeCallbackHandler(Function* handler);
		ExtensionScriptApis* get_prototype();
		void set_prototype(ExtensionScriptApis*);
		ExtensionScriptApis();
	};

	class External: public Object{
	public:
		External* get_prototype();
		void set_prototype(External*);
		External();
	};

	class File: public Blob {
	public:
		double get_lastModified();
		Date* get_lastModifiedDate();
		String* get_name();
		String* get_webkitRelativePath();
		File* get_prototype();
		void set_prototype(File*);
		File(Array* parts, const String& filename);
		File(Array* parts, const String& filename, FilePropertyBag* properties);
	};

	class FileList: public Object{
	public:
		double get_length();
		File* item(double index);
		File*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<File*>(this, 0)[index];
		}
		File* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<File*>(this, 0)[index];
		}
		FileList* get_prototype();
		void set_prototype(FileList*);
		FileList();
	};

	class FilePropertyBag: public BlobPropertyBag {
	public:
		double get_lastModified();
		void set_lastModified(double);
	};

	class FileReaderEventMap: public Object{
	public:
		ProgressEvent* get_abort();
		void set_abort(ProgressEvent*);
		ProgressEvent* get_error();
		void set_error(ProgressEvent*);
		ProgressEvent* get_load();
		void set_load(ProgressEvent*);
		ProgressEvent* get_loadend();
		void set_loadend(ProgressEvent*);
		ProgressEvent* get_loadstart();
		void set_loadstart(ProgressEvent*);
		ProgressEvent* get_progress();
		void set_progress(ProgressEvent*);
	};

	class FileReader: public EventTarget {
	public:
		DOMException* get_error();
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onloadend();
		void set_onloadend(EventListener*);
		EventListener* get_onloadstart();
		void set_onloadstart(EventListener*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		double get_readyState();
		template<class ReturnType = Object*> ReturnType get_result();
		void abort();
		void readAsArrayBuffer(Blob* blob);
		void readAsBinaryString(Blob* blob);
		void readAsDataURL(Blob* blob);
		void readAsText(Blob* blob);
		void readAsText(Blob* blob, const String& label);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		FileReader* get_prototype();
		void set_prototype(FileReader*);
		FileReader();
		double get_DONE();
		double get_EMPTY();
		double get_LOADING();
	};

	class ProgressEvent: public Event {
	public:
		bool get_lengthComputable();
		double get_loaded();
		double get_total();
		void initProgressEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, bool lengthComputableArg, double loadedArg, double totalArg);
		ProgressEvent* get_prototype();
		void set_prototype(ProgressEvent*);
		ProgressEvent(const String& typeArg);
		ProgressEvent(const String& typeArg, ProgressEventInit* eventInitDict);
	};

	class FileReaderProgressEvent: public ProgressEvent {
	public:
		FileReader* get_target();
	};

	class FocusEvent: public UIEvent {
	public:
		EventTarget* get_relatedTarget();
		void initFocusEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, EventTarget* relatedTargetArg);
		FocusEvent* get_prototype();
		void set_prototype(FocusEvent*);
		FocusEvent(const String& typeArg);
		FocusEvent(const String& typeArg, FocusEventInit* eventInitDict);
	};

	class FocusNavigationEvent: public Event {
	public:
		String* get_navigationReason();
		double get_originHeight();
		double get_originLeft();
		double get_originTop();
		double get_originWidth();
		void requestFocus();
		FocusNavigationEvent* get_prototype();
		void set_prototype(FocusNavigationEvent*);
		FocusNavigationEvent(const String& type);
		FocusNavigationEvent(const String& type, FocusNavigationEventInit* eventInitDict);
	};

	class FormData: public Object{
	public:
		void append(const String& name, const String& value);
		void append(const String& name, const String& value, const String& fileName);
		void append(const String& name, Blob* value);
		void append(const String& name, Blob* value, const String& fileName);
		void _delete(const String& name);
		String* get(const String& name);
		Array* getAll(const String& name);
		bool has(const String& name);
		void set(const String& name, const String& value);
		void set(const String& name, const String& value, const String& fileName);
		void set(const String& name, Blob* value);
		void set(const String& name, Blob* value, const String& fileName);
		FormData* get_prototype();
		void set_prototype(FormData*);
		FormData();
		FormData(HTMLFormElement* form);
	};

	class GainNode: public AudioNode {
	public:
		AudioParam* get_gain();
		GainNode* get_prototype();
		void set_prototype(GainNode*);
		GainNode();
	};

	class Gamepad: public Object{
	public:
		Array* get_axes();
		Array* get_buttons();
		bool get_connected();
		double get_displayId();
		String* get_hand();
		Array* get_hapticActuators();
		String* get_id();
		double get_index();
		String* get_mapping();
		GamepadPose* get_pose();
		double get_timestamp();
		Gamepad* get_prototype();
		void set_prototype(Gamepad*);
		Gamepad();
	};

	class GamepadButton: public Object{
	public:
		bool get_pressed();
		bool get_touched();
		double get_value();
		GamepadButton* get_prototype();
		void set_prototype(GamepadButton*);
		GamepadButton();
	};

	class GamepadEvent: public Event {
	public:
		Gamepad* get_gamepad();
		GamepadEvent* get_prototype();
		void set_prototype(GamepadEvent*);
		GamepadEvent(const String& typeArg);
		GamepadEvent(const String& typeArg, GamepadEventInit* eventInitDict);
	};

	class GamepadHapticActuator: public Object{
	public:
		String* get_type();
		Promise* pulse(double value, double duration);
		GamepadHapticActuator* get_prototype();
		void set_prototype(GamepadHapticActuator*);
		GamepadHapticActuator();
	};

	class GamepadPose: public Object{
	public:
		Float32Array* get_angularAcceleration();
		Float32Array* get_angularVelocity();
		bool get_hasOrientation();
		bool get_hasPosition();
		Float32Array* get_linearAcceleration();
		Float32Array* get_linearVelocity();
		Float32Array* get_orientation();
		Float32Array* get_position();
		GamepadPose* get_prototype();
		void set_prototype(GamepadPose*);
		GamepadPose();
	};

	class Geolocation: public Object{
	public:
		void clearWatch(double watchId);
		void getCurrentPosition(EventListener* successCallback);
		void getCurrentPosition(EventListener* successCallback, EventListener* errorCallback);
		void getCurrentPosition(EventListener* successCallback, EventListener* errorCallback, PositionOptions* options);
		double watchPosition(EventListener* successCallback);
		double watchPosition(EventListener* successCallback, EventListener* errorCallback);
		double watchPosition(EventListener* successCallback, EventListener* errorCallback, PositionOptions* options);
		Geolocation* get_prototype();
		void set_prototype(Geolocation*);
		Geolocation();
	};

	class [[cheerp::client_layout]] GetSVGDocument{
	public:
		Document* getSVGDocument();
	};

	class [[cheerp::client_layout]] GlobalFetch{
	public:
		Promise* fetch();
		Promise* fetch(Request* input);
		Promise* fetch(Request* input, RequestInit* init);
		Promise* fetch(const String& input);
		Promise* fetch(const String& input, RequestInit* init);
	};

	class HTMLAllCollection: public Object{
	public:
		double get_length();
		HTMLCollection* item();
		HTMLCollection* item(const String& nameOrIndex);
		HTMLCollection* namedItem(const String& name);
		Element*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Element*>(this, 0)[index];
		}
		Element* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Element*>(this, 0)[index];
		}
		HTMLAllCollection* get_prototype();
		void set_prototype(HTMLAllCollection*);
		HTMLAllCollection();
	};

	class HTMLElement: public Element , public ElementCSSInlineStyle {
	public:
		String* get_accessKey();
		void set_accessKey(const String&);
		String* get_contentEditable();
		void set_contentEditable(const String&);
		DOMStringMap* get_dataset();
		String* get_dir();
		void set_dir(const String&);
		bool get_draggable();
		void set_draggable(bool);
		bool get_hidden();
		void set_hidden(bool);
		bool get_hideFocus();
		void set_hideFocus(bool);
		String* get_innerText();
		void set_innerText(const String&);
		bool get_isContentEditable();
		String* get_lang();
		void set_lang(const String&);
		double get_offsetHeight();
		double get_offsetLeft();
		Element* get_offsetParent();
		double get_offsetTop();
		double get_offsetWidth();
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_onactivate();
		void set_onactivate(EventListener*);
		EventListener* get_onbeforeactivate();
		void set_onbeforeactivate(EventListener*);
		EventListener* get_onbeforecopy();
		void set_onbeforecopy(EventListener*);
		EventListener* get_onbeforecut();
		void set_onbeforecut(EventListener*);
		EventListener* get_onbeforedeactivate();
		void set_onbeforedeactivate(EventListener*);
		EventListener* get_onbeforepaste();
		void set_onbeforepaste(EventListener*);
		EventListener* get_onblur();
		void set_onblur(EventListener*);
		EventListener* get_oncanplay();
		void set_oncanplay(EventListener*);
		EventListener* get_oncanplaythrough();
		void set_oncanplaythrough(EventListener*);
		EventListener* get_onchange();
		void set_onchange(EventListener*);
		EventListener* get_onclick();
		void set_onclick(EventListener*);
		EventListener* get_oncontextmenu();
		void set_oncontextmenu(EventListener*);
		EventListener* get_oncopy();
		void set_oncopy(EventListener*);
		EventListener* get_oncuechange();
		void set_oncuechange(EventListener*);
		EventListener* get_oncut();
		void set_oncut(EventListener*);
		EventListener* get_ondblclick();
		void set_ondblclick(EventListener*);
		EventListener* get_ondeactivate();
		void set_ondeactivate(EventListener*);
		EventListener* get_ondrag();
		void set_ondrag(EventListener*);
		EventListener* get_ondragend();
		void set_ondragend(EventListener*);
		EventListener* get_ondragenter();
		void set_ondragenter(EventListener*);
		EventListener* get_ondragleave();
		void set_ondragleave(EventListener*);
		EventListener* get_ondragover();
		void set_ondragover(EventListener*);
		EventListener* get_ondragstart();
		void set_ondragstart(EventListener*);
		EventListener* get_ondrop();
		void set_ondrop(EventListener*);
		EventListener* get_ondurationchange();
		void set_ondurationchange(EventListener*);
		EventListener* get_onemptied();
		void set_onemptied(EventListener*);
		EventListener* get_onended();
		void set_onended(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onfocus();
		void set_onfocus(EventListener*);
		EventListener* get_oninput();
		void set_oninput(EventListener*);
		EventListener* get_oninvalid();
		void set_oninvalid(EventListener*);
		EventListener* get_onkeydown();
		void set_onkeydown(EventListener*);
		EventListener* get_onkeypress();
		void set_onkeypress(EventListener*);
		EventListener* get_onkeyup();
		void set_onkeyup(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onloadeddata();
		void set_onloadeddata(EventListener*);
		EventListener* get_onloadedmetadata();
		void set_onloadedmetadata(EventListener*);
		EventListener* get_onloadstart();
		void set_onloadstart(EventListener*);
		EventListener* get_onmousedown();
		void set_onmousedown(EventListener*);
		EventListener* get_onmouseenter();
		void set_onmouseenter(EventListener*);
		EventListener* get_onmouseleave();
		void set_onmouseleave(EventListener*);
		EventListener* get_onmousemove();
		void set_onmousemove(EventListener*);
		EventListener* get_onmouseout();
		void set_onmouseout(EventListener*);
		EventListener* get_onmouseover();
		void set_onmouseover(EventListener*);
		EventListener* get_onmouseup();
		void set_onmouseup(EventListener*);
		EventListener* get_onmousewheel();
		void set_onmousewheel(EventListener*);
		EventListener* get_onmscontentzoom();
		void set_onmscontentzoom(EventListener*);
		EventListener* get_onmsmanipulationstatechanged();
		void set_onmsmanipulationstatechanged(EventListener*);
		EventListener* get_onpaste();
		void set_onpaste(EventListener*);
		EventListener* get_onpause();
		void set_onpause(EventListener*);
		EventListener* get_onplay();
		void set_onplay(EventListener*);
		EventListener* get_onplaying();
		void set_onplaying(EventListener*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_onratechange();
		void set_onratechange(EventListener*);
		EventListener* get_onreset();
		void set_onreset(EventListener*);
		EventListener* get_onscroll();
		void set_onscroll(EventListener*);
		EventListener* get_onseeked();
		void set_onseeked(EventListener*);
		EventListener* get_onseeking();
		void set_onseeking(EventListener*);
		EventListener* get_onselect();
		void set_onselect(EventListener*);
		EventListener* get_onselectstart();
		void set_onselectstart(EventListener*);
		EventListener* get_onstalled();
		void set_onstalled(EventListener*);
		EventListener* get_onsubmit();
		void set_onsubmit(EventListener*);
		EventListener* get_onsuspend();
		void set_onsuspend(EventListener*);
		EventListener* get_ontimeupdate();
		void set_ontimeupdate(EventListener*);
		EventListener* get_onvolumechange();
		void set_onvolumechange(EventListener*);
		EventListener* get_onwaiting();
		void set_onwaiting(EventListener*);
		String* get_outerText();
		void set_outerText(const String&);
		bool get_spellcheck();
		void set_spellcheck(bool);
		double get_tabIndex();
		void set_tabIndex(double);
		String* get_title();
		void set_title(const String&);
		Animation* animate(AnimationKeyFrame* keyframes, double options);
		Animation* animate(AnimationKeyFrame* keyframes, AnimationOptions* options);
		Animation* animate(Array* keyframes, AnimationOptions* options);
		void blur();
		void click();
		bool dragDrop();
		void focus();
		MSInputMethodContext* msGetInputContext();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLElement* get_prototype();
		void set_prototype(HTMLElement*);
		HTMLElement();
	};

	class [[cheerp::client_layout]] HTMLHyperlinkElementUtils{
	public:
		String* get_hash();
		void set_hash(const String&);
		String* get_host();
		void set_host(const String&);
		String* get_hostname();
		void set_hostname(const String&);
		String* get_href();
		void set_href(const String&);
		String* get_origin();
		void set_origin(const String&);
		String* get_pathname();
		void set_pathname(const String&);
		String* get_port();
		void set_port(const String&);
		String* get_protocol();
		void set_protocol(const String&);
		String* get_search();
		void set_search(const String&);
		String* toString();
	};

	class HTMLAnchorElement: public HTMLElement , public HTMLHyperlinkElementUtils {
	public:
		String* get_Methods();
		void set_Methods(const String&);
		String* get_charset();
		void set_charset(const String&);
		String* get_coords();
		void set_coords(const String&);
		String* get_download();
		void set_download(const String&);
		String* get_hreflang();
		void set_hreflang(const String&);
		String* get_mimeType();
		String* get_name();
		void set_name(const String&);
		String* get_nameProp();
		String* get_protocolLong();
		String* get_rel();
		void set_rel(const String&);
		String* get_rev();
		void set_rev(const String&);
		String* get_shape();
		void set_shape(const String&);
		String* get_target();
		void set_target(const String&);
		String* get_text();
		void set_text(const String&);
		String* get_type();
		void set_type(const String&);
		String* get_urn();
		void set_urn(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLAnchorElement* get_prototype();
		void set_prototype(HTMLAnchorElement*);
		HTMLAnchorElement();
	};

	class HTMLAppletElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		String* get_alt();
		void set_alt(const String&);
		String* get_archive();
		void set_archive(const String&);
		String* get_code();
		void set_code(const String&);
		String* get_codeBase();
		void set_codeBase(const String&);
		HTMLFormElement* get_form();
		String* get_height();
		void set_height(const String&);
		double get_hspace();
		void set_hspace(double);
		String* get_name();
		void set_name(const String&);
		String* get_object();
		void set_object(const String&);
		double get_vspace();
		void set_vspace(double);
		String* get_width();
		void set_width(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLAppletElement* get_prototype();
		void set_prototype(HTMLAppletElement*);
		HTMLAppletElement();
	};

	class HTMLAreaElement: public HTMLElement , public HTMLHyperlinkElementUtils {
	public:
		String* get_alt();
		void set_alt(const String&);
		String* get_coords();
		void set_coords(const String&);
		String* get_download();
		void set_download(const String&);
		bool get_noHref();
		void set_noHref(bool);
		String* get_rel();
		void set_rel(const String&);
		String* get_shape();
		void set_shape(const String&);
		String* get_target();
		void set_target(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLAreaElement* get_prototype();
		void set_prototype(HTMLAreaElement*);
		HTMLAreaElement();
	};

	class HTMLCollectionBase: public Object{
	public:
		double get_length();
		Element* item(double index);
		Element*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Element*>(this, 0)[index];
		}
		Element* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Element*>(this, 0)[index];
		}
	};

	class HTMLAreasCollection: public HTMLCollectionBase {
	public:
		HTMLAreasCollection* get_prototype();
		void set_prototype(HTMLAreasCollection*);
		HTMLAreasCollection();
	};

	class HTMLMediaElement: public HTMLElement {
	public:
		AudioTrackList* get_audioTracks();
		bool get_autoplay();
		void set_autoplay(bool);
		TimeRanges* get_buffered();
		bool get_controls();
		void set_controls(bool);
		String* get_crossOrigin();
		void set_crossOrigin(const String&);
		String* get_currentSrc();
		double get_currentTime();
		void set_currentTime(double);
		bool get_defaultMuted();
		void set_defaultMuted(bool);
		double get_defaultPlaybackRate();
		void set_defaultPlaybackRate(double);
		double get_duration();
		bool get_ended();
		MediaError* get_error();
		bool get_loop();
		void set_loop(bool);
		MediaKeys* get_mediaKeys();
		String* get_msAudioCategory();
		void set_msAudioCategory(const String&);
		String* get_msAudioDeviceType();
		void set_msAudioDeviceType(const String&);
		MSGraphicsTrust* get_msGraphicsTrustStatus();
		MSMediaKeys* get_msKeys();
		bool get_msPlayToDisabled();
		void set_msPlayToDisabled(bool);
		String* get_msPlayToPreferredSourceUri();
		void set_msPlayToPreferredSourceUri(const String&);
		bool get_msPlayToPrimary();
		void set_msPlayToPrimary(bool);
		template<class ReturnType = Object*> ReturnType get_msPlayToSource();
		bool get_msRealTime();
		void set_msRealTime(bool);
		bool get_muted();
		void set_muted(bool);
		double get_networkState();
		EventListener* get_onencrypted();
		void set_onencrypted(EventListener*);
		EventListener* get_onmsneedkey();
		void set_onmsneedkey(EventListener*);
		bool get_paused();
		double get_playbackRate();
		void set_playbackRate(double);
		TimeRanges* get_played();
		String* get_preload();
		void set_preload(const String&);
		double get_readyState();
		TimeRanges* get_seekable();
		bool get_seeking();
		String* get_src();
		void set_src(const String&);
		MediaStream* get_srcObject();
		void set_srcObject(MediaStream*);
		TextTrackList* get_textTracks();
		VideoTrackList* get_videoTracks();
		double get_volume();
		void set_volume(double);
		String* canPlayType(const String& type);
		void load();
		void msClearEffects();
		template<class ReturnType = Object*> ReturnType msGetAsCastingSource();
		void msInsertAudioEffect(const String& activatableClassId, bool effectRequired);
		void msInsertAudioEffect(const String& activatableClassId, bool effectRequired, Object* config);
		void msSetMediaKeys(MSMediaKeys* mediaKeys);
		void msSetMediaProtectionManager();
		void msSetMediaProtectionManager(Object* mediaProtectionManager);
		void pause();
		Promise* play();
		Promise* setMediaKeys(MediaKeys* mediaKeys);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLMediaElement* get_prototype();
		void set_prototype(HTMLMediaElement*);
		HTMLMediaElement();
		double get_HAVE_CURRENT_DATA();
		double get_HAVE_ENOUGH_DATA();
		double get_HAVE_FUTURE_DATA();
		double get_HAVE_METADATA();
		double get_HAVE_NOTHING();
		double get_NETWORK_EMPTY();
		double get_NETWORK_IDLE();
		double get_NETWORK_LOADING();
		double get_NETWORK_NO_SOURCE();
	};

	class HTMLAudioElement: public HTMLMediaElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLAudioElement* get_prototype();
		void set_prototype(HTMLAudioElement*);
		HTMLAudioElement();
	};

	class HTMLBRElement: public HTMLElement {
	public:
		String* get_clear();
		void set_clear(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLBRElement* get_prototype();
		void set_prototype(HTMLBRElement*);
		HTMLBRElement();
	};

	class HTMLBaseElement: public HTMLElement {
	public:
		String* get_href();
		void set_href(const String&);
		String* get_target();
		void set_target(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLBaseElement* get_prototype();
		void set_prototype(HTMLBaseElement*);
		HTMLBaseElement();
	};

	class HTMLBaseFontElement: public HTMLElement , public DOML2DeprecatedColorProperty {
	public:
		String* get_face();
		void set_face(const String&);
		double get_size();
		void set_size(double);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLBaseFontElement* get_prototype();
		void set_prototype(HTMLBaseFontElement*);
		HTMLBaseFontElement();
	};

	class HTMLElementEventMap: public ElementEventMap {
	public:
		UIEvent* get_abort();
		void set_abort(UIEvent*);
		Event* get_activate();
		void set_activate(Event*);
		Event* get_beforeactivate();
		void set_beforeactivate(Event*);
		Event* get_beforecopy();
		void set_beforecopy(Event*);
		Event* get_beforecut();
		void set_beforecut(Event*);
		Event* get_beforedeactivate();
		void set_beforedeactivate(Event*);
		Event* get_beforepaste();
		void set_beforepaste(Event*);
		FocusEvent* get_blur();
		void set_blur(FocusEvent*);
		Event* get_canplay();
		void set_canplay(Event*);
		Event* get_canplaythrough();
		void set_canplaythrough(Event*);
		Event* get_change();
		void set_change(Event*);
		MouseEvent* get_click();
		void set_click(MouseEvent*);
		PointerEvent* get_contextmenu();
		void set_contextmenu(PointerEvent*);
		ClipboardEvent* get_copy();
		void set_copy(ClipboardEvent*);
		Event* get_cuechange();
		void set_cuechange(Event*);
		ClipboardEvent* get_cut();
		void set_cut(ClipboardEvent*);
		MouseEvent* get_dblclick();
		void set_dblclick(MouseEvent*);
		Event* get_deactivate();
		void set_deactivate(Event*);
		DragEvent* get_drag();
		void set_drag(DragEvent*);
		DragEvent* get_dragend();
		void set_dragend(DragEvent*);
		DragEvent* get_dragenter();
		void set_dragenter(DragEvent*);
		DragEvent* get_dragleave();
		void set_dragleave(DragEvent*);
		DragEvent* get_dragover();
		void set_dragover(DragEvent*);
		DragEvent* get_dragstart();
		void set_dragstart(DragEvent*);
		DragEvent* get_drop();
		void set_drop(DragEvent*);
		Event* get_durationchange();
		void set_durationchange(Event*);
		Event* get_emptied();
		void set_emptied(Event*);
		Event* get_ended();
		void set_ended(Event*);
		ErrorEvent* get_error();
		void set_error(ErrorEvent*);
		FocusEvent* get_focus();
		void set_focus(FocusEvent*);
		Event* get_input();
		void set_input(Event*);
		Event* get_invalid();
		void set_invalid(Event*);
		KeyboardEvent* get_keydown();
		void set_keydown(KeyboardEvent*);
		KeyboardEvent* get_keypress();
		void set_keypress(KeyboardEvent*);
		KeyboardEvent* get_keyup();
		void set_keyup(KeyboardEvent*);
		Event* get_load();
		void set_load(Event*);
		Event* get_loadeddata();
		void set_loadeddata(Event*);
		Event* get_loadedmetadata();
		void set_loadedmetadata(Event*);
		Event* get_loadstart();
		void set_loadstart(Event*);
		MouseEvent* get_mousedown();
		void set_mousedown(MouseEvent*);
		MouseEvent* get_mouseenter();
		void set_mouseenter(MouseEvent*);
		MouseEvent* get_mouseleave();
		void set_mouseleave(MouseEvent*);
		MouseEvent* get_mousemove();
		void set_mousemove(MouseEvent*);
		MouseEvent* get_mouseout();
		void set_mouseout(MouseEvent*);
		MouseEvent* get_mouseover();
		void set_mouseover(MouseEvent*);
		MouseEvent* get_mouseup();
		void set_mouseup(MouseEvent*);
		WheelEvent* get_mousewheel();
		void set_mousewheel(WheelEvent*);
		Event* get_MSContentZoom();
		void set_MSContentZoom(Event*);
		Event* get_MSManipulationStateChanged();
		void set_MSManipulationStateChanged(Event*);
		ClipboardEvent* get_paste();
		void set_paste(ClipboardEvent*);
		Event* get_pause();
		void set_pause(Event*);
		Event* get_play();
		void set_play(Event*);
		Event* get_playing();
		void set_playing(Event*);
		ProgressEvent* get_progress();
		void set_progress(ProgressEvent*);
		Event* get_ratechange();
		void set_ratechange(Event*);
		Event* get_reset();
		void set_reset(Event*);
		UIEvent* get_scroll();
		void set_scroll(UIEvent*);
		Event* get_seeked();
		void set_seeked(Event*);
		Event* get_seeking();
		void set_seeking(Event*);
		UIEvent* get_select();
		void set_select(UIEvent*);
		Event* get_selectstart();
		void set_selectstart(Event*);
		Event* get_stalled();
		void set_stalled(Event*);
		Event* get_submit();
		void set_submit(Event*);
		Event* get_suspend();
		void set_suspend(Event*);
		Event* get_timeupdate();
		void set_timeupdate(Event*);
		Event* get_volumechange();
		void set_volumechange(Event*);
		Event* get_waiting();
		void set_waiting(Event*);
	};

	class [[cheerp::client_layout]] WindowEventHandlersEventMap{
	public:
		Event* get_afterprint();
		void set_afterprint(Event*);
		Event* get_beforeprint();
		void set_beforeprint(Event*);
		BeforeUnloadEvent* get_beforeunload();
		void set_beforeunload(BeforeUnloadEvent*);
		HashChangeEvent* get_hashchange();
		void set_hashchange(HashChangeEvent*);
		MessageEvent* get_message();
		void set_message(MessageEvent*);
		Event* get_offline();
		void set_offline(Event*);
		Event* get_online();
		void set_online(Event*);
		PageTransitionEvent* get_pagehide();
		void set_pagehide(PageTransitionEvent*);
		PageTransitionEvent* get_pageshow();
		void set_pageshow(PageTransitionEvent*);
		PopStateEvent* get_popstate();
		void set_popstate(PopStateEvent*);
		StorageEvent* get_storage();
		void set_storage(StorageEvent*);
		Event* get_unload();
		void set_unload(Event*);
	};

	class HTMLBodyElementEventMap: public HTMLElementEventMap , public WindowEventHandlersEventMap {
	public:
		FocusEvent* get_blur();
		void set_blur(FocusEvent*);
		ErrorEvent* get_error();
		void set_error(ErrorEvent*);
		FocusEvent* get_focus();
		void set_focus(FocusEvent*);
		Event* get_load();
		void set_load(Event*);
		Event* get_orientationchange();
		void set_orientationchange(Event*);
		UIEvent* get_resize();
		void set_resize(UIEvent*);
		UIEvent* get_scroll();
		void set_scroll(UIEvent*);
	};

	class [[cheerp::client_layout]] WindowEventHandlers{
	public:
		EventListener* get_onafterprint();
		void set_onafterprint(EventListener*);
		EventListener* get_onbeforeprint();
		void set_onbeforeprint(EventListener*);
		EventListener* get_onbeforeunload();
		void set_onbeforeunload(EventListener*);
		EventListener* get_onhashchange();
		void set_onhashchange(EventListener*);
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		EventListener* get_onoffline();
		void set_onoffline(EventListener*);
		EventListener* get_ononline();
		void set_ononline(EventListener*);
		EventListener* get_onpagehide();
		void set_onpagehide(EventListener*);
		EventListener* get_onpageshow();
		void set_onpageshow(EventListener*);
		EventListener* get_onpopstate();
		void set_onpopstate(EventListener*);
		EventListener* get_onstorage();
		void set_onstorage(EventListener*);
		EventListener* get_onunload();
		void set_onunload(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
	};

	class HTMLBodyElement: public HTMLElement , public WindowEventHandlers {
	public:
		String* get_aLink();
		void set_aLink(const String&);
		String* get_background();
		void set_background(const String&);
		String* get_bgColor();
		void set_bgColor(const String&);
		String* get_bgProperties();
		void set_bgProperties(const String&);
		String* get_link();
		void set_link(const String&);
		bool get_noWrap();
		void set_noWrap(bool);
		EventListener* get_onorientationchange();
		void set_onorientationchange(EventListener*);
		EventListener* get_onresize();
		void set_onresize(EventListener*);
		String* get_text();
		void set_text(const String&);
		String* get_vLink();
		void set_vLink(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLBodyElement* get_prototype();
		void set_prototype(HTMLBodyElement*);
		HTMLBodyElement();
	};

	class HTMLButtonElement: public HTMLElement {
	public:
		bool get_autofocus();
		void set_autofocus(bool);
		bool get_disabled();
		void set_disabled(bool);
		HTMLFormElement* get_form();
		String* get_formAction();
		void set_formAction(const String&);
		String* get_formEnctype();
		void set_formEnctype(const String&);
		String* get_formMethod();
		void set_formMethod(const String&);
		bool get_formNoValidate();
		void set_formNoValidate(bool);
		String* get_formTarget();
		void set_formTarget(const String&);
		String* get_name();
		void set_name(const String&);
		template<class ReturnType = Object*> ReturnType get_status();
		void set_status(Object*);
		String* get_type();
		void set_type(const String&);
		String* get_validationMessage();
		ValidityState* get_validity();
		String* get_value();
		void set_value(const String&);
		bool get_willValidate();
		bool checkValidity();
		void setCustomValidity(const String& error);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLButtonElement* get_prototype();
		void set_prototype(HTMLButtonElement*);
		HTMLButtonElement();
	};

	class HTMLCanvasElement: public HTMLElement {
	public:
		double get_height();
		void set_height(double);
		double get_width();
		void set_width(double);
		template<class ReturnType = Object*> ReturnType getContext(const String& contextId);
		template<class ReturnType = Object*> ReturnType getContext(const String& contextId, Object* contextAttributes);
		Blob* msToBlob();
		void toBlob(EventListener* callback);
		template<typename... Args> void toBlob(EventListener* callback, const String& type, Args&&... arguments) { return static_cast<const HTMLCanvasElement*>(this)->toBlob(callback, type, static_cast<Object*>(static_cast<Args&&>(arguments))...); }
		void toBlob(EventListener* callback, const String& type);
		String* toDataURL();
		template<typename... Args> String* toDataURL(const String& type, Args&&... args) { return static_cast<const HTMLCanvasElement*>(this)->toDataURL(type, static_cast<Object*>(static_cast<Args&&>(args))...); }
		String* toDataURL(const String& type);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLCanvasElement* get_prototype();
		void set_prototype(HTMLCanvasElement*);
		HTMLCanvasElement();
	private:
		template<typename... Args> void toBlob(EventListener* callback, const String& type, Args... arguments) const;
		template<typename... Args> String* toDataURL(const String& type, Args... args) const;
	};

	class HTMLCollection: public HTMLCollectionBase {
	public:
		Element* namedItem(const String& name);
		HTMLCollection* get_prototype();
		void set_prototype(HTMLCollection*);
		HTMLCollection();
	};

	template<class T>
	class HTMLCollectionOf: public HTMLCollectionBase {
	public:
		T* item(double index);
		T* namedItem(const String& name);
		T*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<T*>(this, 0)[index];
		}
		T* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<T*>(this, 0)[index];
		}
	};

	class HTMLDListElement: public HTMLElement {
	public:
		bool get_compact();
		void set_compact(bool);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLDListElement* get_prototype();
		void set_prototype(HTMLDListElement*);
		HTMLDListElement();
	};

	class HTMLDataElement: public HTMLElement {
	public:
		String* get_value();
		void set_value(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLDataElement* get_prototype();
		void set_prototype(HTMLDataElement*);
		HTMLDataElement();
	};

	class HTMLDataListElement: public HTMLElement {
	public:
		HTMLCollectionOf<HTMLOptionElement>* get_options();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLDataListElement* get_prototype();
		void set_prototype(HTMLDataListElement*);
		HTMLDataListElement();
	};

	class HTMLDetailsElement: public HTMLElement {
	public:
		bool get_open();
		void set_open(bool);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLDetailsElement* get_prototype();
		void set_prototype(HTMLDetailsElement*);
		HTMLDetailsElement();
	};

	class HTMLDialogElement: public HTMLElement {
	public:
		bool get_open();
		void set_open(bool);
		String* get_returnValue();
		void set_returnValue(const String&);
		void close();
		void close(const String& returnValue);
		void show();
		void showModal();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLDialogElement* get_prototype();
		void set_prototype(HTMLDialogElement*);
		HTMLDialogElement();
	};

	class HTMLDirectoryElement: public HTMLElement {
	public:
		bool get_compact();
		void set_compact(bool);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLDirectoryElement* get_prototype();
		void set_prototype(HTMLDirectoryElement*);
		HTMLDirectoryElement();
	};

	class HTMLDivElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		bool get_noWrap();
		void set_noWrap(bool);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLDivElement* get_prototype();
		void set_prototype(HTMLDivElement*);
		HTMLDivElement();
	};

	class HTMLDocument: public Document {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLDocument* get_prototype();
		void set_prototype(HTMLDocument*);
		HTMLDocument();
	};

	class HTMLEmbedElement: public HTMLElement , public GetSVGDocument {
	public:
		String* get_height();
		void set_height(const String&);
		template<class ReturnType = Object*> ReturnType get_hidden();
		void set_hidden(Object*);
		bool get_msPlayToDisabled();
		void set_msPlayToDisabled(bool);
		String* get_msPlayToPreferredSourceUri();
		void set_msPlayToPreferredSourceUri(const String&);
		bool get_msPlayToPrimary();
		void set_msPlayToPrimary(bool);
		template<class ReturnType = Object*> ReturnType get_msPlayToSource();
		String* get_name();
		void set_name(const String&);
		String* get_palette();
		String* get_pluginspage();
		String* get_readyState();
		String* get_src();
		void set_src(const String&);
		String* get_units();
		void set_units(const String&);
		String* get_width();
		void set_width(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLEmbedElement* get_prototype();
		void set_prototype(HTMLEmbedElement*);
		HTMLEmbedElement();
	};

	class HTMLFieldSetElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		bool get_disabled();
		void set_disabled(bool);
		HTMLFormElement* get_form();
		String* get_name();
		void set_name(const String&);
		String* get_validationMessage();
		ValidityState* get_validity();
		bool get_willValidate();
		bool checkValidity();
		void setCustomValidity(const String& error);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLFieldSetElement* get_prototype();
		void set_prototype(HTMLFieldSetElement*);
		HTMLFieldSetElement();
	};

	class HTMLFontElement: public HTMLElement , public DOML2DeprecatedColorProperty , public DOML2DeprecatedSizeProperty {
	public:
		String* get_face();
		void set_face(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLFontElement* get_prototype();
		void set_prototype(HTMLFontElement*);
		HTMLFontElement();
	};

	class HTMLFormControlsCollection: public HTMLCollectionBase {
	public:
		HTMLCollection* namedItem(const String& name);
		HTMLFormControlsCollection* get_prototype();
		void set_prototype(HTMLFormControlsCollection*);
		HTMLFormControlsCollection();
	};

	class HTMLFormElement: public HTMLElement {
	public:
		String* get_acceptCharset();
		void set_acceptCharset(const String&);
		String* get_action();
		void set_action(const String&);
		String* get_autocomplete();
		void set_autocomplete(const String&);
		HTMLFormControlsCollection* get_elements();
		String* get_encoding();
		void set_encoding(const String&);
		String* get_enctype();
		void set_enctype(const String&);
		double get_length();
		String* get_method();
		void set_method(const String&);
		String* get_name();
		void set_name(const String&);
		bool get_noValidate();
		void set_noValidate(bool);
		String* get_target();
		void set_target(const String&);
		bool checkValidity();
		template<class ReturnType = Object*> ReturnType item();
		template<class ReturnType = Object*> ReturnType item(Object* name);
		template<class ReturnType = Object*> ReturnType item(Object* name, Object* index);
		template<class ReturnType = Object*> ReturnType namedItem(const String& name);
		bool reportValidity();
		void reset();
		void submit();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		Object*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
		Object* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
		HTMLFormElement* get_prototype();
		void set_prototype(HTMLFormElement*);
		HTMLFormElement();
	};

	class HTMLFrameElementEventMap: public HTMLElementEventMap {
	public:
		Event* get_load();
		void set_load(Event*);
	};

	class HTMLFrameElement: public HTMLElement , public GetSVGDocument {
	public:
		String* get_border();
		void set_border(const String&);
		template<class ReturnType = Object*> ReturnType get_borderColor();
		void set_borderColor(Object*);
		Document* get_contentDocument();
		Window* get_contentWindow();
		String* get_frameBorder();
		void set_frameBorder(const String&);
		template<class ReturnType = Object*> ReturnType get_frameSpacing();
		void set_frameSpacing(Object*);
		String* get_height();
		void set_height(const String&);
		String* get_longDesc();
		void set_longDesc(const String&);
		String* get_marginHeight();
		void set_marginHeight(const String&);
		String* get_marginWidth();
		void set_marginWidth(const String&);
		String* get_name();
		void set_name(const String&);
		bool get_noResize();
		void set_noResize(bool);
		String* get_scrolling();
		void set_scrolling(const String&);
		String* get_src();
		void set_src(const String&);
		String* get_width();
		void set_width(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLFrameElement* get_prototype();
		void set_prototype(HTMLFrameElement*);
		HTMLFrameElement();
	};

	class HTMLFrameSetElementEventMap: public HTMLElementEventMap , public WindowEventHandlersEventMap {
	public:
		FocusEvent* get_blur();
		void set_blur(FocusEvent*);
		ErrorEvent* get_error();
		void set_error(ErrorEvent*);
		FocusEvent* get_focus();
		void set_focus(FocusEvent*);
		Event* get_load();
		void set_load(Event*);
		Event* get_orientationchange();
		void set_orientationchange(Event*);
		UIEvent* get_resize();
		void set_resize(UIEvent*);
		UIEvent* get_scroll();
		void set_scroll(UIEvent*);
	};

	class HTMLFrameSetElement: public HTMLElement , public WindowEventHandlers {
	public:
		String* get_cols();
		void set_cols(const String&);
		String* get_name();
		void set_name(const String&);
		EventListener* get_onorientationchange();
		void set_onorientationchange(EventListener*);
		EventListener* get_onresize();
		void set_onresize(EventListener*);
		String* get_rows();
		void set_rows(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLFrameSetElement* get_prototype();
		void set_prototype(HTMLFrameSetElement*);
		HTMLFrameSetElement();
	};

	class HTMLHRElement: public HTMLElement , public DOML2DeprecatedColorProperty , public DOML2DeprecatedSizeProperty {
	public:
		String* get_align();
		void set_align(const String&);
		bool get_noShade();
		void set_noShade(bool);
		String* get_width();
		void set_width(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLHRElement* get_prototype();
		void set_prototype(HTMLHRElement*);
		HTMLHRElement();
	};

	class HTMLHeadElement: public HTMLElement {
	public:
		String* get_profile();
		void set_profile(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLHeadElement* get_prototype();
		void set_prototype(HTMLHeadElement*);
		HTMLHeadElement();
	};

	class HTMLHeadingElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLHeadingElement* get_prototype();
		void set_prototype(HTMLHeadingElement*);
		HTMLHeadingElement();
	};

	class HTMLHtmlElement: public HTMLElement {
	public:
		String* get_version();
		void set_version(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLHtmlElement* get_prototype();
		void set_prototype(HTMLHtmlElement*);
		HTMLHtmlElement();
	};

	class HTMLIFrameElementEventMap: public HTMLElementEventMap {
	public:
		Event* get_load();
		void set_load(Event*);
	};

	class HTMLIFrameElement: public HTMLElement , public GetSVGDocument {
	public:
		String* get_align();
		void set_align(const String&);
		bool get_allowFullscreen();
		void set_allowFullscreen(bool);
		bool get_allowPaymentRequest();
		void set_allowPaymentRequest(bool);
		Document* get_contentDocument();
		Window* get_contentWindow();
		String* get_frameBorder();
		void set_frameBorder(const String&);
		String* get_height();
		void set_height(const String&);
		String* get_longDesc();
		void set_longDesc(const String&);
		String* get_marginHeight();
		void set_marginHeight(const String&);
		String* get_marginWidth();
		void set_marginWidth(const String&);
		String* get_name();
		void set_name(const String&);
		DOMTokenList* get_sandbox();
		String* get_scrolling();
		void set_scrolling(const String&);
		String* get_src();
		void set_src(const String&);
		String* get_srcdoc();
		void set_srcdoc(const String&);
		String* get_width();
		void set_width(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLIFrameElement* get_prototype();
		void set_prototype(HTMLIFrameElement*);
		HTMLIFrameElement();
	};

	class HTMLImageElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		String* get_alt();
		void set_alt(const String&);
		String* get_border();
		void set_border(const String&);
		bool get_complete();
		String* get_crossOrigin();
		void set_crossOrigin(const String&);
		String* get_currentSrc();
		String* get_decoding();
		void set_decoding(const String&);
		double get_height();
		void set_height(double);
		double get_hspace();
		void set_hspace(double);
		bool get_isMap();
		void set_isMap(bool);
		String* get_longDesc();
		void set_longDesc(const String&);
		String* get_lowsrc();
		void set_lowsrc(const String&);
		bool get_msPlayToDisabled();
		void set_msPlayToDisabled(bool);
		String* get_msPlayToPreferredSourceUri();
		void set_msPlayToPreferredSourceUri(const String&);
		bool get_msPlayToPrimary();
		void set_msPlayToPrimary(bool);
		template<class ReturnType = Object*> ReturnType get_msPlayToSource();
		String* get_name();
		void set_name(const String&);
		double get_naturalHeight();
		double get_naturalWidth();
		String* get_sizes();
		void set_sizes(const String&);
		String* get_src();
		void set_src(const String&);
		String* get_srcset();
		void set_srcset(const String&);
		String* get_useMap();
		void set_useMap(const String&);
		double get_vspace();
		void set_vspace(double);
		double get_width();
		void set_width(double);
		double get_x();
		double get_y();
		template<class ReturnType = Object*> ReturnType msGetAsCastingSource();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLImageElement* get_prototype();
		void set_prototype(HTMLImageElement*);
		HTMLImageElement();
	};

	class HTMLInputElement: public HTMLElement {
	public:
		String* get_accept();
		void set_accept(const String&);
		String* get_align();
		void set_align(const String&);
		String* get_alt();
		void set_alt(const String&);
		String* get_autocomplete();
		void set_autocomplete(const String&);
		bool get_autofocus();
		void set_autofocus(bool);
		bool get_checked();
		void set_checked(bool);
		bool get_defaultChecked();
		void set_defaultChecked(bool);
		String* get_defaultValue();
		void set_defaultValue(const String&);
		bool get_disabled();
		void set_disabled(bool);
		FileList* get_files();
		void set_files(FileList*);
		HTMLFormElement* get_form();
		String* get_formAction();
		void set_formAction(const String&);
		String* get_formEnctype();
		void set_formEnctype(const String&);
		String* get_formMethod();
		void set_formMethod(const String&);
		bool get_formNoValidate();
		void set_formNoValidate(bool);
		String* get_formTarget();
		void set_formTarget(const String&);
		double get_height();
		void set_height(double);
		bool get_indeterminate();
		void set_indeterminate(bool);
		HTMLElement* get_list();
		String* get_max();
		void set_max(const String&);
		double get_maxLength();
		void set_maxLength(double);
		String* get_min();
		void set_min(const String&);
		double get_minLength();
		void set_minLength(double);
		bool get_multiple();
		void set_multiple(bool);
		String* get_name();
		void set_name(const String&);
		String* get_pattern();
		void set_pattern(const String&);
		String* get_placeholder();
		void set_placeholder(const String&);
		bool get_readOnly();
		void set_readOnly(bool);
		bool get_required();
		void set_required(bool);
		String* get_selectionDirection();
		void set_selectionDirection(const String&);
		double get_selectionEnd();
		void set_selectionEnd(double);
		double get_selectionStart();
		void set_selectionStart(double);
		double get_size();
		void set_size(double);
		String* get_src();
		void set_src(const String&);
		String* get_step();
		void set_step(const String&);
		String* get_type();
		void set_type(const String&);
		String* get_useMap();
		void set_useMap(const String&);
		String* get_validationMessage();
		ValidityState* get_validity();
		String* get_value();
		void set_value(const String&);
		template<class ReturnType = Object*> ReturnType get_valueAsDate();
		void set_valueAsDate(Object*);
		double get_valueAsNumber();
		void set_valueAsNumber(double);
		bool get_webkitdirectory();
		void set_webkitdirectory(bool);
		double get_width();
		void set_width(double);
		bool get_willValidate();
		bool checkValidity();
		void select();
		void setCustomValidity(const String& error);
		void setSelectionRange(double start, double end);
		void stepDown();
		void stepDown(double n);
		void stepUp();
		void stepUp(double n);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLInputElement* get_prototype();
		void set_prototype(HTMLInputElement*);
		HTMLInputElement();
	};

	class HTMLLIElement: public HTMLElement {
	public:
		String* get_type();
		void set_type(const String&);
		double get_value();
		void set_value(double);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLLIElement* get_prototype();
		void set_prototype(HTMLLIElement*);
		HTMLLIElement();
	};

	class HTMLLabelElement: public HTMLElement {
	public:
		HTMLInputElement* get_control();
		HTMLFormElement* get_form();
		String* get_htmlFor();
		void set_htmlFor(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLLabelElement* get_prototype();
		void set_prototype(HTMLLabelElement*);
		HTMLLabelElement();
	};

	class HTMLLegendElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		HTMLFormElement* get_form();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLLegendElement* get_prototype();
		void set_prototype(HTMLLegendElement*);
		HTMLLegendElement();
	};

	class [[cheerp::client_layout]] LinkStyle{
	public:
		StyleSheet* get_sheet();
	};

	class HTMLLinkElement: public HTMLElement , public LinkStyle {
	public:
		String* get_charset();
		void set_charset(const String&);
		String* get_crossOrigin();
		void set_crossOrigin(const String&);
		bool get_disabled();
		void set_disabled(bool);
		String* get_href();
		void set_href(const String&);
		String* get_hreflang();
		void set_hreflang(const String&);
		Document* get_import();
		void set_import(Document*);
		String* get_integrity();
		void set_integrity(const String&);
		String* get_media();
		void set_media(const String&);
		String* get_rel();
		void set_rel(const String&);
		String* get_rev();
		void set_rev(const String&);
		String* get_target();
		void set_target(const String&);
		String* get_type();
		void set_type(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLLinkElement* get_prototype();
		void set_prototype(HTMLLinkElement*);
		HTMLLinkElement();
	};

	class HTMLMainElement: public HTMLElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLMainElement* get_prototype();
		void set_prototype(HTMLMainElement*);
		HTMLMainElement();
	};

	class HTMLMapElement: public HTMLElement {
	public:
		HTMLAreasCollection* get_areas();
		String* get_name();
		void set_name(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLMapElement* get_prototype();
		void set_prototype(HTMLMapElement*);
		HTMLMapElement();
	};

	class HTMLMarqueeElementEventMap: public HTMLElementEventMap {
	public:
		Event* get_bounce();
		void set_bounce(Event*);
		Event* get_finish();
		void set_finish(Event*);
		Event* get_start();
		void set_start(Event*);
	};

	class HTMLMarqueeElement: public HTMLElement {
	public:
		String* get_behavior();
		void set_behavior(const String&);
		String* get_bgColor();
		void set_bgColor(const String&);
		String* get_direction();
		void set_direction(const String&);
		String* get_height();
		void set_height(const String&);
		double get_hspace();
		void set_hspace(double);
		double get_loop();
		void set_loop(double);
		EventListener* get_onbounce();
		void set_onbounce(EventListener*);
		EventListener* get_onfinish();
		void set_onfinish(EventListener*);
		EventListener* get_onstart();
		void set_onstart(EventListener*);
		double get_scrollAmount();
		void set_scrollAmount(double);
		double get_scrollDelay();
		void set_scrollDelay(double);
		bool get_trueSpeed();
		void set_trueSpeed(bool);
		double get_vspace();
		void set_vspace(double);
		String* get_width();
		void set_width(const String&);
		void start();
		void stop();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLMarqueeElement* get_prototype();
		void set_prototype(HTMLMarqueeElement*);
		HTMLMarqueeElement();
	};

	class HTMLMediaElementEventMap: public HTMLElementEventMap {
	public:
		MediaEncryptedEvent* get_encrypted();
		void set_encrypted(MediaEncryptedEvent*);
		Event* get_msneedkey();
		void set_msneedkey(Event*);
	};

	class HTMLMenuElement: public HTMLElement {
	public:
		bool get_compact();
		void set_compact(bool);
		String* get_type();
		void set_type(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLMenuElement* get_prototype();
		void set_prototype(HTMLMenuElement*);
		HTMLMenuElement();
	};

	class HTMLMetaElement: public HTMLElement {
	public:
		String* get_charset();
		void set_charset(const String&);
		String* get_content();
		void set_content(const String&);
		String* get_httpEquiv();
		void set_httpEquiv(const String&);
		String* get_name();
		void set_name(const String&);
		String* get_scheme();
		void set_scheme(const String&);
		String* get_url();
		void set_url(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLMetaElement* get_prototype();
		void set_prototype(HTMLMetaElement*);
		HTMLMetaElement();
	};

	class HTMLMeterElement: public HTMLElement {
	public:
		double get_high();
		void set_high(double);
		double get_low();
		void set_low(double);
		double get_max();
		void set_max(double);
		double get_min();
		void set_min(double);
		double get_optimum();
		void set_optimum(double);
		double get_value();
		void set_value(double);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLMeterElement* get_prototype();
		void set_prototype(HTMLMeterElement*);
		HTMLMeterElement();
	};

	class HTMLModElement: public HTMLElement {
	public:
		String* get_cite();
		void set_cite(const String&);
		String* get_dateTime();
		void set_dateTime(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLModElement* get_prototype();
		void set_prototype(HTMLModElement*);
		HTMLModElement();
	};

	class HTMLOListElement: public HTMLElement {
	public:
		bool get_compact();
		void set_compact(bool);
		double get_start();
		void set_start(double);
		String* get_type();
		void set_type(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLOListElement* get_prototype();
		void set_prototype(HTMLOListElement*);
		HTMLOListElement();
	};

	class HTMLObjectElement: public HTMLElement , public GetSVGDocument {
	public:
		String* get_BaseHref();
		String* get_align();
		void set_align(const String&);
		String* get_archive();
		void set_archive(const String&);
		String* get_border();
		void set_border(const String&);
		String* get_code();
		void set_code(const String&);
		String* get_codeBase();
		void set_codeBase(const String&);
		String* get_codeType();
		void set_codeType(const String&);
		Document* get_contentDocument();
		String* get_data();
		void set_data(const String&);
		bool get_declare();
		void set_declare(bool);
		HTMLFormElement* get_form();
		String* get_height();
		void set_height(const String&);
		double get_hspace();
		void set_hspace(double);
		bool get_msPlayToDisabled();
		void set_msPlayToDisabled(bool);
		String* get_msPlayToPreferredSourceUri();
		void set_msPlayToPreferredSourceUri(const String&);
		bool get_msPlayToPrimary();
		void set_msPlayToPrimary(bool);
		template<class ReturnType = Object*> ReturnType get_msPlayToSource();
		String* get_name();
		void set_name(const String&);
		double get_readyState();
		String* get_standby();
		void set_standby(const String&);
		String* get_type();
		void set_type(const String&);
		bool get_typemustmatch();
		void set_typemustmatch(bool);
		String* get_useMap();
		void set_useMap(const String&);
		String* get_validationMessage();
		ValidityState* get_validity();
		double get_vspace();
		void set_vspace(double);
		String* get_width();
		void set_width(const String&);
		bool get_willValidate();
		bool checkValidity();
		void setCustomValidity(const String& error);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLObjectElement* get_prototype();
		void set_prototype(HTMLObjectElement*);
		HTMLObjectElement();
	};

	class HTMLOptGroupElement: public HTMLElement {
	public:
		bool get_disabled();
		void set_disabled(bool);
		HTMLFormElement* get_form();
		String* get_label();
		void set_label(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLOptGroupElement* get_prototype();
		void set_prototype(HTMLOptGroupElement*);
		HTMLOptGroupElement();
	};

	class HTMLOptionElement: public HTMLElement {
	public:
		bool get_defaultSelected();
		void set_defaultSelected(bool);
		bool get_disabled();
		void set_disabled(bool);
		HTMLFormElement* get_form();
		double get_index();
		String* get_label();
		void set_label(const String&);
		bool get_selected();
		void set_selected(bool);
		String* get_text();
		void set_text(const String&);
		String* get_value();
		void set_value(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLOptionElement* get_prototype();
		void set_prototype(HTMLOptionElement*);
		HTMLOptionElement();
	};

	class HTMLOptionsCollection: public HTMLCollectionOf<HTMLOptionElement> {
	public:
		double get_length();
		void set_length(double);
		double get_selectedIndex();
		void set_selectedIndex(double);
		void add(HTMLOptionElement* element);
		void add(HTMLOptionElement* element, HTMLElement* before);
		void add(HTMLOptionElement* element, double before);
		void remove(double index);
		HTMLOptionsCollection* get_prototype();
		void set_prototype(HTMLOptionsCollection*);
		HTMLOptionsCollection();
	};

	class HTMLOutputElement: public HTMLElement {
	public:
		String* get_defaultValue();
		void set_defaultValue(const String&);
		HTMLFormElement* get_form();
		DOMTokenList* get_htmlFor();
		String* get_name();
		void set_name(const String&);
		String* get_type();
		String* get_validationMessage();
		ValidityState* get_validity();
		String* get_value();
		void set_value(const String&);
		bool get_willValidate();
		bool checkValidity();
		bool reportValidity();
		void setCustomValidity(const String& error);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLOutputElement* get_prototype();
		void set_prototype(HTMLOutputElement*);
		HTMLOutputElement();
	};

	class HTMLParagraphElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		String* get_clear();
		void set_clear(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLParagraphElement* get_prototype();
		void set_prototype(HTMLParagraphElement*);
		HTMLParagraphElement();
	};

	class HTMLParamElement: public HTMLElement {
	public:
		String* get_name();
		void set_name(const String&);
		String* get_type();
		void set_type(const String&);
		String* get_value();
		void set_value(const String&);
		String* get_valueType();
		void set_valueType(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLParamElement* get_prototype();
		void set_prototype(HTMLParamElement*);
		HTMLParamElement();
	};

	class HTMLPictureElement: public HTMLElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLPictureElement* get_prototype();
		void set_prototype(HTMLPictureElement*);
		HTMLPictureElement();
	};

	class HTMLPreElement: public HTMLElement {
	public:
		double get_width();
		void set_width(double);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLPreElement* get_prototype();
		void set_prototype(HTMLPreElement*);
		HTMLPreElement();
	};

	class HTMLProgressElement: public HTMLElement {
	public:
		HTMLFormElement* get_form();
		double get_max();
		void set_max(double);
		double get_position();
		double get_value();
		void set_value(double);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLProgressElement* get_prototype();
		void set_prototype(HTMLProgressElement*);
		HTMLProgressElement();
	};

	class HTMLQuoteElement: public HTMLElement {
	public:
		String* get_cite();
		void set_cite(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLQuoteElement* get_prototype();
		void set_prototype(HTMLQuoteElement*);
		HTMLQuoteElement();
	};

	class HTMLScriptElement: public HTMLElement {
	public:
		bool get_async();
		void set_async(bool);
		String* get_charset();
		void set_charset(const String&);
		String* get_crossOrigin();
		void set_crossOrigin(const String&);
		bool get_defer();
		void set_defer(bool);
		String* get_event();
		void set_event(const String&);
		String* get_htmlFor();
		void set_htmlFor(const String&);
		String* get_integrity();
		void set_integrity(const String&);
		bool get_noModule();
		void set_noModule(bool);
		String* get_src();
		void set_src(const String&);
		String* get_text();
		void set_text(const String&);
		String* get_type();
		void set_type(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLScriptElement* get_prototype();
		void set_prototype(HTMLScriptElement*);
		HTMLScriptElement();
	};

	class HTMLSelectElement: public HTMLElement {
	public:
		bool get_autofocus();
		void set_autofocus(bool);
		bool get_disabled();
		void set_disabled(bool);
		HTMLFormElement* get_form();
		double get_length();
		void set_length(double);
		bool get_multiple();
		void set_multiple(bool);
		String* get_name();
		void set_name(const String&);
		HTMLOptionsCollection* get_options();
		bool get_required();
		void set_required(bool);
		double get_selectedIndex();
		void set_selectedIndex(double);
		HTMLCollectionOf<HTMLOptionElement>* get_selectedOptions();
		double get_size();
		void set_size(double);
		String* get_type();
		String* get_validationMessage();
		ValidityState* get_validity();
		String* get_value();
		void set_value(const String&);
		bool get_willValidate();
		void add(HTMLOptionElement* element);
		void add(HTMLOptionElement* element, HTMLElement* before);
		void add(HTMLOptionElement* element, double before);
		bool checkValidity();
		Element* item();
		Element* item(Object* name);
		Element* item(Object* name, Object* index);
		template<class ReturnType = Object*> ReturnType namedItem(const String& name);
		void remove();
		void remove(double index);
		void setCustomValidity(const String& error);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		Object*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
		Object* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
		HTMLSelectElement* get_prototype();
		void set_prototype(HTMLSelectElement*);
		HTMLSelectElement();
	};

	class HTMLSlotElement: public HTMLElement {
	public:
		String* get_name();
		void set_name(const String&);
		Array* assignedNodes();
		Array* assignedNodes(AssignedNodesOptions* options);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
	};

	class HTMLSourceElement: public HTMLElement {
	public:
		String* get_media();
		void set_media(const String&);
		String* get_msKeySystem();
		void set_msKeySystem(const String&);
		String* get_sizes();
		void set_sizes(const String&);
		String* get_src();
		void set_src(const String&);
		String* get_srcset();
		void set_srcset(const String&);
		String* get_type();
		void set_type(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLSourceElement* get_prototype();
		void set_prototype(HTMLSourceElement*);
		HTMLSourceElement();
	};

	class HTMLSpanElement: public HTMLElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLSpanElement* get_prototype();
		void set_prototype(HTMLSpanElement*);
		HTMLSpanElement();
	};

	class HTMLStyleElement: public HTMLElement , public LinkStyle {
	public:
		bool get_disabled();
		void set_disabled(bool);
		String* get_media();
		void set_media(const String&);
		String* get_type();
		void set_type(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLStyleElement* get_prototype();
		void set_prototype(HTMLStyleElement*);
		HTMLStyleElement();
	};

	class HTMLSummaryElement: public HTMLElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLSummaryElement* get_prototype();
		void set_prototype(HTMLSummaryElement*);
		HTMLSummaryElement();
	};

	class HTMLTableCaptionElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTableCaptionElement* get_prototype();
		void set_prototype(HTMLTableCaptionElement*);
		HTMLTableCaptionElement();
	};

	class HTMLTableCellElement: public HTMLElement {
	public:
		String* get_abbr();
		void set_abbr(const String&);
		String* get_align();
		void set_align(const String&);
		String* get_axis();
		void set_axis(const String&);
		String* get_bgColor();
		void set_bgColor(const String&);
		double get_cellIndex();
		String* get_ch();
		void set_ch(const String&);
		String* get_chOff();
		void set_chOff(const String&);
		double get_colSpan();
		void set_colSpan(double);
		String* get_headers();
		void set_headers(const String&);
		String* get_height();
		void set_height(const String&);
		bool get_noWrap();
		void set_noWrap(bool);
		double get_rowSpan();
		void set_rowSpan(double);
		String* get_scope();
		void set_scope(const String&);
		String* get_vAlign();
		void set_vAlign(const String&);
		String* get_width();
		void set_width(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTableCellElement* get_prototype();
		void set_prototype(HTMLTableCellElement*);
		HTMLTableCellElement();
	};

	class HTMLTableColElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		String* get_ch();
		void set_ch(const String&);
		String* get_chOff();
		void set_chOff(const String&);
		double get_span();
		void set_span(double);
		String* get_vAlign();
		void set_vAlign(const String&);
		String* get_width();
		void set_width(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTableColElement* get_prototype();
		void set_prototype(HTMLTableColElement*);
		HTMLTableColElement();
	};

	class HTMLTableDataCellElement: public HTMLTableCellElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTableDataCellElement* get_prototype();
		void set_prototype(HTMLTableDataCellElement*);
		HTMLTableDataCellElement();
	};

	class HTMLTableElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		String* get_bgColor();
		void set_bgColor(const String&);
		String* get_border();
		void set_border(const String&);
		HTMLTableCaptionElement* get_caption();
		void set_caption(HTMLTableCaptionElement*);
		String* get_cellPadding();
		void set_cellPadding(const String&);
		String* get_cellSpacing();
		void set_cellSpacing(const String&);
		String* get_frame();
		void set_frame(const String&);
		HTMLCollectionOf<HTMLTableRowElement>* get_rows();
		String* get_rules();
		void set_rules(const String&);
		String* get_summary();
		void set_summary(const String&);
		HTMLCollectionOf<HTMLTableSectionElement>* get_tBodies();
		HTMLTableSectionElement* get_tFoot();
		void set_tFoot(HTMLTableSectionElement*);
		HTMLTableSectionElement* get_tHead();
		void set_tHead(HTMLTableSectionElement*);
		String* get_width();
		void set_width(const String&);
		HTMLTableCaptionElement* createCaption();
		HTMLTableSectionElement* createTBody();
		HTMLTableSectionElement* createTFoot();
		HTMLTableSectionElement* createTHead();
		void deleteCaption();
		void deleteRow();
		void deleteRow(double index);
		void deleteTFoot();
		void deleteTHead();
		HTMLTableRowElement* insertRow();
		HTMLTableRowElement* insertRow(double index);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTableElement* get_prototype();
		void set_prototype(HTMLTableElement*);
		HTMLTableElement();
	};

	class HTMLTableHeaderCellElement: public HTMLTableCellElement {
	public:
		String* get_scope();
		void set_scope(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTableHeaderCellElement* get_prototype();
		void set_prototype(HTMLTableHeaderCellElement*);
		HTMLTableHeaderCellElement();
	};

	class HTMLTableRowElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		String* get_bgColor();
		void set_bgColor(const String&);
		HTMLCollectionOf<Object>* get_cells();
		String* get_ch();
		void set_ch(const String&);
		String* get_chOff();
		void set_chOff(const String&);
		double get_rowIndex();
		double get_sectionRowIndex();
		String* get_vAlign();
		void set_vAlign(const String&);
		void deleteCell();
		void deleteCell(double index);
		HTMLTableDataCellElement* insertCell();
		HTMLTableDataCellElement* insertCell(double index);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTableRowElement* get_prototype();
		void set_prototype(HTMLTableRowElement*);
		HTMLTableRowElement();
	};

	class HTMLTableSectionElement: public HTMLElement {
	public:
		String* get_align();
		void set_align(const String&);
		String* get_ch();
		void set_ch(const String&);
		String* get_chOff();
		void set_chOff(const String&);
		HTMLCollectionOf<HTMLTableRowElement>* get_rows();
		String* get_vAlign();
		void set_vAlign(const String&);
		void deleteRow();
		void deleteRow(double index);
		HTMLTableRowElement* insertRow();
		HTMLTableRowElement* insertRow(double index);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTableSectionElement* get_prototype();
		void set_prototype(HTMLTableSectionElement*);
		HTMLTableSectionElement();
	};

	class HTMLTemplateElement: public HTMLElement {
	public:
		DocumentFragment* get_content();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTemplateElement* get_prototype();
		void set_prototype(HTMLTemplateElement*);
		HTMLTemplateElement();
	};

	class HTMLTextAreaElement: public HTMLElement {
	public:
		bool get_autofocus();
		void set_autofocus(bool);
		double get_cols();
		void set_cols(double);
		String* get_defaultValue();
		void set_defaultValue(const String&);
		bool get_disabled();
		void set_disabled(bool);
		HTMLFormElement* get_form();
		double get_maxLength();
		void set_maxLength(double);
		double get_minLength();
		void set_minLength(double);
		String* get_name();
		void set_name(const String&);
		String* get_placeholder();
		void set_placeholder(const String&);
		bool get_readOnly();
		void set_readOnly(bool);
		bool get_required();
		void set_required(bool);
		double get_rows();
		void set_rows(double);
		double get_selectionEnd();
		void set_selectionEnd(double);
		double get_selectionStart();
		void set_selectionStart(double);
		String* get_type();
		String* get_validationMessage();
		ValidityState* get_validity();
		String* get_value();
		void set_value(const String&);
		bool get_willValidate();
		String* get_wrap();
		void set_wrap(const String&);
		bool checkValidity();
		void select();
		void setCustomValidity(const String& error);
		void setSelectionRange(double start, double end);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTextAreaElement* get_prototype();
		void set_prototype(HTMLTextAreaElement*);
		HTMLTextAreaElement();
	};

	class HTMLTimeElement: public HTMLElement {
	public:
		String* get_dateTime();
		void set_dateTime(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTimeElement* get_prototype();
		void set_prototype(HTMLTimeElement*);
		HTMLTimeElement();
	};

	class HTMLTitleElement: public HTMLElement {
	public:
		String* get_text();
		void set_text(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTitleElement* get_prototype();
		void set_prototype(HTMLTitleElement*);
		HTMLTitleElement();
	};

	class HTMLTrackElement: public HTMLElement {
	public:
		bool get_default();
		void set_default(bool);
		String* get_kind();
		void set_kind(const String&);
		String* get_label();
		void set_label(const String&);
		double get_readyState();
		String* get_src();
		void set_src(const String&);
		String* get_srclang();
		void set_srclang(const String&);
		TextTrack* get_track();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLTrackElement* get_prototype();
		void set_prototype(HTMLTrackElement*);
		HTMLTrackElement();
		double get_ERROR();
		double get_LOADED();
		double get_LOADING();
		double get_NONE();
	};

	class HTMLUListElement: public HTMLElement {
	public:
		bool get_compact();
		void set_compact(bool);
		String* get_type();
		void set_type(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLUListElement* get_prototype();
		void set_prototype(HTMLUListElement*);
		HTMLUListElement();
	};

	class HTMLUnknownElement: public HTMLElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLUnknownElement* get_prototype();
		void set_prototype(HTMLUnknownElement*);
		HTMLUnknownElement();
	};

	class HTMLVideoElementEventMap: public HTMLMediaElementEventMap {
	public:
		Event* get_MSVideoFormatChanged();
		void set_MSVideoFormatChanged(Event*);
		Event* get_MSVideoFrameStepCompleted();
		void set_MSVideoFrameStepCompleted(Event*);
		Event* get_MSVideoOptimalLayoutChanged();
		void set_MSVideoOptimalLayoutChanged(Event*);
	};

	class HTMLVideoElement: public HTMLMediaElement {
	public:
		double get_height();
		void set_height(double);
		bool get_msHorizontalMirror();
		void set_msHorizontalMirror(bool);
		bool get_msIsLayoutOptimalForPlayback();
		bool get_msIsStereo3D();
		String* get_msStereo3DPackingMode();
		void set_msStereo3DPackingMode(const String&);
		String* get_msStereo3DRenderMode();
		void set_msStereo3DRenderMode(const String&);
		bool get_msZoom();
		void set_msZoom(bool);
		EventListener* get_onMSVideoFormatChanged();
		void set_onMSVideoFormatChanged(EventListener*);
		EventListener* get_onMSVideoFrameStepCompleted();
		void set_onMSVideoFrameStepCompleted(EventListener*);
		EventListener* get_onMSVideoOptimalLayoutChanged();
		void set_onMSVideoOptimalLayoutChanged(EventListener*);
		String* get_poster();
		void set_poster(const String&);
		double get_videoHeight();
		double get_videoWidth();
		bool get_webkitDisplayingFullscreen();
		bool get_webkitSupportsFullscreen();
		double get_width();
		void set_width(double);
		VideoPlaybackQuality* getVideoPlaybackQuality();
		void msFrameStep(bool forward);
		void msInsertVideoEffect(const String& activatableClassId, bool effectRequired);
		void msInsertVideoEffect(const String& activatableClassId, bool effectRequired, Object* config);
		void msSetVideoRectangle(double left, double top, double right, double bottom);
		void webkitEnterFullScreen();
		void webkitEnterFullscreen();
		void webkitExitFullScreen();
		void webkitExitFullscreen();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		HTMLVideoElement* get_prototype();
		void set_prototype(HTMLVideoElement*);
		HTMLVideoElement();
	};

	class HTMLegendElement: public Object{
	public:
		HTMLFormElement* get_form();
		HTMLegendElement* get_prototype();
		void set_prototype(HTMLegendElement*);
		HTMLegendElement();
	};

	class HashChangeEvent: public Event {
	public:
		String* get_newURL();
		String* get_oldURL();
		HashChangeEvent* get_prototype();
		void set_prototype(HashChangeEvent*);
		HashChangeEvent(const String& type);
		HashChangeEvent(const String& type, HashChangeEventInit* eventInitDict);
	};

	class Headers: public Object{
	public:
		void append(const String& name, const String& value);
		void _delete(const String& name);
		void forEach(Function* callback);
		void forEach(Function* callback, Object* thisArg);
		String* get(const String& name);
		bool has(const String& name);
		void set(const String& name, const String& value);
		Headers* get_prototype();
		void set_prototype(Headers*);
		Headers();
		Headers(Headers* init);
		Headers(Array* init);
	};

	class History: public Object{
	public:
		double get_length();
		String* get_scrollRestoration();
		void set_scrollRestoration(const String&);
		template<class ReturnType = Object*> ReturnType get_state();
		void back();
		void back(Object* distance);
		void forward();
		void forward(Object* distance);
		void go();
		void go(Object* delta);
		void pushState(Object* data);
		void pushState(Object* data, const String& title);
		void pushState(Object* data, const String& title, const String& url);
		void replaceState(Object* data);
		void replaceState(Object* data, const String& title);
		void replaceState(Object* data, const String& title, const String& url);
		History* get_prototype();
		void set_prototype(History*);
		History();
	};

	class HkdfCtrParams: public Algorithm {
	public:
		Int8Array* get_context();
		void set_context(Int8Array*);
		String* get_hash();
		void set_hash(const String&);
		Int8Array* get_label();
		void set_label(Int8Array*);
	};

	class IDBArrayKey: public Array {
	public:
	};

	class IDBCursor: public Object{
	public:
		String* get_direction();
		IDBKeyRange* get_key();
		template<class ReturnType = Object*> ReturnType get_primaryKey();
		IDBObjectStore* get_source();
		void advance(double count);
		void _continue();
		void _continue(IDBKeyRange* key);
		void _continue(double key);
		void _continue(const String& key);
		void _continue(Date* key);
		void _continue(IDBArrayKey* key);
		IDBRequest* _delete();
		IDBRequest* update(Object* value);
		IDBCursor* get_prototype();
		void set_prototype(IDBCursor*);
		IDBCursor();
		String* get_NEXT();
		String* get_NEXT_NO_DUPLICATE();
		String* get_PREV();
		String* get_PREV_NO_DUPLICATE();
	};

	class IDBCursorWithValue: public IDBCursor {
	public:
		template<class ReturnType = Object*> ReturnType get_value();
		IDBCursorWithValue* get_prototype();
		void set_prototype(IDBCursorWithValue*);
		IDBCursorWithValue();
	};

	class IDBDatabaseEventMap: public Object{
	public:
		Event* get_abort();
		void set_abort(Event*);
		Event* get_error();
		void set_error(Event*);
	};

	class IDBDatabase: public EventTarget {
	public:
		String* get_name();
		DOMStringList* get_objectStoreNames();
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onversionchange();
		void set_onversionchange(EventListener*);
		double get_version();
		void close();
		IDBObjectStore* createObjectStore(const String& name);
		IDBObjectStore* createObjectStore(const String& name, IDBObjectStoreParameters* optionalParameters);
		void deleteObjectStore(const String& name);
		IDBTransaction* transaction(const String& storeNames);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		IDBDatabase* get_prototype();
		void set_prototype(IDBDatabase*);
		IDBDatabase();
	};

	class [[cheerp::client_layout]] IDBEnvironment{
	public:
		IDBFactory* get_indexedDB();
	};

	class IDBFactory: public Object{
	public:
		double cmp(Object* first, Object* second);
		IDBOpenDBRequest* deleteDatabase(const String& name);
		IDBOpenDBRequest* open(const String& name);
		IDBOpenDBRequest* open(const String& name, double version);
		IDBFactory* get_prototype();
		void set_prototype(IDBFactory*);
		IDBFactory();
	};

	class IDBIndex: public Object{
	public:
		String* get_keyPath();
		bool get_multiEntry();
		void set_multiEntry(bool);
		String* get_name();
		IDBObjectStore* get_objectStore();
		bool get_unique();
		IDBRequest* count();
		IDBRequest* count(IDBKeyRange* key);
		IDBRequest* count(double key);
		IDBRequest* count(const String& key);
		IDBRequest* count(Date* key);
		IDBRequest* count(IDBArrayKey* key);
		IDBRequest* get(IDBKeyRange* key);
		IDBRequest* get(double key);
		IDBRequest* get(const String& key);
		IDBRequest* get(Date* key);
		IDBRequest* get(IDBArrayKey* key);
		IDBRequest* getKey(IDBKeyRange* key);
		IDBRequest* getKey(double key);
		IDBRequest* getKey(const String& key);
		IDBRequest* getKey(Date* key);
		IDBRequest* getKey(IDBArrayKey* key);
		IDBRequest* openCursor();
		IDBRequest* openCursor(IDBKeyRange* range);
		IDBRequest* openKeyCursor();
		IDBRequest* openKeyCursor(IDBKeyRange* range);
		IDBIndex* get_prototype();
		void set_prototype(IDBIndex*);
		IDBIndex();
	};

	class IDBKeyRange: public Object{
	public:
		template<class ReturnType = Object*> ReturnType get_lower();
		bool get_lowerOpen();
		template<class ReturnType = Object*> ReturnType get_upper();
		bool get_upperOpen();
		IDBKeyRange* get_prototype();
		void set_prototype(IDBKeyRange*);
		IDBKeyRange();
		static IDBKeyRange* bound(Object* lower, Object* upper) [[cheerp::static]];
		static IDBKeyRange* bound(Object* lower, Object* upper, bool lowerOpen) [[cheerp::static]];
		static IDBKeyRange* bound(Object* lower, Object* upper, bool lowerOpen, bool upperOpen) [[cheerp::static]];
		static IDBKeyRange* lowerBound(Object* lower) [[cheerp::static]];
		static IDBKeyRange* lowerBound(Object* lower, bool open) [[cheerp::static]];
		static IDBKeyRange* only(Object* value) [[cheerp::static]];
		static IDBKeyRange* upperBound(Object* upper) [[cheerp::static]];
		static IDBKeyRange* upperBound(Object* upper, bool open) [[cheerp::static]];
	};

	class IDBObjectStore: public Object{
	public:
		bool get_autoIncrement();
		void set_autoIncrement(bool);
		DOMStringList* get_indexNames();
		String* get_keyPath();
		String* get_name();
		IDBTransaction* get_transaction();
		IDBRequest* add(Object* value);
		IDBRequest* add(Object* value, IDBKeyRange* key);
		IDBRequest* add(Object* value, double key);
		IDBRequest* add(Object* value, const String& key);
		IDBRequest* add(Object* value, Date* key);
		IDBRequest* add(Object* value, IDBArrayKey* key);
		IDBRequest* clear();
		IDBRequest* count();
		IDBRequest* count(IDBKeyRange* key);
		IDBRequest* count(double key);
		IDBRequest* count(const String& key);
		IDBRequest* count(Date* key);
		IDBRequest* count(IDBArrayKey* key);
		IDBIndex* createIndex(const String& name, const String& keyPath);
		IDBIndex* createIndex(const String& name, const String& keyPath, IDBIndexParameters* optionalParameters);
		IDBIndex* createIndex(const String& name, Array* keyPath);
		IDBIndex* createIndex(const String& name, Array* keyPath, IDBIndexParameters* optionalParameters);
		IDBRequest* _delete(IDBKeyRange* key);
		IDBRequest* _delete(double key);
		IDBRequest* _delete(const String& key);
		IDBRequest* _delete(Date* key);
		IDBRequest* _delete(IDBArrayKey* key);
		void deleteIndex(const String& indexName);
		IDBRequest* get(Object* key);
		IDBIndex* index(const String& name);
		IDBRequest* openCursor();
		IDBRequest* openCursor(IDBKeyRange* range);
		IDBRequest* put(Object* value);
		IDBRequest* put(Object* value, IDBKeyRange* key);
		IDBRequest* put(Object* value, double key);
		IDBRequest* put(Object* value, const String& key);
		IDBRequest* put(Object* value, Date* key);
		IDBRequest* put(Object* value, IDBArrayKey* key);
		IDBObjectStore* get_prototype();
		void set_prototype(IDBObjectStore*);
		IDBObjectStore();
	};

	class IDBRequestEventMap: public Object{
	public:
		Event* get_error();
		void set_error(Event*);
		Event* get_success();
		void set_success(Event*);
	};

	class IDBOpenDBRequestEventMap: public IDBRequestEventMap {
	public:
		Event* get_blocked();
		void set_blocked(Event*);
		IDBVersionChangeEvent* get_upgradeneeded();
		void set_upgradeneeded(IDBVersionChangeEvent*);
	};

	class IDBRequest: public EventTarget {
	public:
		DOMException* get_error();
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onsuccess();
		void set_onsuccess(EventListener*);
		String* get_readyState();
		template<class ReturnType = Object*> ReturnType get_result();
		IDBObjectStore* get_source();
		IDBTransaction* get_transaction();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		IDBRequest* get_prototype();
		void set_prototype(IDBRequest*);
		IDBRequest();
	};

	class IDBOpenDBRequest: public IDBRequest {
	public:
		EventListener* get_onblocked();
		void set_onblocked(EventListener*);
		EventListener* get_onupgradeneeded();
		void set_onupgradeneeded(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		IDBOpenDBRequest* get_prototype();
		void set_prototype(IDBOpenDBRequest*);
		IDBOpenDBRequest();
	};

	class IDBTransactionEventMap: public Object{
	public:
		Event* get_abort();
		void set_abort(Event*);
		Event* get_complete();
		void set_complete(Event*);
		Event* get_error();
		void set_error(Event*);
	};

	class IDBTransaction: public EventTarget {
	public:
		IDBDatabase* get_db();
		DOMException* get_error();
		String* get_mode();
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_oncomplete();
		void set_oncomplete(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		void abort();
		IDBObjectStore* objectStore(const String& name);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		IDBTransaction* get_prototype();
		void set_prototype(IDBTransaction*);
		IDBTransaction();
		String* get_READ_ONLY();
		String* get_READ_WRITE();
		String* get_VERSION_CHANGE();
	};

	class IDBVersionChangeEvent: public Event {
	public:
		double get_newVersion();
		double get_oldVersion();
		IDBVersionChangeEvent* get_prototype();
		void set_prototype(IDBVersionChangeEvent*);
		IDBVersionChangeEvent();
	};

	class IIRFilterNode: public AudioNode {
	public:
		void getFrequencyResponse(Float32Array* frequencyHz, Float32Array* magResponse, Float32Array* phaseResponse);
		IIRFilterNode* get_prototype();
		void set_prototype(IIRFilterNode*);
		IIRFilterNode();
	};

	class ImageBitmap: public Object{
	public:
		double get_height();
		double get_width();
		void close();
	};

	class ImageBitmapOptions: public Object{
	public:
		String* get_colorSpaceConversion();
		void set_colorSpaceConversion(const String&);
		String* get_imageOrientation();
		void set_imageOrientation(const String&);
		String* get_premultiplyAlpha();
		void set_premultiplyAlpha(const String&);
		double get_resizeHeight();
		void set_resizeHeight(double);
		String* get_resizeQuality();
		void set_resizeQuality(const String&);
		double get_resizeWidth();
		void set_resizeWidth(double);
	};

	class ImageData: public Object{
	public:
		Uint8ClampedArray* get_data();
		double get_height();
		double get_width();
		ImageData* get_prototype();
		void set_prototype(ImageData*);
		ImageData(double width, double height);
		ImageData(Uint8ClampedArray* array, double width, double height);
	};

	class IntersectionObserver: public Object{
	public:
		Element* get_root();
		String* get_rootMargin();
		Array* get_thresholds();
		void disconnect();
		void observe(Element* target);
		Array* takeRecords();
		void unobserve(Element* target);
		IntersectionObserver* get_prototype();
		void set_prototype(IntersectionObserver*);
		IntersectionObserver(EventListener* callback);
		IntersectionObserver(EventListener* callback, IntersectionObserverInit* options);
	};

	class IntersectionObserverEntry: public Object{
	public:
		ClientRect* get_boundingClientRect();
		double get_intersectionRatio();
		ClientRect* get_intersectionRect();
		bool get_isIntersecting();
		ClientRect* get_rootBounds();
		Element* get_target();
		double get_time();
		IntersectionObserverEntry* get_prototype();
		void set_prototype(IntersectionObserverEntry*);
		IntersectionObserverEntry(IntersectionObserverEntryInit* intersectionObserverEntryInit);
	};

	class KeyboardEvent: public UIEvent {
	public:
		bool get_altKey();
		String* get_char();
		void set_char(const String&);
		double get_charCode();
		String* get_code();
		bool get_ctrlKey();
		String* get_key();
		double get_keyCode();
		double get_location();
		bool get_metaKey();
		bool get_repeat();
		bool get_shiftKey();
		double get_which();
		bool getModifierState(const String& keyArg);
		void initKeyboardEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, const String& keyArg, double locationArg, const String& modifiersListArg, bool repeat, const String& locale);
		KeyboardEvent* get_prototype();
		void set_prototype(KeyboardEvent*);
		KeyboardEvent(const String& typeArg);
		KeyboardEvent(const String& typeArg, KeyboardEventInit* eventInitDict);
		double get_DOM_KEY_LOCATION_JOYSTICK();
		double get_DOM_KEY_LOCATION_LEFT();
		double get_DOM_KEY_LOCATION_MOBILE();
		double get_DOM_KEY_LOCATION_NUMPAD();
		double get_DOM_KEY_LOCATION_RIGHT();
		double get_DOM_KEY_LOCATION_STANDARD();
	};

	class ListeningStateChangedEvent: public Event {
	public:
		String* get_label();
		String* get_state();
		ListeningStateChangedEvent* get_prototype();
		void set_prototype(ListeningStateChangedEvent*);
		ListeningStateChangedEvent();
	};

	class Location: public Object{
	public:
		String* get_hash();
		void set_hash(const String&);
		String* get_host();
		void set_host(const String&);
		String* get_hostname();
		void set_hostname(const String&);
		String* get_href();
		void set_href(const String&);
		String* get_origin();
		String* get_pathname();
		void set_pathname(const String&);
		String* get_port();
		void set_port(const String&);
		String* get_protocol();
		void set_protocol(const String&);
		String* get_search();
		void set_search(const String&);
		void assign(const String& url);
		void reload();
		void reload(bool forcedReload);
		void replace(const String& url);
		String* toString();
		Location* get_prototype();
		void set_prototype(Location*);
		Location();
	};

	class MSAssertion: public Object{
	public:
		String* get_id();
		String* get_type();
		MSAssertion* get_prototype();
		void set_prototype(MSAssertion*);
		MSAssertion();
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

	class MSCredentials: public Object{
	public:
		Promise* getAssertion(const String& challenge);
		Promise* getAssertion(const String& challenge, MSCredentialFilter* filter);
		Promise* getAssertion(const String& challenge, MSCredentialFilter* filter, MSSignatureParameters* params);
		Promise* makeCredential(MSAccountInfo* accountInfo, Array* params);
		Promise* makeCredential(MSAccountInfo* accountInfo, Array* params, const String& challenge);
		MSCredentials* get_prototype();
		void set_prototype(MSCredentials*);
		MSCredentials();
	};

	class MSDCCEvent: public Event {
	public:
		double get_maxFr();
		double get_maxFs();
		MSDCCEvent* get_prototype();
		void set_prototype(MSDCCEvent*);
		MSDCCEvent(const String& type, MSDCCEventInit* eventInitDict);
	};

	class MSDSHEvent: public Event {
	public:
		Array* get_sources();
		double get_timestamp();
		MSDSHEvent* get_prototype();
		void set_prototype(MSDSHEvent*);
		MSDSHEvent(const String& type, MSDSHEventInit* eventInitDict);
	};

	class MSFIDOCredentialAssertion: public MSAssertion {
	public:
		String* get_algorithm();
		template<class ReturnType = Object*> ReturnType get_attestation();
		String* get_publicKey();
		Array* get_transportHints();
		MSFIDOCredentialAssertion* get_prototype();
		void set_prototype(MSFIDOCredentialAssertion*);
		MSFIDOCredentialAssertion();
	};

	class MSFIDOSignature: public Object{
	public:
		String* get_authnrData();
		String* get_clientData();
		String* get_signature();
		MSFIDOSignature* get_prototype();
		void set_prototype(MSFIDOSignature*);
		MSFIDOSignature();
	};

	class MSFIDOSignatureAssertion: public MSAssertion {
	public:
		MSFIDOSignature* get_signature();
		MSFIDOSignatureAssertion* get_prototype();
		void set_prototype(MSFIDOSignatureAssertion*);
		MSFIDOSignatureAssertion();
	};

	class [[cheerp::client_layout]] MSFileSaver{
	public:
		bool msSaveBlob(Object* blob);
		bool msSaveBlob(Object* blob, const String& defaultName);
		bool msSaveOrOpenBlob(Object* blob);
		bool msSaveOrOpenBlob(Object* blob, const String& defaultName);
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

	class MSGestureEvent: public UIEvent {
	public:
		double get_clientX();
		double get_clientY();
		double get_expansion();
		template<class ReturnType = Object*> ReturnType get_gestureObject();
		double get_hwTimestamp();
		double get_offsetX();
		double get_offsetY();
		double get_rotation();
		double get_scale();
		double get_screenX();
		double get_screenY();
		double get_translationX();
		double get_translationY();
		double get_velocityAngular();
		double get_velocityExpansion();
		double get_velocityX();
		double get_velocityY();
		void initGestureEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double offsetXArg, double offsetYArg, double translationXArg, double translationYArg, double scaleArg, double expansionArg, double rotationArg, double velocityXArg, double velocityYArg, double velocityExpansionArg, double velocityAngularArg, double hwTimestampArg);
		MSGestureEvent* get_prototype();
		void set_prototype(MSGestureEvent*);
		MSGestureEvent();
		double get_MSGESTURE_FLAG_BEGIN();
		double get_MSGESTURE_FLAG_CANCEL();
		double get_MSGESTURE_FLAG_END();
		double get_MSGESTURE_FLAG_INERTIA();
		double get_MSGESTURE_FLAG_NONE();
	};

	class MSGraphicsTrust: public Object{
	public:
		bool get_constrictionActive();
		String* get_status();
		MSGraphicsTrust* get_prototype();
		void set_prototype(MSGraphicsTrust*);
		MSGraphicsTrust();
	};

	class MSInputMethodContextEventMap: public Object{
	public:
		Event* get_MSCandidateWindowHide();
		void set_MSCandidateWindowHide(Event*);
		Event* get_MSCandidateWindowShow();
		void set_MSCandidateWindowShow(Event*);
		Event* get_MSCandidateWindowUpdate();
		void set_MSCandidateWindowUpdate(Event*);
	};

	class MSInputMethodContext: public EventTarget {
	public:
		double get_compositionEndOffset();
		double get_compositionStartOffset();
		EventListener* get_oncandidatewindowhide();
		void set_oncandidatewindowhide(EventListener*);
		EventListener* get_oncandidatewindowshow();
		void set_oncandidatewindowshow(EventListener*);
		EventListener* get_oncandidatewindowupdate();
		void set_oncandidatewindowupdate(EventListener*);
		HTMLElement* get_target();
		ClientRect* getCandidateWindowClientRect();
		Array* getCompositionAlternatives();
		bool hasComposition();
		bool isCandidateWindowVisible();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		MSInputMethodContext* get_prototype();
		void set_prototype(MSInputMethodContext*);
		MSInputMethodContext();
	};

	class MSMediaKeyError: public Object{
	public:
		double get_code();
		double get_systemCode();
		MSMediaKeyError* get_prototype();
		void set_prototype(MSMediaKeyError*);
		MSMediaKeyError();
		double get_MS_MEDIA_KEYERR_CLIENT();
		double get_MS_MEDIA_KEYERR_DOMAIN();
		double get_MS_MEDIA_KEYERR_HARDWARECHANGE();
		double get_MS_MEDIA_KEYERR_OUTPUT();
		double get_MS_MEDIA_KEYERR_SERVICE();
		double get_MS_MEDIA_KEYERR_UNKNOWN();
	};

	class MSMediaKeyMessageEvent: public Event {
	public:
		String* get_destinationURL();
		Uint8Array* get_message();
		MSMediaKeyMessageEvent* get_prototype();
		void set_prototype(MSMediaKeyMessageEvent*);
		MSMediaKeyMessageEvent();
	};

	class MSMediaKeyNeededEvent: public Event {
	public:
		Uint8Array* get_initData();
		MSMediaKeyNeededEvent* get_prototype();
		void set_prototype(MSMediaKeyNeededEvent*);
		MSMediaKeyNeededEvent();
	};

	class MSMediaKeySession: public EventTarget {
	public:
		MSMediaKeyError* get_error();
		String* get_keySystem();
		String* get_sessionId();
		void close();
		void update(Uint8Array* key);
		MSMediaKeySession* get_prototype();
		void set_prototype(MSMediaKeySession*);
		MSMediaKeySession();
	};

	class MSMediaKeys: public Object{
	public:
		String* get_keySystem();
		MSMediaKeySession* createSession(const String& type, Uint8Array* initData);
		MSMediaKeySession* createSession(const String& type, Uint8Array* initData, Uint8Array* cdmData);
		MSMediaKeys* get_prototype();
		void set_prototype(MSMediaKeys*);
		MSMediaKeys(const String& keySystem);
		static bool isTypeSupported(const String& keySystem) [[cheerp::static]];
		static bool isTypeSupported(const String& keySystem, const String& type) [[cheerp::static]];
		static String* isTypeSupportedWithFeatures(const String& keySystem) [[cheerp::static]];
		static String* isTypeSupportedWithFeatures(const String& keySystem, const String& type) [[cheerp::static]];
	};

	class [[cheerp::client_layout]] MSNavigatorDoNotTrack{
	public:
		bool confirmSiteSpecificTrackingException(ConfirmSiteSpecificExceptionsInformation* args);
		bool confirmWebWideTrackingException(ExceptionInformation* args);
		void removeSiteSpecificTrackingException(ExceptionInformation* args);
		void removeWebWideTrackingException(ExceptionInformation* args);
		void storeSiteSpecificTrackingException(StoreSiteSpecificExceptionsInformation* args);
		void storeWebWideTrackingException(StoreExceptionsInformation* args);
	};

	class MSPointerEvent: public MouseEvent {
	public:
		template<class ReturnType = Object*> ReturnType get_currentPoint();
		double get_height();
		double get_hwTimestamp();
		template<class ReturnType = Object*> ReturnType get_intermediatePoints();
		bool get_isPrimary();
		double get_pointerId();
		template<class ReturnType = Object*> ReturnType get_pointerType();
		double get_pressure();
		double get_rotation();
		double get_tiltX();
		double get_tiltY();
		double get_width();
		void getCurrentPoint(Element* element);
		void getIntermediatePoints(Element* element);
		void initPointerEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, double buttonArg, EventTarget* relatedTargetArg, double offsetXArg, double offsetYArg, double widthArg, double heightArg, double pressure, double rotation, double tiltX, double tiltY, double pointerIdArg, Object* pointerType, double hwTimestampArg, bool isPrimary);
		MSPointerEvent* get_prototype();
		void set_prototype(MSPointerEvent*);
		MSPointerEvent(const String& typeArg);
		MSPointerEvent(const String& typeArg, PointerEventInit* eventInitDict);
	};

	class MSStream: public Object{
	public:
		String* get_type();
		void msClose();
		template<class ReturnType = Object*> ReturnType msDetachStream();
		MSStream* get_prototype();
		void set_prototype(MSStream*);
		MSStream();
	};

	class MSStreamReaderEventMap: public Object{
	public:
		UIEvent* get_abort();
		void set_abort(UIEvent*);
		ErrorEvent* get_error();
		void set_error(ErrorEvent*);
		Event* get_load();
		void set_load(Event*);
		ProgressEvent* get_loadend();
		void set_loadend(ProgressEvent*);
		Event* get_loadstart();
		void set_loadstart(Event*);
		ProgressEvent* get_progress();
		void set_progress(ProgressEvent*);
	};

	class MSStreamReader: public EventTarget {
	public:
		DOMError* get_error();
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onloadend();
		void set_onloadend(EventListener*);
		EventListener* get_onloadstart();
		void set_onloadstart(EventListener*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		double get_readyState();
		template<class ReturnType = Object*> ReturnType get_result();
		void abort();
		void readAsArrayBuffer(MSStream* stream);
		void readAsArrayBuffer(MSStream* stream, double size);
		void readAsBinaryString(MSStream* stream);
		void readAsBinaryString(MSStream* stream, double size);
		void readAsBlob(MSStream* stream);
		void readAsBlob(MSStream* stream, double size);
		void readAsDataURL(MSStream* stream);
		void readAsDataURL(MSStream* stream, double size);
		void readAsText(MSStream* stream);
		void readAsText(MSStream* stream, const String& encoding);
		void readAsText(MSStream* stream, const String& encoding, double size);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		MSStreamReader* get_prototype();
		void set_prototype(MSStreamReader*);
		MSStreamReader();
		double get_DONE();
		double get_EMPTY();
		double get_LOADING();
	};

	class MediaDeviceInfo: public Object{
	public:
		String* get_deviceId();
		String* get_groupId();
		String* get_kind();
		String* get_label();
		MediaDeviceInfo* get_prototype();
		void set_prototype(MediaDeviceInfo*);
		MediaDeviceInfo();
	};

	class MediaDevicesEventMap: public Object{
	public:
		Event* get_devicechange();
		void set_devicechange(Event*);
	};

	class MediaDevices: public EventTarget {
	public:
		EventListener* get_ondevicechange();
		void set_ondevicechange(EventListener*);
		Promise* enumerateDevices();
		MediaTrackSupportedConstraints* getSupportedConstraints();
		Promise* getUserMedia(MediaStreamConstraints* constraints);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		MediaDevices* get_prototype();
		void set_prototype(MediaDevices*);
		MediaDevices();
	};

	class MediaElementAudioSourceNode: public AudioNode {
	public:
		MediaElementAudioSourceNode* get_prototype();
		void set_prototype(MediaElementAudioSourceNode*);
		MediaElementAudioSourceNode();
	};

	class MediaEncryptedEvent: public Event {
	public:
		ArrayBuffer* get_initData();
		String* get_initDataType();
		MediaEncryptedEvent* get_prototype();
		void set_prototype(MediaEncryptedEvent*);
		MediaEncryptedEvent(const String& type);
		MediaEncryptedEvent(const String& type, MediaEncryptedEventInit* eventInitDict);
	};

	class MediaError: public Object{
	public:
		double get_code();
		String* get_message();
		double get_msExtendedCode();
		MediaError* get_prototype();
		void set_prototype(MediaError*);
		MediaError();
		double get_MEDIA_ERR_ABORTED();
		double get_MEDIA_ERR_DECODE();
		double get_MEDIA_ERR_NETWORK();
		double get_MEDIA_ERR_SRC_NOT_SUPPORTED();
		double get_MS_MEDIA_ERR_ENCRYPTED();
	};

	class MediaKeyMessageEvent: public Event {
	public:
		ArrayBuffer* get_message();
		String* get_messageType();
		MediaKeyMessageEvent* get_prototype();
		void set_prototype(MediaKeyMessageEvent*);
		MediaKeyMessageEvent(const String& type);
		MediaKeyMessageEvent(const String& type, MediaKeyMessageEventInit* eventInitDict);
	};

	class MediaKeySession: public EventTarget {
	public:
		Promise* get_closed();
		double get_expiration();
		MediaKeyStatusMap* get_keyStatuses();
		String* get_sessionId();
		Promise* close();
		Promise* generateRequest(const String& initDataType, Int8Array* initData);
		Promise* generateRequest(const String& initDataType, Int16Array* initData);
		Promise* generateRequest(const String& initDataType, Int32Array* initData);
		Promise* generateRequest(const String& initDataType, Uint8Array* initData);
		Promise* generateRequest(const String& initDataType, Uint16Array* initData);
		Promise* generateRequest(const String& initDataType, Uint32Array* initData);
		Promise* generateRequest(const String& initDataType, Uint8ClampedArray* initData);
		Promise* generateRequest(const String& initDataType, Float32Array* initData);
		Promise* generateRequest(const String& initDataType, Float64Array* initData);
		Promise* generateRequest(const String& initDataType, DataView* initData);
		Promise* generateRequest(const String& initDataType, ArrayBuffer* initData);
		Promise* load(const String& sessionId);
		Promise* remove();
		Promise* update(Int8Array* response);
		Promise* update(Int16Array* response);
		Promise* update(Int32Array* response);
		Promise* update(Uint8Array* response);
		Promise* update(Uint16Array* response);
		Promise* update(Uint32Array* response);
		Promise* update(Uint8ClampedArray* response);
		Promise* update(Float32Array* response);
		Promise* update(Float64Array* response);
		Promise* update(DataView* response);
		Promise* update(ArrayBuffer* response);
		MediaKeySession* get_prototype();
		void set_prototype(MediaKeySession*);
		MediaKeySession();
	};

	class MediaKeyStatusMap: public Object{
	public:
		double get_size();
		void forEach(Function* callback);
		void forEach(Function* callback, Object* thisArg);
		String* get(Int8Array* keyId);
		String* get(Int16Array* keyId);
		String* get(Int32Array* keyId);
		String* get(Uint8Array* keyId);
		String* get(Uint16Array* keyId);
		String* get(Uint32Array* keyId);
		String* get(Uint8ClampedArray* keyId);
		String* get(Float32Array* keyId);
		String* get(Float64Array* keyId);
		String* get(DataView* keyId);
		String* get(ArrayBuffer* keyId);
		bool has(Int8Array* keyId);
		bool has(Int16Array* keyId);
		bool has(Int32Array* keyId);
		bool has(Uint8Array* keyId);
		bool has(Uint16Array* keyId);
		bool has(Uint32Array* keyId);
		bool has(Uint8ClampedArray* keyId);
		bool has(Float32Array* keyId);
		bool has(Float64Array* keyId);
		bool has(DataView* keyId);
		bool has(ArrayBuffer* keyId);
		MediaKeyStatusMap* get_prototype();
		void set_prototype(MediaKeyStatusMap*);
		MediaKeyStatusMap();
	};

	class MediaKeySystemAccess: public Object{
	public:
		String* get_keySystem();
		Promise* createMediaKeys();
		MediaKeySystemConfiguration* getConfiguration();
		MediaKeySystemAccess* get_prototype();
		void set_prototype(MediaKeySystemAccess*);
		MediaKeySystemAccess();
	};

	class MediaKeys: public Object{
	public:
		MediaKeySession* createSession();
		Promise* setServerCertificate(Int8Array* serverCertificate);
		Promise* setServerCertificate(Int16Array* serverCertificate);
		Promise* setServerCertificate(Int32Array* serverCertificate);
		Promise* setServerCertificate(Uint8Array* serverCertificate);
		Promise* setServerCertificate(Uint16Array* serverCertificate);
		Promise* setServerCertificate(Uint32Array* serverCertificate);
		Promise* setServerCertificate(Uint8ClampedArray* serverCertificate);
		Promise* setServerCertificate(Float32Array* serverCertificate);
		Promise* setServerCertificate(Float64Array* serverCertificate);
		Promise* setServerCertificate(DataView* serverCertificate);
		Promise* setServerCertificate(ArrayBuffer* serverCertificate);
		MediaKeys* get_prototype();
		void set_prototype(MediaKeys*);
		MediaKeys();
	};

	class MediaList: public Object{
	public:
		double get_length();
		String* get_mediaText();
		void set_mediaText(const String&);
		void appendMedium(const String& medium);
		void deleteMedium(const String& medium);
		String* item(double index);
		double toString();
		String*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<String*>(this, 0)[index];
		}
		String* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<String*>(this, 0)[index];
		}
		MediaList* get_prototype();
		void set_prototype(MediaList*);
		MediaList();
	};

	class MediaQueryList: public Object{
	public:
		bool get_matches();
		String* get_media();
		void addListener(MediaQueryListListener* listener);
		void removeListener(MediaQueryListListener* listener);
		MediaQueryList* get_prototype();
		void set_prototype(MediaQueryList*);
		MediaQueryList();
	};

	class MediaSource: public EventTarget {
	public:
		SourceBufferList* get_activeSourceBuffers();
		double get_duration();
		void set_duration(double);
		String* get_readyState();
		SourceBufferList* get_sourceBuffers();
		SourceBuffer* addSourceBuffer(const String& type);
		void endOfStream();
		void endOfStream(double error);
		void removeSourceBuffer(SourceBuffer* sourceBuffer);
		MediaSource* get_prototype();
		void set_prototype(MediaSource*);
		MediaSource();
		static bool isTypeSupported(const String& type) [[cheerp::static]];
	};

	class MediaStreamEventMap: public Object{
	public:
		Event* get_active();
		void set_active(Event*);
		MediaStreamTrackEvent* get_addtrack();
		void set_addtrack(MediaStreamTrackEvent*);
		Event* get_inactive();
		void set_inactive(Event*);
		MediaStreamTrackEvent* get_removetrack();
		void set_removetrack(MediaStreamTrackEvent*);
	};

	class MediaStream: public EventTarget {
	public:
		bool get_active();
		String* get_id();
		EventListener* get_onactive();
		void set_onactive(EventListener*);
		EventListener* get_onaddtrack();
		void set_onaddtrack(EventListener*);
		EventListener* get_oninactive();
		void set_oninactive(EventListener*);
		EventListener* get_onremovetrack();
		void set_onremovetrack(EventListener*);
		void addTrack(MediaStreamTrack* track);
		MediaStream* clone();
		Array* getAudioTracks();
		MediaStreamTrack* getTrackById(const String& trackId);
		Array* getTracks();
		Array* getVideoTracks();
		void removeTrack(MediaStreamTrack* track);
		void stop();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		MediaStream* get_prototype();
		void set_prototype(MediaStream*);
		MediaStream();
		MediaStream(MediaStream* stream);
		MediaStream(Array* tracks);
	};

	class MediaStreamAudioSourceNode: public AudioNode {
	public:
		MediaStreamAudioSourceNode* get_prototype();
		void set_prototype(MediaStreamAudioSourceNode*);
		MediaStreamAudioSourceNode();
	};

	class MediaStreamError: public Object{
	public:
		String* get_constraintName();
		String* get_message();
		String* get_name();
		MediaStreamError* get_prototype();
		void set_prototype(MediaStreamError*);
		MediaStreamError();
	};

	class MediaStreamErrorEvent: public Event {
	public:
		MediaStreamError* get_error();
		MediaStreamErrorEvent* get_prototype();
		void set_prototype(MediaStreamErrorEvent*);
		MediaStreamErrorEvent(const String& typeArg);
		MediaStreamErrorEvent(const String& typeArg, MediaStreamErrorEventInit* eventInitDict);
	};

	class MediaStreamEvent: public Event {
	public:
		MediaStream* get_stream();
		MediaStreamEvent* get_prototype();
		void set_prototype(MediaStreamEvent*);
		MediaStreamEvent(const String& type, MediaStreamEventInit* eventInitDict);
	};

	class MediaStreamTrackEventMap: public Object{
	public:
		MediaStreamErrorEvent* get_ended();
		void set_ended(MediaStreamErrorEvent*);
		Event* get_mute();
		void set_mute(Event*);
		MediaStreamErrorEvent* get_overconstrained();
		void set_overconstrained(MediaStreamErrorEvent*);
		Event* get_unmute();
		void set_unmute(Event*);
	};

	class MediaStreamTrack: public EventTarget {
	public:
		bool get_enabled();
		void set_enabled(bool);
		String* get_id();
		String* get_kind();
		String* get_label();
		bool get_muted();
		EventListener* get_onended();
		void set_onended(EventListener*);
		EventListener* get_onmute();
		void set_onmute(EventListener*);
		EventListener* get_onoverconstrained();
		void set_onoverconstrained(EventListener*);
		EventListener* get_onunmute();
		void set_onunmute(EventListener*);
		bool get_readonly();
		String* get_readyState();
		bool get_remote();
		Promise* applyConstraints(MediaTrackConstraints* constraints);
		MediaStreamTrack* clone();
		MediaTrackCapabilities* getCapabilities();
		MediaTrackConstraints* getConstraints();
		MediaTrackSettings* getSettings();
		void stop();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		MediaStreamTrack* get_prototype();
		void set_prototype(MediaStreamTrack*);
		MediaStreamTrack();
	};

	class MediaStreamTrackEvent: public Event {
	public:
		MediaStreamTrack* get_track();
		MediaStreamTrackEvent* get_prototype();
		void set_prototype(MediaStreamTrackEvent*);
		MediaStreamTrackEvent(const String& typeArg);
		MediaStreamTrackEvent(const String& typeArg, MediaStreamTrackEventInit* eventInitDict);
	};

	class MessageChannel: public Object{
	public:
		MessagePort* get_port1();
		MessagePort* get_port2();
		MessageChannel* get_prototype();
		void set_prototype(MessageChannel*);
		MessageChannel();
	};

	class MessageEvent: public Event {
	public:
		template<class ReturnType = Object*> ReturnType get_data();
		String* get_origin();
		ReadonlyArray<MessagePort>* get_ports();
		Window* get_source();
		void initMessageEvent(const String& type, bool bubbles, bool cancelable, Object* data, const String& origin, const String& lastEventId, Window* source);
		MessageEvent* get_prototype();
		void set_prototype(MessageEvent*);
		MessageEvent(const String& type);
		MessageEvent(const String& type, MessageEventInit* eventInitDict);
	};

	class MessagePortEventMap: public Object{
	public:
		MessageEvent* get_message();
		void set_message(MessageEvent*);
	};

	class MessagePort: public EventTarget {
	public:
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		void close();
		void postMessage();
		void postMessage(Object* message);
		void postMessage(Object* message, Array* transfer);
		void postMessage(const String& message);
		void postMessage(const String& message, Array* transfer);
		void start();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		MessagePort* get_prototype();
		void set_prototype(MessagePort*);
		MessagePort();
	};

	class MimeType: public Object{
	public:
		String* get_description();
		Plugin* get_enabledPlugin();
		String* get_suffixes();
		String* get_type();
		MimeType* get_prototype();
		void set_prototype(MimeType*);
		MimeType();
	};

	class MimeTypeArray: public Object{
	public:
		double get_length();
		Plugin* item(double index);
		Plugin* namedItem(const String& type);
		Plugin*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Plugin*>(this, 0)[index];
		}
		Plugin* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Plugin*>(this, 0)[index];
		}
		MimeTypeArray* get_prototype();
		void set_prototype(MimeTypeArray*);
		MimeTypeArray();
	};

	class MutationEvent: public Event {
	public:
		double get_attrChange();
		String* get_attrName();
		String* get_newValue();
		String* get_prevValue();
		Node* get_relatedNode();
		void initMutationEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Node* relatedNodeArg, const String& prevValueArg, const String& newValueArg, const String& attrNameArg, double attrChangeArg);
		MutationEvent* get_prototype();
		void set_prototype(MutationEvent*);
		MutationEvent();
		double get_ADDITION();
		double get_MODIFICATION();
		double get_REMOVAL();
	};

	class MutationObserver: public Object{
	public:
		void disconnect();
		void observe(Node* target, MutationObserverInit* options);
		Array* takeRecords();
		MutationObserver* get_prototype();
		void set_prototype(MutationObserver*);
		MutationObserver(EventListener* callback);
	};

	class MutationRecord: public Object{
	public:
		NodeList* get_addedNodes();
		String* get_attributeName();
		String* get_attributeNamespace();
		Node* get_nextSibling();
		String* get_oldValue();
		Node* get_previousSibling();
		NodeList* get_removedNodes();
		Node* get_target();
		String* get_type();
		MutationRecord* get_prototype();
		void set_prototype(MutationRecord*);
		MutationRecord();
	};

	class NamedNodeMap: public Object{
	public:
		double get_length();
		Attr* getNamedItem(const String& qualifiedName);
		Attr* getNamedItemNS(const String& _namespace, const String& localName);
		Attr* item(double index);
		Attr* removeNamedItem(const String& qualifiedName);
		Attr* removeNamedItemNS(const String& _namespace, const String& localName);
		Attr* setNamedItem(Attr* attr);
		Attr* setNamedItemNS(Attr* attr);
		Attr*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Attr*>(this, 0)[index];
		}
		Attr* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Attr*>(this, 0)[index];
		}
		NamedNodeMap* get_prototype();
		void set_prototype(NamedNodeMap*);
		NamedNodeMap();
	};

	class NavigatorID: public Object{
	public:
		String* get_appCodeName();
		String* get_appName();
		String* get_appVersion();
		String* get_platform();
		String* get_product();
		String* get_productSub();
		String* get_userAgent();
		String* get_vendor();
		String* get_vendorSub();
	};

	class [[cheerp::client_layout]] NavigatorOnLine{
	public:
		bool get_onLine();
	};

	class [[cheerp::client_layout]] NavigatorContentUtils{
	public:
	};

	class [[cheerp::client_layout]] NavigatorStorageUtils{
	public:
	};

	class [[cheerp::client_layout]] NavigatorBeacon{
	public:
		bool sendBeacon(const String& url);
		bool sendBeacon(const String& url, Blob* data);
		bool sendBeacon(const String& url, Int8Array* data);
		bool sendBeacon(const String& url, Int16Array* data);
		bool sendBeacon(const String& url, Int32Array* data);
		bool sendBeacon(const String& url, Uint8Array* data);
		bool sendBeacon(const String& url, Uint16Array* data);
		bool sendBeacon(const String& url, Uint32Array* data);
		bool sendBeacon(const String& url, Uint8ClampedArray* data);
		bool sendBeacon(const String& url, Float32Array* data);
		bool sendBeacon(const String& url, Float64Array* data);
		bool sendBeacon(const String& url, DataView* data);
		bool sendBeacon(const String& url, ArrayBuffer* data);
		bool sendBeacon(const String& url, FormData* data);
		bool sendBeacon(const String& url, const String& data);
	};

	class [[cheerp::client_layout]] NavigatorConcurrentHardware{
	public:
		double get_hardwareConcurrency();
	};

	class [[cheerp::client_layout]] NavigatorUserMedia{
	public:
		MediaDevices* get_mediaDevices();
		Promise* getDisplayMedia(MediaStreamConstraints* constraints);
		void getUserMedia(MediaStreamConstraints* constraints, EventListener* successCallback, EventListener* errorCallback);
	};

	class [[cheerp::client_layout]] NavigatorLanguage{
	public:
		String* get_language();
		ReadonlyArray<String>* get_languages();
	};

	class Navigator: public NavigatorID , public NavigatorOnLine , public NavigatorContentUtils , public NavigatorStorageUtils , public MSNavigatorDoNotTrack , public MSFileSaver , public NavigatorBeacon , public NavigatorConcurrentHardware , public NavigatorUserMedia , public NavigatorLanguage {
	public:
		ReadonlyArray<VRDisplay>* get_activeVRDisplays();
		WebAuthentication* get_authentication();
		bool get_cookieEnabled();
		String* get_doNotTrack();
		String* get_gamepadInputEmulation();
		void set_gamepadInputEmulation(const String&);
		Geolocation* get_geolocation();
		double get_maxTouchPoints();
		MimeTypeArray* get_mimeTypes();
		bool get_msManipulationViewsEnabled();
		double get_msMaxTouchPoints();
		bool get_msPointerEnabled();
		PluginArray* get_plugins();
		bool get_pointerEnabled();
		ServiceWorkerContainer* get_serviceWorker();
		bool get_webdriver();
		Array* getGamepads();
		Promise* getVRDisplays();
		bool javaEnabled();
		void msLaunchUri(const String& uri);
		void msLaunchUri(const String& uri, EventListener* successCallback);
		void msLaunchUri(const String& uri, EventListener* successCallback, EventListener* noHandlerCallback);
		Promise* requestMediaKeySystemAccess(const String& keySystem, Array* supportedConfigurations);
		bool vibrate(double pattern);
		bool vibrate(Array* pattern);
		Navigator* get_prototype();
		void set_prototype(Navigator*);
		Navigator();
	};

	class NodeFilter: public Object{
	public:
		double acceptNode(Node* node);
		double get_FILTER_ACCEPT();
		double get_FILTER_REJECT();
		double get_FILTER_SKIP();
		double get_SHOW_ALL();
		double get_SHOW_ATTRIBUTE();
		double get_SHOW_CDATA_SECTION();
		double get_SHOW_COMMENT();
		double get_SHOW_DOCUMENT();
		double get_SHOW_DOCUMENT_FRAGMENT();
		double get_SHOW_DOCUMENT_TYPE();
		double get_SHOW_ELEMENT();
		double get_SHOW_ENTITY();
		double get_SHOW_ENTITY_REFERENCE();
		double get_SHOW_NOTATION();
		double get_SHOW_PROCESSING_INSTRUCTION();
		double get_SHOW_TEXT();
	};

	class NodeIterator: public Object{
	public:
		bool get_expandEntityReferences();
		NodeFilter* get_filter();
		Node* get_root();
		double get_whatToShow();
		void detach();
		Node* nextNode();
		Node* previousNode();
		NodeIterator* get_prototype();
		void set_prototype(NodeIterator*);
		NodeIterator();
	};

	class NodeList: public Object{
	public:
		double get_length();
		Node* item(double index);
		Node*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Node*>(this, 0)[index];
		}
		Node* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Node*>(this, 0)[index];
		}
		NodeList* get_prototype();
		void set_prototype(NodeList*);
		NodeList();
	};

	template<class TNode>
	class NodeListOf: public NodeList {
	public:
		double get_length();
		void set_length(double);
		TNode* item(double index);
		TNode*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<TNode*>(this, 0)[index];
		}
		TNode* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<TNode*>(this, 0)[index];
		}
	};

	class NodeSelector: public Object{
	public:
		Element* querySelector(const String& selectors);
		NodeListOf<Element>* querySelectorAll(const String& selectors);
	};

	class NotificationEventMap: public Object{
	public:
		Event* get_click();
		void set_click(Event*);
		Event* get_close();
		void set_close(Event*);
		Event* get_error();
		void set_error(Event*);
		Event* get_show();
		void set_show(Event*);
	};

	class Notification: public EventTarget {
	public:
		String* get_body();
		template<class ReturnType = Object*> ReturnType get_data();
		String* get_dir();
		String* get_icon();
		String* get_lang();
		EventListener* get_onclick();
		void set_onclick(EventListener*);
		EventListener* get_onclose();
		void set_onclose(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onshow();
		void set_onshow(EventListener*);
		String* get_permission();
		String* get_tag();
		String* get_title();
		void close();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		Notification* get_prototype();
		void set_prototype(Notification*);
		Notification(const String& title);
		Notification(const String& title, NotificationOptions* options);
		static Promise* requestPermission() [[cheerp::static]];
		static Promise* requestPermission(EventListener* callback) [[cheerp::static]];
	};

	class OfflineAudioCompletionEvent: public Event {
	public:
		AudioBuffer* get_renderedBuffer();
		OfflineAudioCompletionEvent* get_prototype();
		void set_prototype(OfflineAudioCompletionEvent*);
		OfflineAudioCompletionEvent();
	};

	class OfflineAudioContextEventMap: public AudioContextEventMap {
	public:
		OfflineAudioCompletionEvent* get_complete();
		void set_complete(OfflineAudioCompletionEvent*);
	};

	class OfflineAudioContext: public AudioContextBase {
	public:
		double get_length();
		EventListener* get_oncomplete();
		void set_oncomplete(EventListener*);
		Promise* startRendering();
		Promise* suspend(double suspendTime);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		OfflineAudioContext* get_prototype();
		void set_prototype(OfflineAudioContext*);
		OfflineAudioContext(double numberOfChannels, double length, double sampleRate);
	};

	class OscillatorNodeEventMap: public Object{
	public:
		Event* get_ended();
		void set_ended(Event*);
	};

	class OscillatorNode: public AudioNode {
	public:
		AudioParam* get_detune();
		AudioParam* get_frequency();
		EventListener* get_onended();
		void set_onended(EventListener*);
		String* get_type();
		void set_type(const String&);
		void setPeriodicWave(PeriodicWave* periodicWave);
		void start();
		void start(double when);
		void stop();
		void stop(double when);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		OscillatorNode* get_prototype();
		void set_prototype(OscillatorNode*);
		OscillatorNode();
	};

	class OverflowEvent: public UIEvent {
	public:
		bool get_horizontalOverflow();
		double get_orient();
		bool get_verticalOverflow();
		OverflowEvent* get_prototype();
		void set_prototype(OverflowEvent*);
		OverflowEvent();
		double get_BOTH();
		double get_HORIZONTAL();
		double get_VERTICAL();
	};

	class PageTransitionEvent: public Event {
	public:
		bool get_persisted();
		PageTransitionEvent* get_prototype();
		void set_prototype(PageTransitionEvent*);
		PageTransitionEvent();
	};

	class PannerNode: public AudioNode {
	public:
		double get_coneInnerAngle();
		void set_coneInnerAngle(double);
		double get_coneOuterAngle();
		void set_coneOuterAngle(double);
		double get_coneOuterGain();
		void set_coneOuterGain(double);
		String* get_distanceModel();
		void set_distanceModel(const String&);
		double get_maxDistance();
		void set_maxDistance(double);
		String* get_panningModel();
		void set_panningModel(const String&);
		double get_refDistance();
		void set_refDistance(double);
		double get_rolloffFactor();
		void set_rolloffFactor(double);
		void setOrientation(double x, double y, double z);
		void setPosition(double x, double y, double z);
		void setVelocity(double x, double y, double z);
		PannerNode* get_prototype();
		void set_prototype(PannerNode*);
		PannerNode();
	};

	class Path2D: public CanvasPathMethods {
	public:
		Path2D* get_prototype();
		void set_prototype(Path2D*);
		Path2D();
		Path2D(Path2D* d);
		Path2D(const String& d);
	};

	class PaymentAddress: public Object{
	public:
		Array* get_addressLine();
		String* get_city();
		String* get_country();
		String* get_dependentLocality();
		String* get_languageCode();
		String* get_organization();
		String* get_phone();
		String* get_postalCode();
		String* get_recipient();
		String* get_region();
		String* get_sortingCode();
		template<class ReturnType = Object*> ReturnType toJSON();
		PaymentAddress* get_prototype();
		void set_prototype(PaymentAddress*);
		PaymentAddress();
	};

	class PaymentRequestEventMap: public Object{
	public:
		Event* get_shippingaddresschange();
		void set_shippingaddresschange(Event*);
		Event* get_shippingoptionchange();
		void set_shippingoptionchange(Event*);
	};

	class PaymentRequest: public EventTarget {
	public:
		String* get_id();
		EventListener* get_onshippingaddresschange();
		void set_onshippingaddresschange(EventListener*);
		EventListener* get_onshippingoptionchange();
		void set_onshippingoptionchange(EventListener*);
		PaymentAddress* get_shippingAddress();
		String* get_shippingOption();
		String* get_shippingType();
		Promise* abort();
		Promise* canMakePayment();
		Promise* show();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		PaymentRequest* get_prototype();
		void set_prototype(PaymentRequest*);
		PaymentRequest(Array* methodData, PaymentDetailsInit* details);
		PaymentRequest(Array* methodData, PaymentDetailsInit* details, PaymentOptions* options);
	};

	class PaymentRequestUpdateEvent: public Event {
	public:
		void updateWith(Promise* detailsPromise);
		PaymentRequestUpdateEvent* get_prototype();
		void set_prototype(PaymentRequestUpdateEvent*);
		PaymentRequestUpdateEvent(const String& type);
		PaymentRequestUpdateEvent(const String& type, PaymentRequestUpdateEventInit* eventInitDict);
	};

	class PaymentResponse: public Object{
	public:
		template<class ReturnType = Object*> ReturnType get_details();
		String* get_methodName();
		String* get_payerEmail();
		String* get_payerName();
		String* get_payerPhone();
		String* get_requestId();
		PaymentAddress* get_shippingAddress();
		String* get_shippingOption();
		Promise* complete();
		template<class ReturnType = Object*> ReturnType toJSON();
		PaymentResponse* get_prototype();
		void set_prototype(PaymentResponse*);
		PaymentResponse();
	};

	class PerfWidgetExternal: public Object{
	public:
		double get_activeNetworkRequestCount();
		double get_averageFrameTime();
		double get_averagePaintTime();
		bool get_extraInformationEnabled();
		bool get_independentRenderingEnabled();
		String* get_irDisablingContentString();
		bool get_irStatusAvailable();
		double get_maxCpuSpeed();
		double get_paintRequestsPerSecond();
		double get_performanceCounter();
		double get_performanceCounterFrequency();
		void addEventListener(const String& eventType, Function* callback);
		double getMemoryUsage();
		double getProcessCpuUsage();
		template<class ReturnType = Object*> ReturnType getRecentCpuUsage(double last);
		template<class ReturnType = Object*> ReturnType getRecentFrames(double last);
		template<class ReturnType = Object*> ReturnType getRecentMemoryUsage(double last);
		template<class ReturnType = Object*> ReturnType getRecentPaintRequests(double last);
		void removeEventListener(const String& eventType, Function* callback);
		void repositionWindow(double x, double y);
		void resizeWindow(double width, double height);
		PerfWidgetExternal* get_prototype();
		void set_prototype(PerfWidgetExternal*);
		PerfWidgetExternal();
	};

	class Performance: public Object{
	public:
		PerformanceNavigation* get_navigation();
		double get_timeOrigin();
		PerformanceTiming* get_timing();
		void clearMarks();
		void clearMarks(const String& markName);
		void clearMeasures();
		void clearMeasures(const String& measureName);
		void clearResourceTimings();
		template<class ReturnType = Object*> ReturnType getEntries();
		template<class ReturnType = Object*> ReturnType getEntriesByName(const String& name);
		template<class ReturnType = Object*> ReturnType getEntriesByName(const String& name, const String& type);
		template<class ReturnType = Object*> ReturnType getEntriesByType(const String& type);
		template<class ReturnType = Object*> ReturnType getMarks();
		template<class ReturnType = Object*> ReturnType getMarks(const String& markName);
		template<class ReturnType = Object*> ReturnType getMeasures();
		template<class ReturnType = Object*> ReturnType getMeasures(const String& measureName);
		void mark(const String& markName);
		void measure(const String& measureName);
		void measure(const String& measureName, const String& startMarkName);
		void measure(const String& measureName, const String& startMarkName, const String& endMarkName);
		double now();
		void setResourceTimingBufferSize(double maxSize);
		template<class ReturnType = Object*> ReturnType toJSON();
		Performance* get_prototype();
		void set_prototype(Performance*);
		Performance();
	};

	class PerformanceEntry: public Object{
	public:
		double get_duration();
		String* get_entryType();
		String* get_name();
		double get_startTime();
		template<class ReturnType = Object*> ReturnType toJSON();
		PerformanceEntry* get_prototype();
		void set_prototype(PerformanceEntry*);
		PerformanceEntry();
	};

	class PerformanceMark: public PerformanceEntry {
	public:
		PerformanceMark* get_prototype();
		void set_prototype(PerformanceMark*);
		PerformanceMark();
	};

	class PerformanceMeasure: public PerformanceEntry {
	public:
		PerformanceMeasure* get_prototype();
		void set_prototype(PerformanceMeasure*);
		PerformanceMeasure();
	};

	class PerformanceNavigation: public Object{
	public:
		double get_redirectCount();
		double get_type();
		template<class ReturnType = Object*> ReturnType toJSON();
		PerformanceNavigation* get_prototype();
		void set_prototype(PerformanceNavigation*);
		PerformanceNavigation();
		double get_TYPE_BACK_FORWARD();
		double get_TYPE_NAVIGATE();
		double get_TYPE_RELOAD();
		double get_TYPE_RESERVED();
	};

	class PerformanceNavigationTiming: public PerformanceEntry {
	public:
		double get_connectEnd();
		double get_connectStart();
		double get_domComplete();
		double get_domContentLoadedEventEnd();
		double get_domContentLoadedEventStart();
		double get_domInteractive();
		double get_domLoading();
		double get_domainLookupEnd();
		double get_domainLookupStart();
		double get_fetchStart();
		double get_loadEventEnd();
		double get_loadEventStart();
		double get_navigationStart();
		double get_redirectCount();
		double get_redirectEnd();
		double get_redirectStart();
		double get_requestStart();
		double get_responseEnd();
		double get_responseStart();
		String* get_type();
		double get_unloadEventEnd();
		double get_unloadEventStart();
		double get_workerStart();
		PerformanceNavigationTiming* get_prototype();
		void set_prototype(PerformanceNavigationTiming*);
		PerformanceNavigationTiming();
	};

	class PerformanceResourceTiming: public PerformanceEntry {
	public:
		double get_connectEnd();
		double get_connectStart();
		double get_domainLookupEnd();
		double get_domainLookupStart();
		double get_fetchStart();
		String* get_initiatorType();
		double get_redirectEnd();
		double get_redirectStart();
		double get_requestStart();
		double get_responseEnd();
		double get_responseStart();
		double get_workerStart();
		PerformanceResourceTiming* get_prototype();
		void set_prototype(PerformanceResourceTiming*);
		PerformanceResourceTiming();
	};

	class PerformanceTiming: public Object{
	public:
		double get_connectEnd();
		double get_connectStart();
		double get_domComplete();
		double get_domContentLoadedEventEnd();
		double get_domContentLoadedEventStart();
		double get_domInteractive();
		double get_domLoading();
		double get_domainLookupEnd();
		double get_domainLookupStart();
		double get_fetchStart();
		double get_loadEventEnd();
		double get_loadEventStart();
		double get_msFirstPaint();
		double get_navigationStart();
		double get_redirectEnd();
		double get_redirectStart();
		double get_requestStart();
		double get_responseEnd();
		double get_responseStart();
		double get_secureConnectionStart();
		double get_unloadEventEnd();
		double get_unloadEventStart();
		template<class ReturnType = Object*> ReturnType toJSON();
		PerformanceTiming* get_prototype();
		void set_prototype(PerformanceTiming*);
		PerformanceTiming();
	};

	class PeriodicWave: public Object{
	public:
		PeriodicWave* get_prototype();
		void set_prototype(PeriodicWave*);
		PeriodicWave();
	};

	class PermissionRequest: public DeferredPermissionRequest {
	public:
		String* get_state();
		void defer();
		PermissionRequest* get_prototype();
		void set_prototype(PermissionRequest*);
		PermissionRequest();
	};

	class PermissionRequestedEvent: public Event {
	public:
		PermissionRequest* get_permissionRequest();
		PermissionRequestedEvent* get_prototype();
		void set_prototype(PermissionRequestedEvent*);
		PermissionRequestedEvent();
	};

	class Plugin: public Object{
	public:
		String* get_description();
		String* get_filename();
		double get_length();
		String* get_name();
		String* get_version();
		MimeType* item(double index);
		MimeType* namedItem(const String& type);
		MimeType*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<MimeType*>(this, 0)[index];
		}
		MimeType* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<MimeType*>(this, 0)[index];
		}
		Plugin* get_prototype();
		void set_prototype(Plugin*);
		Plugin();
	};

	class PluginArray: public Object{
	public:
		double get_length();
		Plugin* item(double index);
		Plugin* namedItem(const String& name);
		void refresh();
		void refresh(bool reload);
		Plugin*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Plugin*>(this, 0)[index];
		}
		Plugin* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Plugin*>(this, 0)[index];
		}
		PluginArray* get_prototype();
		void set_prototype(PluginArray*);
		PluginArray();
	};

	class PointerEvent: public MouseEvent {
	public:
		template<class ReturnType = Object*> ReturnType get_currentPoint();
		double get_height();
		double get_hwTimestamp();
		template<class ReturnType = Object*> ReturnType get_intermediatePoints();
		bool get_isPrimary();
		double get_pointerId();
		template<class ReturnType = Object*> ReturnType get_pointerType();
		double get_pressure();
		double get_rotation();
		double get_tiltX();
		double get_tiltY();
		double get_width();
		void getCurrentPoint(Element* element);
		void getIntermediatePoints(Element* element);
		void initPointerEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, double buttonArg, EventTarget* relatedTargetArg, double offsetXArg, double offsetYArg, double widthArg, double heightArg, double pressure, double rotation, double tiltX, double tiltY, double pointerIdArg, Object* pointerType, double hwTimestampArg, bool isPrimary);
		PointerEvent* get_prototype();
		void set_prototype(PointerEvent*);
		PointerEvent(const String& typeArg);
		PointerEvent(const String& typeArg, PointerEventInit* eventInitDict);
	};

	class PopStateEvent: public Event {
	public:
		template<class ReturnType = Object*> ReturnType get_state();
		PopStateEvent* get_prototype();
		void set_prototype(PopStateEvent*);
		PopStateEvent(const String& type);
		PopStateEvent(const String& type, PopStateEventInit* eventInitDict);
	};

	class Position: public Object{
	public:
		Coordinates* get_coords();
		double get_timestamp();
		Position* get_prototype();
		void set_prototype(Position*);
		Position();
	};

	class PositionError: public Object{
	public:
		double get_code();
		String* get_message();
		String* toString();
		PositionError* get_prototype();
		void set_prototype(PositionError*);
		PositionError();
		double get_PERMISSION_DENIED();
		double get_POSITION_UNAVAILABLE();
		double get_TIMEOUT();
	};

	class ProcessingInstruction: public CharacterData {
	public:
		String* get_target();
		ProcessingInstruction* get_prototype();
		void set_prototype(ProcessingInstruction*);
		ProcessingInstruction();
	};

	class PromiseRejectionEvent: public Event {
	public:
		Promise* get_promise();
		template<class ReturnType = Object*> ReturnType get_reason();
	};

	class PromiseRejectionEventInit: public EventInit {
	public:
		Promise* get_promise();
		void set_promise(Promise*);
		template<class ReturnType = Object*> ReturnType get_reason();
		void set_reason(Object*);
	};

	class PushManager: public Object{
	public:
		ReadonlyArray<String>* get_supportedContentEncodings();
		Promise* getSubscription();
		Promise* permissionState();
		Promise* permissionState(PushSubscriptionOptionsInit* options);
		Promise* subscribe();
		Promise* subscribe(PushSubscriptionOptionsInit* options);
		PushManager* get_prototype();
		void set_prototype(PushManager*);
		PushManager();
	};

	class PushSubscription: public Object{
	public:
		String* get_endpoint();
		double get_expirationTime();
		PushSubscriptionOptions* get_options();
		template<class ReturnType = Object*> ReturnType toJSON();
		Promise* unsubscribe();
		PushSubscription* get_prototype();
		void set_prototype(PushSubscription*);
		PushSubscription();
	};

	class PushSubscriptionOptions: public Object{
	public:
		ArrayBuffer* get_applicationServerKey();
		bool get_userVisibleOnly();
		PushSubscriptionOptions* get_prototype();
		void set_prototype(PushSubscriptionOptions*);
		PushSubscriptionOptions();
	};

	class RTCDTMFToneChangeEvent: public Event {
	public:
		String* get_tone();
		RTCDTMFToneChangeEvent* get_prototype();
		void set_prototype(RTCDTMFToneChangeEvent*);
		RTCDTMFToneChangeEvent(const String& typeArg, RTCDTMFToneChangeEventInit* eventInitDict);
	};

	class RTCDtlsTransportEventMap: public Object{
	public:
		RTCDtlsTransportStateChangedEvent* get_dtlsstatechange();
		void set_dtlsstatechange(RTCDtlsTransportStateChangedEvent*);
		Event* get_error();
		void set_error(Event*);
	};

	class RTCStatsProvider: public EventTarget {
	public:
		Promise* getStats();
		Promise* msGetStats();
		RTCStatsProvider* get_prototype();
		void set_prototype(RTCStatsProvider*);
		RTCStatsProvider();
	};

	class RTCDtlsTransport: public RTCStatsProvider {
	public:
		EventListener* get_ondtlsstatechange();
		void set_ondtlsstatechange(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		String* get_state();
		RTCIceTransport* get_transport();
		RTCDtlsParameters* getLocalParameters();
		Array* getRemoteCertificates();
		RTCDtlsParameters* getRemoteParameters();
		void start(RTCDtlsParameters* remoteParameters);
		void stop();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		RTCDtlsTransport* get_prototype();
		void set_prototype(RTCDtlsTransport*);
		RTCDtlsTransport(RTCIceTransport* transport);
	};

	class RTCDtlsTransportStateChangedEvent: public Event {
	public:
		String* get_state();
		RTCDtlsTransportStateChangedEvent* get_prototype();
		void set_prototype(RTCDtlsTransportStateChangedEvent*);
		RTCDtlsTransportStateChangedEvent();
	};

	class RTCDtmfSenderEventMap: public Object{
	public:
		RTCDTMFToneChangeEvent* get_tonechange();
		void set_tonechange(RTCDTMFToneChangeEvent*);
	};

	class RTCDtmfSender: public EventTarget {
	public:
		bool get_canInsertDTMF();
		double get_duration();
		double get_interToneGap();
		EventListener* get_ontonechange();
		void set_ontonechange(EventListener*);
		RTCRtpSender* get_sender();
		String* get_toneBuffer();
		void insertDTMF(const String& tones);
		void insertDTMF(const String& tones, double duration);
		void insertDTMF(const String& tones, double duration, double interToneGap);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		RTCDtmfSender* get_prototype();
		void set_prototype(RTCDtmfSender*);
		RTCDtmfSender(RTCRtpSender* sender);
	};

	class RTCIceCandidate: public Object{
	public:
		String* get_candidate();
		void set_candidate(const String&);
		double get_sdpMLineIndex();
		void set_sdpMLineIndex(double);
		String* get_sdpMid();
		void set_sdpMid(const String&);
		template<class ReturnType = Object*> ReturnType toJSON();
		RTCIceCandidate* get_prototype();
		void set_prototype(RTCIceCandidate*);
		RTCIceCandidate();
		RTCIceCandidate(RTCIceCandidateInit* candidateInitDict);
	};

	class RTCIceCandidatePairChangedEvent: public Event {
	public:
		RTCIceCandidatePair* get_pair();
		RTCIceCandidatePairChangedEvent* get_prototype();
		void set_prototype(RTCIceCandidatePairChangedEvent*);
		RTCIceCandidatePairChangedEvent();
	};

	class RTCIceGathererEventMap: public Object{
	public:
		Event* get_error();
		void set_error(Event*);
		RTCIceGathererEvent* get_localcandidate();
		void set_localcandidate(RTCIceGathererEvent*);
	};

	class RTCIceGatherer: public RTCStatsProvider {
	public:
		String* get_component();
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onlocalcandidate();
		void set_onlocalcandidate(EventListener*);
		RTCIceGatherer* createAssociatedGatherer();
		Array* getLocalCandidates();
		RTCIceParameters* getLocalParameters();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		RTCIceGatherer* get_prototype();
		void set_prototype(RTCIceGatherer*);
		RTCIceGatherer(RTCIceGatherOptions* options);
	};

	class RTCIceGathererEvent: public Event {
	public:
		RTCIceCandidateDictionary* get_candidate();
		RTCIceGathererEvent* get_prototype();
		void set_prototype(RTCIceGathererEvent*);
		RTCIceGathererEvent();
	};

	class RTCIceTransportEventMap: public Object{
	public:
		RTCIceCandidatePairChangedEvent* get_candidatepairchange();
		void set_candidatepairchange(RTCIceCandidatePairChangedEvent*);
		RTCIceTransportStateChangedEvent* get_icestatechange();
		void set_icestatechange(RTCIceTransportStateChangedEvent*);
	};

	class RTCIceTransport: public RTCStatsProvider {
	public:
		String* get_component();
		RTCIceGatherer* get_iceGatherer();
		EventListener* get_oncandidatepairchange();
		void set_oncandidatepairchange(EventListener*);
		EventListener* get_onicestatechange();
		void set_onicestatechange(EventListener*);
		String* get_role();
		String* get_state();
		void addRemoteCandidate(RTCIceCandidateDictionary* remoteCandidate);
		void addRemoteCandidate(RTCIceCandidateComplete* remoteCandidate);
		RTCIceTransport* createAssociatedTransport();
		RTCIceCandidatePair* getNominatedCandidatePair();
		Array* getRemoteCandidates();
		RTCIceParameters* getRemoteParameters();
		void setRemoteCandidates(Array* remoteCandidates);
		void start(RTCIceGatherer* gatherer, RTCIceParameters* remoteParameters);
		void stop();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		RTCIceTransport* get_prototype();
		void set_prototype(RTCIceTransport*);
		RTCIceTransport();
	};

	class RTCIceTransportStateChangedEvent: public Event {
	public:
		String* get_state();
		RTCIceTransportStateChangedEvent* get_prototype();
		void set_prototype(RTCIceTransportStateChangedEvent*);
		RTCIceTransportStateChangedEvent();
	};

	class RTCPeerConnectionEventMap: public Object{
	public:
		MediaStreamEvent* get_addstream();
		void set_addstream(MediaStreamEvent*);
		RTCPeerConnectionIceEvent* get_icecandidate();
		void set_icecandidate(RTCPeerConnectionIceEvent*);
		Event* get_iceconnectionstatechange();
		void set_iceconnectionstatechange(Event*);
		Event* get_icegatheringstatechange();
		void set_icegatheringstatechange(Event*);
		Event* get_negotiationneeded();
		void set_negotiationneeded(Event*);
		MediaStreamEvent* get_removestream();
		void set_removestream(MediaStreamEvent*);
		Event* get_signalingstatechange();
		void set_signalingstatechange(Event*);
	};

	class RTCPeerConnection: public EventTarget {
	public:
		bool get_canTrickleIceCandidates();
		String* get_iceConnectionState();
		String* get_iceGatheringState();
		RTCSessionDescription* get_localDescription();
		EventListener* get_onaddstream();
		void set_onaddstream(EventListener*);
		EventListener* get_onicecandidate();
		void set_onicecandidate(EventListener*);
		EventListener* get_oniceconnectionstatechange();
		void set_oniceconnectionstatechange(EventListener*);
		EventListener* get_onicegatheringstatechange();
		void set_onicegatheringstatechange(EventListener*);
		EventListener* get_onnegotiationneeded();
		void set_onnegotiationneeded(EventListener*);
		EventListener* get_onremovestream();
		void set_onremovestream(EventListener*);
		EventListener* get_onsignalingstatechange();
		void set_onsignalingstatechange(EventListener*);
		RTCSessionDescription* get_remoteDescription();
		String* get_signalingState();
		Promise* addIceCandidate(RTCIceCandidateInit* candidate);
		Promise* addIceCandidate(RTCIceCandidate* candidate);
		void addStream(MediaStream* stream);
		void close();
		Promise* createAnswer();
		Promise* createAnswer(RTCOfferOptions* options);
		Promise* createOffer();
		Promise* createOffer(RTCOfferOptions* options);
		RTCConfiguration* getConfiguration();
		Array* getLocalStreams();
		Array* getRemoteStreams();
		Promise* getStats(MediaStreamTrack* selector);
		Promise* getStats(MediaStreamTrack* selector, EventListener* successCallback);
		Promise* getStats(MediaStreamTrack* selector, EventListener* successCallback, EventListener* failureCallback);
		MediaStream* getStreamById(const String& streamId);
		void removeStream(MediaStream* stream);
		Promise* setLocalDescription(RTCSessionDescriptionInit* description);
		Promise* setRemoteDescription(RTCSessionDescriptionInit* description);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		RTCPeerConnection* get_prototype();
		void set_prototype(RTCPeerConnection*);
		RTCPeerConnection(RTCConfiguration* configuration);
	};

	class RTCPeerConnectionIceEvent: public Event {
	public:
		RTCIceCandidate* get_candidate();
		RTCPeerConnectionIceEvent* get_prototype();
		void set_prototype(RTCPeerConnectionIceEvent*);
		RTCPeerConnectionIceEvent(const String& type, RTCPeerConnectionIceEventInit* eventInitDict);
	};

	class RTCRtpReceiverEventMap: public Object{
	public:
		Event* get_error();
		void set_error(Event*);
		Event* get_msdecodercapacitychange();
		void set_msdecodercapacitychange(Event*);
		Event* get_msdsh();
		void set_msdsh(Event*);
	};

	class RTCRtpReceiver: public RTCStatsProvider {
	public:
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onmsdecodercapacitychange();
		void set_onmsdecodercapacitychange(EventListener*);
		EventListener* get_onmsdsh();
		void set_onmsdsh(EventListener*);
		RTCDtlsTransport* get_rtcpTransport();
		MediaStreamTrack* get_track();
		RTCDtlsTransport* get_transport();
		Array* getContributingSources();
		void receive(RTCRtpParameters* parameters);
		void requestSendCSRC(double csrc);
		void setTransport(RTCDtlsTransport* transport);
		void setTransport(RTCDtlsTransport* transport, RTCDtlsTransport* rtcpTransport);
		void setTransport(RTCSrtpSdesTransport* transport);
		void setTransport(RTCSrtpSdesTransport* transport, RTCDtlsTransport* rtcpTransport);
		void stop();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		RTCRtpReceiver* get_prototype();
		void set_prototype(RTCRtpReceiver*);
		RTCRtpReceiver(RTCDtlsTransport* transport, const String& kind);
		RTCRtpReceiver(RTCDtlsTransport* transport, const String& kind, RTCDtlsTransport* rtcpTransport);
		RTCRtpReceiver(RTCSrtpSdesTransport* transport, const String& kind);
		RTCRtpReceiver(RTCSrtpSdesTransport* transport, const String& kind, RTCDtlsTransport* rtcpTransport);
		static RTCRtpCapabilities* getCapabilities() [[cheerp::static]];
		static RTCRtpCapabilities* getCapabilities(const String& kind) [[cheerp::static]];
	};

	class RTCRtpSenderEventMap: public Object{
	public:
		Event* get_error();
		void set_error(Event*);
		RTCSsrcConflictEvent* get_ssrcconflict();
		void set_ssrcconflict(RTCSsrcConflictEvent*);
	};

	class RTCRtpSender: public RTCStatsProvider {
	public:
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onssrcconflict();
		void set_onssrcconflict(EventListener*);
		RTCDtlsTransport* get_rtcpTransport();
		MediaStreamTrack* get_track();
		RTCDtlsTransport* get_transport();
		void send(RTCRtpParameters* parameters);
		void setTrack(MediaStreamTrack* track);
		void setTransport(RTCDtlsTransport* transport);
		void setTransport(RTCDtlsTransport* transport, RTCDtlsTransport* rtcpTransport);
		void setTransport(RTCSrtpSdesTransport* transport);
		void setTransport(RTCSrtpSdesTransport* transport, RTCDtlsTransport* rtcpTransport);
		void stop();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		RTCRtpSender* get_prototype();
		void set_prototype(RTCRtpSender*);
		RTCRtpSender(MediaStreamTrack* track, RTCDtlsTransport* transport);
		RTCRtpSender(MediaStreamTrack* track, RTCDtlsTransport* transport, RTCDtlsTransport* rtcpTransport);
		RTCRtpSender(MediaStreamTrack* track, RTCSrtpSdesTransport* transport);
		RTCRtpSender(MediaStreamTrack* track, RTCSrtpSdesTransport* transport, RTCDtlsTransport* rtcpTransport);
		static RTCRtpCapabilities* getCapabilities() [[cheerp::static]];
		static RTCRtpCapabilities* getCapabilities(const String& kind) [[cheerp::static]];
	};

	class RTCSessionDescription: public Object{
	public:
		String* get_sdp();
		void set_sdp(const String&);
		String* get_type();
		void set_type(const String&);
		template<class ReturnType = Object*> ReturnType toJSON();
		RTCSessionDescription* get_prototype();
		void set_prototype(RTCSessionDescription*);
		RTCSessionDescription();
		RTCSessionDescription(RTCSessionDescriptionInit* descriptionInitDict);
	};

	class RTCSrtpSdesTransportEventMap: public Object{
	public:
		Event* get_error();
		void set_error(Event*);
	};

	class RTCSrtpSdesTransport: public EventTarget {
	public:
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		RTCIceTransport* get_transport();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		RTCSrtpSdesTransport* get_prototype();
		void set_prototype(RTCSrtpSdesTransport*);
		RTCSrtpSdesTransport(RTCIceTransport* transport, RTCSrtpSdesParameters* encryptParameters, RTCSrtpSdesParameters* decryptParameters);
		static Array* getLocalParameters() [[cheerp::static]];
	};

	class RTCSsrcConflictEvent: public Event {
	public:
		double get_ssrc();
		RTCSsrcConflictEvent* get_prototype();
		void set_prototype(RTCSsrcConflictEvent*);
		RTCSsrcConflictEvent();
	};

	class RandomSource: public Object{
	public:
		template<class T> T* getRandomValues(T* array);
		RandomSource* get_prototype();
		void set_prototype(RandomSource*);
		RandomSource();
	};

	class Range: public Object{
	public:
		bool get_collapsed();
		Node* get_commonAncestorContainer();
		Node* get_endContainer();
		double get_endOffset();
		Node* get_startContainer();
		double get_startOffset();
		DocumentFragment* cloneContents();
		Range* cloneRange();
		void collapse();
		void collapse(bool toStart);
		double compareBoundaryPoints(double how, Range* sourceRange);
		DocumentFragment* createContextualFragment(const String& fragment);
		void deleteContents();
		void detach();
		DocumentFragment* extractContents();
		ClientRect* getBoundingClientRect();
		ClientRectList* getClientRects();
		void insertNode(Node* node);
		bool isPointInRange(Node* node, double offset);
		void selectNode(Node* node);
		void selectNodeContents(Node* node);
		void setEnd(Node* node, double offset);
		void setEndAfter(Node* node);
		void setEndBefore(Node* node);
		void setStart(Node* node, double offset);
		void setStartAfter(Node* node);
		void setStartBefore(Node* node);
		void surroundContents(Node* newParent);
		String* toString();
		Range* get_prototype();
		void set_prototype(Range*);
		Range();
		double get_END_TO_END();
		double get_END_TO_START();
		double get_START_TO_END();
		double get_START_TO_START();
	};

	class ReadableStream: public Object{
	public:
		bool get_locked();
		Promise* cancel();
		ReadableStreamReader* getReader();
		ReadableStream* get_prototype();
		void set_prototype(ReadableStream*);
		ReadableStream();
	};

	class ReadableStreamReader: public Object{
	public:
		Promise* cancel();
		Promise* read();
		void releaseLock();
		ReadableStreamReader* get_prototype();
		void set_prototype(ReadableStreamReader*);
		ReadableStreamReader();
	};

	class Request: public Body {
	public:
		String* get_cache();
		String* get_credentials();
		String* get_destination();
		Headers* get_headers();
		String* get_integrity();
		bool get_keepalive();
		String* get_method();
		String* get_mode();
		String* get_redirect();
		String* get_referrer();
		String* get_referrerPolicy();
		AbortSignal* get_signal();
		String* get_type();
		String* get_url();
		Request* clone();
		Request* get_prototype();
		void set_prototype(Request*);
		Request(Request* input);
		Request(Request* input, RequestInit* init);
		Request(const String& input);
		Request(const String& input, RequestInit* init);
	};

	class Response: public Body {
	public:
		ReadableStream* get_body();
		Headers* get_headers();
		bool get_ok();
		bool get_redirected();
		double get_status();
		String* get_statusText();
		String* get_type();
		String* get_url();
		Response* clone();
		Response* get_prototype();
		void set_prototype(Response*);
		Response();
		Response(Blob* body);
		Response(Blob* body, ResponseInit* init);
		Response(Int8Array* body);
		Response(Int8Array* body, ResponseInit* init);
		Response(Int16Array* body);
		Response(Int16Array* body, ResponseInit* init);
		Response(Int32Array* body);
		Response(Int32Array* body, ResponseInit* init);
		Response(Uint8Array* body);
		Response(Uint8Array* body, ResponseInit* init);
		Response(Uint16Array* body);
		Response(Uint16Array* body, ResponseInit* init);
		Response(Uint32Array* body);
		Response(Uint32Array* body, ResponseInit* init);
		Response(Uint8ClampedArray* body);
		Response(Uint8ClampedArray* body, ResponseInit* init);
		Response(Float32Array* body);
		Response(Float32Array* body, ResponseInit* init);
		Response(Float64Array* body);
		Response(Float64Array* body, ResponseInit* init);
		Response(DataView* body);
		Response(DataView* body, ResponseInit* init);
		Response(ArrayBuffer* body);
		Response(ArrayBuffer* body, ResponseInit* init);
		Response(FormData* body);
		Response(FormData* body, ResponseInit* init);
		Response(const String& body);
		Response(const String& body, ResponseInit* init);
		static Response* error() [[cheerp::static]];
		static Response* redirect(const String& url) [[cheerp::static]];
		static Response* redirect(const String& url, double status) [[cheerp::static]];
	};

	class SVGElement: public Element , public ElementCSSInlineStyle {
	public:
		template<class ReturnType = Object*> ReturnType get_className();
		EventListener* get_onclick();
		void set_onclick(EventListener*);
		EventListener* get_ondblclick();
		void set_ondblclick(EventListener*);
		EventListener* get_onfocusin();
		void set_onfocusin(EventListener*);
		EventListener* get_onfocusout();
		void set_onfocusout(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onmousedown();
		void set_onmousedown(EventListener*);
		EventListener* get_onmousemove();
		void set_onmousemove(EventListener*);
		EventListener* get_onmouseout();
		void set_onmouseout(EventListener*);
		EventListener* get_onmouseover();
		void set_onmouseover(EventListener*);
		EventListener* get_onmouseup();
		void set_onmouseup(EventListener*);
		SVGSVGElement* get_ownerSVGElement();
		SVGElement* get_viewportElement();
		String* get_xmlbase();
		void set_xmlbase(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGElement* get_prototype();
		void set_prototype(SVGElement*);
		SVGElement();
	};

	class [[cheerp::client_layout]] SVGTests{
	public:
		SVGStringList* get_requiredExtensions();
		SVGStringList* get_requiredFeatures();
		SVGStringList* get_systemLanguage();
		bool hasExtension(const String& extension);
	};

	class SVGGraphicsElement: public SVGElement , public SVGTests {
	public:
		SVGElement* get_farthestViewportElement();
		SVGElement* get_nearestViewportElement();
		SVGAnimatedTransformList* get_transform();
		SVGRect* getBBox();
		SVGMatrix* getCTM();
		SVGMatrix* getScreenCTM();
		SVGMatrix* getTransformToElement(SVGElement* element);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGGraphicsElement* get_prototype();
		void set_prototype(SVGGraphicsElement*);
		SVGGraphicsElement();
	};

	class [[cheerp::client_layout]] SVGURIReference{
	public:
		SVGAnimatedString* get_href();
	};

	class SVGAElement: public SVGGraphicsElement , public SVGURIReference {
	public:
		SVGAnimatedString* get_target();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGAElement* get_prototype();
		void set_prototype(SVGAElement*);
		SVGAElement();
	};

	class SVGAngle: public Object{
	public:
		double get_unitType();
		double get_value();
		void set_value(double);
		String* get_valueAsString();
		void set_valueAsString(const String&);
		double get_valueInSpecifiedUnits();
		void set_valueInSpecifiedUnits(double);
		void convertToSpecifiedUnits(double unitType);
		void newValueSpecifiedUnits(double unitType, double valueInSpecifiedUnits);
		SVGAngle* get_prototype();
		void set_prototype(SVGAngle*);
		SVGAngle();
		double get_SVG_ANGLETYPE_DEG();
		double get_SVG_ANGLETYPE_GRAD();
		double get_SVG_ANGLETYPE_RAD();
		double get_SVG_ANGLETYPE_UNKNOWN();
		double get_SVG_ANGLETYPE_UNSPECIFIED();
	};

	class SVGAnimatedAngle: public Object{
	public:
		SVGAngle* get_animVal();
		SVGAngle* get_baseVal();
		SVGAnimatedAngle* get_prototype();
		void set_prototype(SVGAnimatedAngle*);
		SVGAnimatedAngle();
	};

	class SVGAnimatedBoolean: public Object{
	public:
		bool get_animVal();
		bool get_baseVal();
		void set_baseVal(bool);
		SVGAnimatedBoolean* get_prototype();
		void set_prototype(SVGAnimatedBoolean*);
		SVGAnimatedBoolean();
	};

	class SVGAnimatedEnumeration: public Object{
	public:
		double get_animVal();
		double get_baseVal();
		void set_baseVal(double);
		SVGAnimatedEnumeration* get_prototype();
		void set_prototype(SVGAnimatedEnumeration*);
		SVGAnimatedEnumeration();
	};

	class SVGAnimatedInteger: public Object{
	public:
		double get_animVal();
		double get_baseVal();
		void set_baseVal(double);
		SVGAnimatedInteger* get_prototype();
		void set_prototype(SVGAnimatedInteger*);
		SVGAnimatedInteger();
	};

	class SVGAnimatedLength: public Object{
	public:
		SVGLength* get_animVal();
		SVGLength* get_baseVal();
		SVGAnimatedLength* get_prototype();
		void set_prototype(SVGAnimatedLength*);
		SVGAnimatedLength();
	};

	class SVGAnimatedLengthList: public Object{
	public:
		SVGLengthList* get_animVal();
		SVGLengthList* get_baseVal();
		SVGAnimatedLengthList* get_prototype();
		void set_prototype(SVGAnimatedLengthList*);
		SVGAnimatedLengthList();
	};

	class SVGAnimatedNumber: public Object{
	public:
		double get_animVal();
		double get_baseVal();
		void set_baseVal(double);
		SVGAnimatedNumber* get_prototype();
		void set_prototype(SVGAnimatedNumber*);
		SVGAnimatedNumber();
	};

	class SVGAnimatedNumberList: public Object{
	public:
		SVGNumberList* get_animVal();
		SVGNumberList* get_baseVal();
		SVGAnimatedNumberList* get_prototype();
		void set_prototype(SVGAnimatedNumberList*);
		SVGAnimatedNumberList();
	};

	class [[cheerp::client_layout]] SVGAnimatedPoints{
	public:
		SVGPointList* get_animatedPoints();
		SVGPointList* get_points();
	};

	class SVGAnimatedPreserveAspectRatio: public Object{
	public:
		SVGPreserveAspectRatio* get_animVal();
		SVGPreserveAspectRatio* get_baseVal();
		SVGAnimatedPreserveAspectRatio* get_prototype();
		void set_prototype(SVGAnimatedPreserveAspectRatio*);
		SVGAnimatedPreserveAspectRatio();
	};

	class SVGAnimatedRect: public Object{
	public:
		SVGRect* get_animVal();
		SVGRect* get_baseVal();
		SVGAnimatedRect* get_prototype();
		void set_prototype(SVGAnimatedRect*);
		SVGAnimatedRect();
	};

	class SVGAnimatedString: public Object{
	public:
		String* get_animVal();
		String* get_baseVal();
		void set_baseVal(const String&);
		SVGAnimatedString* get_prototype();
		void set_prototype(SVGAnimatedString*);
		SVGAnimatedString();
	};

	class SVGAnimatedTransformList: public Object{
	public:
		SVGTransformList* get_animVal();
		SVGTransformList* get_baseVal();
		SVGAnimatedTransformList* get_prototype();
		void set_prototype(SVGAnimatedTransformList*);
		SVGAnimatedTransformList();
	};

	class SVGCircleElement: public SVGGraphicsElement {
	public:
		SVGAnimatedLength* get_cx();
		SVGAnimatedLength* get_cy();
		SVGAnimatedLength* get_r();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGCircleElement* get_prototype();
		void set_prototype(SVGCircleElement*);
		SVGCircleElement();
	};

	class [[cheerp::client_layout]] SVGUnitTypes{
	public:
		double get_SVG_UNIT_TYPE_OBJECTBOUNDINGBOX();
		double get_SVG_UNIT_TYPE_UNKNOWN();
		double get_SVG_UNIT_TYPE_USERSPACEONUSE();
	};

	class SVGClipPathElement: public SVGGraphicsElement , public SVGUnitTypes {
	public:
		SVGAnimatedEnumeration* get_clipPathUnits();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGClipPathElement* get_prototype();
		void set_prototype(SVGClipPathElement*);
		SVGClipPathElement();
	};

	class SVGComponentTransferFunctionElement: public SVGElement {
	public:
		SVGAnimatedNumber* get_amplitude();
		SVGAnimatedNumber* get_exponent();
		SVGAnimatedNumber* get_intercept();
		SVGAnimatedNumber* get_offset();
		SVGAnimatedNumber* get_slope();
		SVGAnimatedNumberList* get_tableValues();
		SVGAnimatedEnumeration* get_type();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGComponentTransferFunctionElement* get_prototype();
		void set_prototype(SVGComponentTransferFunctionElement*);
		SVGComponentTransferFunctionElement();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_GAMMA();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_LINEAR();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_TABLE();
		double get_SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN();
	};

	class SVGDefsElement: public SVGGraphicsElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGDefsElement* get_prototype();
		void set_prototype(SVGDefsElement*);
		SVGDefsElement();
	};

	class SVGDescElement: public SVGElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGDescElement* get_prototype();
		void set_prototype(SVGDescElement*);
		SVGDescElement();
	};

	class SVGElementEventMap: public ElementEventMap {
	public:
		MouseEvent* get_click();
		void set_click(MouseEvent*);
		MouseEvent* get_dblclick();
		void set_dblclick(MouseEvent*);
		FocusEvent* get_focusin();
		void set_focusin(FocusEvent*);
		FocusEvent* get_focusout();
		void set_focusout(FocusEvent*);
		Event* get_load();
		void set_load(Event*);
		MouseEvent* get_mousedown();
		void set_mousedown(MouseEvent*);
		MouseEvent* get_mousemove();
		void set_mousemove(MouseEvent*);
		MouseEvent* get_mouseout();
		void set_mouseout(MouseEvent*);
		MouseEvent* get_mouseover();
		void set_mouseover(MouseEvent*);
		MouseEvent* get_mouseup();
		void set_mouseup(MouseEvent*);
	};

	class SVGElementInstance: public EventTarget {
	public:
		SVGElementInstanceList* get_childNodes();
		SVGElement* get_correspondingElement();
		SVGUseElement* get_correspondingUseElement();
		SVGElementInstance* get_firstChild();
		SVGElementInstance* get_lastChild();
		SVGElementInstance* get_nextSibling();
		SVGElementInstance* get_parentNode();
		SVGElementInstance* get_previousSibling();
		SVGElementInstance* get_prototype();
		void set_prototype(SVGElementInstance*);
		SVGElementInstance();
	};

	class SVGElementInstanceList: public Object{
	public:
		double get_length();
		SVGElementInstance* item(double index);
		SVGElementInstanceList* get_prototype();
		void set_prototype(SVGElementInstanceList*);
		SVGElementInstanceList();
	};

	class SVGEllipseElement: public SVGGraphicsElement {
	public:
		SVGAnimatedLength* get_cx();
		SVGAnimatedLength* get_cy();
		SVGAnimatedLength* get_rx();
		SVGAnimatedLength* get_ry();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGEllipseElement* get_prototype();
		void set_prototype(SVGEllipseElement*);
		SVGEllipseElement();
	};

	class [[cheerp::client_layout]] SVGFilterPrimitiveStandardAttributes{
	public:
		SVGAnimatedLength* get_height();
		SVGAnimatedString* get_result();
		SVGAnimatedLength* get_width();
		SVGAnimatedLength* get_x();
		SVGAnimatedLength* get_y();
	};

	class SVGFEBlendElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		SVGAnimatedString* get_in2();
		SVGAnimatedEnumeration* get_mode();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEBlendElement* get_prototype();
		void set_prototype(SVGFEBlendElement*);
		SVGFEBlendElement();
		double get_SVG_FEBLEND_MODE_COLOR();
		double get_SVG_FEBLEND_MODE_COLOR_BURN();
		double get_SVG_FEBLEND_MODE_COLOR_DODGE();
		double get_SVG_FEBLEND_MODE_DARKEN();
		double get_SVG_FEBLEND_MODE_DIFFERENCE();
		double get_SVG_FEBLEND_MODE_EXCLUSION();
		double get_SVG_FEBLEND_MODE_HARD_LIGHT();
		double get_SVG_FEBLEND_MODE_HUE();
		double get_SVG_FEBLEND_MODE_LIGHTEN();
		double get_SVG_FEBLEND_MODE_LUMINOSITY();
		double get_SVG_FEBLEND_MODE_MULTIPLY();
		double get_SVG_FEBLEND_MODE_NORMAL();
		double get_SVG_FEBLEND_MODE_OVERLAY();
		double get_SVG_FEBLEND_MODE_SATURATION();
		double get_SVG_FEBLEND_MODE_SCREEN();
		double get_SVG_FEBLEND_MODE_SOFT_LIGHT();
		double get_SVG_FEBLEND_MODE_UNKNOWN();
	};

	class SVGFEColorMatrixElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		SVGAnimatedEnumeration* get_type();
		SVGAnimatedNumberList* get_values();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEColorMatrixElement* get_prototype();
		void set_prototype(SVGFEColorMatrixElement*);
		SVGFEColorMatrixElement();
		double get_SVG_FECOLORMATRIX_TYPE_HUEROTATE();
		double get_SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA();
		double get_SVG_FECOLORMATRIX_TYPE_MATRIX();
		double get_SVG_FECOLORMATRIX_TYPE_SATURATE();
		double get_SVG_FECOLORMATRIX_TYPE_UNKNOWN();
	};

	class SVGFEComponentTransferElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEComponentTransferElement* get_prototype();
		void set_prototype(SVGFEComponentTransferElement*);
		SVGFEComponentTransferElement();
	};

	class SVGFECompositeElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		SVGAnimatedString* get_in2();
		SVGAnimatedNumber* get_k1();
		SVGAnimatedNumber* get_k2();
		SVGAnimatedNumber* get_k3();
		SVGAnimatedNumber* get_k4();
		SVGAnimatedEnumeration* get_operator();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFECompositeElement* get_prototype();
		void set_prototype(SVGFECompositeElement*);
		SVGFECompositeElement();
		double get_SVG_FECOMPOSITE_OPERATOR_ARITHMETIC();
		double get_SVG_FECOMPOSITE_OPERATOR_ATOP();
		double get_SVG_FECOMPOSITE_OPERATOR_IN();
		double get_SVG_FECOMPOSITE_OPERATOR_OUT();
		double get_SVG_FECOMPOSITE_OPERATOR_OVER();
		double get_SVG_FECOMPOSITE_OPERATOR_UNKNOWN();
		double get_SVG_FECOMPOSITE_OPERATOR_XOR();
	};

	class SVGFEConvolveMatrixElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_bias();
		SVGAnimatedNumber* get_divisor();
		SVGAnimatedEnumeration* get_edgeMode();
		SVGAnimatedString* get_in1();
		SVGAnimatedNumberList* get_kernelMatrix();
		SVGAnimatedNumber* get_kernelUnitLengthX();
		SVGAnimatedNumber* get_kernelUnitLengthY();
		SVGAnimatedInteger* get_orderX();
		SVGAnimatedInteger* get_orderY();
		SVGAnimatedBoolean* get_preserveAlpha();
		SVGAnimatedInteger* get_targetX();
		SVGAnimatedInteger* get_targetY();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEConvolveMatrixElement* get_prototype();
		void set_prototype(SVGFEConvolveMatrixElement*);
		SVGFEConvolveMatrixElement();
		double get_SVG_EDGEMODE_DUPLICATE();
		double get_SVG_EDGEMODE_NONE();
		double get_SVG_EDGEMODE_UNKNOWN();
		double get_SVG_EDGEMODE_WRAP();
	};

	class SVGFEDiffuseLightingElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_diffuseConstant();
		SVGAnimatedString* get_in1();
		SVGAnimatedNumber* get_kernelUnitLengthX();
		SVGAnimatedNumber* get_kernelUnitLengthY();
		SVGAnimatedNumber* get_surfaceScale();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEDiffuseLightingElement* get_prototype();
		void set_prototype(SVGFEDiffuseLightingElement*);
		SVGFEDiffuseLightingElement();
	};

	class SVGFEDisplacementMapElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		SVGAnimatedString* get_in2();
		SVGAnimatedNumber* get_scale();
		SVGAnimatedEnumeration* get_xChannelSelector();
		SVGAnimatedEnumeration* get_yChannelSelector();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEDisplacementMapElement* get_prototype();
		void set_prototype(SVGFEDisplacementMapElement*);
		SVGFEDisplacementMapElement();
		double get_SVG_CHANNEL_A();
		double get_SVG_CHANNEL_B();
		double get_SVG_CHANNEL_G();
		double get_SVG_CHANNEL_R();
		double get_SVG_CHANNEL_UNKNOWN();
	};

	class SVGFEDistantLightElement: public SVGElement {
	public:
		SVGAnimatedNumber* get_azimuth();
		SVGAnimatedNumber* get_elevation();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEDistantLightElement* get_prototype();
		void set_prototype(SVGFEDistantLightElement*);
		SVGFEDistantLightElement();
	};

	class SVGFEFloodElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEFloodElement* get_prototype();
		void set_prototype(SVGFEFloodElement*);
		SVGFEFloodElement();
	};

	class SVGFEFuncAElement: public SVGComponentTransferFunctionElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEFuncAElement* get_prototype();
		void set_prototype(SVGFEFuncAElement*);
		SVGFEFuncAElement();
	};

	class SVGFEFuncBElement: public SVGComponentTransferFunctionElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEFuncBElement* get_prototype();
		void set_prototype(SVGFEFuncBElement*);
		SVGFEFuncBElement();
	};

	class SVGFEFuncGElement: public SVGComponentTransferFunctionElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEFuncGElement* get_prototype();
		void set_prototype(SVGFEFuncGElement*);
		SVGFEFuncGElement();
	};

	class SVGFEFuncRElement: public SVGComponentTransferFunctionElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEFuncRElement* get_prototype();
		void set_prototype(SVGFEFuncRElement*);
		SVGFEFuncRElement();
	};

	class SVGFEGaussianBlurElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		SVGAnimatedNumber* get_stdDeviationX();
		SVGAnimatedNumber* get_stdDeviationY();
		void setStdDeviation(double stdDeviationX, double stdDeviationY);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEGaussianBlurElement* get_prototype();
		void set_prototype(SVGFEGaussianBlurElement*);
		SVGFEGaussianBlurElement();
	};

	class SVGFEImageElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes , public SVGURIReference {
	public:
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEImageElement* get_prototype();
		void set_prototype(SVGFEImageElement*);
		SVGFEImageElement();
	};

	class SVGFEMergeElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEMergeElement* get_prototype();
		void set_prototype(SVGFEMergeElement*);
		SVGFEMergeElement();
	};

	class SVGFEMergeNodeElement: public SVGElement {
	public:
		SVGAnimatedString* get_in1();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEMergeNodeElement* get_prototype();
		void set_prototype(SVGFEMergeNodeElement*);
		SVGFEMergeNodeElement();
	};

	class SVGFEMorphologyElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		SVGAnimatedEnumeration* get_operator();
		SVGAnimatedNumber* get_radiusX();
		SVGAnimatedNumber* get_radiusY();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEMorphologyElement* get_prototype();
		void set_prototype(SVGFEMorphologyElement*);
		SVGFEMorphologyElement();
		double get_SVG_MORPHOLOGY_OPERATOR_DILATE();
		double get_SVG_MORPHOLOGY_OPERATOR_ERODE();
		double get_SVG_MORPHOLOGY_OPERATOR_UNKNOWN();
	};

	class SVGFEOffsetElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_dx();
		SVGAnimatedNumber* get_dy();
		SVGAnimatedString* get_in1();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEOffsetElement* get_prototype();
		void set_prototype(SVGFEOffsetElement*);
		SVGFEOffsetElement();
	};

	class SVGFEPointLightElement: public SVGElement {
	public:
		SVGAnimatedNumber* get_x();
		SVGAnimatedNumber* get_y();
		SVGAnimatedNumber* get_z();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFEPointLightElement* get_prototype();
		void set_prototype(SVGFEPointLightElement*);
		SVGFEPointLightElement();
	};

	class SVGFESpecularLightingElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		SVGAnimatedNumber* get_kernelUnitLengthX();
		SVGAnimatedNumber* get_kernelUnitLengthY();
		SVGAnimatedNumber* get_specularConstant();
		SVGAnimatedNumber* get_specularExponent();
		SVGAnimatedNumber* get_surfaceScale();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFESpecularLightingElement* get_prototype();
		void set_prototype(SVGFESpecularLightingElement*);
		SVGFESpecularLightingElement();
	};

	class SVGFESpotLightElement: public SVGElement {
	public:
		SVGAnimatedNumber* get_limitingConeAngle();
		SVGAnimatedNumber* get_pointsAtX();
		SVGAnimatedNumber* get_pointsAtY();
		SVGAnimatedNumber* get_pointsAtZ();
		SVGAnimatedNumber* get_specularExponent();
		SVGAnimatedNumber* get_x();
		SVGAnimatedNumber* get_y();
		SVGAnimatedNumber* get_z();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFESpotLightElement* get_prototype();
		void set_prototype(SVGFESpotLightElement*);
		SVGFESpotLightElement();
	};

	class SVGFETileElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedString* get_in1();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFETileElement* get_prototype();
		void set_prototype(SVGFETileElement*);
		SVGFETileElement();
	};

	class SVGFETurbulenceElement: public SVGElement , public SVGFilterPrimitiveStandardAttributes {
	public:
		SVGAnimatedNumber* get_baseFrequencyX();
		SVGAnimatedNumber* get_baseFrequencyY();
		SVGAnimatedInteger* get_numOctaves();
		SVGAnimatedNumber* get_seed();
		SVGAnimatedEnumeration* get_stitchTiles();
		SVGAnimatedEnumeration* get_type();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFETurbulenceElement* get_prototype();
		void set_prototype(SVGFETurbulenceElement*);
		SVGFETurbulenceElement();
		double get_SVG_STITCHTYPE_NOSTITCH();
		double get_SVG_STITCHTYPE_STITCH();
		double get_SVG_STITCHTYPE_UNKNOWN();
		double get_SVG_TURBULENCE_TYPE_FRACTALNOISE();
		double get_SVG_TURBULENCE_TYPE_TURBULENCE();
		double get_SVG_TURBULENCE_TYPE_UNKNOWN();
	};

	class SVGFilterElement: public SVGElement , public SVGUnitTypes , public SVGURIReference {
	public:
		SVGAnimatedInteger* get_filterResX();
		SVGAnimatedInteger* get_filterResY();
		SVGAnimatedEnumeration* get_filterUnits();
		SVGAnimatedLength* get_height();
		SVGAnimatedEnumeration* get_primitiveUnits();
		SVGAnimatedLength* get_width();
		SVGAnimatedLength* get_x();
		SVGAnimatedLength* get_y();
		void setFilterRes(double filterResX, double filterResY);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGFilterElement* get_prototype();
		void set_prototype(SVGFilterElement*);
		SVGFilterElement();
	};

	class [[cheerp::client_layout]] SVGFitToViewBox{
	public:
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
		SVGAnimatedRect* get_viewBox();
	};

	class SVGForeignObjectElement: public SVGGraphicsElement {
	public:
		SVGAnimatedLength* get_height();
		SVGAnimatedLength* get_width();
		SVGAnimatedLength* get_x();
		SVGAnimatedLength* get_y();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGForeignObjectElement* get_prototype();
		void set_prototype(SVGForeignObjectElement*);
		SVGForeignObjectElement();
	};

	class SVGGElement: public SVGGraphicsElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGGElement* get_prototype();
		void set_prototype(SVGGElement*);
		SVGGElement();
	};

	class SVGGradientElement: public SVGElement , public SVGUnitTypes , public SVGURIReference {
	public:
		SVGAnimatedTransformList* get_gradientTransform();
		SVGAnimatedEnumeration* get_gradientUnits();
		SVGAnimatedEnumeration* get_spreadMethod();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGGradientElement* get_prototype();
		void set_prototype(SVGGradientElement*);
		SVGGradientElement();
		double get_SVG_SPREADMETHOD_PAD();
		double get_SVG_SPREADMETHOD_REFLECT();
		double get_SVG_SPREADMETHOD_REPEAT();
		double get_SVG_SPREADMETHOD_UNKNOWN();
	};

	class SVGImageElement: public SVGGraphicsElement , public SVGURIReference {
	public:
		SVGAnimatedLength* get_height();
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
		SVGAnimatedLength* get_width();
		SVGAnimatedLength* get_x();
		SVGAnimatedLength* get_y();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGImageElement* get_prototype();
		void set_prototype(SVGImageElement*);
		SVGImageElement();
	};

	class SVGLength: public Object{
	public:
		double get_unitType();
		double get_value();
		void set_value(double);
		String* get_valueAsString();
		void set_valueAsString(const String&);
		double get_valueInSpecifiedUnits();
		void set_valueInSpecifiedUnits(double);
		void convertToSpecifiedUnits(double unitType);
		void newValueSpecifiedUnits(double unitType, double valueInSpecifiedUnits);
		SVGLength* get_prototype();
		void set_prototype(SVGLength*);
		SVGLength();
		double get_SVG_LENGTHTYPE_CM();
		double get_SVG_LENGTHTYPE_EMS();
		double get_SVG_LENGTHTYPE_EXS();
		double get_SVG_LENGTHTYPE_IN();
		double get_SVG_LENGTHTYPE_MM();
		double get_SVG_LENGTHTYPE_NUMBER();
		double get_SVG_LENGTHTYPE_PC();
		double get_SVG_LENGTHTYPE_PERCENTAGE();
		double get_SVG_LENGTHTYPE_PT();
		double get_SVG_LENGTHTYPE_PX();
		double get_SVG_LENGTHTYPE_UNKNOWN();
	};

	class SVGLengthList: public Object{
	public:
		double get_numberOfItems();
		SVGLength* appendItem(SVGLength* newItem);
		void clear();
		SVGLength* getItem(double index);
		SVGLength* initialize(SVGLength* newItem);
		SVGLength* insertItemBefore(SVGLength* newItem, double index);
		SVGLength* removeItem(double index);
		SVGLength* replaceItem(SVGLength* newItem, double index);
		SVGLengthList* get_prototype();
		void set_prototype(SVGLengthList*);
		SVGLengthList();
	};

	class SVGLineElement: public SVGGraphicsElement {
	public:
		SVGAnimatedLength* get_x1();
		SVGAnimatedLength* get_x2();
		SVGAnimatedLength* get_y1();
		SVGAnimatedLength* get_y2();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGLineElement* get_prototype();
		void set_prototype(SVGLineElement*);
		SVGLineElement();
	};

	class SVGLinearGradientElement: public SVGGradientElement {
	public:
		SVGAnimatedLength* get_x1();
		SVGAnimatedLength* get_x2();
		SVGAnimatedLength* get_y1();
		SVGAnimatedLength* get_y2();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGLinearGradientElement* get_prototype();
		void set_prototype(SVGLinearGradientElement*);
		SVGLinearGradientElement();
	};

	class SVGMarkerElement: public SVGElement , public SVGFitToViewBox {
	public:
		SVGAnimatedLength* get_markerHeight();
		SVGAnimatedEnumeration* get_markerUnits();
		SVGAnimatedLength* get_markerWidth();
		SVGAnimatedAngle* get_orientAngle();
		SVGAnimatedEnumeration* get_orientType();
		SVGAnimatedLength* get_refX();
		SVGAnimatedLength* get_refY();
		void setOrientToAngle(SVGAngle* angle);
		void setOrientToAuto();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGMarkerElement* get_prototype();
		void set_prototype(SVGMarkerElement*);
		SVGMarkerElement();
		double get_SVG_MARKERUNITS_STROKEWIDTH();
		double get_SVG_MARKERUNITS_UNKNOWN();
		double get_SVG_MARKERUNITS_USERSPACEONUSE();
		double get_SVG_MARKER_ORIENT_ANGLE();
		double get_SVG_MARKER_ORIENT_AUTO();
		double get_SVG_MARKER_ORIENT_UNKNOWN();
	};

	class SVGMaskElement: public SVGElement , public SVGTests , public SVGUnitTypes {
	public:
		SVGAnimatedLength* get_height();
		SVGAnimatedEnumeration* get_maskContentUnits();
		SVGAnimatedEnumeration* get_maskUnits();
		SVGAnimatedLength* get_width();
		SVGAnimatedLength* get_x();
		SVGAnimatedLength* get_y();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGMaskElement* get_prototype();
		void set_prototype(SVGMaskElement*);
		SVGMaskElement();
	};

	class SVGMatrix: public Object{
	public:
		double get_a();
		void set_a(double);
		double get_b();
		void set_b(double);
		double get_c();
		void set_c(double);
		double get_d();
		void set_d(double);
		double get_e();
		void set_e(double);
		double get_f();
		void set_f(double);
		SVGMatrix* flipX();
		SVGMatrix* flipY();
		SVGMatrix* inverse();
		SVGMatrix* multiply(SVGMatrix* secondMatrix);
		SVGMatrix* rotate(double angle);
		SVGMatrix* rotateFromVector(double x, double y);
		SVGMatrix* scale(double scaleFactor);
		SVGMatrix* scaleNonUniform(double scaleFactorX, double scaleFactorY);
		SVGMatrix* skewX(double angle);
		SVGMatrix* skewY(double angle);
		SVGMatrix* translate(double x, double y);
		SVGMatrix* get_prototype();
		void set_prototype(SVGMatrix*);
		SVGMatrix();
	};

	class SVGMetadataElement: public SVGElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGMetadataElement* get_prototype();
		void set_prototype(SVGMetadataElement*);
		SVGMetadataElement();
	};

	class SVGNumber: public Object{
	public:
		double get_value();
		void set_value(double);
		SVGNumber* get_prototype();
		void set_prototype(SVGNumber*);
		SVGNumber();
	};

	class SVGNumberList: public Object{
	public:
		double get_numberOfItems();
		SVGNumber* appendItem(SVGNumber* newItem);
		void clear();
		SVGNumber* getItem(double index);
		SVGNumber* initialize(SVGNumber* newItem);
		SVGNumber* insertItemBefore(SVGNumber* newItem, double index);
		SVGNumber* removeItem(double index);
		SVGNumber* replaceItem(SVGNumber* newItem, double index);
		SVGNumberList* get_prototype();
		void set_prototype(SVGNumberList*);
		SVGNumberList();
	};

	class SVGPathElement: public SVGGraphicsElement {
	public:
		SVGPathSegList* get_pathSegList();
		SVGPathSegArcAbs* createSVGPathSegArcAbs(double x, double y, double r1, double r2, double angle, bool largeArcFlag, bool sweepFlag);
		SVGPathSegArcRel* createSVGPathSegArcRel(double x, double y, double r1, double r2, double angle, bool largeArcFlag, bool sweepFlag);
		SVGPathSegClosePath* createSVGPathSegClosePath();
		SVGPathSegCurvetoCubicAbs* createSVGPathSegCurvetoCubicAbs(double x, double y, double x1, double y1, double x2, double y2);
		SVGPathSegCurvetoCubicRel* createSVGPathSegCurvetoCubicRel(double x, double y, double x1, double y1, double x2, double y2);
		SVGPathSegCurvetoCubicSmoothAbs* createSVGPathSegCurvetoCubicSmoothAbs(double x, double y, double x2, double y2);
		SVGPathSegCurvetoCubicSmoothRel* createSVGPathSegCurvetoCubicSmoothRel(double x, double y, double x2, double y2);
		SVGPathSegCurvetoQuadraticAbs* createSVGPathSegCurvetoQuadraticAbs(double x, double y, double x1, double y1);
		SVGPathSegCurvetoQuadraticRel* createSVGPathSegCurvetoQuadraticRel(double x, double y, double x1, double y1);
		SVGPathSegCurvetoQuadraticSmoothAbs* createSVGPathSegCurvetoQuadraticSmoothAbs(double x, double y);
		SVGPathSegCurvetoQuadraticSmoothRel* createSVGPathSegCurvetoQuadraticSmoothRel(double x, double y);
		SVGPathSegLinetoAbs* createSVGPathSegLinetoAbs(double x, double y);
		SVGPathSegLinetoHorizontalAbs* createSVGPathSegLinetoHorizontalAbs(double x);
		SVGPathSegLinetoHorizontalRel* createSVGPathSegLinetoHorizontalRel(double x);
		SVGPathSegLinetoRel* createSVGPathSegLinetoRel(double x, double y);
		SVGPathSegLinetoVerticalAbs* createSVGPathSegLinetoVerticalAbs(double y);
		SVGPathSegLinetoVerticalRel* createSVGPathSegLinetoVerticalRel(double y);
		SVGPathSegMovetoAbs* createSVGPathSegMovetoAbs(double x, double y);
		SVGPathSegMovetoRel* createSVGPathSegMovetoRel(double x, double y);
		double getPathSegAtLength(double distance);
		SVGPoint* getPointAtLength(double distance);
		double getTotalLength();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGPathElement* get_prototype();
		void set_prototype(SVGPathElement*);
		SVGPathElement();
	};

	class SVGPathSeg: public Object{
	public:
		double get_pathSegType();
		String* get_pathSegTypeAsLetter();
		SVGPathSeg* get_prototype();
		void set_prototype(SVGPathSeg*);
		SVGPathSeg();
		double get_PATHSEG_ARC_ABS();
		double get_PATHSEG_ARC_REL();
		double get_PATHSEG_CLOSEPATH();
		double get_PATHSEG_CURVETO_CUBIC_ABS();
		double get_PATHSEG_CURVETO_CUBIC_REL();
		double get_PATHSEG_CURVETO_CUBIC_SMOOTH_ABS();
		double get_PATHSEG_CURVETO_CUBIC_SMOOTH_REL();
		double get_PATHSEG_CURVETO_QUADRATIC_ABS();
		double get_PATHSEG_CURVETO_QUADRATIC_REL();
		double get_PATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS();
		double get_PATHSEG_CURVETO_QUADRATIC_SMOOTH_REL();
		double get_PATHSEG_LINETO_ABS();
		double get_PATHSEG_LINETO_HORIZONTAL_ABS();
		double get_PATHSEG_LINETO_HORIZONTAL_REL();
		double get_PATHSEG_LINETO_REL();
		double get_PATHSEG_LINETO_VERTICAL_ABS();
		double get_PATHSEG_LINETO_VERTICAL_REL();
		double get_PATHSEG_MOVETO_ABS();
		double get_PATHSEG_MOVETO_REL();
		double get_PATHSEG_UNKNOWN();
	};

	class SVGPathSegArcAbs: public SVGPathSeg {
	public:
		double get_angle();
		void set_angle(double);
		bool get_largeArcFlag();
		void set_largeArcFlag(bool);
		double get_r1();
		void set_r1(double);
		double get_r2();
		void set_r2(double);
		bool get_sweepFlag();
		void set_sweepFlag(bool);
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		SVGPathSegArcAbs* get_prototype();
		void set_prototype(SVGPathSegArcAbs*);
		SVGPathSegArcAbs();
	};

	class SVGPathSegArcRel: public SVGPathSeg {
	public:
		double get_angle();
		void set_angle(double);
		bool get_largeArcFlag();
		void set_largeArcFlag(bool);
		double get_r1();
		void set_r1(double);
		double get_r2();
		void set_r2(double);
		bool get_sweepFlag();
		void set_sweepFlag(bool);
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		SVGPathSegArcRel* get_prototype();
		void set_prototype(SVGPathSegArcRel*);
		SVGPathSegArcRel();
	};

	class SVGPathSegClosePath: public SVGPathSeg {
	public:
		SVGPathSegClosePath* get_prototype();
		void set_prototype(SVGPathSegClosePath*);
		SVGPathSegClosePath();
	};

	class SVGPathSegCurvetoCubicAbs: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		double get_x1();
		void set_x1(double);
		double get_x2();
		void set_x2(double);
		double get_y();
		void set_y(double);
		double get_y1();
		void set_y1(double);
		double get_y2();
		void set_y2(double);
		SVGPathSegCurvetoCubicAbs* get_prototype();
		void set_prototype(SVGPathSegCurvetoCubicAbs*);
		SVGPathSegCurvetoCubicAbs();
	};

	class SVGPathSegCurvetoCubicRel: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		double get_x1();
		void set_x1(double);
		double get_x2();
		void set_x2(double);
		double get_y();
		void set_y(double);
		double get_y1();
		void set_y1(double);
		double get_y2();
		void set_y2(double);
		SVGPathSegCurvetoCubicRel* get_prototype();
		void set_prototype(SVGPathSegCurvetoCubicRel*);
		SVGPathSegCurvetoCubicRel();
	};

	class SVGPathSegCurvetoCubicSmoothAbs: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		double get_x2();
		void set_x2(double);
		double get_y();
		void set_y(double);
		double get_y2();
		void set_y2(double);
		SVGPathSegCurvetoCubicSmoothAbs* get_prototype();
		void set_prototype(SVGPathSegCurvetoCubicSmoothAbs*);
		SVGPathSegCurvetoCubicSmoothAbs();
	};

	class SVGPathSegCurvetoCubicSmoothRel: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		double get_x2();
		void set_x2(double);
		double get_y();
		void set_y(double);
		double get_y2();
		void set_y2(double);
		SVGPathSegCurvetoCubicSmoothRel* get_prototype();
		void set_prototype(SVGPathSegCurvetoCubicSmoothRel*);
		SVGPathSegCurvetoCubicSmoothRel();
	};

	class SVGPathSegCurvetoQuadraticAbs: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		double get_x1();
		void set_x1(double);
		double get_y();
		void set_y(double);
		double get_y1();
		void set_y1(double);
		SVGPathSegCurvetoQuadraticAbs* get_prototype();
		void set_prototype(SVGPathSegCurvetoQuadraticAbs*);
		SVGPathSegCurvetoQuadraticAbs();
	};

	class SVGPathSegCurvetoQuadraticRel: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		double get_x1();
		void set_x1(double);
		double get_y();
		void set_y(double);
		double get_y1();
		void set_y1(double);
		SVGPathSegCurvetoQuadraticRel* get_prototype();
		void set_prototype(SVGPathSegCurvetoQuadraticRel*);
		SVGPathSegCurvetoQuadraticRel();
	};

	class SVGPathSegCurvetoQuadraticSmoothAbs: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		SVGPathSegCurvetoQuadraticSmoothAbs* get_prototype();
		void set_prototype(SVGPathSegCurvetoQuadraticSmoothAbs*);
		SVGPathSegCurvetoQuadraticSmoothAbs();
	};

	class SVGPathSegCurvetoQuadraticSmoothRel: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		SVGPathSegCurvetoQuadraticSmoothRel* get_prototype();
		void set_prototype(SVGPathSegCurvetoQuadraticSmoothRel*);
		SVGPathSegCurvetoQuadraticSmoothRel();
	};

	class SVGPathSegLinetoAbs: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		SVGPathSegLinetoAbs* get_prototype();
		void set_prototype(SVGPathSegLinetoAbs*);
		SVGPathSegLinetoAbs();
	};

	class SVGPathSegLinetoHorizontalAbs: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		SVGPathSegLinetoHorizontalAbs* get_prototype();
		void set_prototype(SVGPathSegLinetoHorizontalAbs*);
		SVGPathSegLinetoHorizontalAbs();
	};

	class SVGPathSegLinetoHorizontalRel: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		SVGPathSegLinetoHorizontalRel* get_prototype();
		void set_prototype(SVGPathSegLinetoHorizontalRel*);
		SVGPathSegLinetoHorizontalRel();
	};

	class SVGPathSegLinetoRel: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		SVGPathSegLinetoRel* get_prototype();
		void set_prototype(SVGPathSegLinetoRel*);
		SVGPathSegLinetoRel();
	};

	class SVGPathSegLinetoVerticalAbs: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		SVGPathSegLinetoVerticalAbs* get_prototype();
		void set_prototype(SVGPathSegLinetoVerticalAbs*);
		SVGPathSegLinetoVerticalAbs();
	};

	class SVGPathSegLinetoVerticalRel: public SVGPathSeg {
	public:
		double get_y();
		void set_y(double);
		SVGPathSegLinetoVerticalRel* get_prototype();
		void set_prototype(SVGPathSegLinetoVerticalRel*);
		SVGPathSegLinetoVerticalRel();
	};

	class SVGPathSegList: public Object{
	public:
		double get_numberOfItems();
		SVGPathSeg* appendItem(SVGPathSeg* newItem);
		void clear();
		SVGPathSeg* getItem(double index);
		SVGPathSeg* initialize(SVGPathSeg* newItem);
		SVGPathSeg* insertItemBefore(SVGPathSeg* newItem, double index);
		SVGPathSeg* removeItem(double index);
		SVGPathSeg* replaceItem(SVGPathSeg* newItem, double index);
		SVGPathSegList* get_prototype();
		void set_prototype(SVGPathSegList*);
		SVGPathSegList();
	};

	class SVGPathSegMovetoAbs: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		SVGPathSegMovetoAbs* get_prototype();
		void set_prototype(SVGPathSegMovetoAbs*);
		SVGPathSegMovetoAbs();
	};

	class SVGPathSegMovetoRel: public SVGPathSeg {
	public:
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		SVGPathSegMovetoRel* get_prototype();
		void set_prototype(SVGPathSegMovetoRel*);
		SVGPathSegMovetoRel();
	};

	class SVGPatternElement: public SVGElement , public SVGTests , public SVGUnitTypes , public SVGFitToViewBox , public SVGURIReference {
	public:
		SVGAnimatedLength* get_height();
		SVGAnimatedEnumeration* get_patternContentUnits();
		SVGAnimatedTransformList* get_patternTransform();
		SVGAnimatedEnumeration* get_patternUnits();
		SVGAnimatedLength* get_width();
		SVGAnimatedLength* get_x();
		SVGAnimatedLength* get_y();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGPatternElement* get_prototype();
		void set_prototype(SVGPatternElement*);
		SVGPatternElement();
	};

	class SVGPoint: public Object{
	public:
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		SVGPoint* matrixTransform(SVGMatrix* matrix);
		SVGPoint* get_prototype();
		void set_prototype(SVGPoint*);
		SVGPoint();
	};

	class SVGPointList: public Object{
	public:
		double get_numberOfItems();
		SVGPoint* appendItem(SVGPoint* newItem);
		void clear();
		SVGPoint* getItem(double index);
		SVGPoint* initialize(SVGPoint* newItem);
		SVGPoint* insertItemBefore(SVGPoint* newItem, double index);
		SVGPoint* removeItem(double index);
		SVGPoint* replaceItem(SVGPoint* newItem, double index);
		SVGPointList* get_prototype();
		void set_prototype(SVGPointList*);
		SVGPointList();
	};

	class SVGPolygonElement: public SVGGraphicsElement , public SVGAnimatedPoints {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGPolygonElement* get_prototype();
		void set_prototype(SVGPolygonElement*);
		SVGPolygonElement();
	};

	class SVGPolylineElement: public SVGGraphicsElement , public SVGAnimatedPoints {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGPolylineElement* get_prototype();
		void set_prototype(SVGPolylineElement*);
		SVGPolylineElement();
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
		double get_SVG_MEETORSLICE_MEET();
		double get_SVG_MEETORSLICE_SLICE();
		double get_SVG_MEETORSLICE_UNKNOWN();
		double get_SVG_PRESERVEASPECTRATIO_NONE();
		double get_SVG_PRESERVEASPECTRATIO_UNKNOWN();
		double get_SVG_PRESERVEASPECTRATIO_XMAXYMAX();
		double get_SVG_PRESERVEASPECTRATIO_XMAXYMID();
		double get_SVG_PRESERVEASPECTRATIO_XMAXYMIN();
		double get_SVG_PRESERVEASPECTRATIO_XMIDYMAX();
		double get_SVG_PRESERVEASPECTRATIO_XMIDYMID();
		double get_SVG_PRESERVEASPECTRATIO_XMIDYMIN();
		double get_SVG_PRESERVEASPECTRATIO_XMINYMAX();
		double get_SVG_PRESERVEASPECTRATIO_XMINYMID();
		double get_SVG_PRESERVEASPECTRATIO_XMINYMIN();
	};

	class SVGRadialGradientElement: public SVGGradientElement {
	public:
		SVGAnimatedLength* get_cx();
		SVGAnimatedLength* get_cy();
		SVGAnimatedLength* get_fx();
		SVGAnimatedLength* get_fy();
		SVGAnimatedLength* get_r();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGRadialGradientElement* get_prototype();
		void set_prototype(SVGRadialGradientElement*);
		SVGRadialGradientElement();
	};

	class SVGRect: public Object{
	public:
		double get_height();
		void set_height(double);
		double get_width();
		void set_width(double);
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		SVGRect* get_prototype();
		void set_prototype(SVGRect*);
		SVGRect();
	};

	class SVGRectElement: public SVGGraphicsElement {
	public:
		SVGAnimatedLength* get_height();
		SVGAnimatedLength* get_rx();
		SVGAnimatedLength* get_ry();
		SVGAnimatedLength* get_width();
		SVGAnimatedLength* get_x();
		SVGAnimatedLength* get_y();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGRectElement* get_prototype();
		void set_prototype(SVGRectElement*);
		SVGRectElement();
	};

	class SVGSVGElementEventMap: public SVGElementEventMap {
	public:
		Event* get_SVGAbort();
		void set_SVGAbort(Event*);
		Event* get_SVGError();
		void set_SVGError(Event*);
		UIEvent* get_resize();
		void set_resize(UIEvent*);
		UIEvent* get_scroll();
		void set_scroll(UIEvent*);
		Event* get_SVGUnload();
		void set_SVGUnload(Event*);
		SVGZoomEvent* get_SVGZoom();
		void set_SVGZoom(SVGZoomEvent*);
	};

	class [[cheerp::client_layout]] SVGZoomAndPan: public Object{
	public:
		double get_zoomAndPan();
		double get_SVG_ZOOMANDPAN_DISABLE();
		double get_SVG_ZOOMANDPAN_MAGNIFY();
		double get_SVG_ZOOMANDPAN_UNKNOWN();
	};

	class SVGSVGElement: public SVGGraphicsElement , public DocumentEvent , public SVGFitToViewBox , public SVGZoomAndPan {
	public:
		String* get_contentScriptType();
		void set_contentScriptType(const String&);
		String* get_contentStyleType();
		void set_contentStyleType(const String&);
		double get_currentScale();
		void set_currentScale(double);
		SVGPoint* get_currentTranslate();
		SVGAnimatedLength* get_height();
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onresize();
		void set_onresize(EventListener*);
		EventListener* get_onscroll();
		void set_onscroll(EventListener*);
		EventListener* get_onunload();
		void set_onunload(EventListener*);
		EventListener* get_onzoom();
		void set_onzoom(EventListener*);
		double get_pixelUnitToMillimeterX();
		double get_pixelUnitToMillimeterY();
		double get_screenPixelToMillimeterX();
		double get_screenPixelToMillimeterY();
		SVGRect* get_viewport();
		SVGAnimatedLength* get_width();
		SVGAnimatedLength* get_x();
		SVGAnimatedLength* get_y();
		bool checkEnclosure(SVGElement* element, SVGRect* rect);
		bool checkIntersection(SVGElement* element, SVGRect* rect);
		SVGAngle* createSVGAngle();
		SVGLength* createSVGLength();
		SVGMatrix* createSVGMatrix();
		SVGNumber* createSVGNumber();
		SVGPoint* createSVGPoint();
		SVGRect* createSVGRect();
		SVGTransform* createSVGTransform();
		SVGTransform* createSVGTransformFromMatrix(SVGMatrix* matrix);
		void deselectAll();
		void forceRedraw();
		CSSStyleDeclaration* getComputedStyle(Element* elt);
		CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
		double getCurrentTime();
		Element* getElementById(const String& elementId);
		NodeListOf<Object>* getEnclosureList(SVGRect* rect, SVGElement* referenceElement);
		NodeListOf<Object>* getIntersectionList(SVGRect* rect, SVGElement* referenceElement);
		void pauseAnimations();
		void setCurrentTime(double seconds);
		double suspendRedraw(double maxWaitMilliseconds);
		void unpauseAnimations();
		void unsuspendRedraw(double suspendHandleID);
		void unsuspendRedrawAll();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGSVGElement* get_prototype();
		void set_prototype(SVGSVGElement*);
		SVGSVGElement();
	};

	class SVGScriptElement: public SVGElement , public SVGURIReference {
	public:
		String* get_type();
		void set_type(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGScriptElement* get_prototype();
		void set_prototype(SVGScriptElement*);
		SVGScriptElement();
	};

	class SVGStopElement: public SVGElement {
	public:
		SVGAnimatedNumber* get_offset();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGStopElement* get_prototype();
		void set_prototype(SVGStopElement*);
		SVGStopElement();
	};

	class SVGStringList: public Object{
	public:
		double get_numberOfItems();
		String* appendItem(const String& newItem);
		void clear();
		String* getItem(double index);
		String* initialize(const String& newItem);
		String* insertItemBefore(const String& newItem, double index);
		String* removeItem(double index);
		String* replaceItem(const String& newItem, double index);
		SVGStringList* get_prototype();
		void set_prototype(SVGStringList*);
		SVGStringList();
	};

	class SVGStylable: public Object{
	public:
		template<class ReturnType = Object*> ReturnType get_className();
		void set_className(Object*);
		SVGStylable* get_prototype();
		void set_prototype(SVGStylable*);
		SVGStylable();
	};

	class SVGStyleElement: public SVGElement {
	public:
		bool get_disabled();
		void set_disabled(bool);
		String* get_media();
		void set_media(const String&);
		String* get_title();
		void set_title(const String&);
		String* get_type();
		void set_type(const String&);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGStyleElement* get_prototype();
		void set_prototype(SVGStyleElement*);
		SVGStyleElement();
	};

	class SVGSwitchElement: public SVGGraphicsElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGSwitchElement* get_prototype();
		void set_prototype(SVGSwitchElement*);
		SVGSwitchElement();
	};

	class SVGSymbolElement: public SVGElement , public SVGFitToViewBox {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGSymbolElement* get_prototype();
		void set_prototype(SVGSymbolElement*);
		SVGSymbolElement();
	};

	class SVGTextContentElement: public SVGGraphicsElement {
	public:
		SVGAnimatedEnumeration* get_lengthAdjust();
		SVGAnimatedLength* get_textLength();
		double getCharNumAtPosition(SVGPoint* point);
		double getComputedTextLength();
		SVGPoint* getEndPositionOfChar(double charnum);
		SVGRect* getExtentOfChar(double charnum);
		double getNumberOfChars();
		double getRotationOfChar(double charnum);
		SVGPoint* getStartPositionOfChar(double charnum);
		double getSubStringLength(double charnum, double nchars);
		void selectSubString(double charnum, double nchars);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGTextContentElement* get_prototype();
		void set_prototype(SVGTextContentElement*);
		SVGTextContentElement();
		double get_LENGTHADJUST_SPACING();
		double get_LENGTHADJUST_SPACINGANDGLYPHS();
		double get_LENGTHADJUST_UNKNOWN();
	};

	class SVGTextPositioningElement: public SVGTextContentElement {
	public:
		SVGAnimatedLengthList* get_dx();
		SVGAnimatedLengthList* get_dy();
		SVGAnimatedNumberList* get_rotate();
		SVGAnimatedLengthList* get_x();
		SVGAnimatedLengthList* get_y();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGTextPositioningElement* get_prototype();
		void set_prototype(SVGTextPositioningElement*);
		SVGTextPositioningElement();
	};

	class SVGTSpanElement: public SVGTextPositioningElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGTSpanElement* get_prototype();
		void set_prototype(SVGTSpanElement*);
		SVGTSpanElement();
	};

	class SVGTextElement: public SVGTextPositioningElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGTextElement* get_prototype();
		void set_prototype(SVGTextElement*);
		SVGTextElement();
	};

	class SVGTextPathElement: public SVGTextContentElement , public SVGURIReference {
	public:
		SVGAnimatedEnumeration* get_method();
		SVGAnimatedEnumeration* get_spacing();
		SVGAnimatedLength* get_startOffset();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGTextPathElement* get_prototype();
		void set_prototype(SVGTextPathElement*);
		SVGTextPathElement();
		double get_TEXTPATH_METHODTYPE_ALIGN();
		double get_TEXTPATH_METHODTYPE_STRETCH();
		double get_TEXTPATH_METHODTYPE_UNKNOWN();
		double get_TEXTPATH_SPACINGTYPE_AUTO();
		double get_TEXTPATH_SPACINGTYPE_EXACT();
		double get_TEXTPATH_SPACINGTYPE_UNKNOWN();
	};

	class SVGTitleElement: public SVGElement {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGTitleElement* get_prototype();
		void set_prototype(SVGTitleElement*);
		SVGTitleElement();
	};

	class SVGTransform: public Object{
	public:
		double get_angle();
		SVGMatrix* get_matrix();
		double get_type();
		void setMatrix(SVGMatrix* matrix);
		void setRotate(double angle, double cx, double cy);
		void setScale(double sx, double sy);
		void setSkewX(double angle);
		void setSkewY(double angle);
		void setTranslate(double tx, double ty);
		SVGTransform* get_prototype();
		void set_prototype(SVGTransform*);
		SVGTransform();
		double get_SVG_TRANSFORM_MATRIX();
		double get_SVG_TRANSFORM_ROTATE();
		double get_SVG_TRANSFORM_SCALE();
		double get_SVG_TRANSFORM_SKEWX();
		double get_SVG_TRANSFORM_SKEWY();
		double get_SVG_TRANSFORM_TRANSLATE();
		double get_SVG_TRANSFORM_UNKNOWN();
	};

	class SVGTransformList: public Object{
	public:
		double get_numberOfItems();
		SVGTransform* appendItem(SVGTransform* newItem);
		void clear();
		SVGTransform* consolidate();
		SVGTransform* createSVGTransformFromMatrix(SVGMatrix* matrix);
		SVGTransform* getItem(double index);
		SVGTransform* initialize(SVGTransform* newItem);
		SVGTransform* insertItemBefore(SVGTransform* newItem, double index);
		SVGTransform* removeItem(double index);
		SVGTransform* replaceItem(SVGTransform* newItem, double index);
		SVGTransformList* get_prototype();
		void set_prototype(SVGTransformList*);
		SVGTransformList();
	};

	class SVGUseElement: public SVGGraphicsElement , public SVGURIReference {
	public:
		SVGElementInstance* get_animatedInstanceRoot();
		SVGAnimatedLength* get_height();
		SVGElementInstance* get_instanceRoot();
		SVGAnimatedLength* get_width();
		SVGAnimatedLength* get_x();
		SVGAnimatedLength* get_y();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGUseElement* get_prototype();
		void set_prototype(SVGUseElement*);
		SVGUseElement();
	};

	class SVGViewElement: public SVGElement , public SVGFitToViewBox , public SVGZoomAndPan {
	public:
		SVGStringList* get_viewTarget();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SVGViewElement* get_prototype();
		void set_prototype(SVGViewElement*);
		SVGViewElement();
	};

	class SVGZoomEvent: public UIEvent {
	public:
		double get_newScale();
		SVGPoint* get_newTranslate();
		double get_previousScale();
		SVGPoint* get_previousTranslate();
		SVGRect* get_zoomRectScreen();
		SVGZoomEvent* get_prototype();
		void set_prototype(SVGZoomEvent*);
		SVGZoomEvent();
	};

	class ScopedCredential: public Object{
	public:
		ArrayBuffer* get_id();
		String* get_type();
		ScopedCredential* get_prototype();
		void set_prototype(ScopedCredential*);
		ScopedCredential();
	};

	class ScopedCredentialInfo: public Object{
	public:
		ScopedCredential* get_credential();
		CryptoKey* get_publicKey();
		ScopedCredentialInfo* get_prototype();
		void set_prototype(ScopedCredentialInfo*);
		ScopedCredentialInfo();
	};

	class ScreenEventMap: public Object{
	public:
		Event* get_MSOrientationChange();
		void set_MSOrientationChange(Event*);
	};

	class Screen: public EventTarget {
	public:
		double get_availHeight();
		double get_availWidth();
		double get_bufferDepth();
		void set_bufferDepth(double);
		double get_colorDepth();
		double get_deviceXDPI();
		double get_deviceYDPI();
		bool get_fontSmoothingEnabled();
		double get_height();
		double get_logicalXDPI();
		double get_logicalYDPI();
		String* get_msOrientation();
		EventListener* get_onmsorientationchange();
		void set_onmsorientationchange(EventListener*);
		double get_pixelDepth();
		double get_systemXDPI();
		double get_systemYDPI();
		double get_width();
		bool lockOrientation(Array* orientations);
		bool msLockOrientation(const String& orientations);
		bool msLockOrientation(Array* orientations);
		void msUnlockOrientation();
		void unlockOrientation();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		Screen* get_prototype();
		void set_prototype(Screen*);
		Screen();
	};

	class ScriptProcessorNodeEventMap: public Object{
	public:
		AudioProcessingEvent* get_audioprocess();
		void set_audioprocess(AudioProcessingEvent*);
	};

	class ScriptProcessorNode: public AudioNode {
	public:
		double get_bufferSize();
		EventListener* get_onaudioprocess();
		void set_onaudioprocess(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		ScriptProcessorNode* get_prototype();
		void set_prototype(ScriptProcessorNode*);
		ScriptProcessorNode();
	};

	class ScrollOptions: public Object{
	public:
		String* get_behavior();
		void set_behavior(const String&);
	};

	class ScrollIntoViewOptions: public ScrollOptions {
	public:
		String* get_block();
		void set_block(const String&);
		String* get_inline();
		void set_inline(const String&);
	};

	class ScrollToOptions: public ScrollOptions {
	public:
		double get_left();
		void set_left(double);
		double get_top();
		void set_top(double);
	};

	class SecurityPolicyViolationEvent: public Event {
	public:
		String* get_blockedURI();
		double get_columnNumber();
		String* get_documentURI();
		String* get_effectiveDirective();
		double get_lineNumber();
		String* get_originalPolicy();
		String* get_referrer();
		String* get_sourceFile();
		double get_statusCode();
		String* get_violatedDirective();
		SecurityPolicyViolationEvent* get_prototype();
		void set_prototype(SecurityPolicyViolationEvent*);
		SecurityPolicyViolationEvent(const String& type);
		SecurityPolicyViolationEvent(const String& type, SecurityPolicyViolationEventInit* eventInitDict);
	};

	class Selection: public Object{
	public:
		Node* get_anchorNode();
		double get_anchorOffset();
		Node* get_baseNode();
		double get_baseOffset();
		Node* get_extentNode();
		double get_extentOffset();
		Node* get_focusNode();
		double get_focusOffset();
		bool get_isCollapsed();
		double get_rangeCount();
		String* get_type();
		void addRange(Range* range);
		void collapse(Node* parentNode, double offset);
		void collapseToEnd();
		void collapseToStart();
		bool containsNode(Node* node, bool partlyContained);
		void deleteFromDocument();
		void empty();
		void extend(Node* newNode, double offset);
		Range* getRangeAt(double index);
		void removeAllRanges();
		void removeRange(Range* range);
		void selectAllChildren(Node* parentNode);
		void setBaseAndExtent(Node* baseNode, double baseOffset, Node* extentNode, double extentOffset);
		void setPosition(Node* parentNode, double offset);
		String* toString();
		Selection* get_prototype();
		void set_prototype(Selection*);
		Selection();
	};

	class ServiceUIFrameContext: public Object{
	public:
		String* getCachedFrameMessage(const String& key);
		void postFrameMessage(const String& key, const String& data);
	};

	class ServiceWorkerEventMap: public AbstractWorkerEventMap {
	public:
		Event* get_statechange();
		void set_statechange(Event*);
	};

	class ServiceWorker: public EventTarget , public AbstractWorker {
	public:
		EventListener* get_onstatechange();
		void set_onstatechange(EventListener*);
		String* get_scriptURL();
		String* get_state();
		void postMessage(Object* message);
		void postMessage(Object* message, Array* transfer);
		void postMessage(const String& message);
		void postMessage(const String& message, Array* transfer);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		ServiceWorker* get_prototype();
		void set_prototype(ServiceWorker*);
		ServiceWorker();
	};

	class ServiceWorkerContainerEventMap: public Object{
	public:
		Event* get_controllerchange();
		void set_controllerchange(Event*);
		ServiceWorkerMessageEvent* get_message();
		void set_message(ServiceWorkerMessageEvent*);
		MessageEvent* get_messageerror();
		void set_messageerror(MessageEvent*);
	};

	class ServiceWorkerContainer: public EventTarget {
	public:
		ServiceWorker* get_controller();
		EventListener* get_oncontrollerchange();
		void set_oncontrollerchange(EventListener*);
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		EventListener* get_onmessageerror();
		void set_onmessageerror(EventListener*);
		Promise* get_ready();
		Promise* getRegistration();
		Promise* getRegistration(const String& clientURL);
		Promise* getRegistrations();
		Promise* _register(const String& scriptURL);
		Promise* _register(const String& scriptURL, RegistrationOptions* options);
		void startMessages();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		ServiceWorkerContainer* get_prototype();
		void set_prototype(ServiceWorkerContainer*);
		ServiceWorkerContainer();
	};

	class ServiceWorkerMessageEvent: public Event {
	public:
		template<class ReturnType = Object*> ReturnType get_data();
		String* get_lastEventId();
		String* get_origin();
		ReadonlyArray<MessagePort>* get_ports();
		ServiceWorker* get_source();
		ServiceWorkerMessageEvent* get_prototype();
		void set_prototype(ServiceWorkerMessageEvent*);
		ServiceWorkerMessageEvent(const String& type);
		ServiceWorkerMessageEvent(const String& type, ServiceWorkerMessageEventInit* eventInitDict);
	};

	class ServiceWorkerRegistrationEventMap: public Object{
	public:
		Event* get_updatefound();
		void set_updatefound(Event*);
	};

	class ServiceWorkerRegistration: public EventTarget {
	public:
		ServiceWorker* get_active();
		ServiceWorker* get_installing();
		EventListener* get_onupdatefound();
		void set_onupdatefound(EventListener*);
		PushManager* get_pushManager();
		String* get_scope();
		SyncManager* get_sync();
		ServiceWorker* get_waiting();
		Promise* getNotifications();
		Promise* getNotifications(GetNotificationOptions* filter);
		Promise* showNotification(const String& title);
		Promise* showNotification(const String& title, NotificationOptions* options);
		Promise* unregister();
		Promise* update();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		ServiceWorkerRegistration* get_prototype();
		void set_prototype(ServiceWorkerRegistration*);
		ServiceWorkerRegistration();
	};

	class ShadowRoot: public DocumentOrShadowRoot , public DocumentFragment {
	public:
		Element* get_host();
		String* get_innerHTML();
		void set_innerHTML(const String&);
	};

	class ShadowRootInit: public Object{
	public:
		bool get_delegatesFocus();
		void set_delegatesFocus(bool);
		String* get_mode();
		void set_mode(const String&);
	};

	class SourceBuffer: public EventTarget {
	public:
		double get_appendWindowEnd();
		void set_appendWindowEnd(double);
		double get_appendWindowStart();
		void set_appendWindowStart(double);
		AudioTrackList* get_audioTracks();
		TimeRanges* get_buffered();
		String* get_mode();
		void set_mode(const String&);
		TextTrackList* get_textTracks();
		double get_timestampOffset();
		void set_timestampOffset(double);
		bool get_updating();
		VideoTrackList* get_videoTracks();
		void abort();
		void appendBuffer(ArrayBuffer* data);
		void appendBuffer(Int8Array* data);
		void appendBuffer(Int16Array* data);
		void appendBuffer(Int32Array* data);
		void appendBuffer(Uint8Array* data);
		void appendBuffer(Uint16Array* data);
		void appendBuffer(Uint32Array* data);
		void appendBuffer(Uint8ClampedArray* data);
		void appendBuffer(Float32Array* data);
		void appendBuffer(Float64Array* data);
		void appendBuffer(DataView* data);
		void appendStream(MSStream* stream);
		void appendStream(MSStream* stream, double maxSize);
		void remove(double start, double end);
		SourceBuffer* get_prototype();
		void set_prototype(SourceBuffer*);
		SourceBuffer();
	};

	class SourceBufferList: public EventTarget {
	public:
		double get_length();
		SourceBuffer* item(double index);
		SourceBuffer*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<SourceBuffer*>(this, 0)[index];
		}
		SourceBuffer* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<SourceBuffer*>(this, 0)[index];
		}
		SourceBufferList* get_prototype();
		void set_prototype(SourceBufferList*);
		SourceBufferList();
	};

	class SpeechSynthesisEventMap: public Object{
	public:
		Event* get_voiceschanged();
		void set_voiceschanged(Event*);
	};

	class SpeechSynthesis: public EventTarget {
	public:
		EventListener* get_onvoiceschanged();
		void set_onvoiceschanged(EventListener*);
		bool get_paused();
		bool get_pending();
		bool get_speaking();
		void cancel();
		Array* getVoices();
		void pause();
		void resume();
		void speak(SpeechSynthesisUtterance* utterance);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SpeechSynthesis* get_prototype();
		void set_prototype(SpeechSynthesis*);
		SpeechSynthesis();
	};

	class SpeechSynthesisEvent: public Event {
	public:
		double get_charIndex();
		double get_charLength();
		double get_elapsedTime();
		String* get_name();
		SpeechSynthesisUtterance* get_utterance();
		SpeechSynthesisEvent* get_prototype();
		void set_prototype(SpeechSynthesisEvent*);
		SpeechSynthesisEvent(const String& type);
		SpeechSynthesisEvent(const String& type, SpeechSynthesisEventInit* eventInitDict);
	};

	class SpeechSynthesisUtteranceEventMap: public Object{
	public:
		Event* get_boundary();
		void set_boundary(Event*);
		Event* get_end();
		void set_end(Event*);
		Event* get_error();
		void set_error(Event*);
		Event* get_mark();
		void set_mark(Event*);
		Event* get_pause();
		void set_pause(Event*);
		Event* get_resume();
		void set_resume(Event*);
		Event* get_start();
		void set_start(Event*);
	};

	class SpeechSynthesisUtterance: public EventTarget {
	public:
		String* get_lang();
		void set_lang(const String&);
		EventListener* get_onboundary();
		void set_onboundary(EventListener*);
		EventListener* get_onend();
		void set_onend(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onmark();
		void set_onmark(EventListener*);
		EventListener* get_onpause();
		void set_onpause(EventListener*);
		EventListener* get_onresume();
		void set_onresume(EventListener*);
		EventListener* get_onstart();
		void set_onstart(EventListener*);
		double get_pitch();
		void set_pitch(double);
		double get_rate();
		void set_rate(double);
		String* get_text();
		void set_text(const String&);
		SpeechSynthesisVoice* get_voice();
		void set_voice(SpeechSynthesisVoice*);
		double get_volume();
		void set_volume(double);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		SpeechSynthesisUtterance* get_prototype();
		void set_prototype(SpeechSynthesisUtterance*);
		SpeechSynthesisUtterance();
		SpeechSynthesisUtterance(const String& text);
	};

	class SpeechSynthesisVoice: public Object{
	public:
		bool get_default();
		String* get_lang();
		bool get_localService();
		String* get_name();
		String* get_voiceURI();
		SpeechSynthesisVoice* get_prototype();
		void set_prototype(SpeechSynthesisVoice*);
		SpeechSynthesisVoice();
	};

	class StereoPannerNode: public AudioNode {
	public:
		AudioParam* get_pan();
		StereoPannerNode* get_prototype();
		void set_prototype(StereoPannerNode*);
		StereoPannerNode();
	};

	class Storage: public Object{
	public:
		double get_length();
		void clear();
		String* getItem(const String& key);
		String* key(double index);
		void removeItem(const String& key);
		void setItem(const String& key, const String& value);
		Object*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
		Object* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Object*>(this, 0)[index];
		}
		Storage* get_prototype();
		void set_prototype(Storage*);
		Storage();
	};

	class StorageEvent: public Event {
	public:
		String* get_key();
		String* get_newValue();
		String* get_oldValue();
		Storage* get_storageArea();
		String* get_url();
		StorageEvent* get_prototype();
		void set_prototype(StorageEvent*);
		StorageEvent(const String& type);
		StorageEvent(const String& type, StorageEventInit* eventInitDict);
	};

	class StorageEventInit: public EventInit {
	public:
		String* get_key();
		void set_key(const String&);
		String* get_newValue();
		void set_newValue(const String&);
		String* get_oldValue();
		void set_oldValue(const String&);
		Storage* get_storageArea();
		void set_storageArea(Storage*);
		String* get_url();
		void set_url(const String&);
	};

	class StyleMedia: public Object{
	public:
		String* get_type();
		bool matchMedium(const String& mediaquery);
		StyleMedia* get_prototype();
		void set_prototype(StyleMedia*);
		StyleMedia();
	};

	class StyleSheetList: public Object{
	public:
		double get_length();
		StyleSheet* item(double index);
		StyleSheet*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<StyleSheet*>(this, 0)[index];
		}
		StyleSheet* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<StyleSheet*>(this, 0)[index];
		}
		StyleSheetList* get_prototype();
		void set_prototype(StyleSheetList*);
		StyleSheetList();
	};

	class SubtleCrypto: public Object{
	public:
		Promise* decrypt(const String& algorithm, CryptoKey* key, Int8Array* data);
		Promise* decrypt(const String& algorithm, CryptoKey* key, Int16Array* data);
		Promise* decrypt(const String& algorithm, CryptoKey* key, Int32Array* data);
		Promise* decrypt(const String& algorithm, CryptoKey* key, Uint8Array* data);
		Promise* decrypt(const String& algorithm, CryptoKey* key, Uint16Array* data);
		Promise* decrypt(const String& algorithm, CryptoKey* key, Uint32Array* data);
		Promise* decrypt(const String& algorithm, CryptoKey* key, Uint8ClampedArray* data);
		Promise* decrypt(const String& algorithm, CryptoKey* key, Float32Array* data);
		Promise* decrypt(const String& algorithm, CryptoKey* key, Float64Array* data);
		Promise* decrypt(const String& algorithm, CryptoKey* key, DataView* data);
		Promise* decrypt(const String& algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* decrypt(RsaOaepParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* decrypt(AesCtrParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* decrypt(AesCbcParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* decrypt(AesCmacParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* decrypt(AesGcmParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* decrypt(AesCfbParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* deriveBits(const String& algorithm, CryptoKey* baseKey, double length);
		Promise* deriveBits(EcdhKeyDeriveParams* algorithm, CryptoKey* baseKey, double length);
		Promise* deriveBits(DhKeyDeriveParams* algorithm, CryptoKey* baseKey, double length);
		Promise* deriveBits(ConcatParams* algorithm, CryptoKey* baseKey, double length);
		Promise* deriveBits(HkdfCtrParams* algorithm, CryptoKey* baseKey, double length);
		Promise* deriveBits(Pbkdf2Params* algorithm, CryptoKey* baseKey, double length);
		Promise* deriveKey(const String& algorithm, CryptoKey* baseKey, const String& derivedKeyType, bool extractable, Array* keyUsages);
		Promise* deriveKey(const String& algorithm, CryptoKey* baseKey, AesDerivedKeyParams* derivedKeyType, bool extractable, Array* keyUsages);
		Promise* deriveKey(const String& algorithm, CryptoKey* baseKey, HmacImportParams* derivedKeyType, bool extractable, Array* keyUsages);
		Promise* deriveKey(const String& algorithm, CryptoKey* baseKey, ConcatParams* derivedKeyType, bool extractable, Array* keyUsages);
		Promise* deriveKey(const String& algorithm, CryptoKey* baseKey, HkdfCtrParams* derivedKeyType, bool extractable, Array* keyUsages);
		Promise* deriveKey(const String& algorithm, CryptoKey* baseKey, Pbkdf2Params* derivedKeyType, bool extractable, Array* keyUsages);
		Promise* deriveKey(EcdhKeyDeriveParams* algorithm, CryptoKey* baseKey, Pbkdf2Params* derivedKeyType, bool extractable, Array* keyUsages);
		Promise* deriveKey(DhKeyDeriveParams* algorithm, CryptoKey* baseKey, Pbkdf2Params* derivedKeyType, bool extractable, Array* keyUsages);
		Promise* deriveKey(ConcatParams* algorithm, CryptoKey* baseKey, Pbkdf2Params* derivedKeyType, bool extractable, Array* keyUsages);
		Promise* deriveKey(HkdfCtrParams* algorithm, CryptoKey* baseKey, Pbkdf2Params* derivedKeyType, bool extractable, Array* keyUsages);
		Promise* deriveKey(Pbkdf2Params* algorithm, CryptoKey* baseKey, Pbkdf2Params* derivedKeyType, bool extractable, Array* keyUsages);
		Promise* digest(const String& algorithm, Int8Array* data);
		Promise* digest(const String& algorithm, Int16Array* data);
		Promise* digest(const String& algorithm, Int32Array* data);
		Promise* digest(const String& algorithm, Uint8Array* data);
		Promise* digest(const String& algorithm, Uint16Array* data);
		Promise* digest(const String& algorithm, Uint32Array* data);
		Promise* digest(const String& algorithm, Uint8ClampedArray* data);
		Promise* digest(const String& algorithm, Float32Array* data);
		Promise* digest(const String& algorithm, Float64Array* data);
		Promise* digest(const String& algorithm, DataView* data);
		Promise* digest(const String& algorithm, ArrayBuffer* data);
		Promise* digest(Algorithm* algorithm, ArrayBuffer* data);
		Promise* encrypt(const String& algorithm, CryptoKey* key, Int8Array* data);
		Promise* encrypt(const String& algorithm, CryptoKey* key, Int16Array* data);
		Promise* encrypt(const String& algorithm, CryptoKey* key, Int32Array* data);
		Promise* encrypt(const String& algorithm, CryptoKey* key, Uint8Array* data);
		Promise* encrypt(const String& algorithm, CryptoKey* key, Uint16Array* data);
		Promise* encrypt(const String& algorithm, CryptoKey* key, Uint32Array* data);
		Promise* encrypt(const String& algorithm, CryptoKey* key, Uint8ClampedArray* data);
		Promise* encrypt(const String& algorithm, CryptoKey* key, Float32Array* data);
		Promise* encrypt(const String& algorithm, CryptoKey* key, Float64Array* data);
		Promise* encrypt(const String& algorithm, CryptoKey* key, DataView* data);
		Promise* encrypt(const String& algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* encrypt(RsaOaepParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* encrypt(AesCtrParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* encrypt(AesCbcParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* encrypt(AesCmacParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* encrypt(AesGcmParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* encrypt(AesCfbParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* exportKey(const String& format, CryptoKey* key);
		Promise* generateKey(const String& algorithm, bool extractable, Array* keyUsages);
		Promise* generateKey(RsaHashedKeyGenParams* algorithm, bool extractable, Array* keyUsages);
		Promise* generateKey(EcKeyGenParams* algorithm, bool extractable, Array* keyUsages);
		Promise* generateKey(DhKeyGenParams* algorithm, bool extractable, Array* keyUsages);
		Promise* generateKey(AesKeyGenParams* algorithm, bool extractable, Array* keyUsages);
		Promise* generateKey(HmacKeyGenParams* algorithm, bool extractable, Array* keyUsages);
		Promise* generateKey(Pbkdf2Params* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, JsonWebKey* keyData, const String& algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, JsonWebKey* keyData, RsaHashedImportParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, JsonWebKey* keyData, EcKeyImportParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, JsonWebKey* keyData, HmacImportParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, JsonWebKey* keyData, DhImportKeyParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, Int8Array* keyData, DhImportKeyParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, Int16Array* keyData, DhImportKeyParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, Int32Array* keyData, DhImportKeyParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, Uint8Array* keyData, DhImportKeyParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, Uint16Array* keyData, DhImportKeyParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, Uint32Array* keyData, DhImportKeyParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, Uint8ClampedArray* keyData, DhImportKeyParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, Float32Array* keyData, DhImportKeyParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, Float64Array* keyData, DhImportKeyParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, DataView* keyData, DhImportKeyParams* algorithm, bool extractable, Array* keyUsages);
		Promise* importKey(const String& format, ArrayBuffer* keyData, DhImportKeyParams* algorithm, bool extractable, Array* keyUsages);
		Promise* sign(const String& algorithm, CryptoKey* key, Int8Array* data);
		Promise* sign(const String& algorithm, CryptoKey* key, Int16Array* data);
		Promise* sign(const String& algorithm, CryptoKey* key, Int32Array* data);
		Promise* sign(const String& algorithm, CryptoKey* key, Uint8Array* data);
		Promise* sign(const String& algorithm, CryptoKey* key, Uint16Array* data);
		Promise* sign(const String& algorithm, CryptoKey* key, Uint32Array* data);
		Promise* sign(const String& algorithm, CryptoKey* key, Uint8ClampedArray* data);
		Promise* sign(const String& algorithm, CryptoKey* key, Float32Array* data);
		Promise* sign(const String& algorithm, CryptoKey* key, Float64Array* data);
		Promise* sign(const String& algorithm, CryptoKey* key, DataView* data);
		Promise* sign(const String& algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* sign(RsaPssParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* sign(EcdsaParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* sign(AesCmacParams* algorithm, CryptoKey* key, ArrayBuffer* data);
		Promise* unwrapKey(const String& format, Int8Array* wrappedKey, CryptoKey* unwrappingKey, const String& unwrapAlgorithm, const String& unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* unwrapKey(const String& format, Int8Array* wrappedKey, CryptoKey* unwrappingKey, const String& unwrapAlgorithm, Algorithm* unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* unwrapKey(const String& format, Int8Array* wrappedKey, CryptoKey* unwrappingKey, Algorithm* unwrapAlgorithm, Algorithm* unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* unwrapKey(const String& format, Int16Array* wrappedKey, CryptoKey* unwrappingKey, Algorithm* unwrapAlgorithm, Algorithm* unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* unwrapKey(const String& format, Int32Array* wrappedKey, CryptoKey* unwrappingKey, Algorithm* unwrapAlgorithm, Algorithm* unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* unwrapKey(const String& format, Uint8Array* wrappedKey, CryptoKey* unwrappingKey, Algorithm* unwrapAlgorithm, Algorithm* unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* unwrapKey(const String& format, Uint16Array* wrappedKey, CryptoKey* unwrappingKey, Algorithm* unwrapAlgorithm, Algorithm* unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* unwrapKey(const String& format, Uint32Array* wrappedKey, CryptoKey* unwrappingKey, Algorithm* unwrapAlgorithm, Algorithm* unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* unwrapKey(const String& format, Uint8ClampedArray* wrappedKey, CryptoKey* unwrappingKey, Algorithm* unwrapAlgorithm, Algorithm* unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* unwrapKey(const String& format, Float32Array* wrappedKey, CryptoKey* unwrappingKey, Algorithm* unwrapAlgorithm, Algorithm* unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* unwrapKey(const String& format, Float64Array* wrappedKey, CryptoKey* unwrappingKey, Algorithm* unwrapAlgorithm, Algorithm* unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* unwrapKey(const String& format, DataView* wrappedKey, CryptoKey* unwrappingKey, Algorithm* unwrapAlgorithm, Algorithm* unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* unwrapKey(const String& format, ArrayBuffer* wrappedKey, CryptoKey* unwrappingKey, Algorithm* unwrapAlgorithm, Algorithm* unwrappedKeyAlgorithm, bool extractable, Array* keyUsages);
		Promise* verify(const String& algorithm, CryptoKey* key, Int8Array* signature, Int8Array* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Int8Array* signature, Int16Array* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Int8Array* signature, Int32Array* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Int8Array* signature, Uint8Array* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Int8Array* signature, Uint16Array* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Int8Array* signature, Uint32Array* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Int8Array* signature, Uint8ClampedArray* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Int8Array* signature, Float32Array* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Int8Array* signature, Float64Array* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Int8Array* signature, DataView* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Int8Array* signature, ArrayBuffer* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Int16Array* signature, ArrayBuffer* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Int32Array* signature, ArrayBuffer* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Uint8Array* signature, ArrayBuffer* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Uint16Array* signature, ArrayBuffer* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Uint32Array* signature, ArrayBuffer* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Uint8ClampedArray* signature, ArrayBuffer* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Float32Array* signature, ArrayBuffer* data);
		Promise* verify(const String& algorithm, CryptoKey* key, Float64Array* signature, ArrayBuffer* data);
		Promise* verify(const String& algorithm, CryptoKey* key, DataView* signature, ArrayBuffer* data);
		Promise* verify(const String& algorithm, CryptoKey* key, ArrayBuffer* signature, ArrayBuffer* data);
		Promise* verify(RsaPssParams* algorithm, CryptoKey* key, ArrayBuffer* signature, ArrayBuffer* data);
		Promise* verify(EcdsaParams* algorithm, CryptoKey* key, ArrayBuffer* signature, ArrayBuffer* data);
		Promise* verify(AesCmacParams* algorithm, CryptoKey* key, ArrayBuffer* signature, ArrayBuffer* data);
		Promise* wrapKey(const String& format, CryptoKey* key, CryptoKey* wrappingKey, const String& wrapAlgorithm);
		Promise* wrapKey(const String& format, CryptoKey* key, CryptoKey* wrappingKey, Algorithm* wrapAlgorithm);
		SubtleCrypto* get_prototype();
		void set_prototype(SubtleCrypto*);
		SubtleCrypto();
	};

	class SyncManager: public Object{
	public:
		Promise* getTags();
		Promise* _register(const String& tag);
		SyncManager* get_prototype();
		void set_prototype(SyncManager*);
		SyncManager();
	};

	class TextDecoder: public Object{
	public:
		String* get_encoding();
		bool get_fatal();
		bool get_ignoreBOM();
		String* decode();
		String* decode(Int8Array* input);
		String* decode(Int8Array* input, TextDecodeOptions* options);
		String* decode(Int16Array* input);
		String* decode(Int16Array* input, TextDecodeOptions* options);
		String* decode(Int32Array* input);
		String* decode(Int32Array* input, TextDecodeOptions* options);
		String* decode(Uint8Array* input);
		String* decode(Uint8Array* input, TextDecodeOptions* options);
		String* decode(Uint16Array* input);
		String* decode(Uint16Array* input, TextDecodeOptions* options);
		String* decode(Uint32Array* input);
		String* decode(Uint32Array* input, TextDecodeOptions* options);
		String* decode(Uint8ClampedArray* input);
		String* decode(Uint8ClampedArray* input, TextDecodeOptions* options);
		String* decode(Float32Array* input);
		String* decode(Float32Array* input, TextDecodeOptions* options);
		String* decode(Float64Array* input);
		String* decode(Float64Array* input, TextDecodeOptions* options);
		String* decode(DataView* input);
		String* decode(DataView* input, TextDecodeOptions* options);
		String* decode(ArrayBuffer* input);
		String* decode(ArrayBuffer* input, TextDecodeOptions* options);
		TextDecoder* get_prototype();
		void set_prototype(TextDecoder*);
		TextDecoder();
		TextDecoder(const String& label);
		TextDecoder(const String& label, TextDecoderOptions* options);
	};

	class TextEncoder: public Object{
	public:
		String* get_encoding();
		Uint8Array* encode();
		Uint8Array* encode(const String& input);
		TextEncoder* get_prototype();
		void set_prototype(TextEncoder*);
		TextEncoder();
	};

	class TextEvent: public UIEvent {
	public:
		String* get_data();
		void initTextEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, const String& dataArg, double inputMethod, const String& locale);
		TextEvent* get_prototype();
		void set_prototype(TextEvent*);
		TextEvent();
		double get_DOM_INPUT_METHOD_DROP();
		double get_DOM_INPUT_METHOD_HANDWRITING();
		double get_DOM_INPUT_METHOD_IME();
		double get_DOM_INPUT_METHOD_KEYBOARD();
		double get_DOM_INPUT_METHOD_MULTIMODAL();
		double get_DOM_INPUT_METHOD_OPTION();
		double get_DOM_INPUT_METHOD_PASTE();
		double get_DOM_INPUT_METHOD_SCRIPT();
		double get_DOM_INPUT_METHOD_UNKNOWN();
		double get_DOM_INPUT_METHOD_VOICE();
	};

	class TextMetrics: public Object{
	public:
		double get_width();
		TextMetrics* get_prototype();
		void set_prototype(TextMetrics*);
		TextMetrics();
	};

	class TextTrackEventMap: public Object{
	public:
		Event* get_cuechange();
		void set_cuechange(Event*);
		Event* get_error();
		void set_error(Event*);
		Event* get_load();
		void set_load(Event*);
	};

	class TextTrack: public EventTarget {
	public:
		TextTrackCueList* get_activeCues();
		TextTrackCueList* get_cues();
		String* get_inBandMetadataTrackDispatchType();
		String* get_kind();
		String* get_label();
		String* get_language();
		String* get_mode();
		void set_mode(String*);
		EventListener* get_oncuechange();
		void set_oncuechange(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		double get_readyState();
		void addCue(TextTrackCue* cue);
		void removeCue(TextTrackCue* cue);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		TextTrack* get_prototype();
		void set_prototype(TextTrack*);
		TextTrack();
		double get_DISABLED();
		double get_ERROR();
		double get_HIDDEN();
		double get_LOADED();
		double get_LOADING();
		double get_NONE();
		double get_SHOWING();
	};

	class TextTrackCueEventMap: public Object{
	public:
		Event* get_enter();
		void set_enter(Event*);
		Event* get_exit();
		void set_exit(Event*);
	};

	class TextTrackCueList: public Object{
	public:
		double get_length();
		TextTrackCue* getCueById(const String& id);
		TextTrackCue* item(double index);
		TextTrackCue*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<TextTrackCue*>(this, 0)[index];
		}
		TextTrackCue* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<TextTrackCue*>(this, 0)[index];
		}
		TextTrackCueList* get_prototype();
		void set_prototype(TextTrackCueList*);
		TextTrackCueList();
	};

	class TextTrackListEventMap: public Object{
	public:
		TrackEvent* get_addtrack();
		void set_addtrack(TrackEvent*);
	};

	class TextTrackList: public EventTarget {
	public:
		double get_length();
		EventListener* get_onaddtrack();
		void set_onaddtrack(EventListener*);
		TextTrack* item(double index);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		TextTrack*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<TextTrack*>(this, 0)[index];
		}
		TextTrack* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<TextTrack*>(this, 0)[index];
		}
		TextTrackList* get_prototype();
		void set_prototype(TextTrackList*);
		TextTrackList();
	};

	class TimeRanges: public Object{
	public:
		double get_length();
		double end(double index);
		double start(double index);
		TimeRanges* get_prototype();
		void set_prototype(TimeRanges*);
		TimeRanges();
	};

	class Touch: public Object{
	public:
		double get_clientX();
		double get_clientY();
		double get_identifier();
		double get_pageX();
		double get_pageY();
		double get_screenX();
		double get_screenY();
		EventTarget* get_target();
		Touch* get_prototype();
		void set_prototype(Touch*);
		Touch();
	};

	class TouchEvent: public UIEvent {
	public:
		bool get_altKey();
		TouchList* get_changedTouches();
		double get_charCode();
		bool get_ctrlKey();
		double get_keyCode();
		bool get_metaKey();
		bool get_shiftKey();
		TouchList* get_targetTouches();
		TouchList* get_touches();
		double get_which();
		TouchEvent* get_prototype();
		void set_prototype(TouchEvent*);
		TouchEvent(const String& type);
		TouchEvent(const String& type, TouchEventInit* touchEventInit);
	};

	class TouchEventInit: public EventModifierInit {
	public:
		Array* get_changedTouches();
		void set_changedTouches(Array*);
		Array* get_targetTouches();
		void set_targetTouches(Array*);
		Array* get_touches();
		void set_touches(Array*);
	};

	class TouchList: public Object{
	public:
		double get_length();
		Touch* item(double index);
		Touch*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<Touch*>(this, 0)[index];
		}
		Touch* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<Touch*>(this, 0)[index];
		}
		TouchList* get_prototype();
		void set_prototype(TouchList*);
		TouchList();
	};

	class TrackEvent: public Event {
	public:
		VideoTrack* get_track();
		TrackEvent* get_prototype();
		void set_prototype(TrackEvent*);
		TrackEvent(const String& typeArg);
		TrackEvent(const String& typeArg, TrackEventInit* eventInitDict);
	};

	class TransitionEvent: public Event {
	public:
		double get_elapsedTime();
		String* get_propertyName();
		void initTransitionEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, const String& propertyNameArg, double elapsedTimeArg);
		TransitionEvent* get_prototype();
		void set_prototype(TransitionEvent*);
		TransitionEvent(const String& typeArg);
		TransitionEvent(const String& typeArg, TransitionEventInit* eventInitDict);
	};

	class TreeWalker: public Object{
	public:
		Node* get_currentNode();
		void set_currentNode(Node*);
		bool get_expandEntityReferences();
		NodeFilter* get_filter();
		Node* get_root();
		double get_whatToShow();
		Node* firstChild();
		Node* lastChild();
		Node* nextNode();
		Node* nextSibling();
		Node* parentNode();
		Node* previousNode();
		Node* previousSibling();
		TreeWalker* get_prototype();
		void set_prototype(TreeWalker*);
		TreeWalker();
	};

	class URL: public Object{
	public:
		String* get_hash();
		void set_hash(const String&);
		String* get_host();
		void set_host(const String&);
		String* get_hostname();
		void set_hostname(const String&);
		String* get_href();
		void set_href(const String&);
		String* get_origin();
		String* get_password();
		void set_password(const String&);
		String* get_pathname();
		void set_pathname(const String&);
		String* get_port();
		void set_port(const String&);
		String* get_protocol();
		void set_protocol(const String&);
		String* get_search();
		void set_search(const String&);
		URLSearchParams* get_searchParams();
		String* get_username();
		void set_username(const String&);
		String* toString();
		URL* get_prototype();
		void set_prototype(URL*);
		URL(const String& url);
		URL(const String& url, const String& base);
		URL(const String& url, URL* base);
		static String* createObjectURL(Object* object) [[cheerp::static]];
		static String* createObjectURL(Object* object, ObjectURLOptions* options) [[cheerp::static]];
		static void revokeObjectURL(const String& url) [[cheerp::static]];
	};

	class URLSearchParams: public Object{
	public:
		void append(const String& name, const String& value);
		void _delete(const String& name);
		String* get(const String& name);
		Array* getAll(const String& name);
		bool has(const String& name);
		void set(const String& name, const String& value);
		URLSearchParams* get_prototype();
		void set_prototype(URLSearchParams*);
		URLSearchParams();
		URLSearchParams(const String& init);
		URLSearchParams(URLSearchParams* init);
	};

	class VRDisplay: public EventTarget {
	public:
		VRDisplayCapabilities* get_capabilities();
		double get_depthFar();
		void set_depthFar(double);
		double get_depthNear();
		void set_depthNear(double);
		double get_displayId();
		String* get_displayName();
		bool get_isConnected();
		bool get_isPresenting();
		VRStageParameters* get_stageParameters();
		void cancelAnimationFrame(double handle);
		Promise* exitPresent();
		VREyeParameters* getEyeParameters(const String& whichEye);
		bool getFrameData(VRFrameData* frameData);
		Array* getLayers();
		VRPose* getPose();
		double requestAnimationFrame(EventListener* callback);
		Promise* requestPresent(Array* layers);
		void resetPose();
		void submitFrame();
		void submitFrame(VRPose* pose);
		VRDisplay* get_prototype();
		void set_prototype(VRDisplay*);
		VRDisplay();
	};

	class VRDisplayCapabilities: public Object{
	public:
		bool get_canPresent();
		bool get_hasExternalDisplay();
		bool get_hasOrientation();
		bool get_hasPosition();
		double get_maxLayers();
		VRDisplayCapabilities* get_prototype();
		void set_prototype(VRDisplayCapabilities*);
		VRDisplayCapabilities();
	};

	class VRDisplayEvent: public Event {
	public:
		VRDisplay* get_display();
		String* get_reason();
		VRDisplayEvent* get_prototype();
		void set_prototype(VRDisplayEvent*);
		VRDisplayEvent(const String& type, VRDisplayEventInit* eventInitDict);
	};

	class VREyeParameters: public Object{
	public:
		VRFieldOfView* get_fieldOfView();
		Float32Array* get_offset();
		double get_renderHeight();
		double get_renderWidth();
		VREyeParameters* get_prototype();
		void set_prototype(VREyeParameters*);
		VREyeParameters();
	};

	class VRFieldOfView: public Object{
	public:
		double get_downDegrees();
		double get_leftDegrees();
		double get_rightDegrees();
		double get_upDegrees();
		VRFieldOfView* get_prototype();
		void set_prototype(VRFieldOfView*);
		VRFieldOfView();
	};

	class VRFrameData: public Object{
	public:
		Float32Array* get_leftProjectionMatrix();
		Float32Array* get_leftViewMatrix();
		VRPose* get_pose();
		Float32Array* get_rightProjectionMatrix();
		Float32Array* get_rightViewMatrix();
		double get_timestamp();
		VRFrameData* get_prototype();
		void set_prototype(VRFrameData*);
		VRFrameData();
	};

	class VRPose: public Object{
	public:
		Float32Array* get_angularAcceleration();
		Float32Array* get_angularVelocity();
		Float32Array* get_linearAcceleration();
		Float32Array* get_linearVelocity();
		Float32Array* get_orientation();
		Float32Array* get_position();
		double get_timestamp();
		VRPose* get_prototype();
		void set_prototype(VRPose*);
		VRPose();
	};

	class ValidityState: public Object{
	public:
		bool get_badInput();
		bool get_customError();
		bool get_patternMismatch();
		bool get_rangeOverflow();
		bool get_rangeUnderflow();
		bool get_stepMismatch();
		bool get_tooLong();
		bool get_tooShort();
		bool get_typeMismatch();
		bool get_valid();
		bool get_valueMissing();
		ValidityState* get_prototype();
		void set_prototype(ValidityState*);
		ValidityState();
	};

	class VideoPlaybackQuality: public Object{
	public:
		double get_corruptedVideoFrames();
		double get_creationTime();
		double get_droppedVideoFrames();
		double get_totalFrameDelay();
		double get_totalVideoFrames();
		VideoPlaybackQuality* get_prototype();
		void set_prototype(VideoPlaybackQuality*);
		VideoPlaybackQuality();
	};

	class VideoTrack: public Object{
	public:
		String* get_id();
		String* get_kind();
		void set_kind(const String&);
		String* get_label();
		String* get_language();
		void set_language(const String&);
		bool get_selected();
		void set_selected(bool);
		SourceBuffer* get_sourceBuffer();
		VideoTrack* get_prototype();
		void set_prototype(VideoTrack*);
		VideoTrack();
	};

	class VideoTrackListEventMap: public Object{
	public:
		TrackEvent* get_addtrack();
		void set_addtrack(TrackEvent*);
		Event* get_change();
		void set_change(Event*);
		TrackEvent* get_removetrack();
		void set_removetrack(TrackEvent*);
	};

	class VideoTrackList: public EventTarget {
	public:
		double get_length();
		EventListener* get_onaddtrack();
		void set_onaddtrack(EventListener*);
		EventListener* get_onchange();
		void set_onchange(EventListener*);
		EventListener* get_onremovetrack();
		void set_onremovetrack(EventListener*);
		double get_selectedIndex();
		VideoTrack* getTrackById(const String& id);
		VideoTrack* item(double index);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		VideoTrack*& operator[](int index)
		{
			return __builtin_cheerp_make_regular<VideoTrack*>(this, 0)[index];
		}
		VideoTrack* operator[](int index) const
		{
			return __builtin_cheerp_make_regular<VideoTrack*>(this, 0)[index];
		}
		VideoTrackList* get_prototype();
		void set_prototype(VideoTrackList*);
		VideoTrackList();
	};

	class WaveShaperNode: public AudioNode {
	public:
		Float32Array* get_curve();
		void set_curve(Float32Array*);
		String* get_oversample();
		void set_oversample(const String&);
		WaveShaperNode* get_prototype();
		void set_prototype(WaveShaperNode*);
		WaveShaperNode();
	};

	class WebAuthentication: public Object{
	public:
		Promise* getAssertion(Int8Array* assertionChallenge);
		Promise* getAssertion(Int8Array* assertionChallenge, AssertionOptions* options);
		Promise* getAssertion(Int16Array* assertionChallenge);
		Promise* getAssertion(Int16Array* assertionChallenge, AssertionOptions* options);
		Promise* getAssertion(Int32Array* assertionChallenge);
		Promise* getAssertion(Int32Array* assertionChallenge, AssertionOptions* options);
		Promise* getAssertion(Uint8Array* assertionChallenge);
		Promise* getAssertion(Uint8Array* assertionChallenge, AssertionOptions* options);
		Promise* getAssertion(Uint16Array* assertionChallenge);
		Promise* getAssertion(Uint16Array* assertionChallenge, AssertionOptions* options);
		Promise* getAssertion(Uint32Array* assertionChallenge);
		Promise* getAssertion(Uint32Array* assertionChallenge, AssertionOptions* options);
		Promise* getAssertion(Uint8ClampedArray* assertionChallenge);
		Promise* getAssertion(Uint8ClampedArray* assertionChallenge, AssertionOptions* options);
		Promise* getAssertion(Float32Array* assertionChallenge);
		Promise* getAssertion(Float32Array* assertionChallenge, AssertionOptions* options);
		Promise* getAssertion(Float64Array* assertionChallenge);
		Promise* getAssertion(Float64Array* assertionChallenge, AssertionOptions* options);
		Promise* getAssertion(DataView* assertionChallenge);
		Promise* getAssertion(DataView* assertionChallenge, AssertionOptions* options);
		Promise* getAssertion(ArrayBuffer* assertionChallenge);
		Promise* getAssertion(ArrayBuffer* assertionChallenge, AssertionOptions* options);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Int8Array* attestationChallenge);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Int8Array* attestationChallenge, ScopedCredentialOptions* options);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Int16Array* attestationChallenge);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Int16Array* attestationChallenge, ScopedCredentialOptions* options);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Int32Array* attestationChallenge);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Int32Array* attestationChallenge, ScopedCredentialOptions* options);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Uint8Array* attestationChallenge);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Uint8Array* attestationChallenge, ScopedCredentialOptions* options);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Uint16Array* attestationChallenge);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Uint16Array* attestationChallenge, ScopedCredentialOptions* options);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Uint32Array* attestationChallenge);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Uint32Array* attestationChallenge, ScopedCredentialOptions* options);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Uint8ClampedArray* attestationChallenge);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Uint8ClampedArray* attestationChallenge, ScopedCredentialOptions* options);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Float32Array* attestationChallenge);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Float32Array* attestationChallenge, ScopedCredentialOptions* options);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Float64Array* attestationChallenge);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, Float64Array* attestationChallenge, ScopedCredentialOptions* options);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, DataView* attestationChallenge);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, DataView* attestationChallenge, ScopedCredentialOptions* options);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, ArrayBuffer* attestationChallenge);
		Promise* makeCredential(Account* accountInformation, Array* cryptoParameters, ArrayBuffer* attestationChallenge, ScopedCredentialOptions* options);
		WebAuthentication* get_prototype();
		void set_prototype(WebAuthentication*);
		WebAuthentication();
	};

	class WebAuthnAssertion: public Object{
	public:
		ArrayBuffer* get_authenticatorData();
		ArrayBuffer* get_clientData();
		ScopedCredential* get_credential();
		ArrayBuffer* get_signature();
		WebAuthnAssertion* get_prototype();
		void set_prototype(WebAuthnAssertion*);
		WebAuthnAssertion();
	};

	class WebKitCSSMatrix: public Object{
	public:
		double get_a();
		void set_a(double);
		double get_b();
		void set_b(double);
		double get_c();
		void set_c(double);
		double get_d();
		void set_d(double);
		double get_e();
		void set_e(double);
		double get_f();
		void set_f(double);
		double get_m11();
		void set_m11(double);
		double get_m12();
		void set_m12(double);
		double get_m13();
		void set_m13(double);
		double get_m14();
		void set_m14(double);
		double get_m21();
		void set_m21(double);
		double get_m22();
		void set_m22(double);
		double get_m23();
		void set_m23(double);
		double get_m24();
		void set_m24(double);
		double get_m31();
		void set_m31(double);
		double get_m32();
		void set_m32(double);
		double get_m33();
		void set_m33(double);
		double get_m34();
		void set_m34(double);
		double get_m41();
		void set_m41(double);
		double get_m42();
		void set_m42(double);
		double get_m43();
		void set_m43(double);
		double get_m44();
		void set_m44(double);
		WebKitCSSMatrix* inverse();
		WebKitCSSMatrix* multiply(WebKitCSSMatrix* secondMatrix);
		WebKitCSSMatrix* rotate(double angleX);
		WebKitCSSMatrix* rotate(double angleX, double angleY);
		WebKitCSSMatrix* rotate(double angleX, double angleY, double angleZ);
		WebKitCSSMatrix* rotateAxisAngle(double x, double y, double z, double angle);
		WebKitCSSMatrix* scale(double scaleX);
		WebKitCSSMatrix* scale(double scaleX, double scaleY);
		WebKitCSSMatrix* scale(double scaleX, double scaleY, double scaleZ);
		void setMatrixValue(const String& value);
		WebKitCSSMatrix* skewX(double angle);
		WebKitCSSMatrix* skewY(double angle);
		String* toString();
		WebKitCSSMatrix* translate(double x, double y);
		WebKitCSSMatrix* translate(double x, double y, double z);
		WebKitCSSMatrix* get_prototype();
		void set_prototype(WebKitCSSMatrix*);
		WebKitCSSMatrix();
		WebKitCSSMatrix(const String& text);
	};

	class WebKitEntry: public Object{
	public:
		WebKitFileSystem* get_filesystem();
		String* get_fullPath();
		bool get_isDirectory();
		bool get_isFile();
		String* get_name();
		WebKitEntry* get_prototype();
		void set_prototype(WebKitEntry*);
		WebKitEntry();
	};

	class WebKitDirectoryEntry: public WebKitEntry {
	public:
		WebKitDirectoryReader* createReader();
		WebKitDirectoryEntry* get_prototype();
		void set_prototype(WebKitDirectoryEntry*);
		WebKitDirectoryEntry();
	};

	class WebKitDirectoryReader: public Object{
	public:
		void readEntries(EventListener* successCallback);
		void readEntries(EventListener* successCallback, EventListener* errorCallback);
		WebKitDirectoryReader* get_prototype();
		void set_prototype(WebKitDirectoryReader*);
		WebKitDirectoryReader();
	};

	class WebKitFileEntry: public WebKitEntry {
	public:
		void file(EventListener* successCallback);
		void file(EventListener* successCallback, EventListener* errorCallback);
		WebKitFileEntry* get_prototype();
		void set_prototype(WebKitFileEntry*);
		WebKitFileEntry();
	};

	class WebKitFileSystem: public Object{
	public:
		String* get_name();
		WebKitDirectoryEntry* get_root();
		WebKitFileSystem* get_prototype();
		void set_prototype(WebKitFileSystem*);
		WebKitFileSystem();
	};

	class WebKitPoint: public Object{
	public:
		double get_x();
		void set_x(double);
		double get_y();
		void set_y(double);
		WebKitPoint* get_prototype();
		void set_prototype(WebKitPoint*);
		WebKitPoint();
		WebKitPoint(double x);
		WebKitPoint(double x, double y);
	};

	class WebSocketEventMap: public Object{
	public:
		CloseEvent* get_close();
		void set_close(CloseEvent*);
		Event* get_error();
		void set_error(Event*);
		MessageEvent* get_message();
		void set_message(MessageEvent*);
		Event* get_open();
		void set_open(Event*);
	};

	class WebSocket: public EventTarget {
	public:
		String* get_binaryType();
		void set_binaryType(const String&);
		double get_bufferedAmount();
		String* get_extensions();
		EventListener* get_onclose();
		void set_onclose(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		EventListener* get_onopen();
		void set_onopen(EventListener*);
		String* get_protocol();
		double get_readyState();
		String* get_url();
		void close();
		void close(double code);
		void close(double code, const String& reason);
		void send(const String& data);
		template<class ArrayBufferLike> void send(ArrayBufferLike* data);
		void send(Blob* data);
		void send(ArrayBufferView* data);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		WebSocket* get_prototype();
		void set_prototype(WebSocket*);
		WebSocket(const String& url);
		WebSocket(const String& url, const String& protocols);
		WebSocket(const String& url, Array* protocols);
		double get_CLOSED();
		double get_CLOSING();
		double get_CONNECTING();
		double get_OPEN();
	};

	class WheelEvent: public MouseEvent {
	public:
		double get_deltaMode();
		double get_deltaX();
		double get_deltaY();
		double get_deltaZ();
		double get_wheelDelta();
		double get_wheelDeltaX();
		double get_wheelDeltaY();
		void getCurrentPoint(Element* element);
		void initWheelEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Window* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double buttonArg, EventTarget* relatedTargetArg, const String& modifiersListArg, double deltaXArg, double deltaYArg, double deltaZArg, double deltaMode);
		WheelEvent* get_prototype();
		void set_prototype(WheelEvent*);
		WheelEvent(const String& typeArg);
		WheelEvent(const String& typeArg, WheelEventInit* eventInitDict);
		double get_DOM_DELTA_LINE();
		double get_DOM_DELTA_PAGE();
		double get_DOM_DELTA_PIXEL();
	};

	class WindowEventMap: public GlobalEventHandlersEventMap {
	public:
		UIEvent* get_abort();
		void set_abort(UIEvent*);
		Event* get_afterprint();
		void set_afterprint(Event*);
		Event* get_beforeprint();
		void set_beforeprint(Event*);
		BeforeUnloadEvent* get_beforeunload();
		void set_beforeunload(BeforeUnloadEvent*);
		FocusEvent* get_blur();
		void set_blur(FocusEvent*);
		Event* get_canplay();
		void set_canplay(Event*);
		Event* get_canplaythrough();
		void set_canplaythrough(Event*);
		Event* get_change();
		void set_change(Event*);
		MouseEvent* get_click();
		void set_click(MouseEvent*);
		Event* get_compassneedscalibration();
		void set_compassneedscalibration(Event*);
		PointerEvent* get_contextmenu();
		void set_contextmenu(PointerEvent*);
		MouseEvent* get_dblclick();
		void set_dblclick(MouseEvent*);
		DeviceLightEvent* get_devicelight();
		void set_devicelight(DeviceLightEvent*);
		DeviceMotionEvent* get_devicemotion();
		void set_devicemotion(DeviceMotionEvent*);
		DeviceOrientationEvent* get_deviceorientation();
		void set_deviceorientation(DeviceOrientationEvent*);
		DragEvent* get_drag();
		void set_drag(DragEvent*);
		DragEvent* get_dragend();
		void set_dragend(DragEvent*);
		DragEvent* get_dragenter();
		void set_dragenter(DragEvent*);
		DragEvent* get_dragleave();
		void set_dragleave(DragEvent*);
		DragEvent* get_dragover();
		void set_dragover(DragEvent*);
		DragEvent* get_dragstart();
		void set_dragstart(DragEvent*);
		DragEvent* get_drop();
		void set_drop(DragEvent*);
		Event* get_durationchange();
		void set_durationchange(Event*);
		Event* get_emptied();
		void set_emptied(Event*);
		Event* get_ended();
		void set_ended(Event*);
		ErrorEvent* get_error();
		void set_error(ErrorEvent*);
		FocusEvent* get_focus();
		void set_focus(FocusEvent*);
		HashChangeEvent* get_hashchange();
		void set_hashchange(HashChangeEvent*);
		Event* get_input();
		void set_input(Event*);
		Event* get_invalid();
		void set_invalid(Event*);
		KeyboardEvent* get_keydown();
		void set_keydown(KeyboardEvent*);
		KeyboardEvent* get_keypress();
		void set_keypress(KeyboardEvent*);
		KeyboardEvent* get_keyup();
		void set_keyup(KeyboardEvent*);
		Event* get_load();
		void set_load(Event*);
		Event* get_loadeddata();
		void set_loadeddata(Event*);
		Event* get_loadedmetadata();
		void set_loadedmetadata(Event*);
		Event* get_loadstart();
		void set_loadstart(Event*);
		MessageEvent* get_message();
		void set_message(MessageEvent*);
		MouseEvent* get_mousedown();
		void set_mousedown(MouseEvent*);
		MouseEvent* get_mouseenter();
		void set_mouseenter(MouseEvent*);
		MouseEvent* get_mouseleave();
		void set_mouseleave(MouseEvent*);
		MouseEvent* get_mousemove();
		void set_mousemove(MouseEvent*);
		MouseEvent* get_mouseout();
		void set_mouseout(MouseEvent*);
		MouseEvent* get_mouseover();
		void set_mouseover(MouseEvent*);
		MouseEvent* get_mouseup();
		void set_mouseup(MouseEvent*);
		WheelEvent* get_mousewheel();
		void set_mousewheel(WheelEvent*);
		Event* get_MSGestureChange();
		void set_MSGestureChange(Event*);
		Event* get_MSGestureDoubleTap();
		void set_MSGestureDoubleTap(Event*);
		Event* get_MSGestureEnd();
		void set_MSGestureEnd(Event*);
		Event* get_MSGestureHold();
		void set_MSGestureHold(Event*);
		Event* get_MSGestureStart();
		void set_MSGestureStart(Event*);
		Event* get_MSGestureTap();
		void set_MSGestureTap(Event*);
		Event* get_MSInertiaStart();
		void set_MSInertiaStart(Event*);
		Event* get_MSPointerCancel();
		void set_MSPointerCancel(Event*);
		Event* get_MSPointerDown();
		void set_MSPointerDown(Event*);
		Event* get_MSPointerEnter();
		void set_MSPointerEnter(Event*);
		Event* get_MSPointerLeave();
		void set_MSPointerLeave(Event*);
		Event* get_MSPointerMove();
		void set_MSPointerMove(Event*);
		Event* get_MSPointerOut();
		void set_MSPointerOut(Event*);
		Event* get_MSPointerOver();
		void set_MSPointerOver(Event*);
		Event* get_MSPointerUp();
		void set_MSPointerUp(Event*);
		Event* get_offline();
		void set_offline(Event*);
		Event* get_online();
		void set_online(Event*);
		Event* get_orientationchange();
		void set_orientationchange(Event*);
		PageTransitionEvent* get_pagehide();
		void set_pagehide(PageTransitionEvent*);
		PageTransitionEvent* get_pageshow();
		void set_pageshow(PageTransitionEvent*);
		Event* get_pause();
		void set_pause(Event*);
		Event* get_play();
		void set_play(Event*);
		Event* get_playing();
		void set_playing(Event*);
		PopStateEvent* get_popstate();
		void set_popstate(PopStateEvent*);
		ProgressEvent* get_progress();
		void set_progress(ProgressEvent*);
		Event* get_ratechange();
		void set_ratechange(Event*);
		ProgressEvent* get_readystatechange();
		void set_readystatechange(ProgressEvent*);
		Event* get_reset();
		void set_reset(Event*);
		UIEvent* get_resize();
		void set_resize(UIEvent*);
		UIEvent* get_scroll();
		void set_scroll(UIEvent*);
		Event* get_seeked();
		void set_seeked(Event*);
		Event* get_seeking();
		void set_seeking(Event*);
		UIEvent* get_select();
		void set_select(UIEvent*);
		Event* get_stalled();
		void set_stalled(Event*);
		StorageEvent* get_storage();
		void set_storage(StorageEvent*);
		Event* get_submit();
		void set_submit(Event*);
		Event* get_suspend();
		void set_suspend(Event*);
		Event* get_timeupdate();
		void set_timeupdate(Event*);
		TouchEvent* get_touchcancel();
		void set_touchcancel(TouchEvent*);
		TouchEvent* get_touchend();
		void set_touchend(TouchEvent*);
		TouchEvent* get_touchmove();
		void set_touchmove(TouchEvent*);
		TouchEvent* get_touchstart();
		void set_touchstart(TouchEvent*);
		Event* get_unload();
		void set_unload(Event*);
		Event* get_volumechange();
		void set_volumechange(Event*);
		Event* get_vrdisplayactivate();
		void set_vrdisplayactivate(Event*);
		Event* get_vrdisplayblur();
		void set_vrdisplayblur(Event*);
		Event* get_vrdisplayconnect();
		void set_vrdisplayconnect(Event*);
		Event* get_vrdisplaydeactivate();
		void set_vrdisplaydeactivate(Event*);
		Event* get_vrdisplaydisconnect();
		void set_vrdisplaydisconnect(Event*);
		Event* get_vrdisplayfocus();
		void set_vrdisplayfocus(Event*);
		Event* get_vrdisplaypointerrestricted();
		void set_vrdisplaypointerrestricted(Event*);
		Event* get_vrdisplaypointerunrestricted();
		void set_vrdisplaypointerunrestricted(Event*);
		Event* get_vrdisplaypresentchange();
		void set_vrdisplaypresentchange(Event*);
		Event* get_waiting();
		void set_waiting(Event*);
	};

	class [[cheerp::client_layout]] WindowTimersExtension{
	public:
		void clearImmediate(double handle);
		double setImmediate(EventListener* handler);
		template<typename... Args> double setImmediate(Object* handler, Args&&... args) { return static_cast<const WindowTimersExtension*>(this)->setImmediate(handler, static_cast<Object*>(static_cast<Args&&>(args))...); }
		double setImmediate(Object* handler);
	private:
		template<typename... Args> double setImmediate(Object* handler, Args... args) const;
	};

	class [[cheerp::client_layout]] WindowTimers: public WindowTimersExtension {
	public:
		void clearInterval();
		void clearInterval(double handle);
		void clearTimeout();
		void clearTimeout(double handle);
		double setInterval(EventListener* handler, double timeout);
		double setInterval(Object* handler);
		template<typename... Args> double setInterval(Object* handler, Object* timeout, Args&&... args) { return static_cast<const WindowTimers*>(this)->setInterval(handler, timeout, static_cast<Object*>(static_cast<Args&&>(args))...); }
		double setInterval(Object* handler, Object* timeout);
		double setTimeout(EventListener* handler, double timeout);
		double setTimeout(Object* handler);
		template<typename... Args> double setTimeout(Object* handler, Object* timeout, Args&&... args) { return static_cast<const WindowTimers*>(this)->setTimeout(handler, timeout, static_cast<Object*>(static_cast<Args&&>(args))...); }
		double setTimeout(Object* handler, Object* timeout);
	private:
		template<typename... Args> double setInterval(Object* handler, Object* timeout, Args... args) const;
		template<typename... Args> double setTimeout(Object* handler, Object* timeout, Args... args) const;
	};

	class [[cheerp::client_layout]] WindowSessionStorage{
	public:
		Storage* get_sessionStorage();
	};

	class [[cheerp::client_layout]] WindowLocalStorage{
	public:
		Storage* get_localStorage();
	};

	class [[cheerp::client_layout]] WindowConsole{
	public:
		Console* get_console();
	};

	class [[cheerp::client_layout]] WindowBase64{
	public:
		String* atob(const String& encodedString);
		String* btoa(const String& rawString);
	};

	class Window: public EventTarget , public WindowTimers , public WindowSessionStorage , public WindowLocalStorage , public WindowConsole , public GlobalEventHandlers , public IDBEnvironment , public WindowBase64 , public GlobalFetch {
	public:
		Blob* get_Blob();
		void set_Blob(Blob*);
		URLSearchParams* get_URLSearchParams();
		void set_URLSearchParams(URLSearchParams*);
		ApplicationCache* get_applicationCache();
		CacheStorage* get_caches();
		Navigator* get_clientInformation();
		bool get_closed();
		Crypto* get_crypto();
		CustomElementRegistry* get_customElements();
		void set_customElements(CustomElementRegistry*);
		String* get_defaultStatus();
		void set_defaultStatus(const String&);
		double get_devicePixelRatio();
		String* get_doNotTrack();
		Document* get_document();
		Event* get_event();
		void set_event(Event*);
		External* get_external();
		Element* get_frameElement();
		Window* get_frames();
		History* get_history();
		double get_innerHeight();
		double get_innerWidth();
		bool get_isSecureContext();
		double get_length();
		Location* get_location();
		void set_location(Location*);
		BarProp* get_locationbar();
		BarProp* get_menubar();
		ExtensionScriptApis* get_msContentScript();
		MSCredentials* get_msCredentials();
		String* get_name();
		void set_name(const String&);
		Navigator* get_navigator();
		String* get_offscreenBuffering();
		void set_offscreenBuffering(const String&);
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_onafterprint();
		void set_onafterprint(EventListener*);
		EventListener* get_onbeforeprint();
		void set_onbeforeprint(EventListener*);
		EventListener* get_onbeforeunload();
		void set_onbeforeunload(EventListener*);
		EventListener* get_onblur();
		void set_onblur(EventListener*);
		EventListener* get_oncanplay();
		void set_oncanplay(EventListener*);
		EventListener* get_oncanplaythrough();
		void set_oncanplaythrough(EventListener*);
		EventListener* get_onchange();
		void set_onchange(EventListener*);
		EventListener* get_onclick();
		void set_onclick(EventListener*);
		EventListener* get_oncompassneedscalibration();
		void set_oncompassneedscalibration(EventListener*);
		EventListener* get_oncontextmenu();
		void set_oncontextmenu(EventListener*);
		EventListener* get_ondblclick();
		void set_ondblclick(EventListener*);
		EventListener* get_ondevicelight();
		void set_ondevicelight(EventListener*);
		EventListener* get_ondevicemotion();
		void set_ondevicemotion(EventListener*);
		EventListener* get_ondeviceorientation();
		void set_ondeviceorientation(EventListener*);
		EventListener* get_ondrag();
		void set_ondrag(EventListener*);
		EventListener* get_ondragend();
		void set_ondragend(EventListener*);
		EventListener* get_ondragenter();
		void set_ondragenter(EventListener*);
		EventListener* get_ondragleave();
		void set_ondragleave(EventListener*);
		EventListener* get_ondragover();
		void set_ondragover(EventListener*);
		EventListener* get_ondragstart();
		void set_ondragstart(EventListener*);
		EventListener* get_ondrop();
		void set_ondrop(EventListener*);
		EventListener* get_ondurationchange();
		void set_ondurationchange(EventListener*);
		EventListener* get_onemptied();
		void set_onemptied(EventListener*);
		EventListener* get_onended();
		void set_onended(EventListener*);
		ErrorEventHandler* get_onerror();
		void set_onerror(ErrorEventHandler*);
		EventListener* get_onfocus();
		void set_onfocus(EventListener*);
		EventListener* get_onhashchange();
		void set_onhashchange(EventListener*);
		EventListener* get_oninput();
		void set_oninput(EventListener*);
		EventListener* get_oninvalid();
		void set_oninvalid(EventListener*);
		EventListener* get_onkeydown();
		void set_onkeydown(EventListener*);
		EventListener* get_onkeypress();
		void set_onkeypress(EventListener*);
		EventListener* get_onkeyup();
		void set_onkeyup(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onloadeddata();
		void set_onloadeddata(EventListener*);
		EventListener* get_onloadedmetadata();
		void set_onloadedmetadata(EventListener*);
		EventListener* get_onloadstart();
		void set_onloadstart(EventListener*);
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		EventListener* get_onmousedown();
		void set_onmousedown(EventListener*);
		EventListener* get_onmouseenter();
		void set_onmouseenter(EventListener*);
		EventListener* get_onmouseleave();
		void set_onmouseleave(EventListener*);
		EventListener* get_onmousemove();
		void set_onmousemove(EventListener*);
		EventListener* get_onmouseout();
		void set_onmouseout(EventListener*);
		EventListener* get_onmouseover();
		void set_onmouseover(EventListener*);
		EventListener* get_onmouseup();
		void set_onmouseup(EventListener*);
		EventListener* get_onmousewheel();
		void set_onmousewheel(EventListener*);
		EventListener* get_onmsgesturechange();
		void set_onmsgesturechange(EventListener*);
		EventListener* get_onmsgesturedoubletap();
		void set_onmsgesturedoubletap(EventListener*);
		EventListener* get_onmsgestureend();
		void set_onmsgestureend(EventListener*);
		EventListener* get_onmsgesturehold();
		void set_onmsgesturehold(EventListener*);
		EventListener* get_onmsgesturestart();
		void set_onmsgesturestart(EventListener*);
		EventListener* get_onmsgesturetap();
		void set_onmsgesturetap(EventListener*);
		EventListener* get_onmsinertiastart();
		void set_onmsinertiastart(EventListener*);
		EventListener* get_onmspointercancel();
		void set_onmspointercancel(EventListener*);
		EventListener* get_onmspointerdown();
		void set_onmspointerdown(EventListener*);
		EventListener* get_onmspointerenter();
		void set_onmspointerenter(EventListener*);
		EventListener* get_onmspointerleave();
		void set_onmspointerleave(EventListener*);
		EventListener* get_onmspointermove();
		void set_onmspointermove(EventListener*);
		EventListener* get_onmspointerout();
		void set_onmspointerout(EventListener*);
		EventListener* get_onmspointerover();
		void set_onmspointerover(EventListener*);
		EventListener* get_onmspointerup();
		void set_onmspointerup(EventListener*);
		EventListener* get_onoffline();
		void set_onoffline(EventListener*);
		EventListener* get_ononline();
		void set_ononline(EventListener*);
		EventListener* get_onorientationchange();
		void set_onorientationchange(EventListener*);
		EventListener* get_onpagehide();
		void set_onpagehide(EventListener*);
		EventListener* get_onpageshow();
		void set_onpageshow(EventListener*);
		EventListener* get_onpause();
		void set_onpause(EventListener*);
		EventListener* get_onplay();
		void set_onplay(EventListener*);
		EventListener* get_onplaying();
		void set_onplaying(EventListener*);
		EventListener* get_onpopstate();
		void set_onpopstate(EventListener*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_onratechange();
		void set_onratechange(EventListener*);
		EventListener* get_onreadystatechange();
		void set_onreadystatechange(EventListener*);
		EventListener* get_onreset();
		void set_onreset(EventListener*);
		EventListener* get_onresize();
		void set_onresize(EventListener*);
		EventListener* get_onscroll();
		void set_onscroll(EventListener*);
		EventListener* get_onseeked();
		void set_onseeked(EventListener*);
		EventListener* get_onseeking();
		void set_onseeking(EventListener*);
		EventListener* get_onselect();
		void set_onselect(EventListener*);
		EventListener* get_onstalled();
		void set_onstalled(EventListener*);
		EventListener* get_onstorage();
		void set_onstorage(EventListener*);
		EventListener* get_onsubmit();
		void set_onsubmit(EventListener*);
		EventListener* get_onsuspend();
		void set_onsuspend(EventListener*);
		EventListener* get_ontimeupdate();
		void set_ontimeupdate(EventListener*);
		EventListener* get_ontouchcancel();
		void set_ontouchcancel(EventListener*);
		EventListener* get_ontouchend();
		void set_ontouchend(EventListener*);
		EventListener* get_ontouchmove();
		void set_ontouchmove(EventListener*);
		EventListener* get_ontouchstart();
		void set_ontouchstart(EventListener*);
		EventListener* get_onunload();
		void set_onunload(EventListener*);
		EventListener* get_onvolumechange();
		void set_onvolumechange(EventListener*);
		EventListener* get_onvrdisplayactivate();
		void set_onvrdisplayactivate(EventListener*);
		EventListener* get_onvrdisplayblur();
		void set_onvrdisplayblur(EventListener*);
		EventListener* get_onvrdisplayconnect();
		void set_onvrdisplayconnect(EventListener*);
		EventListener* get_onvrdisplaydeactivate();
		void set_onvrdisplaydeactivate(EventListener*);
		EventListener* get_onvrdisplaydisconnect();
		void set_onvrdisplaydisconnect(EventListener*);
		EventListener* get_onvrdisplayfocus();
		void set_onvrdisplayfocus(EventListener*);
		EventListener* get_onvrdisplaypointerrestricted();
		void set_onvrdisplaypointerrestricted(EventListener*);
		EventListener* get_onvrdisplaypointerunrestricted();
		void set_onvrdisplaypointerunrestricted(EventListener*);
		EventListener* get_onvrdisplaypresentchange();
		void set_onvrdisplaypresentchange(EventListener*);
		EventListener* get_onwaiting();
		void set_onwaiting(EventListener*);
		template<class ReturnType = Object*> ReturnType get_opener();
		void set_opener(Object*);
		String* get_orientation();
		double get_outerHeight();
		double get_outerWidth();
		double get_pageXOffset();
		double get_pageYOffset();
		Window* get_parent();
		Performance* get_performance();
		BarProp* get_personalbar();
		Screen* get_screen();
		double get_screenLeft();
		double get_screenTop();
		double get_screenX();
		double get_screenY();
		double get_scrollX();
		double get_scrollY();
		BarProp* get_scrollbars();
		Window* get_self();
		SpeechSynthesis* get_speechSynthesis();
		String* get_status();
		void set_status(const String&);
		BarProp* get_statusbar();
		StyleMedia* get_styleMedia();
		BarProp* get_toolbar();
		Window* get_top();
		Window* get_window();
		void alert();
		void alert(Object* message);
		void alert(const String& message);
		void blur();
		void cancelAnimationFrame(double handle);
		void captureEvents();
		void close();
		bool confirm();
		bool confirm(const String& message);
		Promise* createImageBitmap(HTMLImageElement* image);
		Promise* createImageBitmap(HTMLImageElement* image, ImageBitmapOptions* options);
		Promise* createImageBitmap(SVGImageElement* image);
		Promise* createImageBitmap(SVGImageElement* image, ImageBitmapOptions* options);
		Promise* createImageBitmap(HTMLVideoElement* image);
		Promise* createImageBitmap(HTMLVideoElement* image, ImageBitmapOptions* options);
		Promise* createImageBitmap(HTMLCanvasElement* image);
		Promise* createImageBitmap(HTMLCanvasElement* image, ImageBitmapOptions* options);
		Promise* createImageBitmap(ImageBitmap* image);
		Promise* createImageBitmap(ImageBitmap* image, ImageBitmapOptions* options);
		Promise* createImageBitmap(ImageData* image);
		Promise* createImageBitmap(ImageData* image, ImageBitmapOptions* options);
		Promise* createImageBitmap(Blob* image);
		Promise* createImageBitmap(Blob* image, ImageBitmapOptions* options);
		Promise* createImageBitmap(HTMLImageElement* image, double sx, double sy, double sw, double sh);
		Promise* createImageBitmap(HTMLImageElement* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
		Promise* createImageBitmap(SVGImageElement* image, double sx, double sy, double sw, double sh);
		Promise* createImageBitmap(SVGImageElement* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
		Promise* createImageBitmap(HTMLVideoElement* image, double sx, double sy, double sw, double sh);
		Promise* createImageBitmap(HTMLVideoElement* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
		Promise* createImageBitmap(HTMLCanvasElement* image, double sx, double sy, double sw, double sh);
		Promise* createImageBitmap(HTMLCanvasElement* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
		Promise* createImageBitmap(ImageBitmap* image, double sx, double sy, double sw, double sh);
		Promise* createImageBitmap(ImageBitmap* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
		Promise* createImageBitmap(ImageData* image, double sx, double sy, double sw, double sh);
		Promise* createImageBitmap(ImageData* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
		Promise* createImageBitmap(Blob* image, double sx, double sy, double sw, double sh);
		Promise* createImageBitmap(Blob* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
		void focus();
		CSSStyleDeclaration* getComputedStyle(Element* elt);
		CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
		CSSRuleList* getMatchedCSSRules(Element* elt);
		CSSRuleList* getMatchedCSSRules(Element* elt, const String& pseudoElt);
		Selection* getSelection();
		MediaQueryList* matchMedia(const String& mediaQuery);
		void moveBy();
		void moveBy(double x);
		void moveBy(double x, double y);
		void moveTo();
		void moveTo(double x);
		void moveTo(double x, double y);
		void msWriteProfilerMark(const String& profilerMarkName);
		Window* open();
		Window* open(const String& url);
		Window* open(const String& url, const String& target);
		Window* open(const String& url, const String& target, const String& features);
		Window* open(const String& url, const String& target, const String& features, bool replace);
		void postMessage(Object* message, const String& targetOrigin);
		void postMessage(Object* message, const String& targetOrigin, Array* transfer);
		void postMessage(const String& message, const String& targetOrigin);
		void postMessage(const String& message, const String& targetOrigin, Array* transfer);
		void print();
		String* prompt();
		String* prompt(const String& message);
		String* prompt(const String& message, const String& _default);
		void releaseEvents();
		double requestAnimationFrame(EventListener* callback);
		void resizeBy();
		void resizeBy(double x);
		void resizeBy(double x, double y);
		void resizeTo();
		void resizeTo(double x);
		void resizeTo(double x, double y);
		void scroll(ScrollToOptions* options);
		void scroll();
		void scroll(double x);
		void scroll(double x, double y);
		void scrollBy(ScrollToOptions* options);
		void scrollBy();
		void scrollBy(double x);
		void scrollBy(double x, double y);
		void scrollTo(ScrollToOptions* options);
		void scrollTo();
		void scrollTo(double x);
		void scrollTo(double x, double y);
		void stop();
		void webkitCancelAnimationFrame(double handle);
		WebKitPoint* webkitConvertPointFromNodeToPage(Node* node, WebKitPoint* pt);
		WebKitPoint* webkitConvertPointFromPageToNode(Node* node, WebKitPoint* pt);
		double webkitRequestAnimationFrame(EventListener* callback);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		template<class ReturnType = Object*> ReturnType eval(const String& x);
		Window* get_prototype();
		void set_prototype(Window*);
		Window();
	};

	class WorkerEventMap: public AbstractWorkerEventMap {
	public:
		MessageEvent* get_message();
		void set_message(MessageEvent*);
	};

	class Worker: public EventTarget , public AbstractWorker {
	public:
		EventListener* get_onmessage();
		void set_onmessage(EventListener*);
		void postMessage(Object* message);
		void postMessage(Object* message, Array* transfer);
		void postMessage(const String& message);
		void postMessage(const String& message, Array* transfer);
		void terminate();
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		Worker* get_prototype();
		void set_prototype(Worker*);
		Worker(const String& stringUrl);
	};

	class WritableStream: public Object{
	public:
		bool get_locked();
		Promise* abort();
		Promise* abort(Object* reason);
		WritableStreamDefaultWriter* getWriter();
		WritableStream* get_prototype();
		void set_prototype(WritableStream*);
		WritableStream();
		WritableStream(UnderlyingSink* underlyingSink);
		WritableStream(UnderlyingSink* underlyingSink, QueuingStrategy* strategy);
	};

	class WritableStreamDefaultController: public Object{
	public:
		void error();
		void error(Object* error);
		WritableStreamDefaultController* get_prototype();
		void set_prototype(WritableStreamDefaultController*);
		WritableStreamDefaultController();
	};

	class WritableStreamDefaultWriter: public Object{
	public:
		Promise* get_closed();
		double get_desiredSize();
		Promise* get_ready();
		Promise* abort();
		Promise* abort(Object* reason);
		Promise* close();
		void releaseLock();
		Promise* write();
		Promise* write(Object* chunk);
		WritableStreamDefaultWriter* get_prototype();
		void set_prototype(WritableStreamDefaultWriter*);
		WritableStreamDefaultWriter();
	};

	class XMLDocument: public Document {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		XMLDocument* get_prototype();
		void set_prototype(XMLDocument*);
		XMLDocument();
	};

	class XMLHttpRequestEventTargetEventMap: public Object{
	public:
		Event* get_abort();
		void set_abort(Event*);
		ErrorEvent* get_error();
		void set_error(ErrorEvent*);
		Event* get_load();
		void set_load(Event*);
		ProgressEvent* get_loadend();
		void set_loadend(ProgressEvent*);
		Event* get_loadstart();
		void set_loadstart(Event*);
		ProgressEvent* get_progress();
		void set_progress(ProgressEvent*);
		ProgressEvent* get_timeout();
		void set_timeout(ProgressEvent*);
	};

	class XMLHttpRequestEventMap: public XMLHttpRequestEventTargetEventMap {
	public:
		Event* get_readystatechange();
		void set_readystatechange(Event*);
	};

	class [[cheerp::client_layout]] XMLHttpRequestEventTarget{
	public:
		EventListener* get_onabort();
		void set_onabort(EventListener*);
		EventListener* get_onerror();
		void set_onerror(EventListener*);
		EventListener* get_onload();
		void set_onload(EventListener*);
		EventListener* get_onloadend();
		void set_onloadend(EventListener*);
		EventListener* get_onloadstart();
		void set_onloadstart(EventListener*);
		EventListener* get_onprogress();
		void set_onprogress(EventListener*);
		EventListener* get_ontimeout();
		void set_ontimeout(EventListener*);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
	};

	class XMLHttpRequest: public EventTarget , public XMLHttpRequestEventTarget {
	public:
		String* get_msCaching();
		void set_msCaching(const String&);
		EventListener* get_onreadystatechange();
		void set_onreadystatechange(EventListener*);
		double get_readyState();
		template<class ReturnType = Object*> ReturnType get_response();
		String* get_responseText();
		String* get_responseType();
		void set_responseType(const String&);
		String* get_responseURL();
		Document* get_responseXML();
		double get_status();
		String* get_statusText();
		double get_timeout();
		void set_timeout(double);
		XMLHttpRequestUpload* get_upload();
		bool get_withCredentials();
		void set_withCredentials(bool);
		void abort();
		String* getAllResponseHeaders();
		String* getResponseHeader(const String& header);
		bool msCachingEnabled();
		void open(const String& method, const String& url);
		void open(const String& method, const String& url, bool async);
		void open(const String& method, const String& url, bool async, const String& user);
		void open(const String& method, const String& url, bool async, const String& user, const String& password);
		void overrideMimeType(const String& mime);
		void send();
		void send(Object* data);
		void setRequestHeader(const String& header, const String& value);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		XMLHttpRequest* get_prototype();
		void set_prototype(XMLHttpRequest*);
		XMLHttpRequest();
		double get_DONE();
		double get_HEADERS_RECEIVED();
		double get_LOADING();
		double get_OPENED();
		double get_UNSENT();
	};

	class XMLHttpRequestUpload: public EventTarget , public XMLHttpRequestEventTarget {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		XMLHttpRequestUpload* get_prototype();
		void set_prototype(XMLHttpRequestUpload*);
		XMLHttpRequestUpload();
	};

	class XMLSerializer: public Object{
	public:
		String* serializeToString(Node* target);
		XMLSerializer* get_prototype();
		void set_prototype(XMLSerializer*);
		XMLSerializer();
	};

	class XPathEvaluator: public Object{
	public:
		XPathExpression* createExpression(const String& expression, XPathNSResolver* resolver);
		XPathNSResolver* createNSResolver();
		XPathNSResolver* createNSResolver(Node* nodeResolver);
		XPathResult* evaluate(const String& expression, Node* contextNode, XPathNSResolver* resolver, double type, XPathResult* result);
		XPathEvaluator* get_prototype();
		void set_prototype(XPathEvaluator*);
		XPathEvaluator();
	};

	class XPathExpression: public Object{
	public:
		XPathResult* evaluate(Node* contextNode, double type, XPathResult* result);
		XPathExpression* get_prototype();
		void set_prototype(XPathExpression*);
		XPathExpression();
	};

	class XPathNSResolver: public Object{
	public:
		String* lookupNamespaceURI(const String& prefix);
		XPathNSResolver* get_prototype();
		void set_prototype(XPathNSResolver*);
		XPathNSResolver();
	};

	class XPathResult: public Object{
	public:
		bool get_booleanValue();
		bool get_invalidIteratorState();
		double get_numberValue();
		double get_resultType();
		Node* get_singleNodeValue();
		double get_snapshotLength();
		String* get_stringValue();
		Node* iterateNext();
		Node* snapshotItem(double index);
		XPathResult* get_prototype();
		void set_prototype(XPathResult*);
		XPathResult();
		double get_ANY_TYPE();
		double get_ANY_UNORDERED_NODE_TYPE();
		double get_BOOLEAN_TYPE();
		double get_FIRST_ORDERED_NODE_TYPE();
		double get_NUMBER_TYPE();
		double get_ORDERED_NODE_ITERATOR_TYPE();
		double get_ORDERED_NODE_SNAPSHOT_TYPE();
		double get_STRING_TYPE();
		double get_UNORDERED_NODE_ITERATOR_TYPE();
		double get_UNORDERED_NODE_SNAPSHOT_TYPE();
	};

	class XSLTProcessor: public Object{
	public:
		void clearParameters();
		template<class ReturnType = Object*> ReturnType getParameter(const String& namespaceURI, const String& localName);
		void importStylesheet(Node* style);
		void removeParameter(const String& namespaceURI, const String& localName);
		void reset();
		void setParameter(const String& namespaceURI, const String& localName, Object* value);
		Document* transformToDocument(Node* source);
		DocumentFragment* transformToFragment(Node* source, Document* document);
		XSLTProcessor* get_prototype();
		void set_prototype(XSLTProcessor*);
		XSLTProcessor();
	};

	class webkitRTCPeerConnection: public RTCPeerConnection {
	public:
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool options);
		void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
		void addEventListener(const String& type, EventListenerObject* listener);
		void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool options);
		void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
		void removeEventListener(const String& type, EventListenerObject* listener);
		void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
		webkitRTCPeerConnection* get_prototype();
		void set_prototype(webkitRTCPeerConnection*);
		webkitRTCPeerConnection(RTCConfiguration* configuration);
	};

	class DecodeErrorCallback: public Object{
	public:
	};

	class DecodeSuccessCallback: public Object{
	public:
	};

	class ErrorEventHandler: public Object{
	public:
	};

	class EventHandlerNonNull: public Object{
	public:
	};

	class ForEachCallback: public Object{
	public:
	};

	class FrameRequestCallback: public Object{
	public:
	};

	class FunctionStringCallback: public Object{
	public:
	};

	class IntersectionObserverCallback: public Object{
	public:
	};

	class MSLaunchUriCallback: public Object{
	public:
	};

	class MediaQueryListListener: public Object{
	public:
	};

	class MutationCallback: public Object{
	public:
	};

	class NavigatorUserMediaErrorCallback: public Object{
	public:
	};

	class NavigatorUserMediaSuccessCallback: public Object{
	public:
	};

	class NotificationPermissionCallback: public Object{
	public:
	};

	class PositionCallback: public Object{
	public:
	};

	class PositionErrorCallback: public Object{
	public:
	};

	class RTCPeerConnectionErrorCallback: public Object{
	public:
	};

	class RTCSessionDescriptionCallback: public Object{
	public:
	};

	class RTCStatsCallback: public Object{
	public:
	};

	class VoidFunction: public Object{
	public:
	};

	class WritableStreamChunkCallback: public Object{
	public:
	};

	class WritableStreamDefaultControllerCallback: public Object{
	public:
	};

	class WritableStreamErrorCallback: public Object{
	public:
	};

	class HTMLElementTagNameMap: public Object{
	public:
		HTMLAnchorElement* get_a();
		void set_a(HTMLAnchorElement*);
		HTMLElement* get_abbr();
		void set_abbr(HTMLElement*);
		HTMLElement* get_acronym();
		void set_acronym(HTMLElement*);
		HTMLElement* get_address();
		void set_address(HTMLElement*);
		HTMLAppletElement* get_applet();
		void set_applet(HTMLAppletElement*);
		HTMLAreaElement* get_area();
		void set_area(HTMLAreaElement*);
		HTMLElement* get_article();
		void set_article(HTMLElement*);
		HTMLElement* get_aside();
		void set_aside(HTMLElement*);
		HTMLAudioElement* get_audio();
		void set_audio(HTMLAudioElement*);
		HTMLElement* get_b();
		void set_b(HTMLElement*);
		HTMLBaseElement* get_base();
		void set_base(HTMLBaseElement*);
		HTMLBaseFontElement* get_basefont();
		void set_basefont(HTMLBaseFontElement*);
		HTMLElement* get_bdo();
		void set_bdo(HTMLElement*);
		HTMLElement* get_big();
		void set_big(HTMLElement*);
		HTMLQuoteElement* get_blockquote();
		void set_blockquote(HTMLQuoteElement*);
		HTMLBodyElement* get_body();
		void set_body(HTMLBodyElement*);
		HTMLBRElement* get_br();
		void set_br(HTMLBRElement*);
		HTMLButtonElement* get_button();
		void set_button(HTMLButtonElement*);
		HTMLCanvasElement* get_canvas();
		void set_canvas(HTMLCanvasElement*);
		HTMLTableCaptionElement* get_caption();
		void set_caption(HTMLTableCaptionElement*);
		HTMLElement* get_center();
		void set_center(HTMLElement*);
		HTMLElement* get_cite();
		void set_cite(HTMLElement*);
		HTMLElement* get_code();
		void set_code(HTMLElement*);
		HTMLTableColElement* get_col();
		void set_col(HTMLTableColElement*);
		HTMLTableColElement* get_colgroup();
		void set_colgroup(HTMLTableColElement*);
		HTMLDataElement* get_data();
		void set_data(HTMLDataElement*);
		HTMLDataListElement* get_datalist();
		void set_datalist(HTMLDataListElement*);
		HTMLElement* get_dd();
		void set_dd(HTMLElement*);
		HTMLModElement* get_del();
		void set_del(HTMLModElement*);
		HTMLElement* get_dfn();
		void set_dfn(HTMLElement*);
		HTMLDirectoryElement* get_dir();
		void set_dir(HTMLDirectoryElement*);
		HTMLDivElement* get_div();
		void set_div(HTMLDivElement*);
		HTMLDListElement* get_dl();
		void set_dl(HTMLDListElement*);
		HTMLElement* get_dt();
		void set_dt(HTMLElement*);
		HTMLElement* get_em();
		void set_em(HTMLElement*);
		HTMLEmbedElement* get_embed();
		void set_embed(HTMLEmbedElement*);
		HTMLFieldSetElement* get_fieldset();
		void set_fieldset(HTMLFieldSetElement*);
		HTMLElement* get_figcaption();
		void set_figcaption(HTMLElement*);
		HTMLElement* get_figure();
		void set_figure(HTMLElement*);
		HTMLFontElement* get_font();
		void set_font(HTMLFontElement*);
		HTMLElement* get_footer();
		void set_footer(HTMLElement*);
		HTMLFormElement* get_form();
		void set_form(HTMLFormElement*);
		HTMLFrameElement* get_frame();
		void set_frame(HTMLFrameElement*);
		HTMLFrameSetElement* get_frameset();
		void set_frameset(HTMLFrameSetElement*);
		HTMLHeadingElement* get_h1();
		void set_h1(HTMLHeadingElement*);
		HTMLHeadingElement* get_h2();
		void set_h2(HTMLHeadingElement*);
		HTMLHeadingElement* get_h3();
		void set_h3(HTMLHeadingElement*);
		HTMLHeadingElement* get_h4();
		void set_h4(HTMLHeadingElement*);
		HTMLHeadingElement* get_h5();
		void set_h5(HTMLHeadingElement*);
		HTMLHeadingElement* get_h6();
		void set_h6(HTMLHeadingElement*);
		HTMLHeadElement* get_head();
		void set_head(HTMLHeadElement*);
		HTMLElement* get_header();
		void set_header(HTMLElement*);
		HTMLElement* get_hgroup();
		void set_hgroup(HTMLElement*);
		HTMLHRElement* get_hr();
		void set_hr(HTMLHRElement*);
		HTMLHtmlElement* get_html();
		void set_html(HTMLHtmlElement*);
		HTMLElement* get_i();
		void set_i(HTMLElement*);
		HTMLIFrameElement* get_iframe();
		void set_iframe(HTMLIFrameElement*);
		HTMLImageElement* get_img();
		void set_img(HTMLImageElement*);
		HTMLInputElement* get_input();
		void set_input(HTMLInputElement*);
		HTMLModElement* get_ins();
		void set_ins(HTMLModElement*);
		HTMLUnknownElement* get_isindex();
		void set_isindex(HTMLUnknownElement*);
		HTMLElement* get_kbd();
		void set_kbd(HTMLElement*);
		HTMLElement* get_keygen();
		void set_keygen(HTMLElement*);
		HTMLLabelElement* get_label();
		void set_label(HTMLLabelElement*);
		HTMLLegendElement* get_legend();
		void set_legend(HTMLLegendElement*);
		HTMLLIElement* get_li();
		void set_li(HTMLLIElement*);
		HTMLLinkElement* get_link();
		void set_link(HTMLLinkElement*);
		HTMLPreElement* get_listing();
		void set_listing(HTMLPreElement*);
		HTMLMapElement* get_map();
		void set_map(HTMLMapElement*);
		HTMLElement* get_mark();
		void set_mark(HTMLElement*);
		HTMLMarqueeElement* get_marquee();
		void set_marquee(HTMLMarqueeElement*);
		HTMLMenuElement* get_menu();
		void set_menu(HTMLMenuElement*);
		HTMLMetaElement* get_meta();
		void set_meta(HTMLMetaElement*);
		HTMLMeterElement* get_meter();
		void set_meter(HTMLMeterElement*);
		HTMLElement* get_nav();
		void set_nav(HTMLElement*);
		HTMLUnknownElement* get_nextid();
		void set_nextid(HTMLUnknownElement*);
		HTMLElement* get_nobr();
		void set_nobr(HTMLElement*);
		HTMLElement* get_noframes();
		void set_noframes(HTMLElement*);
		HTMLElement* get_noscript();
		void set_noscript(HTMLElement*);
		HTMLObjectElement* get_object();
		void set_object(HTMLObjectElement*);
		HTMLOListElement* get_ol();
		void set_ol(HTMLOListElement*);
		HTMLOptGroupElement* get_optgroup();
		void set_optgroup(HTMLOptGroupElement*);
		HTMLOptionElement* get_option();
		void set_option(HTMLOptionElement*);
		HTMLOutputElement* get_output();
		void set_output(HTMLOutputElement*);
		HTMLParagraphElement* get_p();
		void set_p(HTMLParagraphElement*);
		HTMLParamElement* get_param();
		void set_param(HTMLParamElement*);
		HTMLPictureElement* get_picture();
		void set_picture(HTMLPictureElement*);
		HTMLElement* get_plaintext();
		void set_plaintext(HTMLElement*);
		HTMLPreElement* get_pre();
		void set_pre(HTMLPreElement*);
		HTMLProgressElement* get_progress();
		void set_progress(HTMLProgressElement*);
		HTMLQuoteElement* get_q();
		void set_q(HTMLQuoteElement*);
		HTMLElement* get_rt();
		void set_rt(HTMLElement*);
		HTMLElement* get_ruby();
		void set_ruby(HTMLElement*);
		HTMLElement* get_s();
		void set_s(HTMLElement*);
		HTMLElement* get_samp();
		void set_samp(HTMLElement*);
		HTMLScriptElement* get_script();
		void set_script(HTMLScriptElement*);
		HTMLElement* get_section();
		void set_section(HTMLElement*);
		HTMLSelectElement* get_select();
		void set_select(HTMLSelectElement*);
		HTMLSlotElement* get_slot();
		void set_slot(HTMLSlotElement*);
		HTMLElement* get_small();
		void set_small(HTMLElement*);
		HTMLSourceElement* get_source();
		void set_source(HTMLSourceElement*);
		HTMLSpanElement* get_span();
		void set_span(HTMLSpanElement*);
		HTMLElement* get_strike();
		void set_strike(HTMLElement*);
		HTMLElement* get_strong();
		void set_strong(HTMLElement*);
		HTMLStyleElement* get_style();
		void set_style(HTMLStyleElement*);
		HTMLElement* get_sub();
		void set_sub(HTMLElement*);
		HTMLElement* get_sup();
		void set_sup(HTMLElement*);
		HTMLTableElement* get_table();
		void set_table(HTMLTableElement*);
		HTMLTableSectionElement* get_tbody();
		void set_tbody(HTMLTableSectionElement*);
		HTMLTableDataCellElement* get_td();
		void set_td(HTMLTableDataCellElement*);
		HTMLTemplateElement* get_template();
		void set_template(HTMLTemplateElement*);
		HTMLTextAreaElement* get_textarea();
		void set_textarea(HTMLTextAreaElement*);
		HTMLTableSectionElement* get_tfoot();
		void set_tfoot(HTMLTableSectionElement*);
		HTMLTableHeaderCellElement* get_th();
		void set_th(HTMLTableHeaderCellElement*);
		HTMLTableSectionElement* get_thead();
		void set_thead(HTMLTableSectionElement*);
		HTMLTimeElement* get_time();
		void set_time(HTMLTimeElement*);
		HTMLTitleElement* get_title();
		void set_title(HTMLTitleElement*);
		HTMLTableRowElement* get_tr();
		void set_tr(HTMLTableRowElement*);
		HTMLTrackElement* get_track();
		void set_track(HTMLTrackElement*);
		HTMLElement* get_tt();
		void set_tt(HTMLElement*);
		HTMLElement* get_u();
		void set_u(HTMLElement*);
		HTMLUListElement* get_ul();
		void set_ul(HTMLUListElement*);
		HTMLElement* get_var();
		void set_var(HTMLElement*);
		HTMLVideoElement* get_video();
		void set_video(HTMLVideoElement*);
		HTMLElement* get_wbr();
		void set_wbr(HTMLElement*);
		HTMLPreElement* get_xmp();
		void set_xmp(HTMLPreElement*);
	};

	class [[cheerp::client_layout]] SVGElementTagNameMap{
	public:
		SVGCircleElement* get_circle();
		void set_circle(SVGCircleElement*);
		SVGClipPathElement* get_clippath();
		void set_clippath(SVGClipPathElement*);
		SVGDefsElement* get_defs();
		void set_defs(SVGDefsElement*);
		SVGDescElement* get_desc();
		void set_desc(SVGDescElement*);
		SVGEllipseElement* get_ellipse();
		void set_ellipse(SVGEllipseElement*);
		SVGFEBlendElement* get_feblend();
		void set_feblend(SVGFEBlendElement*);
		SVGFEColorMatrixElement* get_fecolormatrix();
		void set_fecolormatrix(SVGFEColorMatrixElement*);
		SVGFEComponentTransferElement* get_fecomponenttransfer();
		void set_fecomponenttransfer(SVGFEComponentTransferElement*);
		SVGFECompositeElement* get_fecomposite();
		void set_fecomposite(SVGFECompositeElement*);
		SVGFEConvolveMatrixElement* get_feconvolvematrix();
		void set_feconvolvematrix(SVGFEConvolveMatrixElement*);
		SVGFEDiffuseLightingElement* get_fediffuselighting();
		void set_fediffuselighting(SVGFEDiffuseLightingElement*);
		SVGFEDisplacementMapElement* get_fedisplacementmap();
		void set_fedisplacementmap(SVGFEDisplacementMapElement*);
		SVGFEDistantLightElement* get_fedistantlight();
		void set_fedistantlight(SVGFEDistantLightElement*);
		SVGFEFloodElement* get_feflood();
		void set_feflood(SVGFEFloodElement*);
		SVGFEFuncAElement* get_fefunca();
		void set_fefunca(SVGFEFuncAElement*);
		SVGFEFuncBElement* get_fefuncb();
		void set_fefuncb(SVGFEFuncBElement*);
		SVGFEFuncGElement* get_fefuncg();
		void set_fefuncg(SVGFEFuncGElement*);
		SVGFEFuncRElement* get_fefuncr();
		void set_fefuncr(SVGFEFuncRElement*);
		SVGFEGaussianBlurElement* get_fegaussianblur();
		void set_fegaussianblur(SVGFEGaussianBlurElement*);
		SVGFEImageElement* get_feimage();
		void set_feimage(SVGFEImageElement*);
		SVGFEMergeElement* get_femerge();
		void set_femerge(SVGFEMergeElement*);
		SVGFEMergeNodeElement* get_femergenode();
		void set_femergenode(SVGFEMergeNodeElement*);
		SVGFEMorphologyElement* get_femorphology();
		void set_femorphology(SVGFEMorphologyElement*);
		SVGFEOffsetElement* get_feoffset();
		void set_feoffset(SVGFEOffsetElement*);
		SVGFEPointLightElement* get_fepointlight();
		void set_fepointlight(SVGFEPointLightElement*);
		SVGFESpecularLightingElement* get_fespecularlighting();
		void set_fespecularlighting(SVGFESpecularLightingElement*);
		SVGFESpotLightElement* get_fespotlight();
		void set_fespotlight(SVGFESpotLightElement*);
		SVGFETileElement* get_fetile();
		void set_fetile(SVGFETileElement*);
		SVGFETurbulenceElement* get_feturbulence();
		void set_feturbulence(SVGFETurbulenceElement*);
		SVGFilterElement* get_filter();
		void set_filter(SVGFilterElement*);
		SVGForeignObjectElement* get_foreignobject();
		void set_foreignobject(SVGForeignObjectElement*);
		SVGGElement* get_g();
		void set_g(SVGGElement*);
		SVGImageElement* get_image();
		void set_image(SVGImageElement*);
		SVGLineElement* get_line();
		void set_line(SVGLineElement*);
		SVGLinearGradientElement* get_lineargradient();
		void set_lineargradient(SVGLinearGradientElement*);
		SVGMarkerElement* get_marker();
		void set_marker(SVGMarkerElement*);
		SVGMaskElement* get_mask();
		void set_mask(SVGMaskElement*);
		SVGMetadataElement* get_metadata();
		void set_metadata(SVGMetadataElement*);
		SVGPathElement* get_path();
		void set_path(SVGPathElement*);
		SVGPatternElement* get_pattern();
		void set_pattern(SVGPatternElement*);
		SVGPolygonElement* get_polygon();
		void set_polygon(SVGPolygonElement*);
		SVGPolylineElement* get_polyline();
		void set_polyline(SVGPolylineElement*);
		SVGRadialGradientElement* get_radialgradient();
		void set_radialgradient(SVGRadialGradientElement*);
		SVGRectElement* get_rect();
		void set_rect(SVGRectElement*);
		SVGStopElement* get_stop();
		void set_stop(SVGStopElement*);
		SVGSVGElement* get_svg();
		void set_svg(SVGSVGElement*);
		SVGSwitchElement* get_switch();
		void set_switch(SVGSwitchElement*);
		SVGSymbolElement* get_symbol();
		void set_symbol(SVGSymbolElement*);
		SVGTextElement* get_text();
		void set_text(SVGTextElement*);
		SVGTextPathElement* get_textpath();
		void set_textpath(SVGTextPathElement*);
		SVGTSpanElement* get_tspan();
		void set_tspan(SVGTSpanElement*);
		SVGUseElement* get_use();
		void set_use(SVGUseElement*);
		SVGViewElement* get_view();
		void set_view(SVGViewElement*);
	};

	class ElementTagNameMap: public HTMLElementTagNameMap , public SVGElementTagNameMap {
	public:
	};

	class ActiveXObject: public Object{
	public:
		ActiveXObject(const String& s);
	};

	class ITextWriter: public Object{
	public:
		void Write(const String& s);
		void WriteLine(const String& s);
		void Close();
	};

	class TextStreamBase: public Object{
	public:
		double get_Column();
		void set_Column(double);
		double get_Line();
		void set_Line(double);
		void Close();
	};

	class TextStreamWriter: public TextStreamBase {
	public:
		void Write(const String& s);
		void WriteBlankLines(double intLines);
		void WriteLine(const String& s);
	};

	class TextStreamReader: public TextStreamBase {
	public:
		String* Read(double characters);
		String* ReadAll();
		String* ReadLine();
		void Skip(double characters);
		void SkipLine();
		bool get_AtEndOfLine();
		void set_AtEndOfLine(bool);
		bool get_AtEndOfStream();
		void set_AtEndOfStream(bool);
	};

	extern double NaN;
	extern double Infinity;
	template<class ReturnType = Object*> ReturnType eval(const String& x);
	double parseInt(const String& s);
	double parseInt(const String& s, double radix);
	double parseFloat(const String& string);
	bool isNaN(double number);
	bool isFinite(double number);
	String* decodeURI(const String& encodedURI);
	String* decodeURIComponent(const String& encodedURIComponent);
	String* encodeURI(const String& uri);
	String* encodeURIComponent(const String& uriComponent);
	String* escape(const String& string);
	String* unescape(const String& string);
	extern Math Math;
	extern JSON JSON;
	extern CSS CSS;
	extern SVGUnitTypes SVGUnitTypes;
	extern ServiceUIFrameContext ServiceUIFrameContext;
	extern URL URL;
	extern URLSearchParams URLSearchParams;
	extern ApplicationCache applicationCache;
	extern CacheStorage caches;
	extern Navigator clientInformation;
	extern bool closed;
	extern Crypto crypto;
	extern CustomElementRegistry customElements;
	extern String defaultStatus;
	extern double devicePixelRatio;
	extern String doNotTrack;
	extern Document document;
	extern Event event;
	extern External external;
	extern Element frameElement;
	extern Window frames;
	extern History history;
	extern double innerHeight;
	extern double innerWidth;
	extern bool isSecureContext;
	extern double length;
	extern Location location;
	extern BarProp locationbar;
	extern BarProp menubar;
	extern ExtensionScriptApis msContentScript;
	extern MSCredentials msCredentials;
	extern Navigator navigator;
	extern String offscreenBuffering;
	extern EventListener* onabort;
	extern EventListener* onafterprint;
	extern EventListener* onbeforeprint;
	extern EventListener* onbeforeunload;
	extern EventListener* onblur;
	extern EventListener* oncanplay;
	extern EventListener* oncanplaythrough;
	extern EventListener* onchange;
	extern EventListener* onclick;
	extern EventListener* oncompassneedscalibration;
	extern EventListener* oncontextmenu;
	extern EventListener* ondblclick;
	extern EventListener* ondevicelight;
	extern EventListener* ondevicemotion;
	extern EventListener* ondeviceorientation;
	extern EventListener* ondrag;
	extern EventListener* ondragend;
	extern EventListener* ondragenter;
	extern EventListener* ondragleave;
	extern EventListener* ondragover;
	extern EventListener* ondragstart;
	extern EventListener* ondrop;
	extern EventListener* ondurationchange;
	extern EventListener* onemptied;
	extern EventListener* onended;
	extern ErrorEventHandler onerror;
	extern EventListener* onfocus;
	extern EventListener* onhashchange;
	extern EventListener* oninput;
	extern EventListener* oninvalid;
	extern EventListener* onkeydown;
	extern EventListener* onkeypress;
	extern EventListener* onkeyup;
	extern EventListener* onload;
	extern EventListener* onloadeddata;
	extern EventListener* onloadedmetadata;
	extern EventListener* onloadstart;
	extern EventListener* onmessage;
	extern EventListener* onmousedown;
	extern EventListener* onmouseenter;
	extern EventListener* onmouseleave;
	extern EventListener* onmousemove;
	extern EventListener* onmouseout;
	extern EventListener* onmouseover;
	extern EventListener* onmouseup;
	extern EventListener* onmousewheel;
	extern EventListener* onmsgesturechange;
	extern EventListener* onmsgesturedoubletap;
	extern EventListener* onmsgestureend;
	extern EventListener* onmsgesturehold;
	extern EventListener* onmsgesturestart;
	extern EventListener* onmsgesturetap;
	extern EventListener* onmsinertiastart;
	extern EventListener* onmspointercancel;
	extern EventListener* onmspointerdown;
	extern EventListener* onmspointerenter;
	extern EventListener* onmspointerleave;
	extern EventListener* onmspointermove;
	extern EventListener* onmspointerout;
	extern EventListener* onmspointerover;
	extern EventListener* onmspointerup;
	extern EventListener* onoffline;
	extern EventListener* ononline;
	extern EventListener* onorientationchange;
	extern EventListener* onpagehide;
	extern EventListener* onpageshow;
	extern EventListener* onpause;
	extern EventListener* onplay;
	extern EventListener* onplaying;
	extern EventListener* onpopstate;
	extern EventListener* onprogress;
	extern EventListener* onratechange;
	extern EventListener* onreadystatechange;
	extern EventListener* onreset;
	extern EventListener* onresize;
	extern EventListener* onscroll;
	extern EventListener* onseeked;
	extern EventListener* onseeking;
	extern EventListener* onselect;
	extern EventListener* onstalled;
	extern EventListener* onstorage;
	extern EventListener* onsubmit;
	extern EventListener* onsuspend;
	extern EventListener* ontimeupdate;
	extern EventListener* ontouchcancel;
	extern EventListener* ontouchend;
	extern EventListener* ontouchmove;
	extern EventListener* ontouchstart;
	extern EventListener* onunload;
	extern EventListener* onvolumechange;
	extern EventListener* onvrdisplayactivate;
	extern EventListener* onvrdisplayblur;
	extern EventListener* onvrdisplayconnect;
	extern EventListener* onvrdisplaydeactivate;
	extern EventListener* onvrdisplaydisconnect;
	extern EventListener* onvrdisplayfocus;
	extern EventListener* onvrdisplaypointerrestricted;
	extern EventListener* onvrdisplaypointerunrestricted;
	extern EventListener* onvrdisplaypresentchange;
	extern EventListener* onwaiting;
	extern Object* opener;
	extern String orientation;
	extern double outerHeight;
	extern double outerWidth;
	extern double pageXOffset;
	extern double pageYOffset;
	extern Window parent;
	extern Performance performance;
	extern BarProp personalbar;
	extern Screen screen;
	extern double screenLeft;
	extern double screenTop;
	extern double screenX;
	extern double screenY;
	extern double scrollX;
	extern double scrollY;
	extern BarProp scrollbars;
	extern Window self;
	extern SpeechSynthesis speechSynthesis;
	extern String status;
	extern BarProp statusbar;
	extern StyleMedia styleMedia;
	extern BarProp toolbar;
	extern Window top;
	extern Window window;
	void alert();
	void alert(Object* message);
	void blur();
	void cancelAnimationFrame(double handle);
	void captureEvents();
	void close();
	bool confirm();
	bool confirm(const String& message);
	Promise* createImageBitmap(HTMLImageElement* image);
	Promise* createImageBitmap(HTMLImageElement* image, ImageBitmapOptions* options);
	Promise* createImageBitmap(SVGImageElement* image);
	Promise* createImageBitmap(SVGImageElement* image, ImageBitmapOptions* options);
	Promise* createImageBitmap(HTMLVideoElement* image);
	Promise* createImageBitmap(HTMLVideoElement* image, ImageBitmapOptions* options);
	Promise* createImageBitmap(HTMLCanvasElement* image);
	Promise* createImageBitmap(HTMLCanvasElement* image, ImageBitmapOptions* options);
	Promise* createImageBitmap(ImageBitmap* image);
	Promise* createImageBitmap(ImageBitmap* image, ImageBitmapOptions* options);
	Promise* createImageBitmap(ImageData* image);
	Promise* createImageBitmap(ImageData* image, ImageBitmapOptions* options);
	Promise* createImageBitmap(HTMLImageElement* image, double sx, double sy, double sw, double sh);
	Promise* createImageBitmap(HTMLImageElement* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
	Promise* createImageBitmap(SVGImageElement* image, double sx, double sy, double sw, double sh);
	Promise* createImageBitmap(SVGImageElement* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
	Promise* createImageBitmap(HTMLVideoElement* image, double sx, double sy, double sw, double sh);
	Promise* createImageBitmap(HTMLVideoElement* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
	Promise* createImageBitmap(HTMLCanvasElement* image, double sx, double sy, double sw, double sh);
	Promise* createImageBitmap(HTMLCanvasElement* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
	Promise* createImageBitmap(ImageBitmap* image, double sx, double sy, double sw, double sh);
	Promise* createImageBitmap(ImageBitmap* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
	Promise* createImageBitmap(ImageData* image, double sx, double sy, double sw, double sh);
	Promise* createImageBitmap(ImageData* image, double sx, double sy, double sw, double sh, ImageBitmapOptions* options);
	void focus();
	CSSStyleDeclaration* getComputedStyle(Element* elt);
	CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
	CSSRuleList* getMatchedCSSRules(Element* elt);
	CSSRuleList* getMatchedCSSRules(Element* elt, const String& pseudoElt);
	Selection* getSelection();
	MediaQueryList* matchMedia(const String& mediaQuery);
	void moveBy();
	void moveBy(double x);
	void moveBy(double x, double y);
	void moveTo();
	void moveTo(double x);
	void moveTo(double x, double y);
	void msWriteProfilerMark(const String& profilerMarkName);
	Window* open();
	Window* open(const String& url);
	Window* open(const String& url, const String& target);
	Window* open(const String& url, const String& target, const String& features);
	Window* open(const String& url, const String& target, const String& features, bool replace);
	void postMessage(Object* message);
	void postMessage(Object* message, Array* transfer);
	void postMessage(Object* message, const String& targetOrigin);
	void postMessage(Object* message, const String& targetOrigin, Array* transfer);
	void postMessage(const String& message);
	void postMessage(const String& message, Array* transfer);
	void postMessage(const String& message, const String& targetOrigin);
	void postMessage(const String& message, const String& targetOrigin, Array* transfer);
	void print();
	String* prompt();
	String* prompt(const String& message);
	String* prompt(const String& message, const String& _default);
	void releaseEvents();
	double requestAnimationFrame(EventListener* callback);
	void resizeBy();
	void resizeBy(double x);
	void resizeBy(double x, double y);
	void resizeTo();
	void resizeTo(double x);
	void resizeTo(double x, double y);
	void scroll(ScrollToOptions* options);
	void scroll();
	void scroll(double x);
	void scroll(double x, double y);
	void scrollBy(ScrollToOptions* options);
	void scrollBy();
	void scrollBy(double x);
	void scrollBy(double x, double y);
	void scrollTo(ScrollToOptions* options);
	void scrollTo();
	void scrollTo(double x);
	void scrollTo(double x, double y);
	void stop();
	void webkitCancelAnimationFrame(double handle);
	WebKitPoint* webkitConvertPointFromNodeToPage(Node* node, WebKitPoint* pt);
	WebKitPoint* webkitConvertPointFromPageToNode(Node* node, WebKitPoint* pt);
	double webkitRequestAnimationFrame(EventListener* callback);
	String* toString();
	bool dispatchEvent(Event* evt);
	void clearInterval();
	void clearInterval(double handle);
	void clearTimeout();
	void clearTimeout(double handle);
	double setInterval(EventListener* handler, double timeout);
	double setInterval(Object* handler);
	template<typename... Args> double setInterval(Object* handler, Object* timeout, Args&&... args) { return setInterval(handler, timeout, static_cast<Object*>(static_cast<Args&&>(args))...); }
	double setInterval(Object* handler, Object* timeout);
	double setTimeout(EventListener* handler, double timeout);
	double setTimeout(Object* handler);
	template<typename... Args> double setTimeout(Object* handler, Object* timeout, Args&&... args) { return setTimeout(handler, timeout, static_cast<Object*>(static_cast<Args&&>(args))...); }
	double setTimeout(Object* handler, Object* timeout);
	void clearImmediate(double handle);
	double setImmediate(EventListener* handler);
	template<typename... Args> double setImmediate(Object* handler, Args&&... args) { return setImmediate(handler, static_cast<Object*>(static_cast<Args&&>(args))...); }
	double setImmediate(Object* handler);
	extern Storage sessionStorage;
	extern Storage localStorage;
	extern Console console;
	extern EventListener* onpointercancel;
	extern EventListener* onpointerdown;
	extern EventListener* onpointerenter;
	extern EventListener* onpointerleave;
	extern EventListener* onpointermove;
	extern EventListener* onpointerout;
	extern EventListener* onpointerover;
	extern EventListener* onpointerup;
	extern EventListener* onwheel;
	extern IDBFactory indexedDB;
	String* atob(const String& encodedString);
	String* btoa(const String& rawString);
	Promise* fetch();
	Promise* fetch(Request* input);
	Promise* fetch(Request* input, RequestInit* init);
	Promise* fetch(const String& input);
	Promise* fetch(const String& input, RequestInit* init);
	void addEventListener(const String& type, EventListener* listener);
	void addEventListener(const String& type, EventListener* listener, bool options);
	void addEventListener(const String& type, EventListener* listener, AddEventListenerOptions* options);
	void addEventListener(const String& type, EventListenerObject* listener);
	void addEventListener(const String& type, EventListenerObject* listener, AddEventListenerOptions* options);
	void removeEventListener(const String& type, EventListener* listener);
	void removeEventListener(const String& type, EventListener* listener, bool options);
	void removeEventListener(const String& type, EventListener* listener, EventListenerOptions* options);
	void removeEventListener(const String& type, EventListenerObject* listener);
	void removeEventListener(const String& type, EventListenerObject* listener, EventListenerOptions* options);
	template<typename... Args> void importScripts(Args&&... urls) { return importScripts(static_cast<const String&>(static_cast<Args&&>(urls))...); }
	void importScripts();
	extern ActiveXObject ActiveXObject;
}
#endif
