//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFSPlistSerialization-Protocol.h>
#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSArray, NSString, TFSURTUrl;

@protocol TFNTwitterStatusSocialContext <NSCoding, TFSPlistSerialization, TFSTwitterTimelinePlistSerialization>
- (TFSURTUrl *)landingURL;
- (long long)contextType;
- (NSString *)activityPage;
- (NSString *)activityTitle;
- (NSArray *)allUserReferences;
- (_Bool)socialTextIsActivityCount;
- (NSString *)activityName;
- (NSString *)socialText;
@end

