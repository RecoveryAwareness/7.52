//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1PlayerSessionProducer, TFNDirectMessagePlayable, TFNTwitterAccount, TFNTwitterStatus, TFSTwitterScribeContext;

@interface T1VideoDockContainerViewModel : NSObject
{
    TFNTwitterAccount *_account;
    TFNTwitterStatus *_status;
    TFNDirectMessagePlayable *_directMessagePlayable;
    TFSTwitterScribeContext *_scribeContext;
    T1PlayerSessionProducer *_playerSessionProducer;
}

@property(readonly, nonatomic) T1PlayerSessionProducer *playerSessionProducer; // @synthesize playerSessionProducer=_playerSessionProducer;
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) TFNDirectMessagePlayable *directMessagePlayable; // @synthesize directMessagePlayable=_directMessagePlayable;
@property(readonly, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)_t1_tavScribeContext;
- (id)entityURL;
- (struct CGSize)imageDimentions;
- (id)imageUrlString;
- (id)tavPlayerViewConfiguration;
- (id)cachedPlayer;
- (_Bool)shouldDisplayQuickReplyView;
- (_Bool)shouldDisplaySlideStatusActions;
- (id)initWithAccount:(id)arg1 status:(id)arg2 directMessagePlayable:(id)arg3 scribeContext:(id)arg4 playerSessionProducer:(id)arg5;
- (id)init;

@end

