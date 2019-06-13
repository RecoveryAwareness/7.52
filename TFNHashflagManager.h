//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TFNHashflagImageCache, TFNHashflagImageDownloader;
@protocol TFNHashflagProvider;

@interface TFNHashflagManager : NSObject
{
    NSMutableDictionary *_hashflagCache;
    id <TFNHashflagProvider> _hashflagProvider;
    TFNHashflagImageCache *_cache;
    TFNHashflagImageDownloader *_imageDownloader;
}

+ (id)sharedManager;
@property(retain, nonatomic) TFNHashflagImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) TFNHashflagImageCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <TFNHashflagProvider> hashflagProvider; // @synthesize hashflagProvider=_hashflagProvider;
@property(readonly, nonatomic) NSMutableDictionary *hashflagCache; // @synthesize hashflagCache=_hashflagCache;
- (void).cxx_destruct;
- (void)clearCache;
- (long long)hashflagVersion;
- (id)hashtags;
- (id)hashflagForHashtag:(id)arg1 ignoreDates:(_Bool)arg2;
- (id)hashflagForHashtag:(id)arg1;
- (id)imageForHashflag:(id)arg1;
- (void)updateWithHashflagProvider:(id)arg1;
- (id)init;
- (id)initWithImagePipeline:(id)arg1;

@end

