//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNFloatingView;

@protocol TFNFloatingViewDelegate <NSObject>

@optional
- (void)floatingView:(TFNFloatingView *)arg1 didReleaseOnArea:(struct CGRect)arg2;
- (void)floatingView:(TFNFloatingView *)arg1 didMoveOnArea:(struct CGRect)arg2;
- (void)floatingView:(TFNFloatingView *)arg1 didPickupOnArea:(struct CGRect)arg2;
- (void)didSwipeFloatingView:(TFNFloatingView *)arg1;
- (void)didLongPressFloatingView:(TFNFloatingView *)arg1;
- (void)didTapFloatingView:(TFNFloatingView *)arg1;
@end

