//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSNumber, NSString, TFSTwitterEntityMedia, TFSTwitterEntitySet, TFSTwitterUserReference;

@protocol TFNDirectMessageUser <NSObject>
@property(readonly, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) NSString *displayFullName;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference;
@property(readonly, nonatomic) NSNumber *userIDNumber;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity;
@property(readonly, nonatomic) _Bool blocking;
@property(readonly, nonatomic) _Bool verified;
@property(readonly, nonatomic) _Bool protectedUser;
@property(readonly, nonatomic) _Bool following;
@property(readonly, nonatomic) _Bool followRequestSent;
@property(readonly, copy, nonatomic) TFSTwitterEntitySet *bioEntities;
@property(readonly, copy, nonatomic) NSString *bio;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) long long userID;
@end

