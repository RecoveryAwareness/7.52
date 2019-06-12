//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1SpriteAnimation.h>

@class NSArray, TFSTimer, TFSTwitterScribeContext;
@protocol TFSTwitterLegacyScribeLogMethods;

@interface T1BalloonSpriteAnimation : T1SpriteAnimation
{
    long long _balloonPoppableCount;
    CDUnknownBlockType _currentCompletionBlock;
    NSArray *_balloonImages;
    id <TFSTwitterLegacyScribeLogMethods> _scribe;
    TFSTwitterScribeContext *_scribeContext;
    TFSTimer *_removeBalloonTimer;
}

@property(retain, nonatomic) TFSTimer *removeBalloonTimer; // @synthesize removeBalloonTimer=_removeBalloonTimer;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe; // @synthesize scribe=_scribe;
@property(readonly, copy, nonatomic) NSArray *balloonImages; // @synthesize balloonImages=_balloonImages;
@property(copy, nonatomic) CDUnknownBlockType currentCompletionBlock; // @synthesize currentCompletionBlock=_currentCompletionBlock;
@property(nonatomic) long long balloonPoppableCount; // @synthesize balloonPoppableCount=_balloonPoppableCount;
- (void).cxx_destruct;
- (CDUnknownBlockType)_fadeOutCalculator;
- (CDUnknownBlockType)_bounceCalculatorFromPosition:(struct CGPoint)arg1 toPosition:(struct CGPoint)arg2 bounceFactor:(double)arg3 bounceDecay:(double)arg4 bounceRepeatCount:(long long)arg5;
- (CDUnknownBlockType)_floatCalculatorFromPosition:(struct CGPoint)arg1 toPosition:(struct CGPoint)arg2;
- (void)_abortBalloonViewAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startBalloonInView:(id)arg1 withWidth:(double)arg2 color:(unsigned long long)arg3 laneIndex:(long long)arg4 laneCount:(long long)arg5 staysOnScreen:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (CDUnknownBlockType)_playerForTFNUISound:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)abort;
- (void)stop;
- (void)startInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithPoppableBalloonsEnabled:(_Bool)arg1 balloonImages:(id)arg2 scribe:(id)arg3 scribeContext:(id)arg4;
- (id)initWithPoppableBalloonsEnabled:(_Bool)arg1 scribe:(id)arg2 scribeContext:(id)arg3;

@end

