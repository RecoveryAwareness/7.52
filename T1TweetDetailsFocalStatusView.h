//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1StandardStatusView.h>

#import <T1Twitter/TFNComposableViewHost-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsSizing-Protocol.h>

@class NSString, T1StatusViewAccessibility, T1StatusViewCombinedViewModel, TFNComposableViewSet, TFSTwitterScribeContext;
@protocol T1StatusViewEventHandler, T1StatusViewLayoutState, TFSTwitterScribableItem;

@interface T1TweetDetailsFocalStatusView : T1StandardStatusView <TFNComposableViewHost, TFNLayoutMetricsSizing>
{
    T1StatusViewCombinedViewModel *_viewModel;
    T1StatusViewAccessibility *_accessibility;
    id <T1StatusViewEventHandler> _eventHandler;
    TFSTwitterScribeContext *_scribeContext;
    id <TFSTwitterScribableItem> _scribableItem;
    TFNComposableViewSet *_viewSet;
}

+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
+ (id)_t1_viewAdapterSet;
+ (id)layoutStateGenerator;
@property(readonly, nonatomic) TFNComposableViewSet *viewSet; // @synthesize viewSet=_viewSet;
- (id)scribableItem;
- (id)scribeContext;
- (void)setEventHandler:(id)arg1;
- (id)eventHandler;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)_t1_updateAccessibilityCustomActions;
- (void)_t1_updateAccessibilityValue;
- (id)accessibilityCustomActions;
- (id)cardViewDelegate;
- (void)updateEmbeddedCarouselCreationBlock:(CDUnknownBlockType)arg1;
- (void)setPrefetchingViewCache:(id)arg1;
- (id)prefetchingViewCache;
- (void)setConversationConnectorType:(unsigned long long)arg1;
- (unsigned long long)conversationConnectorType;
- (void)setScribeContext:(id)arg1;
- (void)setShouldPauseLivePipelineUpdates:(_Bool)arg1;
- (_Bool)shouldPauseLivePipelineUpdates;
- (void)setLivePipelineTweetManager:(id)arg1;
- (id)livePipelineTweetManager;
- (id)inlineActions;
- (id)inlineImages;
- (id)autoplayPlayerContainer;
- (unsigned long long)attachmentType;
- (id)mediaForwardStatusView;
- (id)visibleTweetstormIndicatorView;
- (id)visibleQuotedStatusView;
- (id)visibleCardForwardView;
- (id)visibleMediaForwardView;
- (id)visibleBodyTextView;
- (id)visibleConversationContextView;
- (id)visibleAvatarView;
- (void)updateTimestamp;
- (id)account;
- (unsigned long long)options;
- (id)viewModel;
- (void)_t1_onViewModelUpdate:(id)arg1;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (id)previewingViewControllerForLocation:(struct CGPoint)arg1 outSourceRect:(out struct CGRect *)arg2;
- (struct CGSize)sizeWithLayoutMetrics:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)tfn_terminatesInvalidateIntrinsicContentSizeRecursion;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (_Bool)_t1_updateLayoutState;
@property(retain, nonatomic) id <T1StatusViewLayoutState> layoutState;
- (id)initWithFrame:(struct CGRect)arg1 isInCell:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

