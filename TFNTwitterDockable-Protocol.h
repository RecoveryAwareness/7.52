//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, TFSTwitterScribeContext, UIView;
@protocol TFNTwitterCardDataSource;

@protocol TFNTwitterDockable
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property(readonly, nonatomic) _Bool dockedViewContainsVideo;
@property(readonly, nonatomic) CDUnknownBlockType undockActionBlock;
@property(readonly, nonatomic) UIView *dockableView;

@optional
@property(readonly, nonatomic) NSString *playerIdentifier;
@property(readonly, nonatomic) _Bool isDockedVideoPaused;
@property(readonly, nonatomic) _Bool isDockedVideoPlaying;
@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource;
@property(readonly, nonatomic) long long dockedViewTapAction;
@property(readonly, nonatomic) long long dockedViewSwipeAction;
- (struct CGPoint)dockedViewOriginForDockedViewSize:(struct CGSize)arg1;
- (void)muteDockedVideo:(_Bool)arg1;
- (void)disposeDockedVideo;
- (void)pauseDockedVideo;
- (void)playDockedVideo;
@end

