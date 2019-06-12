//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageActivityEntryViewModel.h>

@class NSString;
@protocol TFNDirectMessageTrustedConversationEntry;

@interface T1DirectMessageTrustedConversationEntryViewModel : T1DirectMessageActivityEntryViewModel
{
    NSString *_text;
    NSString *_accessibilityAnnouncement;
}

- (id)accessibilityAnnouncement;
- (id)text;
- (void).cxx_destruct;
- (void)_updateAccessibilityAnnouncement;
- (void)_updateText;
- (id)initWithEntry:(id)arg1 displayState:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <TFNDirectMessageTrustedConversationEntry> entry; // @dynamic entry;

@end

