//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/TFNDismissDelegate-Protocol.h>

@class NSArray, NSString, UIView, UIWindow;
@protocol TFNAlertViewControllerDelegate, TFNDismissableView;

@interface TFNAlertViewController : UIViewController <TFNDismissDelegate>
{
    UIView<TFNDismissableView> *_alertView;
    UIView *_backgroundView;
    _Bool _didAppear;
    UIWindow *_backgroundWindow;
    id <TFNAlertViewControllerDelegate> _delegate;
    NSString *_headline;
    NSString *_descriptionMessage;
    NSArray *_items;
    UIView *_containerView;
    UIView *_overlayView;
}

@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *descriptionMessage; // @synthesize descriptionMessage=_descriptionMessage;
@property(retain, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(nonatomic) __weak id <TFNAlertViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dismiss:(id)arg1;
- (void)dismissableViewDidDismiss:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)_animateOut;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_teardownModalTransition;
- (void)_setupModalTransition;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_layoutViewsWithinSize:(struct CGSize)arg1 animated:(_Bool)arg2;
- (void)_layoutViewsAnimated:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAlertView:(id)arg1 backgroundWindow:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

