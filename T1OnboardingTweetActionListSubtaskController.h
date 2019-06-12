//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingSubtaskController.h>

#import <T1Twitter/T1OnboardingTweetActionListViewControllerDelegate-Protocol.h>

@class NSDate, NSString, T1OnboardingTweetActionListViewController, TFNOnboardingTweetActionListSubtask, TFNOnboardingTweetActionListSubtaskState;
@protocol T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingTweetActionListSubtaskController : T1OnboardingSubtaskController <T1OnboardingTweetActionListViewControllerDelegate>
{
    NSDate *_firstRequestTime;
    long long _promptIndex;
    long long _promptRepeatCount;
    NSString *_flowToken;
    TFNOnboardingTweetActionListSubtask *_subtask;
    TFNOnboardingTweetActionListSubtaskState *_state;
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
    T1OnboardingTweetActionListViewController *_viewController;
    long long _requestCount;
}

@property long long requestCount; // @synthesize requestCount=_requestCount;
- (void).cxx_destruct;
- (void)private_updateViewController:(id)arg1 withTweetGroups:(id)arg2;
- (_Bool)private_isTweetResponseAction:(id)arg1;
- (_Bool)private_isPromptWithTweetResponseActions:(id)arg1;
- (id)private_currentPrompt;
- (_Bool)private_advancePromptIfPossible;
- (void)private_completeWithViewController:(id)arg1 navigationLink:(id)arg2;
- (id)tweetActionListViewController:(id)arg1 expandedTextForRichText:(id)arg2;
- (id)actionPromptForTweetActionListViewController:(id)arg1;
- (id)skipLabelForTweetActionListViewController:(id)arg1;
- (id)nextLabelForTweetActionListViewController:(id)arg1;
- (_Bool)isSkipEnabledForTweetActionListViewController:(id)arg1;
- (_Bool)isNextEnabledForTweetActionListViewController:(id)arg1;
- (void)tweetActionListViewController:(id)arg1 didTapOnScribeElement:(id)arg2;
- (void)private_sendTweetRequestForViewController:(id)arg1;
- (void)tweetActionListViewController:(id)arg1 didRecordResponseForSelectedAction:(id)arg2;
- (_Bool)tweetActionListViewController:(id)arg1 shouldRecordResponseForSelectedAction:(id)arg2;
- (_Bool)tweetActionListViewController:(id)arg1 shouldLocateActionInToolbar:(id)arg2;
- (_Bool)tweetActionListViewController:(id)arg1 shouldIncludeActionResponseInTimeline:(id)arg2;
- (void)tweetActionListViewControllerDidError:(id)arg1;
- (void)tweetActionListViewControllerDidTapSkip:(id)arg1;
- (void)tweetActionListViewControllerDidTapNext:(id)arg1;
- (_Bool)canRestartForErrors;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 flowToken:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

