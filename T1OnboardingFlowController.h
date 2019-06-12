//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1OnboardingFlow-Protocol.h>
#import <T1Twitter/T1OnboardingPresenterDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingTaskControllerDelegate-Protocol.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSString, T1OnboardingPresenter, TFNTwitterAccount;
@protocol T1OnboardingFlowControllerDelegate, TFNOnboardingTaskService;

@interface T1OnboardingFlowController : NSObject <T1OnboardingFlow, T1OnboardingTaskControllerDelegate, T1OnboardingPresenterDelegate>
{
    id <TFNOnboardingTaskService> _service;
    TFNTwitterAccount *_account;
    _Bool _didChangeCurrentAccount;
    id <T1OnboardingFlowControllerDelegate> _delegate;
    NSHashTable *_nonDismissableSubtaskControllers;
    NSMutableArray *_controllerStack;
    NSMutableArray *_endOfFlowActions;
    NSMutableDictionary *_flowStateDictionary;
    T1OnboardingPresenter *_presenter;
    long long _flowStatus;
    CDUnknownBlockType _dismissCompletion;
    long long _state;
}

+ (id)private_flowControllers;
+ (_Bool)isFlowShowing;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)private_viewCurrentAccountIfNeededAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)private_rewindControllerStackToSubtaskPassingTest:(CDUnknownBlockType)arg1 isDestructive:(_Bool)arg2;
- (void)private_enumerateControllerStackWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)private_dismissAndFinishAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)private_startCurrentTask;
- (void)private_handleFailureWithError:(id)arg1;
- (void)private_handleSuccessWithTask:(id)arg1 finishCompletion:(CDUnknownBlockType)arg2;
- (void)private_handleAccountRemovedNotification:(id)arg1;
- (void)private_fetchNextTaskWithNavigationLink:(id)arg1 terminationReason:(long long)arg2 finishCompletion:(CDUnknownBlockType)arg3;
- (void)private_fetchFirstTask;
- (id)private_currentSubtaskController;
- (void)removeFlowCompletionObserver:(id)arg1;
- (void)addFlowCompletionObserver:(id)arg1 selector:(SEL)arg2;
- (void)completeFlowAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isFlowInProgress) _Bool flowInProgress;
@property(readonly, nonatomic) TFNTwitterAccount *account;
- (void)presenter:(id)arg1 willPushViewController:(id)arg2 withPresentationType:(long long)arg3 dismissable:(_Bool)arg4;
- (void)dismissOnboardingPresenter:(id)arg1;
- (void)taskController:(id)arg1 registerEndOfFlowAction:(CDUnknownBlockType)arg2;
- (void)taskController:(id)arg1 setFlowStatus:(long long)arg2;
- (void)taskController:(id)arg1 setStateValue:(id)arg2 forKey:(id)arg3;
- (id)taskController:(id)arg1 stateValueForKey:(id)arg2;
- (void)viewCurrentAccountForTaskController:(id)arg1;
- (void)taskController:(id)arg1 didChangeCurrentAccount:(id)arg2;
- (id)currentAccountForTaskController:(id)arg1;
- (id)taskController:(id)arg1 controllerForSubtaskWithID:(id)arg2;
- (id)currentSubtaskControllerForTaskController:(id)arg1;
- (void)taskController:(id)arg1 restoreSubtaskController:(id)arg2 isDestructive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)taskController:(id)arg1 didFinishSubtaskController:(id)arg2;
- (void)taskController:(id)arg1 willStartSubtaskController:(id)arg2;
- (void)taskController:(id)arg1 handleDeepLinkURL:(id)arg2;
- (void)taskController:(id)arg1 handleDeepLinkInPlaceURL:(id)arg2;
- (void)taskController:(id)arg1 handleWebURL:(id)arg2 withTitle:(id)arg3 chromeless:(_Bool)arg4;
- (void)taskControllerDidFinish:(id)arg1 withNavigationLink:(id)arg2;
- (void)taskController:(id)arg1 waitWithMessage:(id)arg2;
- (id)taskControllerWillPresentOverCurrentViewController:(id)arg1;
- (id)taskController:(id)arg1 pushViewController:(id)arg2 withPresentationType:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startWithPresenter:(id)arg1;
- (id)initWithTask:(id)arg1 service:(id)arg2 account:(id)arg3 delegate:(id)arg4;
- (id)initWithService:(id)arg1 account:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

