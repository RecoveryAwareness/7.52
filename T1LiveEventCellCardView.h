//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardView.h>

#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>

@class NSString, T1LiveEventCellCardViewModel, TFNTappableHighlightView, UIImageView, UILabel;

@interface T1LiveEventCellCardView : T1CardView <T1ImageViewFetchHelperDelegate>
{
    T1LiveEventCellCardViewModel *_viewModel;
    UILabel *_eventTitleLabel;
    UILabel *_eventSubtitleLabel;
    UILabel *_liveLabel;
    UIImageView *_thumbnailImageView;
    TFNTappableHighlightView *_highlightView;
}

+ (id)_t1_defaultThumbnailImage;
@property(readonly, nonatomic) TFNTappableHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(readonly, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(readonly, nonatomic) UILabel *eventSubtitleLabel; // @synthesize eventSubtitleLabel=_eventSubtitleLabel;
@property(readonly, nonatomic) UILabel *eventTitleLabel; // @synthesize eventTitleLabel=_eventTitleLabel;
@property(retain, nonatomic) T1LiveEventCellCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)_t1_cleanup;
- (void)_t1_highlightViewLongPressed:(id)arg1;
- (void)_t1_highlightViewPressed:(id)arg1;
- (void)fetchImages;
- (void)setImagePipeline:(id)arg1;
- (id)imageFetchingViews;
- (id)previewingViewControllerForLocation:(struct CGPoint)arg1 outSourceRect:(struct CGRect *)arg2;
- (void)prepareForReuse;
- (void)cardContextDidUpdate;
- (void)updateSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

