//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFSTwitterEntityURLProvider-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString, TFNTwitterCardData, TFNTwitterGeotag, TFNTwitterMediaInfo, TFSTwitterEntitySet;
@protocol TFNTwitterCanonicalTimelineStatus;

@protocol TFNTwitterCanonicalTimelineStatus <TFSTwitterEntityURLProvider>
@property(readonly, nonatomic) _Bool seenAsFavorited;
@property(readonly, nonatomic) _Bool seenAsRetweeted;
@property(readonly, nonatomic) NSString *mediaPlaylistUrl;
@property(readonly, nonatomic) _Bool isMediaEntityVideo;
@property(readonly, nonatomic) _Bool isAudio;
@property(readonly, nonatomic) _Bool isThreeSixtyVideo;
@property(readonly, nonatomic) _Bool isPoll;
@property(readonly, nonatomic) _Bool isPeriscope;
@property(readonly, nonatomic) _Bool isAdsVideoCard;
@property(readonly, nonatomic) _Bool isVine;
@property(readonly, nonatomic) _Bool isPlayable;
@property(readonly, nonatomic) _Bool isPhoto;
@property(readonly, nonatomic) _Bool isGIF;
@property(readonly, nonatomic) _Bool isAmplifyCardVideo;
@property(readonly, nonatomic) id <TFNTwitterCanonicalTimelineStatus> mediaForwardStatus;
@property(readonly, nonatomic) NSNumber *primaryMediaOwnerID;
@property(readonly, nonatomic) long long primaryCardType;
@property(readonly, nonatomic) unsigned long long primaryMediaType;
@property(readonly, nonatomic) TFNTwitterMediaInfo *primaryMediaInfo;
@property(readonly, nonatomic) NSArray *inlineMediaInfos;
@property(readonly, nonatomic) NSString *source;
@property(readonly, nonatomic) long long replyCount;
@property(readonly, nonatomic) long long favoriteCount;
@property(readonly, nonatomic) long long retweetCount;
@property(readonly, nonatomic) _Bool hasCollectionItems;
@property(readonly, nonatomic) NSArray *collectionCardDataItems;
@property(readonly, nonatomic) NSArray *collectionStatuses;
@property(readonly, nonatomic) NSString *collectionURL;
@property(readonly, nonatomic) long long collectionID;
@property(readonly, nonatomic) _Bool isSelfThreadStatus;
@property(readonly, nonatomic) _Bool isWithheld;
@property(readonly, nonatomic) NSString *withheldScope;
@property(readonly, nonatomic) NSArray *withheldInCountries;
@property(readonly, nonatomic) NSString *supplementalLanguage;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) _Bool isLifelineAlert;
@property(readonly, nonatomic) _Bool isPossiblySensitive;
@property(readonly, nonatomic) _Bool isConversationMuted;
@property(readonly, nonatomic) long long selfThreadID;
@property(readonly, nonatomic) long long conversationID;
@property(readonly, nonatomic) TFNTwitterCardData *cardData;
@property(readonly, nonatomic) TFSTwitterEntitySet *entities;
@property(readonly, nonatomic) TFNTwitterGeotag *geotag;
@property(readonly, nonatomic) id <TFNTwitterCanonicalTimelineStatus> quotedStatus;
@property(readonly, nonatomic) _Bool isQuoteStatus;
@property(readonly, nonatomic) id <TFNTwitterCanonicalTimelineStatus> representedStatus;
@property(readonly, nonatomic) id <TFNTwitterCanonicalTimelineStatus> retweetedStatus;
@property(readonly, nonatomic) _Bool isSelfReply;
@property(readonly, nonatomic) NSString *inReplyToUsername;
@property(readonly, nonatomic) long long inReplyToUserID;
@property(readonly, nonatomic) long long inReplyToStatusID;
@property(readonly, nonatomic) _Bool isReply;
@property(readonly, nonatomic) unsigned long long displayTextOffset;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) NSNumber *statusIDNumber;
@property(readonly, nonatomic) long long statusID;
@end

