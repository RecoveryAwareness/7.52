//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface T1EmptyContentMessage : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    CDUnknownBlockType _subtitleActiveTextAction;
    NSString *_buttonText;
    CDUnknownBlockType _buttonAction;
    unsigned long long _buttonStrength;
    struct _NSRange _titleBoldTextRange;
    struct _NSRange _subtitleActiveTextRange;
}

@property(readonly, nonatomic) unsigned long long buttonStrength; // @synthesize buttonStrength=_buttonStrength;
@property(readonly, copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
@property(readonly, copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly, copy, nonatomic) CDUnknownBlockType subtitleActiveTextAction; // @synthesize subtitleActiveTextAction=_subtitleActiveTextAction;
@property(readonly, nonatomic) struct _NSRange subtitleActiveTextRange; // @synthesize subtitleActiveTextRange=_subtitleActiveTextRange;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) struct _NSRange titleBoldTextRange; // @synthesize titleBoldTextRange=_titleBoldTextRange;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 titleBoldTextRange:(struct _NSRange)arg2 subtitle:(id)arg3 subtitleActiveTextRange:(struct _NSRange)arg4 subtitleActiveTextAction:(CDUnknownBlockType)arg5 buttonText:(id)arg6 buttonStrength:(unsigned long long)arg7 buttonAction:(CDUnknownBlockType)arg8;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 buttonText:(id)arg3 buttonAction:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)init;

@end

