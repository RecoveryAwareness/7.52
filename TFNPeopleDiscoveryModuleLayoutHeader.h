//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFNPeopleDiscoveryAction;

@interface TFNPeopleDiscoveryModuleLayoutHeader : NSObject
{
    NSString *_titleText;
    unsigned long long _titleIcon;
    NSString *_detailText;
    unsigned long long _detailIcon;
    TFNPeopleDiscoveryAction *_action;
    NSArray *_users;
}

@property(readonly, nonatomic) NSArray *users; // @synthesize users=_users;
@property(readonly, nonatomic) TFNPeopleDiscoveryAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) unsigned long long detailIcon; // @synthesize detailIcon=_detailIcon;
@property(readonly, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, nonatomic) unsigned long long titleIcon; // @synthesize titleIcon=_titleIcon;
@property(readonly, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTitleText:(id)arg1 titleIcon:(unsigned long long)arg2 detailText:(id)arg3 detailIcon:(unsigned long long)arg4 action:(id)arg5 users:(id)arg6;

@end

