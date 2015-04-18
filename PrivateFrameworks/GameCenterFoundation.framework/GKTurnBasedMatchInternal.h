//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKGameInternal, GKPlayerInternal, NSArray, NSData, NSDate, NSDictionary, NSString;

@interface GKTurnBasedMatchInternal : GKInternalRepresentation
{
    NSString *_matchID;
    NSString *_status;
    NSString *_message;
    NSDictionary *_localizableMessage;
    NSString *_reason;
    NSDate *_creationDate;
    NSDate *_lastTurnDate;
    NSDate *_deletionDate;
    GKPlayerInternal *_currentPlayer;
    NSString *_lastTurnPlayerID;
    NSData *_matchData;
    NSString *_matchDataVersion;
    NSArray *_participants;
    NSString *_bundleID;
    NSString *_bundleVersion;
    GKGameInternal *_game;
    NSArray *_exchanges;
    unsigned int _turnNumber;
    unsigned char _minPlayers;
    unsigned char _maxPlayers;
    BOOL _currentParticipant;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSDate *deletionDate; // @synthesize deletionDate=_deletionDate;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSDate *lastTurnDate; // @synthesize lastTurnDate=_lastTurnDate;
@property(nonatomic) BOOL currentParticipant; // @synthesize currentParticipant=_currentParticipant;
@property(retain, nonatomic) GKGameInternal *game; // @synthesize game=_game;
@property(retain, nonatomic) NSArray *exchanges; // @synthesize exchanges=_exchanges;
@property(retain, nonatomic) NSString *matchDataVersion; // @synthesize matchDataVersion=_matchDataVersion;
@property(retain, nonatomic) NSString *lastTurnPlayerID; // @synthesize lastTurnPlayerID=_lastTurnPlayerID;
@property(nonatomic) unsigned int turnNumber; // @synthesize turnNumber=_turnNumber;
@property(retain, nonatomic) GKPlayerInternal *currentPlayer; // @synthesize currentPlayer=_currentPlayer;
@property(retain, nonatomic) NSString *matchID; // @synthesize matchID=_matchID;
@property(retain, nonatomic) NSData *matchData; // @synthesize matchData=_matchData;
@property(retain, nonatomic) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property(nonatomic) unsigned char minPlayers; // @synthesize minPlayers=_minPlayers;
@property(nonatomic) unsigned char maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
