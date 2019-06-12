//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1Autoplayable-Protocol.h>
#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>
#import <T1Twitter/T1LiveEventControlBarDelegate-Protocol.h>
#import <T1Twitter/TAVPlaybackObserver-Protocol.h>

@class NSString, T1LiveEventControlBar, T1LiveEventPlayerObservingBlurView, T1LiveEventVideoContainerViewLayoutDelegate, T1LiveEventVideoContainerViewModel, TAVLoopObserver, TAVPlaybackState, TAVPlayerView, TAVPlayerViewConfiguration, TFNPaddedButton, UIActivityIndicatorView, UIImage, UIImageView, UITapGestureRecognizer;
@protocol T1LiveEventVideoContainerViewDelegate;

@interface T1LiveEventVideoContainerView : UIView <TAVPlaybackObserver, T1LiveEventControlBarDelegate, T1ImageViewFetchHelperDelegate, T1Autoplayable>
{
    _Bool _isVideoPlaying;
    _Bool _private_shouldAutoplay;
    _Bool _waitingForPlayerAttachment;
    T1LiveEventVideoContainerViewModel *_viewModel;
    id <T1LiveEventVideoContainerViewDelegate> _delegate;
    unsigned long long _displayMode;
    TAVPlayerView *_playerView;
    T1LiveEventControlBar *_controlBar;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIImage *_thumbnailImage;
    T1LiveEventVideoContainerViewLayoutDelegate *_layoutDelegate;
    T1LiveEventPlayerObservingBlurView *_playerBlurView;
    UIImageView *_thumbnailImageView;
    long long _playerViewLoopingBehavior;
    UIActivityIndicatorView *_activityIndicatorView;
    TFNPaddedButton *_playButton;
    TAVPlaybackState *_lastKnownPlaybackState;
    TAVLoopObserver *_loopingPlaybackObserver;
    long long _loopingThresholdDuration;
    long long _maxLoopCount;
}

@property(nonatomic) long long maxLoopCount; // @synthesize maxLoopCount=_maxLoopCount;
@property(nonatomic) long long loopingThresholdDuration; // @synthesize loopingThresholdDuration=_loopingThresholdDuration;
@property(nonatomic) _Bool waitingForPlayerAttachment; // @synthesize waitingForPlayerAttachment=_waitingForPlayerAttachment;
@property(nonatomic) _Bool private_shouldAutoplay; // @synthesize private_shouldAutoplay=_private_shouldAutoplay;
@property(retain, nonatomic) TAVLoopObserver *loopingPlaybackObserver; // @synthesize loopingPlaybackObserver=_loopingPlaybackObserver;
@property(retain, nonatomic) TAVPlaybackState *lastKnownPlaybackState; // @synthesize lastKnownPlaybackState=_lastKnownPlaybackState;
@property(nonatomic) _Bool isVideoPlaying; // @synthesize isVideoPlaying=_isVideoPlaying;
@property(retain, nonatomic) TFNPaddedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic, setter=_t1_setPlayerViewLoopingBehavior:) long long playerViewLoopingBehavior; // @synthesize playerViewLoopingBehavior=_playerViewLoopingBehavior;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) T1LiveEventPlayerObservingBlurView *playerBlurView; // @synthesize playerBlurView=_playerBlurView;
@property(retain, nonatomic) T1LiveEventVideoContainerViewLayoutDelegate *layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) T1LiveEventControlBar *controlBar; // @synthesize controlBar=_controlBar;
@property(retain, nonatomic) TAVPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) __weak id <T1LiveEventVideoContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1LiveEventVideoContainerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)liveEventControlBar:(id)arg1 didUpdateMuteState:(_Bool)arg2;
- (void)liveEventControlBar:(id)arg1 didTapAttributionForStatus:(id)arg2;
- (void)liveEventControlBar:(id)arg1 didTapToPlay:(_Bool)arg2;
- (void)liveEventControlBarDidTapExpandMedia:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)t1_fetchHelper:(id)arg1 didUpdateImageFromSource:(long long)arg2 isFinal:(_Bool)arg3;
- (void)_t1_removePlayerLoopingObserver;
- (void)_t1_resetLoopingObserver;
- (void)_t1_updateLoopingPlaybackObserver;
- (void)_t1_didTapPlayButton:(id)arg1;
- (_Bool)_t1_isEligibleForAutoplay;
- (_Bool)_t1_isPlayerDockedElsewhere;
- (void)_t1_notifyDelegatePlaybackDidCompleteIfNecessary;
- (unsigned long long)_t1_liveEventControlBarDisplayMode;
- (void)_t1_cleanupSubviews;
- (void)_t1_updateSubviews;
- (void)_t1_updateForPlayerAttachment;
- (struct CGRect)autoplayableFrameIn:(id)arg1;
@property(nonatomic) _Bool shouldAutoplay;
@property(copy, nonatomic) TAVPlayerViewConfiguration *playerViewConfiguration;
- (struct CGRect)previewImageFrameInWindow:(id)arg1;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (void)pause;
- (void)play;
- (void)dissociatePlayer;
- (void)associatePlayer;
- (void)cleanup;
@property(nonatomic, getter=isChromeHidden) _Bool chromeHidden;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 playerViewConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

