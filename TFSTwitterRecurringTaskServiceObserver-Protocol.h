//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFSTwitterRecurringTaskEvent, TFSTwitterRecurringTaskService;
@protocol TFSTwitterRecurringTask;

@protocol TFSTwitterRecurringTaskServiceObserver <NSObject>
- (void)recurringTaskService:(TFSTwitterRecurringTaskService *)arg1 didCompleteTask:(id <TFSTwitterRecurringTask>)arg2 duration:(double)arg3;
- (void)recurringTaskService:(TFSTwitterRecurringTaskService *)arg1 didTimeoutTask:(id <TFSTwitterRecurringTask>)arg2 duration:(double)arg3;
- (void)recurringTaskService:(TFSTwitterRecurringTaskService *)arg1 willBeginTask:(id <TFSTwitterRecurringTask>)arg2;
- (void)recurringTaskService:(TFSTwitterRecurringTaskService *)arg1 triggeredTask:(id <TFSTwitterRecurringTask>)arg2 event:(TFSTwitterRecurringTaskEvent *)arg3;
- (void)recurringTaskService:(TFSTwitterRecurringTaskService *)arg1 unregisteredTask:(id <TFSTwitterRecurringTask>)arg2;
- (void)recurringTaskService:(TFSTwitterRecurringTaskService *)arg1 registeredTask:(id <TFSTwitterRecurringTask>)arg2;
@end

