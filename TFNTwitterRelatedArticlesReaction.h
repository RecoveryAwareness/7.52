//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, TFNTwitterReactiveBlendingRelatedArticlesInfo, TFNTwitterStatus;
@protocol TFSTwitterAPICommandCancellable;

@interface TFNTwitterRelatedArticlesReaction : NSObject
{
    NSDate *_startDate;
    TFNTwitterStatus *_sourceStatus;
    id <TFSTwitterAPICommandCancellable> _cancellableCommand;
    TFNTwitterReactiveBlendingRelatedArticlesInfo *_content;
    NSDate *_lastResignedActiveAt;
    double _totalTimeSpentInactive;
}

@property(nonatomic) double totalTimeSpentInactive; // @synthesize totalTimeSpentInactive=_totalTimeSpentInactive;
@property(retain, nonatomic) NSDate *lastResignedActiveAt; // @synthesize lastResignedActiveAt=_lastResignedActiveAt;
@property(retain, nonatomic) TFNTwitterReactiveBlendingRelatedArticlesInfo *content; // @synthesize content=_content;
@property(retain, nonatomic) id <TFSTwitterAPICommandCancellable> cancellableCommand; // @synthesize cancellableCommand=_cancellableCommand;
@property(readonly, nonatomic) TFNTwitterStatus *sourceStatus; // @synthesize sourceStatus=_sourceStatus;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)initWithSourceStatus:(id)arg1;

@end

