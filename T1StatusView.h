//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNLayoutableView.h>

#import <T1Twitter/T1AutoplayViewContainer-Protocol.h>
#import <T1Twitter/T1CampaignMetadataViewDelegate-Protocol.h>
#import <T1Twitter/T1CardViewDelegate-Protocol.h>
#import <T1Twitter/T1StatusAuthorViewDelegate-Protocol.h>
#import <T1Twitter/T1StatusBodyTextViewDelegate-Protocol.h>
#import <T1Twitter/T1StatusEmbeddedCarouselHost-Protocol.h>
#import <T1Twitter/T1StatusInlineActionsViewDelegate-Protocol.h>
#import <T1Twitter/T1StatusViewAttachmentContainerViewDelegate-Protocol.h>
#import <T1Twitter/T1StatusWithheldInCountryViewDelegate-Protocol.h>
#import <T1Twitter/T1TagSetViewDelegate-Protocol.h>
#import <T1Twitter/T1TimelineStatusView-Protocol.h>
#import <T1Twitter/T1TimelinesCarouselCollectionViewLayoutMetricsProvider-Protocol.h>
#import <T1Twitter/T1TimelinesItemSocialContextViewDelegate-Protocol.h>
#import <T1Twitter/T1TimelinesStatusConversationContextViewDelegate-Protocol.h>
#import <T1Twitter/T1TweetstormIndicatorViewDelegate-Protocol.h>
#import <T1Twitter/T1UnifiedCardComponentViewEventDelegate-Protocol.h>
#import <T1Twitter/TFNLayoutGuidesSource-Protocol.h>

@class NSString, T1AvatarImageView, T1CampaignMetadataView, T1ConversationConnectorView, T1DismissButton, T1InfoTextView, T1InlineMediaView, T1StatusAuthorView, T1StatusBodyTextView, T1StatusExpanderLabel, T1StatusInlineActionsView, T1StatusLiveEngagementManager, T1StatusNewsCameraAttachmentOverlayView, T1StatusReplyBadgeView, T1StatusSensitiveContentView, T1StatusViewAccessibility, T1StatusViewAttachmentContainerView, T1StatusViewScribableItem, T1StatusWithheldInCountryView, T1TagSetView, T1TimelinesItemSocialContextView, T1TimelinesStatusConversationContextView, T1TweetstormIndicatorView, TFNPrefetchingViewCache, TFNSolidColorView, TFNTwitterAccount, TFSTimer, TFSTwitterScribeContext, UIImage, UIView;
@protocol T1AutoplayViewContainer, T1BasicStatusView, T1CardViewDelegate, T1StatusViewEventHandler, T1StatusViewInlineActions, T1StatusViewInlineImages, T1StatusViewModel, TFNTwitterAVPlayerSessionSource, TFSTwitterScribableItem;

@interface T1StatusView : TFNLayoutableView <T1StatusAuthorViewDelegate, T1StatusBodyTextViewDelegate, T1StatusInlineActionsViewDelegate, T1StatusViewAttachmentContainerViewDelegate, T1TagSetViewDelegate, T1TimelinesCarouselCollectionViewLayoutMetricsProvider, T1StatusEmbeddedCarouselHost, TFNLayoutGuidesSource, T1AutoplayViewContainer, T1CardViewDelegate, T1CampaignMetadataViewDelegate, T1TimelinesItemSocialContextViewDelegate, T1TimelinesStatusConversationContextViewDelegate, T1TweetstormIndicatorViewDelegate, T1StatusWithheldInCountryViewDelegate, T1UnifiedCardComponentViewEventDelegate, T1TimelineStatusView>
{
    unsigned long long _secondaryAttachmentType;
    T1StatusViewAccessibility *_accessibility;
    T1StatusViewScribableItem *_scribableItem;
    T1ConversationConnectorView *_conversationTopConnectorView;
    T1ConversationConnectorView *_conversationBottomConnectorView;
    T1ConversationConnectorView *_tweetstormConnectorView;
    _Bool _shouldPauseLivePipelineUpdates;
    _Bool _selected;
    id <T1StatusViewModel> _viewModel;
    unsigned long long _options;
    TFNTwitterAccount *_account;
    unsigned long long _attachmentType;
    unsigned long long _conversationConnectorType;
    TFSTwitterScribeContext *_scribeContext;
    T1StatusLiveEngagementManager *_livePipelineTweetManager;
    id <T1StatusViewEventHandler> _eventHandler;
    TFSTimer *_updateStatusCountTimer;
    CDUnknownBlockType _embeddedCarouselCreationBlock;
    T1AvatarImageView *_avatarView;
    T1StatusAuthorView *_authorView;
    T1StatusBodyTextView *_bodyTextView;
    T1InlineMediaView *_inlineMediaView;
    TFNSolidColorView *_withheldBackgroundView;
    T1StatusSensitiveContentView *_sensitiveContentView;
    T1StatusWithheldInCountryView *_statusWithheldInCountryView;
    T1TweetstormIndicatorView *_tweetstormIndicatorView;
    unsigned long long _displayTextOptions;
    T1DismissButton *_caretButton;
    T1StatusExpanderLabel *_expandActionLabel;
    T1StatusReplyBadgeView *_replyBadgeView;
    T1StatusInlineActionsView *_inlineActionsView;
    T1InfoTextView *_infoTextView;
    T1TimelinesItemSocialContextView *_socialContextView;
    T1TimelinesStatusConversationContextView *_conversationContextView;
    T1TagSetView *_primaryMediaTagsView;
    T1StatusNewsCameraAttachmentOverlayView *_newsCameraAttachmentOverlayView;
    T1StatusViewAttachmentContainerView *_attachmentContainerView;
    T1StatusViewAttachmentContainerView *_secondaryAttachmentContainerView;
    T1CampaignMetadataView *_campaignMetadataView;
    struct UIEdgeInsets _contentEdgeInsets;
}

+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
+ (struct CGSize)avatarSizeForOptions:(unsigned long long)arg1 account:(id)arg2 layoutMetrics:(id)arg3;
+ (id)prefetchingViewInitializersForViewModel:(id)arg1 options:(unsigned long long)arg2 layoutDelegate:(id)arg3 prefetchingDelegate:(id)arg4 account:(id)arg5;
@property(readonly, nonatomic) T1CampaignMetadataView *campaignMetadataView; // @synthesize campaignMetadataView=_campaignMetadataView;
@property(retain, nonatomic) T1StatusViewAttachmentContainerView *secondaryAttachmentContainerView; // @synthesize secondaryAttachmentContainerView=_secondaryAttachmentContainerView;
@property(retain, nonatomic) T1StatusViewAttachmentContainerView *attachmentContainerView; // @synthesize attachmentContainerView=_attachmentContainerView;
@property(readonly, nonatomic) T1StatusNewsCameraAttachmentOverlayView *newsCameraAttachmentOverlayView; // @synthesize newsCameraAttachmentOverlayView=_newsCameraAttachmentOverlayView;
@property(retain, nonatomic) T1TagSetView *primaryMediaTagsView; // @synthesize primaryMediaTagsView=_primaryMediaTagsView;
@property(readonly, nonatomic) UIView *tweetstormConnectorView; // @synthesize tweetstormConnectorView=_tweetstormConnectorView;
@property(readonly, nonatomic) UIView *conversationBottomConnectorView; // @synthesize conversationBottomConnectorView=_conversationBottomConnectorView;
@property(readonly, nonatomic) UIView *conversationTopConnectorView; // @synthesize conversationTopConnectorView=_conversationTopConnectorView;
@property(readonly, nonatomic) T1TimelinesStatusConversationContextView *conversationContextView; // @synthesize conversationContextView=_conversationContextView;
@property(readonly, nonatomic) T1TimelinesItemSocialContextView *socialContextView; // @synthesize socialContextView=_socialContextView;
@property(retain, nonatomic) T1InfoTextView *infoTextView; // @synthesize infoTextView=_infoTextView;
@property(retain, nonatomic) T1StatusInlineActionsView *inlineActionsView; // @synthesize inlineActionsView=_inlineActionsView;
@property(retain, nonatomic) T1StatusReplyBadgeView *replyBadgeView; // @synthesize replyBadgeView=_replyBadgeView;
@property(retain, nonatomic) T1StatusExpanderLabel *expandActionLabel; // @synthesize expandActionLabel=_expandActionLabel;
@property(retain, nonatomic) T1DismissButton *caretButton; // @synthesize caretButton=_caretButton;
@property(nonatomic) unsigned long long displayTextOptions; // @synthesize displayTextOptions=_displayTextOptions;
@property(retain, nonatomic) T1TweetstormIndicatorView *tweetstormIndicatorView; // @synthesize tweetstormIndicatorView=_tweetstormIndicatorView;
@property(retain, nonatomic) T1StatusWithheldInCountryView *statusWithheldInCountryView; // @synthesize statusWithheldInCountryView=_statusWithheldInCountryView;
@property(retain, nonatomic) T1StatusSensitiveContentView *sensitiveContentView; // @synthesize sensitiveContentView=_sensitiveContentView;
@property(retain, nonatomic) TFNSolidColorView *withheldBackgroundView; // @synthesize withheldBackgroundView=_withheldBackgroundView;
@property(retain, nonatomic) T1InlineMediaView *inlineMediaView; // @synthesize inlineMediaView=_inlineMediaView;
@property(retain, nonatomic) T1StatusBodyTextView *bodyTextView; // @synthesize bodyTextView=_bodyTextView;
@property(retain, nonatomic) T1StatusAuthorView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) T1AvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) CDUnknownBlockType embeddedCarouselCreationBlock; // @synthesize embeddedCarouselCreationBlock=_embeddedCarouselCreationBlock;
@property(retain, nonatomic) TFSTimer *updateStatusCountTimer; // @synthesize updateStatusCountTimer=_updateStatusCountTimer;
@property(nonatomic) __weak id <T1StatusViewEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) __weak T1StatusLiveEngagementManager *livePipelineTweetManager; // @synthesize livePipelineTweetManager=_livePipelineTweetManager;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) _Bool shouldPauseLivePipelineUpdates; // @synthesize shouldPauseLivePipelineUpdates=_shouldPauseLivePipelineUpdates;
@property(readonly, nonatomic) id <TFSTwitterScribableItem> scribableItem; // @synthesize scribableItem=_scribableItem;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) unsigned long long conversationConnectorType; // @synthesize conversationConnectorType=_conversationConnectorType;
@property(readonly, nonatomic) unsigned long long attachmentType; // @synthesize attachmentType=_attachmentType;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <T1StatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)_t1_updateVoiceOverRotorActions;
- (id)accessibilityCustomActions;
- (void)statusWithheldInCountryViewDidTapUndoButton:(id)arg1;
- (void)tweetstormIndicatorViewTapAction:(id)arg1;
- (void)conversationContextViewDidTap:(id)arg1;
- (id)previewingViewControllerForSocialContextView:(id)arg1;
- (void)socialContextView:(id)arg1 didTapCaret:(id)arg2;
- (void)socialContextViewDidTap:(id)arg1;
- (id)componentView:(id)arg1 didFireViewEvent:(id)arg2;
- (void)cardView:(id)arg1 presentFullscreenPlayerFromInlineMediaView:(id)arg2 withPreviewImage:(id)arg3;
- (id)cardView:(id)arg1 didFireViewEvent:(id)arg2;
- (id)layoutMetricsForCardView:(id)arg1;
- (void)photoVideoForwardView:(id)arg1 didTapPrerollCTAWithModel:(id)arg2;
- (void)photoVideoForwardView:(id)arg1 didTapAttributionForMediaEntity:(id)arg2;
- (void)photoVideoForwardView:(id)arg1 didLongPressImageAtIndex:(unsigned long long)arg2;
- (void)photoVideoForwardView:(id)arg1 didTapImageAtIndex:(unsigned long long)arg2;
- (void)photoVideoForwardView:(id)arg1 didLoadImageAtIndex:(unsigned long long)arg2 fromSource:(long long)arg3 error:(id)arg4;
- (void)campaignMetadataView:(id)arg1 didTapMetricsType:(unsigned long long)arg2;
- (void)inlineActionsView:(id)arg1 didLongPressInlineActionWithType:(unsigned long long)arg2;
- (void)inlineActionsView:(id)arg1 didTapInlineActionWithType:(unsigned long long)arg2;
- (_Bool)_t1_isPOIActiveTextRange:(id)arg1;
- (void)bodyTextView:(id)arg1 didTapTruncationTokenAreaWithRect:(struct CGRect)arg2;
- (void)bodyTextView:(id)arg1 didLongPressActiveTextRange:(id)arg2 withFrame:(struct CGRect)arg3;
- (void)bodyTextView:(id)arg1 didTapActiveTextRange:(id)arg2 withFrame:(struct CGRect)arg3;
- (void)authorViewDidUpdateLayoutState:(id)arg1 affectsHeight:(_Bool)arg2;
- (_Bool)shouldShowSocialTextForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (void)authorView:(id)arg1 didTapDesignatorBadgeWithFrame:(struct CGRect)arg2;
- (void)authorView:(id)arg1 didTapTimestampWithFrame:(struct CGRect)arg2;
- (void)authorView:(id)arg1 didTapCaretView:(id)arg2 withFrame:(struct CGRect)arg3;
- (void)timelinesItemsCarouselViewController:(id)arg1 didTapCellAtIndex:(unsigned long long)arg2;
- (id)layoutMetricsForCollectionViewLayout:(id)arg1;
- (id)calculatedLayoutMetrics;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)setLayoutState:(id)arg1;
- (void)_t1_featureSwitchesDidUpdate:(id)arg1;
- (void)_t1_userDidUpdate:(id)arg1;
- (void)_t1_hashflagImageDidDownload:(id)arg1;
- (void)_t1_updateStatusCount;
- (void)_t1_statusDidUpdate:(id)arg1;
- (void)_t1_viewModelDidUpdate;
- (void)_t1_logCardInconsistencyIfNeeded;
- (_Bool)_t1_isInEmbeddedCarousel;
- (void)_t1_dismissStatusTapActionForViewModel:(id)arg1 frame:(struct CGRect)arg2;
- (void)_t1_tapCaretActionForCaretView:(id)arg1 caretFrameWithinStatusView:(struct CGRect)arg2;
- (void)_t1_handleTimelineStatusItemViewModelUpdateNotification:(id)arg1;
- (id)_t1_handleDesignatorBadgePreviewEventWithSender:(id)arg1;
- (void)_t1_updateCampaignMetadataIfNeeded;
- (void)_t1_updateInlineActions;
- (void)_t1_updateInfoText;
- (void)_t1_updateConversationContextText;
- (void)_t1_updateSocialContextView;
- (_Bool)_t1_conversationContextUserInteractionEnabled;
- (_Bool)_t1_socialContextUserInteractionEnabled;
- (void)_t1_updateAvatar;
- (id)_t1_socialTextColor;
- (id)_t1_infoTextColor;
- (void)_t1_updateReplyBadgeView;
- (void)_t1_updateWithheldInCountryView;
- (void)_t1_updateTweetstormIndicatorView;
- (void)_t1_updatePrimaryMediaTags;
- (void)_t1_updateEmbeddedCarouselAttachment;
- (void)_t1_updateAttachmentContainerView;
- (void)_t1_updateSensitiveContentView;
- (void)_t1_updateBodyText;
- (void)_t1_updateStatusContent;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)scribeContextForUserRecommendationView:(id)arg1;
- (void)didCreateTombstoneViewWithInteractionHandler:(id)arg1;
- (void)didTapActionOnTombstoneView:(id)arg1;
- (void)didExpandOnQuotedStatusView:(id)arg1;
- (id)quotedStatusView:(id)arg1 didSendEvent:(id)arg2;
- (void)didLongPressOnQuotedStatusView:(id)arg1;
- (void)didTapOnQuotedStatusView:(id)arg1;
- (void)didProfileTapOnUserRecommendationView:(id)arg1 cardEvent:(id)arg2;
- (struct CGSize)mediaForwardImageDownloadSizeForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 layoutMetrics:(id)arg4 attachmentType:(unsigned long long)arg5;
- (long long)cardDisplayModeForOptions:(unsigned long long)arg1;
- (id)unifiedCardViewLayoutStateForLayoutState:(id)arg1;
- (id)cardViewLayoutStateForLayoutState:(id)arg1;
- (id)quotedStatusViewLayoutStateForLayoutState:(id)arg1;
- (id)userRecommendationViewLayoutStateForLayoutState:(id)arg1;
- (void)_t1_dismissStatusTapAction:(id)arg1;
- (void)_t1_dismissInfoTextTapAction:(id)arg1;
- (id)_t1_handleAvatarEventWithType:(id)arg1 sender:(id)arg2;
- (void)_t1_avatarLongPressAction:(id)arg1;
- (void)_t1_avatarTapAction:(id)arg1;
- (void)_t1_addFrameForSubview:(id)arg1 toEvent:(id)arg2;
- (void)_t1_invalidateLayoutState;
- (void)_t1_invalidateUpdateStatusCountTimer;
@property(readonly, nonatomic) UIImage *playerPreviewImage;
@property(readonly, nonatomic) UIView *playerContainerView;
@property(readonly, nonatomic) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
@property(readonly, nonatomic) __weak id <T1CardViewDelegate> cardViewDelegate;
@property(retain, nonatomic) TFNPrefetchingViewCache *prefetchingViewCache;
@property(readonly, nonatomic) UIView *visibleTweetstormIndicatorView;
@property(readonly, nonatomic) id <T1StatusViewInlineActions> inlineActions;
@property(readonly, nonatomic) id <T1StatusViewInlineImages> inlineImages;
@property(readonly, nonatomic) id <T1AutoplayViewContainer> autoplayPlayerContainer;
@property(readonly, nonatomic) UIView<T1BasicStatusView> *mediaForwardStatusView;
@property(readonly, nonatomic) UIView<T1BasicStatusView> *visibleQuotedStatusView;
@property(readonly, nonatomic) UIView *visibleCardForwardView;
- (id)_t1_inlineMediaView;
@property(readonly, nonatomic) UIView *visibleMediaForwardView;
@property(readonly, nonatomic) UIView *visibleBodyTextView;
@property(readonly, nonatomic) UIView *visibleConversationContextView;
@property(readonly, nonatomic) UIView *visibleAvatarView;
- (_Bool)shouldRenderEmbeddedCarousel;
- (void)updateEmbeddedCarouselCreationBlock:(CDUnknownBlockType)arg1;
- (void)updateTimestamp;
- (id)previewingViewControllerForLocation:(struct CGPoint)arg1 outSourceRect:(out struct CGRect *)arg2;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (void)updateConversationConnectors;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

