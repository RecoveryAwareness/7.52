//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1FollowLiveFollowButtonsProtocol-Protocol.h>

@class NSString, TFNTwitterAccount, TFNTwitterUser;

@interface T1PeriscopeFollowPromptViewController : UIViewController <T1FollowLiveFollowButtonsProtocol>
{
    TFNTwitterAccount *_account;
    TFNTwitterUser *_user;
}

@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
@property(nonatomic) double avatarWidth;
@property(nonatomic) double leftMargin;
@property(nonatomic) double leftOffset;
@property(nonatomic) unsigned long long variant;
- (_Bool)followPromptViewCanShowLiveFollowButton:(id)arg1;
- (void)followLiveFollowButtonsView:(id)arg1 didTapLiveFollowForUser:(id)arg2;
- (void)followLiveFollowButtonsView:(id)arg1 didTapFollowForUser:(id)arg2;
- (void)userUpdated:(id)arg1;
- (void)loadView;
- (void)dispose;
- (id)initWithAccount:(id)arg1 user:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

