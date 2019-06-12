//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNComposableViewAdapter.h>

#import <T1Twitter/T1StatusInlineActionsViewDelegate-Protocol.h>

@class NSString, T1StatusLiveEngagementManager, TFSTimer;
@protocol T1StatusViewInlineActions;

@interface T1StandardStatusInlineActionsViewAdapter : TFNComposableViewAdapter <T1StatusInlineActionsViewDelegate>
{
    TFSTimer *_updateStatusCountTimer;
    _Bool _shouldPauseLivePipelineUpdates;
    T1StatusLiveEngagementManager *_livePipelineTweetManager;
    unsigned long long _displayType;
}

@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) _Bool shouldPauseLivePipelineUpdates; // @synthesize shouldPauseLivePipelineUpdates=_shouldPauseLivePipelineUpdates;
@property(nonatomic) __weak T1StatusLiveEngagementManager *livePipelineTweetManager; // @synthesize livePipelineTweetManager=_livePipelineTweetManager;
- (void).cxx_destruct;
- (void)inlineActionsView:(id)arg1 didLongPressInlineActionWithType:(unsigned long long)arg2;
- (void)inlineActionsView:(id)arg1 didTapInlineActionWithType:(unsigned long long)arg2;
- (void)_t1_handleEventType:(id)arg1 forInlineActionsView:(id)arg2 withEventActionTypeValue:(id)arg3 inlineActionType:(unsigned long long)arg4;
- (_Bool)isLayoutState:(id)arg1 validForViewModel:(id)arg2 layoutMetrics:(id)arg3;
- (id)layoutStateForViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (void)viewModel:(id)arg1 didUpdateWithInfo:(id)arg2 forView:(id)arg3;
- (void)unsetViewModelForView:(id)arg1;
- (_Bool)_t1_shouldShowShareInlineActionForViewModel:(id)arg1;
- (void)setViewModel:(id)arg1 forView:(id)arg2;
- (void)view:(id)arg1 willMoveToHostView:(id)arg2;
- (id)initializeView;
- (_Bool)shouldBeVisibleForViewModel:(id)arg1;
- (id)initWithViewIdentifier:(long long)arg1 displayType:(unsigned long long)arg2;
- (void)_t1_invalidateUpdateStatusCountTimer;
- (void)_t1_updateViewModel:(id)arg1 statusCountForView:(id)arg2;
@property(readonly, nonatomic) id <T1StatusViewInlineActions> inlineActions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

