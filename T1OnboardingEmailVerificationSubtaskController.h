//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingIdentityVerificationSubtaskController.h>

@class T1OnboardingEmailVerificationProvider, TFNOnboardingEmailVerificationSubtaskState;
@protocol T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingEmailVerificationSubtaskController : T1OnboardingIdentityVerificationSubtaskController
{
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
    TFNOnboardingEmailVerificationSubtaskState *_state;
    T1OnboardingEmailVerificationProvider *_provider;
}

- (void).cxx_destruct;
- (void)didActivateNavigationLink:(id)arg1;
- (id)initWithSubtask:(id)arg1 flowToken:(id)arg2 delegate:(id)arg3;

@end

