//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface TFSTwitterLiveAuthorizedStreamStatusSource : NSObject
{
    NSURL *_locationURL;
    NSURL *_cookieSetURL;
    NSURL *_noRedirectPlaybackURL;
    NSURL *_shareURL;
    long long _status;
    NSString *_streamType;
}

@property(readonly, copy, nonatomic) NSString *streamType; // @synthesize streamType=_streamType;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(readonly, copy, nonatomic) NSURL *noRedirectPlaybackURL; // @synthesize noRedirectPlaybackURL=_noRedirectPlaybackURL;
@property(readonly, copy, nonatomic) NSURL *cookieSetURL; // @synthesize cookieSetURL=_cookieSetURL;
@property(readonly, copy, nonatomic) NSURL *locationURL; // @synthesize locationURL=_locationURL;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithLocation:(id)arg1 cookieSetURL:(id)arg2 noRedirectPlaybackURL:(id)arg3 status:(long long)arg4 streamType:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

