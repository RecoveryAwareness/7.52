//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1StatusViewInlineActions-Protocol.h>
#import <T1Twitter/TFNTwitterInlineActionButtonDelegate-Protocol.h>

@class NSMutableArray, NSNumber, NSString, T1StatusLiveEngagementManager, TFNTwitterAccount, UIColor;
@protocol T1StatusInlineActionsViewDelegate, T1StatusViewModel;

@interface T1StatusInlineActionsView : UIView <T1StatusViewInlineActions, TFNTwitterInlineActionButtonDelegate>
{
    id <T1StatusViewModel> _viewModel;
    unsigned long long _options;
    TFNTwitterAccount *_account;
    id <T1StatusInlineActionsViewDelegate> _delegate;
    T1StatusLiveEngagementManager *_livePipelineTweetManager;
    UIColor *_overrideTintColor;
    NSNumber *_overrideSize;
    NSNumber *_overrideStrength;
    unsigned long long _displayType;
    NSMutableArray *_inlineActionButtons;
}

+ (id)_inlineActionViewClassesForOptions:(unsigned long long)arg1 account:(id)arg2;
+ (struct CGSize)_sizeForOptions:(unsigned long long)arg1 displayType:(unsigned long long)arg2 account:(id)arg3 maximumWidth:(double)arg4 getActionLeftMargin:(out double *)arg5;
+ (double)estimatedHeightForViewModel:(id)arg1 options:(unsigned long long)arg2 displayType:(unsigned long long)arg3 account:(id)arg4;
+ (struct CGSize)sizeForViewModel:(id)arg1 options:(unsigned long long)arg2 displayType:(unsigned long long)arg3 account:(id)arg4 maximumWidth:(double)arg5;
@property(retain, nonatomic) NSMutableArray *inlineActionButtons; // @synthesize inlineActionButtons=_inlineActionButtons;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSNumber *overrideStrength; // @synthesize overrideStrength=_overrideStrength;
@property(retain, nonatomic) NSNumber *overrideSize; // @synthesize overrideSize=_overrideSize;
@property(retain, nonatomic) UIColor *overrideTintColor; // @synthesize overrideTintColor=_overrideTintColor;
@property(nonatomic) __weak T1StatusLiveEngagementManager *livePipelineTweetManager; // @synthesize livePipelineTweetManager=_livePipelineTweetManager;
@property(nonatomic) __weak id <T1StatusInlineActionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <T1StatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didLongPressInlineActionButton:(id)arg1;
- (_Bool)isLongPressEnabledForInlineActionButton:(id)arg1;
- (void)didTapInlineActionButton:(id)arg1;
- (id)calculatedLayoutMetrics;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_t1_layoutInlineActionButtonsTweetDetails;
- (void)_layoutInlineActionButtons;
- (void)layoutSubviews;
- (void)enumerateInlineActionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)viewForInlineActionWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) UIView *containerView;
- (void)_addInlineActionViewsForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (void)updateViewModel:(id)arg1 animated:(_Bool)arg2;
- (void)_updateContent:(_Bool)arg1;
- (void)statusDidUpdate:(_Bool)arg1;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 displayType:(unsigned long long)arg3 account:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

