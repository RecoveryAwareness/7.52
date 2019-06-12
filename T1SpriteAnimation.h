//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;

@interface T1SpriteAnimation : NSObject
{
    NSMutableArray *_spriteViews;
    NSMutableArray *_timers;
    NSDate *_pauseDateTime;
}

@property(retain, nonatomic) NSDate *pauseDateTime; // @synthesize pauseDateTime=_pauseDateTime;
@property(retain, nonatomic) NSMutableArray *timers; // @synthesize timers=_timers;
@property(retain, nonatomic) NSMutableArray *spriteViews; // @synthesize spriteViews=_spriteViews;
- (void).cxx_destruct;
- (void)_resumeLayer:(id)arg1 elapsedTime:(double)arg2;
- (void)_pauseLayer:(id)arg1;
- (void)_delayTimerFired:(id)arg1;
- (CDUnknownBlockType)delayerForSpriteView:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)triggerForSpriteView:(id)arg1 position:(struct CGPoint)arg2 opacity:(double)arg3;
- (CDUnknownBlockType)triggerForSpriteView:(id)arg1 opacity:(double)arg2;
- (CDUnknownBlockType)triggerForSpriteView:(id)arg1 position:(struct CGPoint)arg2;
- (CDUnknownBlockType)removerForSpriteView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)animatorForSpriteImageView:(id)arg1 frameSheet:(id)arg2 duration:(double)arg3 repeatCount:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)animatorForSpriteView:(id)arg1 calculator:(CDUnknownBlockType)arg2 trigger:(CDUnknownBlockType)arg3 forKey:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)animatorForSpriteView:(id)arg1 calculator:(CDUnknownBlockType)arg2 trigger:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)randomIntegerWithMinimum:(long long)arg1 maximum:(long long)arg2;
- (double)randomFloatWithMinimum:(double)arg1 maximum:(double)arg2;
- (void)removeSpriteView:(id)arg1;
- (void)addSpriteView:(id)arg1 toView:(id)arg2;
@property(readonly, nonatomic) _Bool isAnimating;
- (void)resume;
- (void)pause;
- (void)abort;
- (void)stop;
- (void)startInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

