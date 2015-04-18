//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSMutableDictionary, NSObject<OS_dispatch_source>, NSString, NSXPCConnection;

@interface AFConnection : NSObject
{
    NSXPCConnection *_connection;
    NSString *_outstandingRequestClass;
    NSArray *_cachedBulletins;
    BOOL _hasActiveRequest;
    BOOL _hasActiveTimeout;
    NSMutableDictionary *_replyHandlerForAceId;
    unsigned int _stateInSync:1;
    unsigned int _shouldSpeak:1;
    unsigned int _isCapturingSpeech:1;
    unsigned int _hasOutstandingRequest:1;
    unsigned int _audioSessionID;
    void *_levelsSharedMem;
    unsigned long _sharedMemSize;
    NSObject<OS_dispatch_source> *_levelsTimer;
    unsigned int _clientStateIsInSync:1;
    unsigned int _voiceOverIsActive:1;
    NSError *_lastRetryError;
    id <AFAssistantUIService> _delegate;
    id <AFSpeechDelegate> _speechDelegate;
}

+ (id)currentLanguageCode;
+ (BOOL)isAvailable;
+ (void)defrost;
+ (BOOL)isReadyForLanguageCode:(id)arg1;
+ (BOOL)userDataSyncNeeded;
+ (void)stopMonitoringAvailability;
+ (BOOL)assistantIsSupported;
+ (BOOL)siriIsSupportedForLanguageCode:(id)arg1 deviceProductVersion:(id)arg2 error:(id *)arg3;
+ (BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (void)preheatWithStyle:(int)arg1;
+ (id)outputVoice;
+ (void)beginMonitoringAvailability;
+ (void)preheat;
+ (void)initialize;
- (void)_clearConnection;
- (void)rollbackRequest;
- (void)clearContext;
- (void)setApplicationContext:(id)arg1;
- (void)cancelRequest;
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;
- (void)_barrier;
- (id)_clientServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2;
- (id)_cachedBulletins;
@property(nonatomic) __weak id <AFSpeechDelegate> speechDelegate; // @synthesize speechDelegate=_speechDelegate;
- (void)usefulUserResultWillPresent;
- (void)setAlertContextWithBulletins:(id)arg1;
- (void)sendReplyCommand:(id)arg1;
- (void)sendGenericAceCommand:(id)arg1;
- (float)peakPower;
- (unsigned int)audioSessionID;
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2;
- (void)stopSpeech;
- (void)startAcousticIDRequestWithOptions:(id)arg1;
- (void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startDirectActionRequestWithString:(id)arg1;
- (void)startRequestWithText:(id)arg1;
- (void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2;
- (void)_extendExistingRequestTimeout;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)arg1;
- (void)_tellSpeechDelegateSpeechRecognized:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidChangeAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_tellDelegateInvalidateCurrentUserActivity;
- (void)_tellDelegateSetUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (void)_tellDelegateDidFinishAcousticIDRequestWithSuccess:(BOOL)arg1;
- (void)_tellDelegateDidDetectMusic;
- (void)_tellDelegateWillStartAcousticIDRequest;
- (void)_tellDelegateRequestFinished;
- (void)_setLevelsWithSharedMem:(id)arg1;
- (void)_aceConnectionWillRetryOnError:(id)arg1;
- (void)_doCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)telephonyRequestCompleted;
- (void)prepareForPhoneCall;
- (void)setOverriddenApplicationContext:(id)arg1 withSMSContext:(id)arg2;
- (void)setApplicationContextForApplicationInfos:(id)arg1;
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(CDUnknownBlockType)arg2;
- (void)rollbackClearContext;
- (void)recordMetrics:(id)arg1;
- (void)updateSpeechOptions:(id)arg1;
- (void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;
- (void)startSpeechRequestWithOptions:(id)arg1;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)startContinuationRequestWithUserInfo:(id)arg1;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2;
- (void)setIsStark:(BOOL)arg1;
- (void)forceAudioSessionActive;
- (void)preheatWithStyle:(int)arg1;
- (void)_willCancelRequest;
- (void)setVoiceOverIsActive:(BOOL)arg1;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_setShouldSpeak:(BOOL)arg1;
- (void)_extendRequestTimeout;
- (id)_clientService;
- (void)_invokeRequestTimeout;
- (void)_updateClientState;
- (void)_connectionInterrupted;
- (void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2;
- (void)_requestDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_willFailRequestWithError:(id)arg1;
- (void)_willCompleteRequest;
- (void)_tellDelegateAudioSessionIDChanged:(unsigned int)arg1;
- (void)_tellDelegateShouldSpeakChanged:(BOOL)arg1;
- (BOOL)shouldSpeak;
- (void)_cancelRequestTimeout;
- (void)_scheduleRequestTimeout;
- (void)_tellDelegateRequestWillStart;
- (void)_willStartRequestForSpeech:(BOOL)arg1;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 isBackgroundRequest:(BOOL)arg3;
- (void)_stopLevelUpdates;
- (void)preheat;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)cancelSpeech;
- (void)endSession;
- (float)averagePower;
- (id)_connection;
- (void).cxx_destruct;
- (void)_updateState;
@property(nonatomic) __weak id <AFAssistantUIService> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) BOOL isRecording;

@end
