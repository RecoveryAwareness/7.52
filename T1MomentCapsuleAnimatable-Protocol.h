//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1InterpolatedAnimation;

@protocol T1MomentCapsuleAnimatable <NSObject>
- (void)performPreppedAnimation:(T1InterpolatedAnimation *)arg1;
- (void)updateDependenciesForPreppedAnimation;
- (_Bool)prepToPerformAnimationToContentMode:(long long)arg1;
- (long long)currentCapsuleContentMode;
@end

