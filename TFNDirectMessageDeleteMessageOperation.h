//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAPICommandOperation.h>

@class NSString, TFNDirectMessageConversation, TFNDirectMessageCryptographyService, TFNDirectMessageEntry;

@interface TFNDirectMessageDeleteMessageOperation : TFNDirectMessageAPICommandOperation
{
    TFNDirectMessageConversation *_conversation;
    TFNDirectMessageEntry *_message;
    TFNDirectMessageCryptographyService *_cryptographyService;
    NSString *_accountID;
    long long _messageID;
}

@property(readonly, nonatomic) long long messageID; // @synthesize messageID=_messageID;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) TFNDirectMessageCryptographyService *cryptographyService; // @synthesize cryptographyService=_cryptographyService;
@property(readonly, copy, nonatomic) TFNDirectMessageEntry *message; // @synthesize message=_message;
@property(readonly, nonatomic) TFNDirectMessageConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)failedWithError:(id)arg1;
- (void)succeededWithObject:(id)arg1;
- (void)updateOptimistically;
- (id)makeCommandWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConversation:(id)arg1 message:(id)arg2 cryptographyService:(id)arg3;

@end

