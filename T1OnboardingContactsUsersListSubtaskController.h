//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingSubtaskController.h>

#import <T1Twitter/T1PeopleAddressBookViewControllerDelegate-Protocol.h>

@class NSDictionary, NSString, TFNOnboardingContactsUsersListSubtask;
@protocol T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingContactsUsersListSubtaskController : T1OnboardingSubtaskController <T1PeopleAddressBookViewControllerDelegate>
{
    TFNOnboardingContactsUsersListSubtask *_subtask;
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
    NSDictionary *_activeRangeURLStrings;
}

- (void).cxx_destruct;
- (_Bool)peopleAddressBookViewControllerDidTapCloseButton:(id)arg1;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

