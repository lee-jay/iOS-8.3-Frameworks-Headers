//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLCloudResource;

@interface PLCloudResourceNode : PLManagedObject
{
}

+ (id)entityName;
- (id)predecessorNode;
- (id)successorNode;
- (void)rotateLeftWithTreeRoot:(id *)arg1;
- (void)rotateRightWithTreeRoot:(id *)arg1;
- (id)siblingNode;
- (id)uncleNode;
- (id)nodeAtIndex:(unsigned int)arg1;
- (unsigned int)nodeHeight;
- (BOOL)isLeaf;
- (BOOL)isNullNode;
- (id)grandparentNode;
- (void)insertChildNode:(id)arg1 usingComparer:(CDUnknownBlockType)arg2;
- (id)nodeAtIndex:(unsigned int)arg1 withLocalRoot:(id)arg2;
- (id)description;

// Remaining properties
@property(nonatomic) unsigned short budgetingCategory; // @dynamic budgetingCategory;
@property(nonatomic) unsigned short color; // @dynamic color;
@property(retain, nonatomic) PLCloudResourceNode *leftChild; // @dynamic leftChild;
@property(retain, nonatomic) PLCloudResourceNode *next; // @dynamic next;
@property(retain, nonatomic) PLCloudResourceNode *parent; // @dynamic parent;
@property(nonatomic) unsigned short qualityClass; // @dynamic qualityClass;
@property(retain, nonatomic) PLCloudResource *resource; // @dynamic resource;
@property(retain, nonatomic) PLCloudResourceNode *rightChild; // @dynamic rightChild;
@property(nonatomic) unsigned long long totalResourceCount; // @dynamic totalResourceCount;
@property(nonatomic) unsigned long long totalResourceSize; // @dynamic totalResourceSize;

@end

