//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPCommentContent, CKDPDate, CKDPIdentifier, CKDPLikeInfo, NSString;

@interface CKDPComment : PBCodable <NSCopying>
{
    CKDPCommentContent *_commentContent;
    CKDPIdentifier *_commentId;
    CKDPDate *_createdAt;
    CKDPIdentifier *_from;
    CKDPLikeInfo *_likeInfo;
    NSString *_path;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) CKDPDate *createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) CKDPIdentifier *from; // @synthesize from=_from;
@property(readonly, nonatomic) BOOL hasFrom;
@property(readonly, nonatomic) BOOL hasCreatedAt;
@property(retain, nonatomic) CKDPLikeInfo *likeInfo; // @synthesize likeInfo=_likeInfo;
@property(readonly, nonatomic) BOOL hasLikeInfo;
@property(retain, nonatomic) CKDPCommentContent *commentContent; // @synthesize commentContent=_commentContent;
@property(readonly, nonatomic) BOOL hasCommentContent;
@property(retain, nonatomic) CKDPIdentifier *commentId; // @synthesize commentId=_commentId;
@property(readonly, nonatomic) BOOL hasCommentId;
@property(readonly, nonatomic) BOOL hasPath;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
