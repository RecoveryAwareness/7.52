//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSArray, TFNTwitterDismiss;

@interface TFNTwitterFeedbackModule : NSObject <TFSTwitterTimelinePlistSerialization>
{
    NSArray *_feedbackInfos;
    TFNTwitterDismiss *_dismissInfo;
    TFNTwitterDismiss *_currentDismiss;
}

@property(retain, nonatomic) TFNTwitterDismiss *currentDismiss; // @synthesize currentDismiss=_currentDismiss;
@property(readonly, nonatomic) TFNTwitterDismiss *dismissInfo; // @synthesize dismissInfo=_dismissInfo;
@property(readonly, nonatomic) NSArray *feedbackInfos; // @synthesize feedbackInfos=_feedbackInfos;
- (void).cxx_destruct;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithDismiss:(id)arg1 confirmationFeedbacks:(id)arg2;
- (id)init;

@end

