//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TFNTwitterDisplayTextRenderingResults : NSObject
{
    NSString *_text;
    long long _displayTextOffset;
    NSArray *_textRanges;
    NSArray *_hitHighlights;
}

@property(readonly, copy, nonatomic) NSArray *hitHighlights; // @synthesize hitHighlights=_hitHighlights;
@property(readonly, copy, nonatomic) NSArray *textRanges; // @synthesize textRanges=_textRanges;
@property(readonly, nonatomic) long long displayTextOffset; // @synthesize displayTextOffset=_displayTextOffset;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1 displayTextOffset:(long long)arg2 textRanges:(id)arg3 hitHighlights:(id)arg4;

@end

