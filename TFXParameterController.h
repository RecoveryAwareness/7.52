//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIColor;

@interface TFXParameterController : NSObject
{
    struct os_unfair_lock_s _parameterControllerLock;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    UIColor *_textDetailsColor;
    UIColor *_textPlaceholderColor;
    NSMutableDictionary *_parametersDictionary;
}

+ (id)sharedController;
@property(retain, nonatomic) NSMutableDictionary *parametersDictionary; // @synthesize parametersDictionary=_parametersDictionary;
@property(copy, nonatomic) UIColor *textPlaceholderColor; // @synthesize textPlaceholderColor=_textPlaceholderColor;
@property(copy, nonatomic) UIColor *textDetailsColor; // @synthesize textDetailsColor=_textDetailsColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)logParameters;
- (void)saveParameters;
- (void)loadParametersFromFile:(id)arg1;
- (_Bool)loadParametersFromFileName:(id)arg1;
- (void)saveParameters:(id)arg1 toFile:(id)arg2;
- (void)saveParametersToFileName:(id)arg1;
- (void)saveParameters:(id)arg1 toFileName:(id)arg2;
- (void)revertParameters;
- (void)loadJSONConfiguration:(id)arg1;
- (id)JSONConfiguration;
- (id)JSONConfigurationForParameters:(id)arg1;
- (id)configurationsDirectory;
- (id)configurationsURLs;
- (void)loadParametersConfiguration:(id)arg1;
- (id)parametersConfiguration;
- (id)configurationForParameters:(id)arg1;
- (id)dictionaryRepresentation;
- (void)installParameterMethodsForParameter:(id)arg1;
- (void)addParameter:(id)arg1;
- (id)parameterNamed:(id)arg1;
- (id)parameterNames;
- (id)parameters;
- (id)init;

@end

