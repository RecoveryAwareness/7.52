//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1FlexibleLayoutItem-Protocol.h>

@class UIView;

@interface T1FlexibleLayoutItem : NSObject <T1FlexibleLayoutItem>
{
    CDUnknownBlockType _flexibleLayoutContentInsetsCalculator;
    CDUnknownBlockType _flexibleLayoutContentSpacingCalculator;
    CDUnknownBlockType _flexibleLayoutFrameAnimator;
    CDUnknownBlockType _flexibleLayoutFrameCalculator;
    CDUnknownBlockType _flexibleLayoutSizeCalculator;
    UIView *_flexibleLayoutView;
    CDUnknownBlockType _flexibleLayoutVisibilityCalculator;
}

@property(copy, nonatomic) CDUnknownBlockType flexibleLayoutVisibilityCalculator; // @synthesize flexibleLayoutVisibilityCalculator=_flexibleLayoutVisibilityCalculator;
@property(retain, nonatomic) UIView *flexibleLayoutView; // @synthesize flexibleLayoutView=_flexibleLayoutView;
@property(copy, nonatomic) CDUnknownBlockType flexibleLayoutSizeCalculator; // @synthesize flexibleLayoutSizeCalculator=_flexibleLayoutSizeCalculator;
@property(copy, nonatomic) CDUnknownBlockType flexibleLayoutFrameCalculator; // @synthesize flexibleLayoutFrameCalculator=_flexibleLayoutFrameCalculator;
@property(copy, nonatomic) CDUnknownBlockType flexibleLayoutFrameAnimator; // @synthesize flexibleLayoutFrameAnimator=_flexibleLayoutFrameAnimator;
@property(copy, nonatomic) CDUnknownBlockType flexibleLayoutContentSpacingCalculator; // @synthesize flexibleLayoutContentSpacingCalculator=_flexibleLayoutContentSpacingCalculator;
@property(copy, nonatomic) CDUnknownBlockType flexibleLayoutContentInsetsCalculator; // @synthesize flexibleLayoutContentInsetsCalculator=_flexibleLayoutContentInsetsCalculator;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFlexibleLayoutItem:(id)arg1;

@end

