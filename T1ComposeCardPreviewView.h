//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1CardContainerView, T1CardView, TFNPaddedButton, TFNTwitterCardContext;
@protocol T1CardViewDelegate;

@interface T1ComposeCardPreviewView : UIView
{
    TFNPaddedButton *_removeButton;
    T1CardContainerView *_cardContainerView;
}

+ (double)reservedRightMarginForRemoveButton;
+ (struct CGSize)removeButtonSize;
+ (struct UIEdgeInsets)removeButtonMargins;
@property(retain, nonatomic) T1CardContainerView *cardContainerView; // @synthesize cardContainerView=_cardContainerView;
@property(retain, nonatomic) TFNPaddedButton *removeButton; // @synthesize removeButton=_removeButton;
- (void).cxx_destruct;
- (id)calculatedLayoutMetrics;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak id <T1CardViewDelegate> cardViewDelegate;
@property(readonly, nonatomic) T1CardView *cardView;
@property(retain, nonatomic) TFNTwitterCardContext *cardContext;
- (id)initWithFrame:(struct CGRect)arg1;

@end

