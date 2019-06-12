//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormField.h>

@class NSArray, NSString, TFNTwitterSignUpAvailability, TFSTimer;

@interface T1SignUpFormField : TFNFormField
{
    TFSTimer *_availabilityTimer;
    TFSTimer *_lookupTimer;
    NSString *_suggestionSource;
    _Bool _shouldSuppressUpdates;
    _Bool _shouldCheckAvailability;
    NSString *_scribeComponent;
    NSString *_updatedUserInput;
    NSArray *_currentSuggestions;
    TFNTwitterSignUpAvailability *_availability;
}

+ (id)placeholderItemWithValue:(id)arg1;
+ (id)placeholderItemWithTitle:(id)arg1;
+ (id)placeholderItemsWithValue:(id)arg1 title:(id)arg2;
+ (id)usernameFieldWithInfo:(id)arg1 userInput:(id)arg2 emphasized:(_Bool)arg3;
+ (id)phoneFieldWithDelegate:(id)arg1 inputFormatter:(id)arg2 formFieldDependencies:(id)arg3 signedIn:(_Bool)arg4 emphasized:(_Bool)arg5;
+ (id)passwordFieldWithInfo:(id)arg1 inlinePasswordStrength:(_Bool)arg2 formFieldDependencies:(id)arg3 emphasized:(_Bool)arg4;
+ (id)emailFieldWithPreviousValue:(id)arg1 title:(id)arg2 userInput:(id)arg3 emphasized:(_Bool)arg4;
+ (id)signUpFormFieldWithTitle:(id)arg1 hintText:(id)arg2 userInput:(id)arg3 scribeComponent:(id)arg4;
@property(retain, nonatomic) TFNTwitterSignUpAvailability *availability; // @synthesize availability=_availability;
@property(nonatomic) _Bool shouldCheckAvailability; // @synthesize shouldCheckAvailability=_shouldCheckAvailability;
@property(nonatomic) _Bool shouldSuppressUpdates; // @synthesize shouldSuppressUpdates=_shouldSuppressUpdates;
@property(copy, nonatomic) NSArray *currentSuggestions; // @synthesize currentSuggestions=_currentSuggestions;
@property(copy, nonatomic) NSString *updatedUserInput; // @synthesize updatedUserInput=_updatedUserInput;
@property(readonly, nonatomic) NSString *scribeComponent; // @synthesize scribeComponent=_scribeComponent;
- (void).cxx_destruct;
- (id)userInputSuggestions;
- (unsigned long long)updateValidityWithEditingState:(unsigned long long)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSString *trimmedInputText;
- (void)_checkAvailability;
- (CDUnknownBlockType)_checkAvailabilityResponseBlock;
- (id)checkAvailabilityWithDefaultMessage:(id)arg1 commandBlock:(CDUnknownBlockType)arg2;
- (id)checkAvailabilityWithAvailabilityBlock:(CDUnknownBlockType)arg1 availabilityMessageBlock:(CDUnknownBlockType)arg2 commandBlock:(CDUnknownBlockType)arg3;

@end

