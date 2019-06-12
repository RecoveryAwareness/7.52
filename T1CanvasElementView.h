//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNDesignableView.h>

#import <T1Twitter/TFNCanvasSeamConstrainedElementView-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIView;

@interface T1CanvasElementView : TFNDesignableView <TFNCanvasSeamConstrainedElementView>
{
    _Bool _controlsEnabled;
    NSArray *_belowSeamSubviews;
    NSArray *_belowSeamConstraints;
    NSLayoutConstraint *_seamConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *seamConstraint; // @synthesize seamConstraint=_seamConstraint;
@property(retain, nonatomic) NSArray *belowSeamConstraints; // @synthesize belowSeamConstraints=_belowSeamConstraints;
@property(retain, nonatomic) NSArray *belowSeamSubviews; // @synthesize belowSeamSubviews=_belowSeamSubviews;
@property(nonatomic) _Bool controlsEnabled; // @synthesize controlsEnabled=_controlsEnabled;
- (void).cxx_destruct;
- (void)transitionToSize:(struct CGSize)arg1 withDuration:(double)arg2 curve:(unsigned long long)arg3;
- (void)transitionWithDuration:(double)arg1 curve:(unsigned long long)arg2;

// Remaining properties
@property(retain, nonatomic) UIView *containerView;
@property(nonatomic) double cornerRadius;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double shadowOpacity;
@property(nonatomic) double shadowRadius;
@property(readonly) Class superclass;

@end

