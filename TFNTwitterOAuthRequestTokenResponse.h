//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterOAuthRequestTokenScopePolicy;

@interface TFNTwitterOAuthRequestTokenResponse : NSObject
{
    _Bool _allowWrite;
    _Bool _allowRead;
    _Bool _allowDMWrite;
    _Bool _allowDMRead;
    _Bool _allowEmail;
    _Bool _allowAdsCampaignManagement;
    _Bool _allowAdsAnalytics;
    NSString *_requestTokenAuthParameters;
    NSString *_appName;
    NSString *_organizationName;
    NSString *_appURLString;
    NSString *_privacyPolicyURLString;
    NSString *_termsAndConditionsURLString;
    NSString *_imageURLString;
    TFNTwitterOAuthRequestTokenScopePolicy *_policy;
    struct CGSize _imageDimensions;
}

+ (id)requestTokenResponseWithData:(id)arg1 accountPermissionDataParsingEnabled:(_Bool)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) TFNTwitterOAuthRequestTokenScopePolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(readonly, copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(readonly, nonatomic) _Bool allowAdsAnalytics; // @synthesize allowAdsAnalytics=_allowAdsAnalytics;
@property(readonly, nonatomic) _Bool allowAdsCampaignManagement; // @synthesize allowAdsCampaignManagement=_allowAdsCampaignManagement;
@property(readonly, nonatomic) _Bool allowEmail; // @synthesize allowEmail=_allowEmail;
@property(readonly, nonatomic) _Bool allowDMRead; // @synthesize allowDMRead=_allowDMRead;
@property(readonly, nonatomic) _Bool allowDMWrite; // @synthesize allowDMWrite=_allowDMWrite;
@property(readonly, nonatomic) _Bool allowRead; // @synthesize allowRead=_allowRead;
@property(readonly, nonatomic) _Bool allowWrite; // @synthesize allowWrite=_allowWrite;
@property(readonly, copy, nonatomic) NSString *termsAndConditionsURLString; // @synthesize termsAndConditionsURLString=_termsAndConditionsURLString;
@property(readonly, copy, nonatomic) NSString *privacyPolicyURLString; // @synthesize privacyPolicyURLString=_privacyPolicyURLString;
@property(readonly, copy, nonatomic) NSString *appURLString; // @synthesize appURLString=_appURLString;
@property(readonly, copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, copy, nonatomic) NSString *requestTokenAuthParameters; // @synthesize requestTokenAuthParameters=_requestTokenAuthParameters;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 accountPermissionDataParsingEnabled:(_Bool)arg2;
- (id)initWithData:(id)arg1 accountPermissionDataParsingEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

