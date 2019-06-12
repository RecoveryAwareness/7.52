//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterCardScribeContextProvider-Protocol.h>

@class NSArray, NSString, TFNTwitterAccount, TFSTwitterScribeContext;

@interface TFNTwitterCardScribeContextProvider : NSObject <TFNTwitterCardScribeContextProvider>
{
    TFSTwitterScribeContext *_baseScribeContext;
    long long _displayMode;
    TFNTwitterAccount *_account;
    NSArray *_excludedCardTypes;
}

+ (id)scribeContextProviderForScribeContext:(id)arg1 account:(id)arg2 displayMode:(long long)arg3;
@property(retain, nonatomic) NSArray *excludedCardTypes; // @synthesize excludedCardTypes=_excludedCardTypes;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *baseScribeContext; // @synthesize baseScribeContext=_baseScribeContext;
- (void).cxx_destruct;
- (_Bool)_removeCardForCardData:(id)arg1;
- (id)_updatedScribeParameters:(id)arg1 withAuthenticatedWebViewUrl:(id)arg2;
- (id)_updatedScribeParameters:(id)arg1 withCardDataSource:(id)arg2;
- (id)_updatedScribeParameters:(id)arg1 withLogEvent:(id)arg2;
- (id)_updatedScribeParameters:(id)arg1 logEvent:(id)arg2 cardDataSource:(id)arg3;
- (id)_clientParametersForURLLogEvent:(id)arg1;
- (id)_clientParametersForAppLogEvent:(id)arg1;
- (id)_scribeElement;
- (id)scribeParametersForMessageMeCardWithCardData:(id)arg1;
- (id)scribeEventForSurveyCardSelectionWithLogEvent:(id)arg1;
- (id)scribeEventForSurveyCardClickWithLogEvent:(id)arg1;
- (id)scribeEventForDirectMessageCardWithLogEvent:(id)arg1;
- (id)scribeEventForMessageMeCardWithLogEvent:(id)arg1;
- (id)scribeEventForFeedbackWithLogEvent:(id)arg1;
- (id)scribeEventForPollWithLogEvent:(id)arg1;
- (id)scribeEventForSubmitWithLogEvent:(id)arg1;
- (id)scribeEventForInlineVideoWithLogEvent:(id)arg1;
- (id)scribeEventForOffersCardWithLogEvent:(id)arg1;
- (id)scribeEventForAuthenticatedWebViewCardWithLogEvent:(id)arg1;
- (id)_scribeEventForAction:(id)arg1 logEventAndCardDataSource:(id)arg2;
- (id)scribeEventForAudioCardWithCardDataSource:(id)arg1;
- (id)scribeEventForImageWithCardDataSource:(id)arg1;
- (id)scribeEventForAppStoreWithCardDataSource:(id)arg1;
- (id)scribeEventForUserWithCardDataSource:(id)arg1;
- (id)_scribeEventForAction:(id)arg1 cardDataSource:(id)arg2;
- (id)_scribeEventWithCardDataSource:(id)arg1;
- (id)scribeEventForClickWithLogEvent:(id)arg1;
- (id)scribeEventForComposeWithLogEvent:(id)arg1;
- (id)scribeEventForSlideshowActionWithLogEvent:(id)arg1;
- (id)scribeEventForAppStoreActionWithLogEvent:(id)arg1;
- (id)scribeEventForAppActionWithLogEvent:(id)arg1;
- (id)scribeEventForURLActionWithLogEvent:(id)arg1 isAppCard:(_Bool)arg2;
- (id)_scribeEventForAction:(id)arg1 logEvent:(id)arg2;
- (id)_eventScribeContextWithAdditionalParameters:(id)arg1;
- (id)_eventScribeContext;
- (id)initWithBaseScribeContext:(id)arg1 account:(id)arg2 displayMode:(long long)arg3 excludedCardTypes:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

