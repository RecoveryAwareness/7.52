//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class TFNTwitterAccount;
@protocol T1URTViewControllerInitialLoadDelegate;

@interface T1URTViewController : TFNItemsDataViewController
{
    // Error parsing type: , name: account
    // Error parsing type: , name: scribeContextInternal
    // Error parsing type: , name: initialLoadDelegate
    // Error parsing type: , name: urtTimeline
    // Error parsing type: , name: lastPollingLoadTopAt
    // Error parsing type: , name: uxConfiguration
    // Error parsing type: , name: timelineObserver
    // Error parsing type: , name: livePipelineTweetManager
    // Error parsing type: , name: markAsViewedHelper
    // Error parsing type: , name: navigationHelper
    // Error parsing type: , name: sectionTransformer
    // Error parsing type: , name: timelineInjectionListeners
    // Error parsing type: , name: timelineUpdater
    // Error parsing type: , name: lastSeenCursorUpdater
    // Error parsing type: , name: coverPresenter
    // Error parsing type: , name: hydration
    // Error parsing type: , name: hydrationObserver
    // Error parsing type: , name: viewModelImpressionMonitor
    // Error parsing type: , name: titleView
    // Error parsing type: , name: feedbackExecutor
    // Error parsing type: , name: feedbackPresenter
    // Error parsing type: , name: renderPerformanceLogger
    // Error parsing type: , name: scribeConfiguration
    // Error parsing type: , name: viewModelEntryMap
    // Error parsing type: , name: urtWhoToFollowBlender
    // Error parsing type: , name: tweetCompositionUpdateListener
    // Error parsing type: , name: initialTimelineLoadState
    // Error parsing type: , name: automaticBottomLoadBackoffGeneration
    // Error parsing type: , name: automaticBottomLoadBackoffInterval
    // Error parsing type: , name: automaticBottomLoadTimer
    // Error parsing type: , name: errorRetriabilityDecider
    // Error parsing type: , name: updateIndicator
    // Error parsing type: , name: lastTimelinePositionUpdateTimer
    // Error parsing type: , name: finishedContextIdentitiesSinceLastUpdate
    // Error parsing type: , name: contextIdentityToUpdateCount
    // Error parsing type: , name: lastScrollEventWasScrolledToBottom
    // Error parsing type: , name: debugDumpTimelineGestureRecognizer.storage
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (id)tableViewCellForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)debugTimelineGestureUpdated:(id)arg1;
- (void)didTapMoreButton:(id)arg1;
- (id)dataViewAccessibilityIdentifier;
- (void)update:(_Bool)arg1;
- (void)loadTopDidBegin;
- (_Bool)loadTopControlShouldUpdateContentInsetWhenUpdatingProgrammatically;
- (_Bool)isLoadingTop;
- (void)loadTop:(id)arg1;
- (void)clearTimelineCacheAndRefresh;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(nonatomic) __weak id <T1URTViewControllerInitialLoadDelegate> initialLoadDelegate; // @synthesize initialLoadDelegate;
@property(nonatomic, readonly) TFNTwitterAccount *account; // @synthesize account;

@end

