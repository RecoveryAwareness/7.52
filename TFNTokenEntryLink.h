//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTokenEntryLink : NSObject
{
    NSString *_token;
    unsigned long long _entryIndex;
}

@property(nonatomic) unsigned long long entryIndex; // @synthesize entryIndex=_entryIndex;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithToken:(id)arg1 entryIndex:(unsigned long long)arg2;

@end

