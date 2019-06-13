//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/TFNTwitterPromotedEventMetadata-Protocol.h>
#import <T1Twitter/TFNTwitterStatusSocialContext-Protocol.h>
#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSArray, NSDictionary, NSString, TFNTwitterPromotedAdMetadataContainer;

@interface TFNTwitterPromotedContent : NSObject <TFSPlistSerialization, TFNTwitterPromotedEventMetadata, TFNTwitterStatusSocialContext, NSCopying>
{
    NSString *_impressionID;
    NSString *_disclosureType;
    NSArray *_socialContextUserReferences;
    long long _socialContextType;
    NSString *_advertiserName;
    NSString *_advertiserUsername;
    NSString *_advertiserID;
    NSString *_promotedTrendName;
    NSString *_promotedTrendQueryTerm;
    NSString *_rtbCreativeID;
    TFNTwitterPromotedAdMetadataContainer *_adMetadataContainer;
    NSArray *_dedupeIds;
    NSDictionary *_experiments;
}

@property(readonly, nonatomic) NSDictionary *experiments; // @synthesize experiments=_experiments;
@property(readonly, nonatomic) NSArray *dedupeIds; // @synthesize dedupeIds=_dedupeIds;
@property(readonly, nonatomic) TFNTwitterPromotedAdMetadataContainer *adMetadataContainer; // @synthesize adMetadataContainer=_adMetadataContainer;
@property(readonly, copy, nonatomic) NSString *rtbCreativeID; // @synthesize rtbCreativeID=_rtbCreativeID;
@property(readonly, nonatomic) NSString *promotedTrendQueryTerm; // @synthesize promotedTrendQueryTerm=_promotedTrendQueryTerm;
@property(readonly, nonatomic) NSString *promotedTrendName; // @synthesize promotedTrendName=_promotedTrendName;
@property(readonly, nonatomic) NSString *advertiserID; // @synthesize advertiserID=_advertiserID;
@property(readonly, nonatomic) NSString *advertiserUsername; // @synthesize advertiserUsername=_advertiserUsername;
@property(readonly, nonatomic) NSString *advertiserName; // @synthesize advertiserName=_advertiserName;
@property(readonly, nonatomic) long long socialContextType; // @synthesize socialContextType=_socialContextType;
@property(readonly, nonatomic) NSArray *socialContextUserReferences; // @synthesize socialContextUserReferences=_socialContextUserReferences;
@property(readonly, nonatomic) NSString *disclosureType; // @synthesize disclosureType=_disclosureType;
@property(readonly, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
- (void).cxx_destruct;
- (id)private_dedupeIdsFromValue:(id)arg1;
- (id)landingURL;
- (long long)contextType;
- (id)activityPage;
- (id)activityTitle;
- (_Bool)canUseForSocialContext;
- (id)allUserReferences;
- (_Bool)socialTextIsActivityCount;
- (id)activityName;
- (id)socialText;
- (id)plistDictionaryValueForTimeline:(_Bool)arg1;
- (id)timelinePlistDictionaryValue;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1 forTimeline:(_Bool)arg2;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool isPromotedAccountInTimeline;
@property(readonly, nonatomic) _Bool isRTBCreative;
@property(readonly, nonatomic) _Bool isPromotedTrend;
@property(readonly, nonatomic) _Bool isPromoted;
@property(readonly, nonatomic) _Bool isEarned;
@property(readonly, nonatomic) _Bool isPoliticalAd;
@property(readonly, nonatomic) _Bool isIssueAd;
@property(readonly, nonatomic) long long unifiedDisclosureType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPromotedContent:(id)arg1 socialContextUserReferences:(id)arg2 socialContextType:(long long)arg3;
- (id)initWithPromotedContent:(id)arg1 socialContextUserReferences:(id)arg2;
- (id)initWithPromotedContent:(id)arg1 promotedTrendName:(id)arg2 promotedTrendQueryTerm:(id)arg3;
- (id)initWithDisclosureType:(id)arg1;
- (id)initWithImpressionID:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 users:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

