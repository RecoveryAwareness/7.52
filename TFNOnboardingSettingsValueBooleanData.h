//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNOnboardingSettingsValueDictionaryTranslatable-Protocol.h>

@class NSString;

@interface TFNOnboardingSettingsValueBooleanData : NSObject <TFNOnboardingSettingsValueDictionaryTranslatable>
{
    _Bool _value;
}

@property(readonly, nonatomic) _Bool value; // @synthesize value=_value;
- (id)settingsDictionariesWithIdentifier:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)settingsDictionary;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithValue:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

