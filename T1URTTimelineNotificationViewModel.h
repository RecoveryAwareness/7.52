//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ActivityItemAdaptable-Protocol.h>

@class NSDictionary, NSString, T1URTFeedbackContext, T1URTURLViewModel, TFNTwitterUnifiedCard;

@interface T1URTTimelineNotificationViewModel : NSObject <T1ActivityItemAdaptable>
{
    // Error parsing type: , name: notification
    // Error parsing type: , name: urtUrl
    // Error parsing type: , name: clientEventInfo
    // Error parsing type: , name: fromUsers
    // Error parsing type: , name: richTextUsers
    // Error parsing type: , name: socialContext
    // Error parsing type: , name: feedbackContext
    // Error parsing type: , name: targetStatuses
    // Error parsing type: , name: targetUsers
    // Error parsing type: , name: entryID
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *scribeItemImpressionID;
@property(nonatomic, readonly) NSDictionary *scribeItem;
@property(nonatomic, readonly) NSString *scribeElement;
@property(nonatomic, readonly) NSString *scribeComponent;
@property(nonatomic, readonly) NSDictionary *scribeNotificationTabDetails;
@property(nonatomic, readonly) NSDictionary *scribeParameters;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *entryID; // @synthesize entryID;
@property(nonatomic, readonly) T1URTFeedbackContext *feedbackContext; // @synthesize feedbackContext;
@property(nonatomic, readonly) TFNTwitterUnifiedCard *unifiedCard;
@property(nonatomic, readonly) long long activityCellAdaptableType;
@property(nonatomic, readonly) T1URTURLViewModel *urlViewModel;

@end

