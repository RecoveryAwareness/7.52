//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/TFNTwitterTweetTextCounterContext-Protocol.h>

@class NSString, T1NewsCameraPlace, TFNTwitterNewsCameraThread, TFNTwitterTweetTextCounter;

@interface T1NewsCameraComposition : NSObject <TFNTwitterTweetTextCounterContext, NSCopying>
{
    _Bool _videoAttachmentMuted;
    TFNTwitterTweetTextCounter *_tweetTextCounter;
    NSString *_text;
    NSString *_attachmentDescription;
    NSString *_cameraPaletteID;
    TFNTwitterNewsCameraThread *_thread;
    T1NewsCameraPlace *_place;
    NSString *_eventHashtag;
}

+ (void)sendNewsCameraComposition:(id)arg1 withAttachment:(id)arg2 fromAccount:(id)arg3;
@property(copy, nonatomic) NSString *eventHashtag; // @synthesize eventHashtag=_eventHashtag;
@property(retain, nonatomic) T1NewsCameraPlace *place; // @synthesize place=_place;
@property(retain, nonatomic) TFNTwitterNewsCameraThread *thread; // @synthesize thread=_thread;
@property(copy, nonatomic) NSString *cameraPaletteID; // @synthesize cameraPaletteID=_cameraPaletteID;
@property(nonatomic, getter=isVideoAttachmentMuted) _Bool videoAttachmentMuted; // @synthesize videoAttachmentMuted=_videoAttachmentMuted;
@property(copy, nonatomic) NSString *attachmentDescription; // @synthesize attachmentDescription=_attachmentDescription;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) TFNTwitterTweetTextCounter *tweetTextCounter; // @synthesize tweetTextCounter=_tweetTextCounter;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *textForCharacterCount;
@property(readonly, copy, nonatomic) NSString *textForTweeting;
@property(readonly, nonatomic, getter=isValidForTweeting) _Bool validForTweeting;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

