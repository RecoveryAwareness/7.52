//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, UITextField;

@protocol UITextFieldDelegate <NSObject>

@optional
- (_Bool)textFieldShouldReturn:(UITextField *)arg1;
- (_Bool)textFieldShouldClear:(UITextField *)arg1;
- (_Bool)textField:(UITextField *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)textFieldDidEndEditing:(UITextField *)arg1 reason:(long long)arg2;
- (void)textFieldDidEndEditing:(UITextField *)arg1;
- (_Bool)textFieldShouldEndEditing:(UITextField *)arg1;
- (void)textFieldDidBeginEditing:(UITextField *)arg1;
- (_Bool)textFieldShouldBeginEditing:(UITextField *)arg1;
@end

