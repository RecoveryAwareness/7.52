//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TFNTwitterImageCategory : NSObject
{
    long long _type;
    NSArray *_variants;
    NSString *_defaultVariantName;
    NSString *_placeholderVariantName;
    long long _requestURLFormat;
}

+ (id)imageIdentifierForImageURL:(id)arg1;
+ (long long)categoryTypeForImageURL:(id)arg1 distinguishingPath:(out id *)arg2;
+ (long long)categoryTypeForImageURL:(id)arg1;
+ (id)fetchRequestForImageTemplateURL:(id)arg1 originalDimensions:(struct CGSize)arg2 targetDimensions:(struct CGSize)arg3 targetContentMode:(long long)arg4 maximumVariantDimensions:(struct CGSize)arg5;
+ (id)categoryForType:(long long)arg1;
+ (long long)rankOfVariantInURL:(id)arg1;
+ (_Bool)convertCategoryImageURL:(id)arg1 toFetchImageURL:(out id *)arg2 andFetchImageIdentifier:(out id *)arg3;
+ (void)parseImageURL:(id)arg1 baseURLString:(out id *)arg2 format:(out id *)arg3 variantName:(out id *)arg4 URLFormat:(out long long *)arg5;
+ (id)imageURLStringForBaseURLString:(id)arg1 format:(id)arg2 variantName:(id)arg3 URLFormat:(long long)arg4;
+ (id)imageURLStringForTemplateURL:(id)arg1 formatFallback:(id)arg2 variantName:(id)arg3 URLFormat:(long long)arg4;
+ (id)variantSelectionBehaviorProvider;
+ (void)setVariantSelectionBehaviorProvider:(id)arg1;
+ (CDStruct_bfba3349)variantSelectionBehavior;
@property(readonly, nonatomic) long long requestURLFormat; // @synthesize requestURLFormat=_requestURLFormat;
@property(readonly, copy, nonatomic) NSString *placeholderVariantName; // @synthesize placeholderVariantName=_placeholderVariantName;
@property(readonly, copy, nonatomic) NSString *defaultVariantName; // @synthesize defaultVariantName=_defaultVariantName;
@property(readonly, copy, nonatomic) NSArray *variants; // @synthesize variants=_variants;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)imageIdentifierWithBaseURLString:(id)arg1 format:(id)arg2;
- (id)fetchRequestForImageTemplateURL:(id)arg1 originalDimensions:(struct CGSize)arg2 targetDimensions:(struct CGSize)arg3 targetContentMode:(long long)arg4 maximumVariantDimensions:(struct CGSize)arg5;
- (id)variantForImageWithOriginalDimensions:(struct CGSize)arg1 targetDimensions:(struct CGSize)arg2 targetContentMode:(long long)arg3 maximumVariantDimensions:(struct CGSize)arg4 placeholder:(_Bool)arg5 selectionBehavior:(CDStruct_bfba3349)arg6;
- (id)variantForImageWithOriginalDimensions:(struct CGSize)arg1 targetDimensions:(struct CGSize)arg2 targetContentMode:(long long)arg3 maximumVariantDimensions:(struct CGSize)arg4 placeholder:(_Bool)arg5;
- (id)variantWithName:(id)arg1;
- (long long)rankOfVariantWithName:(id)arg1;
- (long long)rankOfVariantInURL:(id)arg1;
- (void)parseImageURL:(id)arg1 baseURLString:(out id *)arg2 format:(out id *)arg3 variantName:(out id *)arg4 URLFormat:(out long long *)arg5;
- (id)initWithType:(long long)arg1 variants:(id)arg2 defaultVariantName:(id)arg3 placeholderVariantName:(id)arg4;

@end

