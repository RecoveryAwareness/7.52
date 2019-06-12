//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface T1DirectMessageEntryViewModelVariant : NSObject
{
    _Bool _outgoing;
    long long _variantType;
    NSString *_reuseIdentifier;
}

+ (id)allVariants;
+ (id)variantWithReuseIdentifier:(id)arg1;
+ (id)variantWithType:(long long)arg1 isOutgoing:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(readonly, nonatomic) long long variantType; // @synthesize variantType=_variantType;
@property(readonly, nonatomic, getter=isOutgoing) _Bool outgoing; // @synthesize outgoing=_outgoing;
- (void).cxx_destruct;
- (id)initWithVariantType:(long long)arg1 isOutgoing:(_Bool)arg2 reuseIdentifier:(id)arg3;
- (id)init;

@end

