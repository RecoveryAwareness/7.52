//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFNTwitterQuickPromoteModuleFooter;

@interface TFNTwitterQuickPromoteModule : NSObject
{
    NSArray *_statuses;
    NSString *_headerTitle;
    TFNTwitterQuickPromoteModuleFooter *_footer;
}

@property(readonly, nonatomic) TFNTwitterQuickPromoteModuleFooter *footer; // @synthesize footer=_footer;
@property(readonly, copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, nonatomic) NSArray *statuses; // @synthesize statuses=_statuses;
- (void).cxx_destruct;
- (id)private_timelineModuleDictionaryForTimelineDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

