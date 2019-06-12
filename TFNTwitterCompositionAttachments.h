//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/NSFastEnumeration-Protocol.h>

@class NSArray, NSMutableArray;

@interface TFNTwitterCompositionAttachments : NSObject <NSCopying, NSCoding, NSFastEnumeration>
{
    NSMutableArray *_attachments;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllAttachments;
- (void)removeAttachmentAtIndex:(unsigned long long)arg1;
- (void)replaceAttachmentAtIndex:(unsigned long long)arg1 withAttachment:(id)arg2;
- (void)addAttachment:(id)arg1;
- (_Bool)_canAddAttachmentIdentifier:(id)arg1 byRemovingAttachmentAtIndex:(unsigned long long)arg2;
- (_Bool)canReplaceAttachmentAtIndex:(unsigned long long)arg1 withAttachment:(id)arg2;
- (_Bool)canAddAttachment:(id)arg1;
- (_Bool)canAddNewAttachmentType:(unsigned long long)arg1;
- (id)attachmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfAttachment:(id)arg1;
- (unsigned long long)indexOfAttachmentForAssetReferencedFromAttachment:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSArray *attachments;
- (id)initWithAttachments:(id)arg1;
- (id)init;
- (unsigned long long)_indexOfAttachmentForObjectIdentifier:(id)arg1;
- (unsigned long long)indexOfAttachmentForPhotoAsset:(id)arg1;
- (_Bool)canAddPhotoAsset:(id)arg1 withAttachmentType:(unsigned long long)arg2;

@end

