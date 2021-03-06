//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFAssistantUIService.h"
#import "AFSpeechDelegate.h"
#import "AFUISiriSession.h"
#import "AFUISpeechSynthesisLocalDelegate.h"
#import "AFUIStateMachineDelegate.h"

@class AFConnection, AFUISpeechSynthesis, AFUIStateMachine, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface AFUISiriSession : NSObject <AFAssistantUIService, AFSpeechDelegate, AFUIStateMachineDelegate, AFUISpeechSynthesisLocalDelegate, AFUISiriSession>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _currentRequestDidPresent;
    AFUIStateMachine *_stateMachine;
    AFUISpeechSynthesis *_speechSynthesis;
    NSMutableSet *_speechRequestGroupGraveyard;
    BOOL _eyesFree;
    id <AFUISiriSessionDelegate> _delegate;
    id <AFUISiriSessionLocalDataSource> _localDataSource;
    id <AFUISiriSessionLocalDelegate> _localDelegate;
    AFConnection *_connection;
    NSObject<OS_dispatch_group> *_currentSpeechRequestGroup;
}

+ (id)effectiveCoreLocationBundle;
+ (void)beginMonitoringSiriAvailability;
+ (unsigned int)availabilityState;
- (void)setApplicationContext;
- (void)setAlertContext;
@property(nonatomic, getter=isEyesFree) BOOL eyesFree; // @synthesize eyesFree=_eyesFree;
- (void)clearContext;
- (BOOL)isPreventingActivationGesture;
- (id)speechSynthesis;
@property(nonatomic) __weak id <AFUISiriSessionLocalDataSource> localDataSource; // @synthesize localDataSource=_localDataSource;
- (id)initWithConnection:(id)arg1 delegateQueue:(id)arg2;
- (BOOL)speechSynthesisShouldStartSpeaking:(id)arg1;
- (void)speechSynthesisWillStartSpeaking:(id)arg1;
- (id)stateMachine:(id)arg1 descriptionForEvent:(int)arg2;
- (void)stateMachine:(id)arg1 didTransitionFromState:(int)arg2 forEvent:(int)arg3;
- (void)_performAceCommand:(id)arg1 forRequestUpdateViewsCommand:(id)arg2 afterDelay:(double)arg3;
- (void)_startRequestWithBlock:(CDUnknownBlockType)arg1;
- (id)underlyingConnection;
- (BOOL)_hasActiveRequest;
- (void)_requestContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestWillStart;
- (float)recordingPowerLevel;
- (void)_requestDidFinishWithError:(id)arg1;
- (void)_performTransitionForEvent:(int)arg1;
- (void)_handleRequestUpdateViewsCommand:(id)arg1;
- (void)_handleUnlockDeviceCommand:(id)arg1;
- (void)_didChangeDialogPhase:(id)arg1;
@property(nonatomic) __weak id <AFUISiriSessionLocalDelegate> localDelegate; // @synthesize localDelegate=_localDelegate;
- (id)_preparedSpeechRequestWithRequestOptions:(id)arg1;
- (void)_startRequestWithFinalOptions:(id)arg1;
@property(retain, nonatomic, getter=_currentSpeechRequestGroup, setter=_setCurrentSpeechRequestGroup:) NSObject<OS_dispatch_group> *currentSpeechRequestGroup; // @synthesize currentSpeechRequestGroup=_currentSpeechRequestGroup;
- (void)_startSpeechRequestWithOptions:(id)arg1;
- (void)_startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)_startRequestWithText:(id)arg1;
- (void)_startSpeechPronunciationRequestWithContext:(id)arg1 options:(id)arg2;
- (void)_startContinuityRequestWithInfo:(id)arg1;
- (void)_startDirectActionRequestWithString:(id)arg1 appID:(id)arg2 withMessagesContext:(id)arg3;
- (id)_stateMachine;
- (void)_performBlockWithDelegate:(CDUnknownBlockType)arg1;
- (void)_siriNetworkAvailabilityDidChange:(id)arg1;
- (void)_voiceOverStatusDidChange:(id)arg1;
- (void)_outputVoiceDidChange:(id)arg1;
- (void)requestDidPresent;
- (void)resultDidChangeForAceCommand:(id)arg1;
- (void)performAceCommand:(id)arg1;
- (void)performAceCommand:(id)arg1 conflictHandler:(CDUnknownBlockType)arg2;
- (void)startCorrectedRequestWithText:(id)arg1 correctionIdentifier:(id)arg2;
- (void)cancelSpeechRequest;
- (void)stopRecordingSpeech;
- (void)updateRequestOptions:(id)arg1;
- (void)stopRequestWithOptions:(id)arg1;
- (void)startRequestWithOptions:(id)arg1;
- (void)resetContext;
- (void)setLockState:(unsigned int)arg1;
- (void)assistantConnectionDismissAssistant:(id)arg1;
- (void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendReplyCommand:(id)arg1;
- (void)telephonyRequestCompleted;
- (void)setOverriddenApplicationContext:(id)arg1 withSMSContext:(id)arg2;
- (void)rollbackClearContext;
- (void)recordMetrics:(id)arg1;
- (void)setIsStark:(BOOL)arg1;
- (void)forceAudioSessionActive;
- (void)assistantConnection:(id)arg1 speechRecognizedPartialResult:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecognized:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)assistantConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)assistantConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)assistantConnection:(id)arg1 speechRecordingDidChangeAVRecordRoute:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2;
- (void)assistantConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)assistantConnection:(id)arg1 didFinishAcousticIDRequestWithSuccess:(BOOL)arg2;
- (void)assistantConnectionDidDetectMusic:(id)arg1;
- (void)assistantConnection:(id)arg1 didChangeAudioSessionID:(unsigned int)arg2;
- (void)assistantConnection:(id)arg1 shouldSpeak:(BOOL)arg2;
- (void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;
- (void)assistantConnectionRequestFinished:(id)arg1;
- (void)assistantConnectionRequestWillStart:(id)arg1;
- (void)assistantConnectionDidChangeAudioRecordingPower:(id)arg1;
- (void)assistantConnection:(id)arg1 receivedCommand:(id)arg2;
- (BOOL)isListening;
- (void)preheat;
@property(readonly, nonatomic, getter=_connection) AFConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)end;
- (int)_state;
@property(retain, nonatomic) id <AFUISiriSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

