//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TFNLayoutMetrics, TFNTwitterUnifiedCard;

@interface T1UnifiedCardViewLayoutState : NSObject
{
    TFNLayoutMetrics *_layoutMetrics;
    TFNTwitterUnifiedCard *_unifiedCard;
    NSArray *_componentLayouts;
    NSArray *_spacingHeights;
    double _bottomPadding;
    struct CGSize _size;
}

@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(readonly, nonatomic) NSArray *spacingHeights; // @synthesize spacingHeights=_spacingHeights;
@property(readonly, copy, nonatomic) NSArray *componentLayouts; // @synthesize componentLayouts=_componentLayouts;
@property(readonly, nonatomic) TFNTwitterUnifiedCard *unifiedCard; // @synthesize unifiedCard=_unifiedCard;
@property(readonly, nonatomic) TFNLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGRect componentContainerFrame;
- (id)initWithUnifiedCard:(id)arg1 layoutMetrics:(id)arg2 size:(struct CGSize)arg3 componentLayouts:(id)arg4 spacingHeights:(id)arg5 bottomPadding:(double)arg6;

@end

