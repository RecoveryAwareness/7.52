//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString;

@protocol TFSAuthGuestAuthAPI <NSObject>
- (void)guestActivateWithAppToken:(NSString *)arg1 responseBlock:(void (^)(_Bool, NSString *, NSError *))arg2;
- (void)appTokenExchangeWithResponseBlock:(void (^)(_Bool, NSString *, NSError *))arg1;
@end

