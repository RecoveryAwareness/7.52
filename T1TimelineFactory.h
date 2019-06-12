//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterTimelineFactory-Protocol.h>

@class NSDictionary, NSString;

@interface T1TimelineFactory : NSObject <TFNTwitterTimelineFactory>
{
    NSDictionary *_entries;
}

+ (id)sharedTimelineFactory;
- (void).cxx_destruct;
- (id)urtNotificationsTimelineForAccount:(id)arg1;
- (id)timelineForAccount:(id)arg1 identifier:(id)arg2 savedPlistDictionary:(id)arg3;
- (id)inUseTimelineIdentifiersForAccount:(id)arg1;
- (id)timelineIdentifiers;
- (void)_autoplaySettingsDidChange;
- (void)_networkQualityDidChange;
- (void)_deviceFeatureSwitchesDidUpdate:(id)arg1;
- (void)_accountFeatureSwitchesDidUpdate:(id)arg1;
- (id)rootViewControllerForTimeline:(id)arg1 account:(id)arg2;
- (id)timelineIdentifierForPanelID:(long long)arg1;
- (long long)panelIDForTimelineWithIdentifier:(id)arg1;
- (id)_t1_homeTimelineEntryViewControllerCreatorWithTimeline:(id)arg1 andAccount:(id)arg2;
- (id)_t1_homeRecommendedTimelineEntry;
- (id)_t1_homeLatestTimelineEntry;
- (id)_t1_altHomeTimelineWithAccount:(id)arg1 plist:(id)arg2 scribePage:(id)arg3 suggestsConfigurationType:(long long)arg4;
- (id)_t1_altHomeTimelineEntryWithPanelID:(long long)arg1 scribePage:(id)arg2 suggestsConfigurationType:(long long)arg3;
- (id)_t1_homeSegmentedControllerTimelineEntryViewControllerCreatorWithTimeline:(id)arg1 andAccount:(id)arg2;
- (id)_t1_homeSegmentedControllerTimelineEntryTimelineCreatorWithAccount:(id)arg1 andPlist:(id)arg2;
- (id)_t1_homeTimelineEntry;
- (id)_t1_homeTimelineEntryTimelineCreatorWithAccount:(id)arg1 andPlist:(id)arg2;
- (void)_setupEntries;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

