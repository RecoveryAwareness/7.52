//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, TFNTwitterCompositionAttachments;

@interface T1TweetDraftsDraftAttachmentsView : UIView
{
    _Bool _animatedLivePhotoEnabled;
    NSString *_accountID;
    TFNTwitterCompositionAttachments *_attachments;
    NSArray *_stackViews;
    NSArray *_attachmentViews;
}

@property(readonly, nonatomic) NSArray *attachmentViews; // @synthesize attachmentViews=_attachmentViews;
@property(readonly, nonatomic) NSArray *stackViews; // @synthesize stackViews=_stackViews;
@property(copy, nonatomic) TFNTwitterCompositionAttachments *attachments; // @synthesize attachments=_attachments;
@property(nonatomic, getter=isAnimatedLivePhotoEnabled) _Bool animatedLivePhotoEnabled; // @synthesize animatedLivePhotoEnabled=_animatedLivePhotoEnabled;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)_t1_main_update;
- (void)_t1_tweetDraftsDraftAttachmentsView_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

