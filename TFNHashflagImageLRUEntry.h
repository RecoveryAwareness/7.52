//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TNLLRUEntry-Protocol.h>

@class NSString, UIImage;
@protocol TNLLRUEntry;

@interface TFNHashflagImageLRUEntry : NSObject <TNLLRUEntry>
{
    NSString *_hashtag;
    UIImage *_image;
    id <TNLLRUEntry> _nextLRUEntry;
    id <TNLLRUEntry> _previousLRUEntry;
}

@property(nonatomic) __weak id <TNLLRUEntry> previousLRUEntry; // @synthesize previousLRUEntry=_previousLRUEntry;
@property(retain, nonatomic) id <TNLLRUEntry> nextLRUEntry; // @synthesize nextLRUEntry=_nextLRUEntry;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *hashtag; // @synthesize hashtag=_hashtag;
- (void).cxx_destruct;
- (_Bool)shouldAccessMoveLRUEntryToHead;
- (id)LRUEntryIdentifier;
- (id)initWithHashtag:(id)arg1 image:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

