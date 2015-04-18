//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLAbstractObject.h"

@class CPLLibraryManager, CPLPlatformObject, NSProgress, NSString;

@interface CPLChangeSession : NSObject <CPLAbstractObject>
{
    CPLPlatformObject *_platformObject;
    NSProgress *_sessionProgress;
    NSString *_sessionIdentifier;
    CPLLibraryManager *_libraryManager;
    unsigned int _state;
}

+ (id)stateDescriptionForState:(unsigned int)arg1;
+ (id)platformImplementationProtocol;
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSProgress *sessionProgress; // @synthesize sessionProgress=_sessionProgress;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithLibraryManager:(id)arg1;
- (void)tearDownWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CPLLibraryManager *libraryManager; // @synthesize libraryManager=_libraryManager;
- (id)_sessionLogDomain;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void)pause;
- (void).cxx_destruct;
- (void)resume;
@property(readonly, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
