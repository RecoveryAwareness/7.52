//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNPeopleDiscoveryResponseParser-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface TFNPeopleDiscoveryModuleLayoutHeaderUsersParser : NSObject <TFNPeopleDiscoveryResponseParser>
{
    NSDictionary *_jsonDictionary;
}

+ (_Bool)acceptsJSONDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *users;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

