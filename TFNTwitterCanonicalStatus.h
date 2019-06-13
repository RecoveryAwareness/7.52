//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSMutableSet, NSNumber, NSSet, NSString, TFNTwitterCardData, TFNTwitterGeotag, TFNTwitterMediaInfo, TFNTwitterStatusTextRangeSet, TFNTwitterUser, TFSCallbackDispatcher, TFSModelContext, TFSTwitterCameraMoment, TFSTwitterEntitySet, TFSTwitterEntityURL;

@interface TFNTwitterCanonicalStatus : NSObject <NSCoding>
{
    TFSTwitterEntitySet *_entities;
    TFSTwitterEntitySet *_withheldEntities;
    TFNTwitterCardData *_cardData;
    NSArray *_inlineMediaInfos;
    _Bool _didCacheMediaInfo;
    unsigned long long _primaryMediaType;
    NSDictionary *_extraScribeItem;
    NSSet *_withheldInCountriesSet;
    NSString *_originalText;
    NSArray *_collectionCardDataItems;
    NSMutableSet *_compositionIDsForSendingReplies;
    NSMutableSet *_compositionIDsForSentReplies;
    long long _fromUserID;
    _Bool _isPossiblySensitive;
    _Bool _isLifelineAlert;
    _Bool _favoritedByLoadingAccount;
    _Bool _favoriteChangePending;
    _Bool _retweetedByLoadingAccount;
    _Bool _retweetChangePending;
    _Bool _includeInProfileTimeline;
    long long _replyCount;
    long long _retweetCount;
    long long _favoriteCount;
    long long _statusID;
    NSDate *_date;
    long long _inReplyToStatusID;
    long long _inReplyToUserID;
    NSString *_inReplyToUsername;
    long long _retweetedStatusID;
    long long _quotedStatusID;
    TFSTwitterEntityURL *_quotedStatusPermalinkEntity;
    TFNTwitterStatusTextRangeSet *_textRangeSet;
    TFNTwitterGeotag *_geotag;
    NSNumber *_conversationMuted;
    long long _conversationID;
    long long _selfThreadID;
    NSString *_language;
    NSString *_supplementalLanguage;
    NSArray *_withheldInCountries;
    NSString *_withheldScope;
    NSString *_withheldText;
    long long _retweetID;
    NSString *_source;
    TFSTwitterCameraMoment *_cameraMoment;
    NSString *_composerSource;
    long long _collectionID;
    NSString *_collectionURL;
    NSArray *_collectionStatusIDs;
    NSDictionary *_collectionCardUserPlistDictionaries;
    NSDictionary *_collectionCardUsers;
    NSData *_entitiesJSONData;
    NSData *_withheldEntitiesJSONData;
    NSData *_cardJSONData;
    NSData *_collectionItemsJSONData;
    NSArray *_cardUserPlistDictionaries;
    NSDictionary *_cardUsers;
    TFSCallbackDispatcher *_updateEventDispatcher;
    NSDate *_lastUpdated;
    TFSModelContext *_modelContext;
    id _statusObserver;
    TFNTwitterUser *_fromUser;
}

+ (id)_collectionCardUsersDataFromCollectionCardDataItems:(id)arg1;
+ (id)_collectionCardDataItemsDataFromCollectionCardDataItems:(id)arg1;
+ (id)_cardUsersDataFromCard:(id)arg1;
+ (id)_cardDataFromCard:(id)arg1;
+ (id)_geotagDataFromGeotag:(id)arg1;
+ (long long)numberOfColumnsInMyRetweets;
+ (long long)numberOfColumnsInStatuses;
+ (unsigned long long)_tfn_mediaTypeFromCardType:(long long)arg1;
+ (id)testStatusWithJSONData:(id)arg1 statusID:(long long)arg2;
@property(copy, nonatomic) NSArray *collectionCardDataItems; // @synthesize collectionCardDataItems=_collectionCardDataItems;
@property(retain, nonatomic) TFNTwitterCardData *cardData; // @synthesize cardData=_cardData;
@property(retain, nonatomic) TFNTwitterUser *fromUser; // @synthesize fromUser=_fromUser;
@property(retain, nonatomic) id statusObserver; // @synthesize statusObserver=_statusObserver;
@property(retain, nonatomic) TFSModelContext *modelContext; // @synthesize modelContext=_modelContext;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly, nonatomic) TFSCallbackDispatcher *updateEventDispatcher; // @synthesize updateEventDispatcher=_updateEventDispatcher;
@property(readonly, nonatomic) _Bool includeInProfileTimeline; // @synthesize includeInProfileTimeline=_includeInProfileTimeline;
@property(nonatomic) _Bool retweetChangePending; // @synthesize retweetChangePending=_retweetChangePending;
@property(nonatomic) _Bool retweetedByLoadingAccount; // @synthesize retweetedByLoadingAccount=_retweetedByLoadingAccount;
@property(nonatomic) _Bool favoriteChangePending; // @synthesize favoriteChangePending=_favoriteChangePending;
@property(nonatomic) _Bool favoritedByLoadingAccount; // @synthesize favoritedByLoadingAccount=_favoritedByLoadingAccount;
@property(copy, nonatomic) NSDictionary *cardUsers; // @synthesize cardUsers=_cardUsers;
@property(copy, nonatomic) NSArray *cardUserPlistDictionaries; // @synthesize cardUserPlistDictionaries=_cardUserPlistDictionaries;
@property(readonly, nonatomic) NSData *collectionItemsJSONData; // @synthesize collectionItemsJSONData=_collectionItemsJSONData;
@property(readonly, nonatomic) NSData *cardJSONData; // @synthesize cardJSONData=_cardJSONData;
@property(readonly, nonatomic) NSData *withheldEntitiesJSONData; // @synthesize withheldEntitiesJSONData=_withheldEntitiesJSONData;
@property(readonly, nonatomic) NSData *entitiesJSONData; // @synthesize entitiesJSONData=_entitiesJSONData;
@property(copy, nonatomic) NSDictionary *collectionCardUsers; // @synthesize collectionCardUsers=_collectionCardUsers;
@property(copy, nonatomic) NSDictionary *collectionCardUserPlistDictionaries; // @synthesize collectionCardUserPlistDictionaries=_collectionCardUserPlistDictionaries;
@property(readonly, copy, nonatomic) NSArray *collectionStatusIDs; // @synthesize collectionStatusIDs=_collectionStatusIDs;
@property(readonly, copy, nonatomic) NSString *collectionURL; // @synthesize collectionURL=_collectionURL;
@property(readonly, nonatomic) long long collectionID; // @synthesize collectionID=_collectionID;
@property(readonly, copy, nonatomic) NSString *composerSource; // @synthesize composerSource=_composerSource;
@property(readonly, nonatomic) TFSTwitterCameraMoment *cameraMoment; // @synthesize cameraMoment=_cameraMoment;
@property(readonly, copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) long long retweetID; // @synthesize retweetID=_retweetID;
@property(readonly, copy, nonatomic) NSString *withheldText; // @synthesize withheldText=_withheldText;
@property(readonly, copy, nonatomic) NSString *withheldScope; // @synthesize withheldScope=_withheldScope;
@property(readonly, copy, nonatomic) NSArray *withheldInCountries; // @synthesize withheldInCountries=_withheldInCountries;
@property(readonly, copy, nonatomic) NSString *supplementalLanguage; // @synthesize supplementalLanguage=_supplementalLanguage;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) _Bool isLifelineAlert; // @synthesize isLifelineAlert=_isLifelineAlert;
@property(readonly, nonatomic) _Bool isPossiblySensitive; // @synthesize isPossiblySensitive=_isPossiblySensitive;
@property(nonatomic) long long selfThreadID; // @synthesize selfThreadID=_selfThreadID;
@property(nonatomic) long long conversationID; // @synthesize conversationID=_conversationID;
@property(retain, nonatomic) NSNumber *conversationMuted; // @synthesize conversationMuted=_conversationMuted;
@property(readonly, nonatomic) TFNTwitterGeotag *geotag; // @synthesize geotag=_geotag;
@property(readonly, nonatomic) TFNTwitterStatusTextRangeSet *textRangeSet; // @synthesize textRangeSet=_textRangeSet;
@property(readonly, nonatomic) TFSTwitterEntityURL *quotedStatusPermalinkEntity; // @synthesize quotedStatusPermalinkEntity=_quotedStatusPermalinkEntity;
@property(readonly, nonatomic) long long quotedStatusID; // @synthesize quotedStatusID=_quotedStatusID;
@property(readonly, nonatomic) long long retweetedStatusID; // @synthesize retweetedStatusID=_retweetedStatusID;
@property(readonly, copy, nonatomic) NSString *inReplyToUsername; // @synthesize inReplyToUsername=_inReplyToUsername;
@property(readonly, nonatomic) long long inReplyToUserID; // @synthesize inReplyToUserID=_inReplyToUserID;
@property(readonly, nonatomic) long long inReplyToStatusID; // @synthesize inReplyToStatusID=_inReplyToStatusID;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(readonly, nonatomic) long long statusID; // @synthesize statusID=_statusID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCanonicalStatus:(id)arg1 differentProperties:(out id *)arg2;
- (_Bool)updateEntitiesWithTransaction:(id)arg1;
- (_Bool)insertIntoStatusesWithTransaction:(id)arg1 error:(id *)arg2;
- (void)loadMyRetweetWithResultSet:(id)arg1 columnIndex:(long long *)arg2;
- (id)initWithResultSet:(id)arg1 columnIndex:(long long *)arg2;
- (void)postUpdateNotificationWithUserInfo:(id)arg1;
- (void)_tfn_postUpdateNotification;
- (void)_tfn_initializeCardDataIfNeeded;
- (id)canonicalTextForRange:(struct _NSRange)arg1;
- (_Bool)_tfn_assimilateOriginalText:(id)arg1;
- (void)_tfn_assimilateCardsFromStatus:(id)arg1;
- (_Bool)_tfn_shouldAssimilateBasedOnCardsInStatus:(id)arg1;
- (void)assumeOptionalPersistentAPIFieldsFromCanonicalStatus:(id)arg1;
- (id)_tfn_assimilateCanonicalStatus:(id)arg1;
- (id)assimilateCanonicalStatus:(id)arg1;
- (void)_tfn_assimilateCS2Status:(id)arg1 pureStatus:(id)arg2;
- (void)assimilateCS2Status:(id)arg1 pureStatus:(id)arg2;
- (id)assimilatable;
- (void)_tfn_assimilateToCS2;
- (void)removeTaggedUserWithUserID:(long long)arg1;
- (id)mediaUserWithUserIDIsTaggedIn:(long long)arg1;
@property(readonly, nonatomic) long long primaryCardType;
- (void)_tfn_cacheMediaInfo;
@property(readonly, copy, nonatomic) NSArray *inlineMediaInfos;
@property(readonly, nonatomic) TFNTwitterMediaInfo *primaryMediaInfo;
@property(readonly, nonatomic) unsigned long long primaryMediaType;
@property(readonly, nonatomic) _Bool isSelfThreadStatus;
@property(readonly, nonatomic) unsigned long long displayTextOffset;
@property(readonly, nonatomic) struct _NSRange displayTextRange;
@property(readonly, nonatomic) _Bool isWithheld;
@property(readonly, nonatomic) NSDictionary *extraScribeItem;
@property(readonly, nonatomic) long long cardVersion;
@property(readonly, nonatomic) NSNumber *statusIDNumber;
@property(readonly, copy, nonatomic) NSString *displayText;
- (void)asyncSetFavoriteCount:(id)arg1 retweetCount:(id)arg2 replyCount:(id)arg3;
- (void)updateReplyCountOnDiscardedReplyWithCompositionID:(id)arg1;
- (void)updateReplyCountOnSendingReplySuccessWithCompositionID:(id)arg1;
- (void)updateReplyCountOnSendingReplyErrorWithCompositionID:(id)arg1;
- (void)updateReplyCountOnStartedSendingReplyWithCompositionID:(id)arg1;
- (void)updateEntityMediaWithMediaIDToAltTextDictionary:(id)arg1;
- (void)updateEntityURLsForURL:(id)arg1 withHTMLTitle:(id)arg2;
- (void)updateRetweetedByLoadingAccount:(_Bool)arg1 retweetChangePending:(_Bool)arg2;
- (void)updateFavoritedByLoadingAccount:(_Bool)arg1 favoriteChangePending:(_Bool)arg2;
- (void)updatePossiblySensitive:(_Bool)arg1;
@property(readonly, nonatomic) long long numberOfCompositionsForSentReplies;
@property(readonly, nonatomic) long long numberOfCompositionsForSendingReplies;
@property(readonly, nonatomic) long long replyCount; // @synthesize replyCount=_replyCount;
- (void)setReplyCount:(long long)arg1;
@property(readonly, nonatomic) long long retweetCount; // @synthesize retweetCount=_retweetCount;
@property(readonly, nonatomic) long long favoriteCount; // @synthesize favoriteCount=_favoriteCount;
@property(readonly, nonatomic) TFSTwitterEntitySet *withheldEntities;
@property(readonly, nonatomic) TFSTwitterEntitySet *entities;
@property(readonly, nonatomic) long long fromUserID;
- (id)initWithStatusID:(long long)arg1 cameraMoment:(id)arg2 cardData:(id)arg3 collectionCardDataItems:(id)arg4 collectionID:(long long)arg5 collectionStatusIDs:(id)arg6 collectionURL:(id)arg7 composerSource:(id)arg8 conversationID:(long long)arg9 conversationMuted:(id)arg10 date:(id)arg11 entities:(id)arg12 favoriteCount:(long long)arg13 favoritedByLoadingAccount:(_Bool)arg14 fromUserID:(long long)arg15 geotag:(id)arg16 includeInProfileTimeline:(_Bool)arg17 inReplyToStatusID:(long long)arg18 inReplyToUserID:(long long)arg19 inReplyToUsername:(id)arg20 isLifelineAlert:(_Bool)arg21 isPossiblySensitive:(_Bool)arg22 language:(id)arg23 lastUpdated:(id)arg24 originalText:(id)arg25 quotedStatusID:(long long)arg26 quotedStatusPermalinkEntity:(id)arg27 replyCount:(long long)arg28 retweetCount:(long long)arg29 retweetID:(long long)arg30 retweetedByLoadingAccount:(_Bool)arg31 retweetedStatusID:(long long)arg32 selfThreadID:(long long)arg33 source:(id)arg34 supplementalLanguage:(id)arg35 textRangeSet:(id)arg36 withheldEntities:(id)arg37 withheldInCountries:(id)arg38 withheldScope:(id)arg39 withheldText:(id)arg40;
- (id)initWithJSONDictionary:(id)arg1 users:(id)arg2 statusID:(long long)arg3;
- (id)initWithCS2Status:(id)arg1;
- (id)initWithStatusID:(long long)arg1 originalText:(id)arg2 fromUserID:(long long)arg3 date:(id)arg4;
- (id)initEmptyStatus;
@property(readonly, nonatomic) NSData *serializedCollectionCardUsersData;
@property(readonly, nonatomic) NSData *serializedCollectionCardDataItemsData;
@property(readonly, nonatomic) NSData *serializedCardUsersData;
@property(readonly, nonatomic) NSData *serializedCardData;

@end

