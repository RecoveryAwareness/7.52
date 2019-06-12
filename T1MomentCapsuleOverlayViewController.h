//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1MomentCapsuleAnimatable-Protocol.h>

@class NSString, T1MomentCapsuleOverlayTheme, T1MomentCapsuleOverlayView, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer;
@protocol T1MomentCapsuleOverlayViewControllerDataSource, T1MomentCapsuleOverlayViewControllerDelegate;

@interface T1MomentCapsuleOverlayViewController : TFNViewController <T1MomentCapsuleAnimatable>
{
    _Bool _shouldShowProgressBar;
    id <T1MomentCapsuleOverlayViewControllerDataSource> _dataSource;
    id <T1MomentCapsuleOverlayViewControllerDelegate> _delegate;
    T1MomentCapsuleOverlayView *_overlayView;
    T1MomentCapsuleOverlayTheme *_theme;
    double _progressBarValue;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIScreenEdgePanGestureRecognizer *_screenEdgePanGestureRecognizer;
}

+ (double)progressBarHeight;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer; // @synthesize screenEdgePanGestureRecognizer=_screenEdgePanGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) _Bool shouldShowProgressBar; // @synthesize shouldShowProgressBar=_shouldShowProgressBar;
@property(nonatomic) double progressBarValue; // @synthesize progressBarValue=_progressBarValue;
@property(retain, nonatomic) T1MomentCapsuleOverlayTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) T1MomentCapsuleOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak id <T1MomentCapsuleOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <T1MomentCapsuleOverlayViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)setScrubHintVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_didPanScreenEdge:(id)arg1;
- (void)_didPan:(id)arg1;
- (void)performPreppedAnimation:(id)arg1;
- (void)updateDependenciesForPreppedAnimation;
- (_Bool)prepToPerformAnimationToContentMode:(long long)arg1;
- (long long)currentCapsuleContentMode;
- (void)setShouldShowProgressBar:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateFromDataSourceAnimated:(_Bool)arg1;
- (void)updateFromDataSource;
- (void)applicationWillEnterForeground:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

