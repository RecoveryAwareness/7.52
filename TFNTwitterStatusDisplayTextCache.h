//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSArray, NSString, TFNAttributedTextModel;

@interface TFNTwitterStatusDisplayTextCache : NSObject <TFSPlistSerialization>
{
    NSArray *_conjunctionRanges;
    NSArray *_urlRanges;
    NSArray *_placeRanges;
    _Bool _mayHaveUndetectedHashflags;
    _Bool _darkBackground;
    _Bool _textTruncated;
    NSString *_text;
    NSArray *_ranges;
    NSArray *_hitHighlights;
    NSArray *_hashflags;
    long long _hashflagVersion;
    TFNAttributedTextModel *_textModel;
    double _fontSize;
    double _textHeight;
    long long _seed;
    NSString *_seedFontName;
    double _seedLineHeight;
}

@property(nonatomic, getter=isTextTruncated) _Bool textTruncated; // @synthesize textTruncated=_textTruncated;
@property(nonatomic) double seedLineHeight; // @synthesize seedLineHeight=_seedLineHeight;
@property(retain, nonatomic) NSString *seedFontName; // @synthesize seedFontName=_seedFontName;
@property(nonatomic) long long seed; // @synthesize seed=_seed;
@property(nonatomic) double textHeight; // @synthesize textHeight=_textHeight;
@property(nonatomic) _Bool darkBackground; // @synthesize darkBackground=_darkBackground;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) TFNAttributedTextModel *textModel; // @synthesize textModel=_textModel;
@property(nonatomic) long long hashflagVersion; // @synthesize hashflagVersion=_hashflagVersion;
@property(nonatomic) _Bool mayHaveUndetectedHashflags; // @synthesize mayHaveUndetectedHashflags=_mayHaveUndetectedHashflags;
@property(copy, nonatomic) NSArray *hashflags; // @synthesize hashflags=_hashflags;
@property(copy, nonatomic) NSArray *hitHighlights; // @synthesize hitHighlights=_hitHighlights;
@property(copy, nonatomic) NSArray *ranges; // @synthesize ranges=_ranges;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)loadTextHeightCacheFromPlistDictionary:(id)arg1;
- (id)textHeightCachePlistDictionaryValue;
- (id)urlRanges;
- (id)placeRanges;
- (id)conjunctionRanges;
- (_Bool)isHashflagVersionValid;
- (_Bool)isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

