//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface T1StatusBodyTextViewFontConfiguration : NSObject
{
    UIFont *_font;
    UIFont *_boldFont;
    UIColor *_textColor;
    UIColor *_linkTextColor;
    double _lineHeight;
}

+ (_Bool)_t1_canRenderFont:(id)arg1 inNumberOfLines:(unsigned long long)arg2 viewModel:(id)arg3 displayTextOptions:(unsigned long long)arg4 width:(double)arg5 cachingEnabled:(_Bool)arg6;
@property(readonly, nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(readonly, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UIFont *boldFont; // @synthesize boldFont=_boldFont;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg1 options:(unsigned long long)arg2 displayTextOptions:(unsigned long long)arg3 backgroundOption:(unsigned long long)arg4 displayType:(unsigned long long)arg5 width:(double)arg6 layoutMetrics:(id)arg7;

@end

