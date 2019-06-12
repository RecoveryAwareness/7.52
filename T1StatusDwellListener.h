//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNCellVisibilityListener-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol T1StatusViewEventHandler;

@interface T1StatusDwellListener : NSObject <TFNCellVisibilityListener>
{
    NSMutableDictionary *_statusDwellState;
    id <T1StatusViewEventHandler> _eventHandler;
}

@property(nonatomic) __weak id <T1StatusViewEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) __weak NSMutableDictionary *statusDwellState; // @synthesize statusDwellState=_statusDwellState;
- (void).cxx_destruct;
- (id)_t1_statusUniqueIDForCell:(id)arg1;
- (unsigned long long)_t1_visibilityStateForCell:(id)arg1;
- (void)_t1_updateVisibilityStateForCell:(id)arg1 withVisibilityState:(unsigned long long)arg2;
- (void)_t1_clearDwellStateForCell:(id)arg1;
- (void)_t1_handleCellDwellEventIfNeeded:(id)arg1;
- (void)cellDidEndDisplayingFromViewport:(id)arg1 inDataViewController:(id)arg2;
- (void)cellDidDisplay:(id)arg1 inDataViewController:(id)arg2 withVisibilityPercentage:(double)arg3 visibilityState:(unsigned long long)arg4;
- (id)initWithStatusViewEventHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

