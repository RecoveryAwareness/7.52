//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface T1AppBadging : NSObject
{
    // Error parsing type: , name: userDefaults
    // Error parsing type: , name: stateAccessQueue
    // Error parsing type: , name: serializationBlock
    // Error parsing type: , name: appBadgingState
}

+ (id)AccountBadgesDidChangeUpdatedValues;
+ (id)AccountBadgesDidChangeNotification;
+ (id)AppIconBadgeCountDidChangeUpdatedValue;
+ (id)AppIconBadgeCountDidChangeNotification;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (void)forceUnseenDMCountUpdateFor:(long long)arg1;
- (void)forceActivityCountUpdateFor:(long long)arg1;
- (void)forceAccountBadgesUpdate;
- (void)forceAppIconUpdate;
- (void)setLocalUnseenDMCount:(long long)arg1 userID:(unsigned long long)arg2 date:(id)arg3;
- (void)setLocalActivityCount:(long long)arg1 userID:(unsigned long long)arg2 date:(id)arg3;
- (void)setUserVerified:(_Bool)arg1 userID:(unsigned long long)arg2;
- (void)setUserIDs:(id)arg1 currentUserID:(id)arg2;
- (void)setRemoteBadgeCount:(long long)arg1 userID:(unsigned long long)arg2 date:(id)arg3;
- (void)setCurrentUserID:(unsigned long long)arg1;
- (void)setBadgeCountSumsAcrossAccounts:(_Bool)arg1;

@end

