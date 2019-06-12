//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterSuggestedItem-Protocol.h>
#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSArray, NSDictionary, NSString, TFNTwitterFeedbackInfo;
@protocol T1TwitterTimelineMessageTextAction;

@protocol T1TwitterTimelineMessageViewModel <TFSTwitterScribableItem, TFNTwitterSuggestedItem>
@property(readonly, nonatomic) TFNTwitterFeedbackInfo *feedbackInfo;
@property(readonly, nonatomic, getter=isDismissible) _Bool dismissible;
@property(readonly, nonatomic) id <T1TwitterTimelineMessageTextAction> secondaryButtonAction;
@property(readonly, nonatomic) id <T1TwitterTimelineMessageTextAction> primaryButtonAction;
@property(readonly, nonatomic) NSString *bodyString;
@property(readonly, nonatomic) NSString *headerString;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(readonly, nonatomic) NSArray *impressionCallbackEndpoints;
@property(nonatomic) _Bool shouldLogImpression;
- (NSDictionary *)scribeParametersWithPosition:(long long)arg1;
@end

