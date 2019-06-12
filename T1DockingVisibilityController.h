//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNViewControllerEventObserver-Protocol.h>

@class NSHashTable, NSString;
@protocol T1DockingVisibilityControllerDelegate;

@interface T1DockingVisibilityController : NSObject <TFNViewControllerEventObserver>
{
    id <T1DockingVisibilityControllerDelegate> _delegate;
    NSHashTable *_hidingViewControllers;
}

@property(retain, nonatomic) NSHashTable *hidingViewControllers; // @synthesize hidingViewControllers=_hidingViewControllers;
@property(nonatomic) __weak id <T1DockingVisibilityControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewControllerViewDidFullyDisappear:(id)arg1;
- (void)viewControllerViewDidFullyAppear:(id)arg1;
- (void)viewControllerViewWillFullyAppear:(id)arg1;
- (void)_t1_audioPlayerDidDispose;
- (void)_t1_audioPlayerDidPresent;
- (void)_t1_changeDockedViewVisibilityWithVisible:(_Bool)arg1;
- (void)_t1_showDockingIfPossibleWithDisappearingViewController:(id)arg1;
- (void)_t1_hideDockingIfNecessaryWithAppearingViewController:(id)arg1;
- (void)unregisterVisibleViewController:(id)arg1;
- (void)registerVisibleViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

