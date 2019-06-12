//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1ErrorDataViewAdapterDelegate-Protocol.h>
#import <T1Twitter/T1FeedbackActionProvider-Protocol.h>
#import <T1Twitter/T1LiveBannerTableRowAdapterDelegate-Protocol.h>
#import <T1Twitter/T1LoadingGapDataViewAdapterDelegate-Protocol.h>
#import <T1Twitter/T1PanelRootViewController-Protocol.h>
#import <T1Twitter/T1RelevancePromptViewAdapterDelegate-Protocol.h>
#import <T1Twitter/T1TimelineMessageEntryTableRowAdapterDelegate-Protocol.h>
#import <T1Twitter/T1URTTimelineTombstoneItemViewModelDelegate-Protocol.h>
#import <T1Twitter/T1UpdateIndicatorDelegate-Protocol.h>
#import <T1Twitter/TFNFrameRateMonitorObserver-Protocol.h>
#import <T1Twitter/TFNMarkAsViewedDelegate-Protocol.h>
#import <T1Twitter/TFNTimelineDismissedItemDelegate-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>
#import <T1Twitter/UIActionSheetDelegate-Protocol.h>
#import <T1Twitter/UIDataSourceModelAssociation-Protocol.h>

@class NSDate, NSNumber, NSString, T1HomeTimelineUIReloadMonitor, T1PromptNavigationHelper, T1ScrollDistanceLogger, T1StatusLiveEngagementManager, T1StatusTableRowAdapter, T1TimelineCoverPresenter, T1TimelinesStreamScribeLogger, T1URTContextTrackingHelper, T1UpdateIndicator, TFNBarButtonItem, TFNExpandingButtonItem, TFNItemsSectionTransformer, TFNMarkAsViewedHelper, TFNScrollFPSPerformanceMetric, TFNScrollFrameDropEventsPerformanceMetric, TFNTwitterAccount, TFNTwitterHomeTimeline, TFSTimer, TFSTwitterScribeContext, TIPImagePipeline;
@protocol T1URTItemVisibilityMonitor;

@interface T1HomeTimelineItemsViewController : TFNItemsDataViewController <TFNMarkAsViewedDelegate, TFNFrameRateMonitorObserver, UIActionSheetDelegate, UIDataSourceModelAssociation, T1ErrorDataViewAdapterDelegate, T1TimelineMessageEntryTableRowAdapterDelegate, T1LoadingGapDataViewAdapterDelegate, T1LiveBannerTableRowAdapterDelegate, T1URTTimelineTombstoneItemViewModelDelegate, TFNTimelineDismissedItemDelegate, T1UpdateIndicatorDelegate, TFNTooltipDelegate, T1FeedbackActionProvider, T1RelevancePromptViewAdapterDelegate, T1PanelRootViewController>
{
    T1TimelinesStreamScribeLogger *_streamLogger;
    T1ScrollDistanceLogger *_scrollDistanceLogger;
    T1StatusTableRowAdapter *_statusAdapter;
    T1TimelineCoverPresenter *_coverPresenter;
    TFNMarkAsViewedHelper *_markAsViewedHelper;
    _Bool _isLayoutSubviewsDone;
    _Bool _restoredPersistedScrollPosition;
    _Bool _needsPersistedScrollPositionRestore;
    _Bool _loadGapUpwards;
    NSNumber *_nextUpdateRestoreScrollPositionTypeOverride;
    _Bool _isTopRowVisible;
    TFNItemsSectionTransformer *_sectionTransformer;
    _Bool _shouldNotifyTableUpdatedFromStreamAPIUpdate;
    _Bool _foregroundSavingEnabled;
    _Bool _didUpdateFromBackgroundFetch;
    _Bool _checkStreamRestoreDueToBackgroundFetch;
    TFNScrollFPSPerformanceMetric *_fpsMetric;
    TFNScrollFrameDropEventsPerformanceMetric *_frameDropEventsMetric;
    _Bool _isRestoringPersistedScrollPosition;
    _Bool _didLayoutBarItems;
    _Bool _didScribeEndOfStream;
    NSDate *_lastViewed;
    TFNTwitterAccount *_account;
    TFNTwitterHomeTimeline *_timeline;
    T1UpdateIndicator *_updateIndicator;
    TFSTwitterScribeContext *_timelineScribeContext;
    T1PromptNavigationHelper *_promptNavigationHelper;
    T1StatusLiveEngagementManager *_livePipelineTweetManager;
    TFNExpandingButtonItem *_composeTweetActionButtonItem;
    id <T1URTItemVisibilityMonitor> _itemVisibilityMonitor;
    T1URTContextTrackingHelper *_updateContextTrackingHelper;
    TFNBarButtonItem *_latestHomeTimelineSwitchButton;
    double _autoSwitchedToTopTimestamp;
    T1HomeTimelineUIReloadMonitor *_uiReloadMonitor;
    TFSTimer *_irregularLoadingTimer;
    TIPImagePipeline *_imagePipeline;
}

@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(retain, nonatomic) TFSTimer *irregularLoadingTimer; // @synthesize irregularLoadingTimer=_irregularLoadingTimer;
@property(retain, nonatomic) T1HomeTimelineUIReloadMonitor *uiReloadMonitor; // @synthesize uiReloadMonitor=_uiReloadMonitor;
@property(nonatomic) _Bool didScribeEndOfStream; // @synthesize didScribeEndOfStream=_didScribeEndOfStream;
@property(nonatomic) double autoSwitchedToTopTimestamp; // @synthesize autoSwitchedToTopTimestamp=_autoSwitchedToTopTimestamp;
@property(nonatomic) _Bool didLayoutBarItems; // @synthesize didLayoutBarItems=_didLayoutBarItems;
@property(retain, nonatomic) TFNBarButtonItem *latestHomeTimelineSwitchButton; // @synthesize latestHomeTimelineSwitchButton=_latestHomeTimelineSwitchButton;
@property(retain, nonatomic) T1URTContextTrackingHelper *updateContextTrackingHelper; // @synthesize updateContextTrackingHelper=_updateContextTrackingHelper;
@property(retain, nonatomic) id <T1URTItemVisibilityMonitor> itemVisibilityMonitor; // @synthesize itemVisibilityMonitor=_itemVisibilityMonitor;
@property(retain, nonatomic) TFNExpandingButtonItem *composeTweetActionButtonItem; // @synthesize composeTweetActionButtonItem=_composeTweetActionButtonItem;
@property(readonly, nonatomic) T1StatusLiveEngagementManager *livePipelineTweetManager; // @synthesize livePipelineTweetManager=_livePipelineTweetManager;
@property(readonly, nonatomic) T1PromptNavigationHelper *promptNavigationHelper; // @synthesize promptNavigationHelper=_promptNavigationHelper;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *timelineScribeContext; // @synthesize timelineScribeContext=_timelineScribeContext;
@property(retain, nonatomic) T1UpdateIndicator *updateIndicator; // @synthesize updateIndicator=_updateIndicator;
@property(readonly, nonatomic) TFNTwitterHomeTimeline *timeline; // @synthesize timeline=_timeline;
@property(readonly, nonatomic) _Bool isRestoringPersistedScrollPosition; // @synthesize isRestoringPersistedScrollPosition=_isRestoringPersistedScrollPosition;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSDate *lastViewed; // @synthesize lastViewed=_lastViewed;
- (void).cxx_destruct;
- (_Bool)_timelineIsScrolledAtOrBeyondNumberOfViewHeights:(double)arg1;
- (void)_t1_triggerDynamicTimelineIfApplicable;
- (void)_t1_configureViewCache;
- (void)_t1_configureScrollPerformanceMetrics;
- (void)_insertOutboxStatusesIntoStreamObjects:(id)arg1;
- (id)_representedItemsForStreamItem:(id)arg1;
- (_Bool)_shouldAllowTableViewScrolling;
- (_Bool)_isOnlyShowingErrorItem;
- (_Bool)_isEmptyAfterLoading;
- (_Bool)_isEmpty;
- (id)_itemsFromStreamObjects:(id)arg1;
- (void)_setupStreamFromTimeline;
- (void)_loadGap:(id)arg1 withSource:(long long)arg2 loadUpwards:(_Bool)arg3;
- (void)_loadBottomWithSource:(long long)arg1;
- (void)_t1_sanityCheckNonEmptyStreamObjects:(id)arg1;
- (long long)_scribeImpressionPositionForItemAtIndexPath:(id)arg1;
- (id)_scribeParametersFromParameters:(id)arg1 byIncludingPositionForItemAtIndexPath:(id)arg2;
- (id)_statusAtIndexPath:(id)arg1;
- (unsigned long long)_statusOptionsForAdapter:(id)arg1 args:(id)arg2 options:(unsigned long long)arg3;
- (void)_emptyMessagePromptTapped;
- (void)monitor:(id)arg1 didUpdateAbsoluteFPS:(double)arg2 deltaFPS:(double)arg3 frameTimestampsSinceLastUpdate:(id)arg4;
- (void)markAsViewedHelper:(id)arg1 didViewCells:(id)arg2;
- (_Bool)useStreamControlledItemDismissing;
- (void)didRestoreTimelineItem:(id)arg1;
- (void)dismissTimelineItem:(id)arg1 withFeedbackModule:(id)arg2;
- (void)timelineMessageEntryTableRowAdapter:(id)arg1 handleURL:(id)arg2;
- (void)timelineMessageEntryTableRowAdapter:(id)arg1 dismissItem:(id)arg2;
- (void)timelineMessageEntryTableRowAdapter:(id)arg1 scribeAction:(id)arg2 element:(id)arg3 component:(id)arg4 parameters:(id)arg5;
@property(readonly, nonatomic) long long panelID;
- (unsigned long long)minImpressionDuration;
- (id)scribeImpressionCache;
- (id)scribeContextForIndexPath:(id)arg1;
- (id)scribeImpressionParametersForIndexPath:(id)arg1;
- (id)scribeItemForIndexPath:(id)arg1;
- (id)scribeComponentForIndexPath:(id)arg1;
- (id)scribeSection;
@property(readonly, nonatomic) NSString *scribePage;
- (id)scribe;
- (id)itemsAnimatorSectionsToAnimateFrom:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)_handleFeatureSwitchesChangedNotification:(id)arg1;
- (void)_streamDidUpdateFromBackgroundFetch:(id)arg1;
- (void)_streamDidUpdateFromAPI:(id)arg1;
- (void)_streamDidUpdateWithDeletedStreamObject:(id)arg1;
- (void)_streamDidUpdateWithModifiedStreamObject:(id)arg1;
- (void)_handleStreamFilterUpdatedNotification:(id)arg1;
- (void)_streamDidUpdateWithNotification:(id)arg1;
- (void)_tweetReported:(id)arg1;
- (void)_streamDidUpdate;
- (void)_outboxChanged:(id)arg1;
- (void)didEndDisplayingCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3 inDataViewController:(id)arg4 withPreviousDataViewAdapter:(id)arg5 options:(id)arg6;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForDummyObject:(id)arg2 atIndexPath:(id)arg3;
- (void)relevancePromptViewAdapter:(id)arg1 processUpdatesForRelevancePrompt:(id)arg2;
- (void)tombstoneDidTapViewTweetWithTombstoneViewModel:(id)arg1;
- (void)loadingGapDataViewAdapter:(id)arg1 didSelectGapItem:(id)arg2 loadUpwards:(_Bool)arg3;
- (void)liveBannerTableRowAdapter:(id)arg1 didUndoDismissOfLiveBannerItem:(id)arg2;
- (void)liveBannerTableRowAdapter:(id)arg1 didDismissLiveBannerItem:(id)arg2 viaFeedbackAction:(id)arg3 withPossibilityOfUndo:(_Bool)arg4;
- (void)errorItemTapped:(id)arg1;
- (void)_restorePersistedScrollPositionIfNeeded;
- (void)_setNeedsPersistedScrollPositionRestore;
- (_Bool)_restorePersistedScrollPosition;
- (void)_persistScrollPosition;
- (id)scrollPositionIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;
- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;
- (void)tfn_contentScrollViewDidScrollProgrammatically:(id)arg1 animated:(_Bool)arg2;
- (void)tfn_contentScrollViewDidEndDecelerating:(id)arg1;
- (void)tfn_contentScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tfn_contentScrollViewWillScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)canShowUpdateIndicator:(id)arg1 withContentNotification:(id)arg2;
- (void)_loadTopWithSource:(long long)arg1;
- (void)loadTop:(id)arg1;
- (_Bool)isLoadingTop;
- (id)t1_openURL:(id)arg1 fromSourceStatus:(id)arg2;
- (CDUnknownBlockType)didProvideShowLessOftenFeedbackForStatus:(id)arg1 carousel:(id)arg2;
- (id)negativeFeedbackActionsForStatus:(id)arg1;
- (void)_t1_processInitialHomeLoadIfNecessary;
- (void)_t1_showSwitchToastIfNecessary;
- (void)_t1_showToastForTimelineSwitchWithDuration:(double)arg1;
- (void)_t1_showToastForTimelineSwitch;
- (void)_t1_processManualTimelineVariantSwitch;
- (void)_t1_processAutoSwitchedToTop;
- (void)_t1_checkForAutomaticSwitchToTop;
- (void)_t1_action_didTapHomeTimelineContextItemButton:(id)arg1;
- (_Bool)t1_showsPeopleAction;
- (_Bool)t1_showsDashAction;
- (void)_t1_cleanupTooltips;
- (void)_t1_triggerLatestHomeTimelineOptionTooltip;
- (void)_t1_registerTooltipForEvent:(id)arg1 text:(id)arg2;
- (void)_t1_initializeTooltips;
- (_Bool)t1_showsActionButton;
- (void)tfn_navigationControllerDidLayoutBarItems;
- (void)tooltipDidTap:(id)arg1;
- (_Bool)tooltipShouldPresent:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setNeedsUpdate:(_Bool)arg1;
- (id)_updatedSections;
- (id)_emptyContentMessage;
- (void)_update;
- (void)update:(_Bool)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAccount:(id)arg1 timeline:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

