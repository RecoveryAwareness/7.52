//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

@class NSArray, T1TextSizeSettingsItemsViewController, T1TextSizeSlider, TFNTwitterAccount, UITapGestureRecognizer, UIView;

@interface T1TextSizeSettingsViewController : TFNViewController
{
    T1TextSizeSettingsItemsViewController *_tableVC;
    UIView *_sizeSelectionContainer;
    T1TextSizeSlider *_sizeSelectionSlider;
    UIView *_sizeSelectionTrack;
    NSArray *_circles;
    double previousValue;
    UITapGestureRecognizer *_tapGestureRecognizer;
    TFNTwitterAccount *_account;
}

@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_didCancelSlider:(id)arg1;
- (void)_didTapLarger:(id)arg1;
- (void)_didTapSmaller:(id)arg1;
- (void)_didFinishTapOnSlider:(id)arg1;
- (void)_didTapSlider:(id)arg1;
- (void)_didUpdateSlider:(id)arg1;
- (void)_updateSliderValue:(float)arg1;
- (void)_loadSizeSelectionContainerContent;
- (void)loadView;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

