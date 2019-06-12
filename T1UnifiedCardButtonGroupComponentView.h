//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNLayoutableView.h>

#import <T1Twitter/T1UnifiedCardComponentView-Protocol.h>

@class NSArray, NSString, TFNTwitterUnifiedCard, TIPImagePipeline, UIView;
@protocol T1UnifiedCardComponentViewEventDelegate, TFNTwitterUnifiedCardComponentModel;

@interface T1UnifiedCardButtonGroupComponentView : TFNLayoutableView <T1UnifiedCardComponentView>
{
    TFNTwitterUnifiedCard *_unifiedCard;
    id <TFNTwitterUnifiedCardComponentModel> _component;
    TIPImagePipeline *_imagePipeline;
    id <T1UnifiedCardComponentViewEventDelegate> _eventDelegate;
    NSArray *_buttons;
}

+ (id)_t1_buttonsForModel:(id)arg1;
+ (id)sharedLayoutDelegate;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) __weak id <T1UnifiedCardComponentViewEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(retain, nonatomic) id <TFNTwitterUnifiedCardComponentModel> component; // @synthesize component=_component;
@property(retain, nonatomic) TFNTwitterUnifiedCard *unifiedCard; // @synthesize unifiedCard=_unifiedCard;
- (void).cxx_destruct;
- (void)_t1_didTapButton:(id)arg1;
- (void)prepareForReuse;
- (void)setupActions;
- (id)t1_accessibilityCustomActions;
@property(readonly, nonatomic) UIView *autoplayableContainerView;
@property(readonly, nonatomic) _Bool shouldDelayContainerTouchDownHighlighting;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

