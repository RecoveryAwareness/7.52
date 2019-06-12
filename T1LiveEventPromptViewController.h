//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1PromptViewController.h>

#import <T1Twitter/T1PromptDataSource-Protocol.h>

@class NSArray, NSString, T1PromptImageSpec, T1PromptTextSpec, TFNTwitterUser, UIImage;

@interface T1LiveEventPromptViewController : T1PromptViewController <T1PromptDataSource>
{
    CDUnknownBlockType _proceedBlock;
    CDUnknownBlockType _dismissBlock;
    unsigned long long _promptType;
    TFNTwitterUser *_authorUser;
}

@property(retain, nonatomic) TFNTwitterUser *authorUser; // @synthesize authorUser=_authorUser;
@property(nonatomic) unsigned long long promptType; // @synthesize promptType=_promptType;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType proceedBlock; // @synthesize proceedBlock=_proceedBlock;
- (void).cxx_destruct;
- (id)_t1_buttonSpecWithTitle:(id)arg1 strength:(unsigned long long)arg2 variant:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSArray *buttonSpecs;
@property(readonly, nonatomic) T1PromptTextSpec *secondaryTextSpec;
@property(readonly, nonatomic) T1PromptTextSpec *primaryTextSpec;
- (id)initWithAccount:(id)arg1 promptType:(unsigned long long)arg2 authorUser:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) T1PromptTextSpec *detailTextSpec;
@property(readonly, nonatomic) CDUnknownBlockType dismissOptionAction;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) T1PromptImageSpec *imageSpec;
@property(readonly, nonatomic) long long promptLayout;
@property(readonly, nonatomic) Class promptViewClass;
@property(readonly, nonatomic) _Bool showDismissOption;
@property(readonly, nonatomic) _Bool showLogo;
@property(readonly) Class superclass;

@end

