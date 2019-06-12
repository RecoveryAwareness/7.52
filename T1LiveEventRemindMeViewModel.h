//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterAccount, TFNTwitterLiveEventRemindMeSubscription, TFSTwitterAPICommand;
@protocol T1LiveEventRemindMeViewModelDelegate, TFSTwitterAPICommandCancellable;

@interface T1LiveEventRemindMeViewModel : NSObject
{
    TFNTwitterLiveEventRemindMeSubscription *_remindMeSubscription;
    id <T1LiveEventRemindMeViewModelDelegate> _delegate;
    NSString *_eventID;
    TFNTwitterAccount *_account;
    TFSTwitterAPICommand *_subscribeCommand;
    id <TFSTwitterAPICommandCancellable> _subscribeCancellableCommand;
}

@property(retain, nonatomic) id <TFSTwitterAPICommandCancellable> subscribeCancellableCommand; // @synthesize subscribeCancellableCommand=_subscribeCancellableCommand;
@property(retain, nonatomic) TFSTwitterAPICommand *subscribeCommand; // @synthesize subscribeCommand=_subscribeCommand;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(nonatomic) __weak id <T1LiveEventRemindMeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFNTwitterLiveEventRemindMeSubscription *remindMeSubscription; // @synthesize remindMeSubscription=_remindMeSubscription;
- (void).cxx_destruct;
- (void)_t1_remindMeSubscriptionDidUpdate:(id)arg1;
- (void)_t1_callSubscriptionEndpointWithSubscribedForRemindMeNotification:(_Bool)arg1 commandCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_t1_requestNotificationAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_t1_updateSubscription:(_Bool)arg1;
@property(nonatomic, getter=isUserSubscribedForRemindMeNotification) _Bool userSubscribedForRemindMeNotification;
@property(readonly, nonatomic, getter=isRemindMeButtonVisible) _Bool remindMeButtonVisible;
@property(readonly, copy, nonatomic) NSString *remindMeButtonText;
- (_Bool)isEqualToLiveEventReminderViewModel:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLiveEventRemindMeSubscription:(id)arg1 eventID:(id)arg2 account:(id)arg3;
- (id)init;

@end

