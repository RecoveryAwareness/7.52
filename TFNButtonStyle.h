//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSMutableDictionary, NSString, UIColor, UIImage;

@interface TFNButtonStyle : NSObject
{
    _Bool _titleIsPermitted;
    _Bool _imageIsPermitted;
    _Bool _imageAndTitleAreBothPermitted;
    _Bool _titleRemovalIsPermitted;
    _Bool _imageRemovalIsPermitted;
    double _minimumWidth;
    double _minimumHeight;
    double _maximumWidth;
    struct UIEdgeInsets _touchInsets;
    struct UIEdgeInsets _contentPadding;
    struct UIEdgeInsets _titlePadding;
    struct UIEdgeInsets _imagePadding;
    double _imageToTitlePadding;
    double _imageHeight;
    double _cornerRadiusDivisor;
    double _strokeLineWidth;
    double _opacity;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    UIColor *_titleColor;
    UIColor *_imageColor;
    NSString *_titleFontSelectorName;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _imageEdgeInsets;
    _Bool _tintColorIsAppliedToImage;
    UIColor *_baseColor;
    UIColor *_tintColor;
    unsigned long long _imagePosition;
    _Bool _imageFlipsHorizontallyForRTLLanguageDirection;
    double _minimumKerning;
    double _minimumTitleScaleFactor;
    long long _lineBreakMode;
    NSString *_accessibilityLabel;
    NSString *_accessibilityHint;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    NSString *_abbreviatedTitle;
    NSAttributedString *_abbreviatedAttributedTitle;
    NSString *_imageName;
    NSString *_highContrastImageName;
    UIImage *_backgroundImage;
    _Bool _titleIsPermittedPropertyIsSet;
    _Bool _imageIsPermittedPropertyIsSet;
    _Bool _imageAndTitleAreBothPermittedPropertyIsSet;
    _Bool _titleRemovalIsPermittedPropertyIsSet;
    _Bool _imageRemovalIsPermittedPropertyIsSet;
    _Bool _minimumWidthPropertyIsSet;
    _Bool _minimumHeightPropertyIsSet;
    _Bool _maximumWidthPropertyIsSet;
    _Bool _touchInsetsPropertyIsSet;
    _Bool _contentPaddingPropertyIsSet;
    _Bool _titlePaddingPropertyIsSet;
    _Bool _imagePaddingPropertyIsSet;
    _Bool _imageToTitlePaddingPropertyIsSet;
    _Bool _imageHeightPropertyIsSet;
    _Bool _cornerRadiusDivisorPropertyIsSet;
    _Bool _strokeLineWidthPropertyIsSet;
    _Bool _opacityPropertyIsSet;
    _Bool _fillColorPropertyIsSet;
    _Bool _strokeColorPropertyIsSet;
    _Bool _titleColorPropertyIsSet;
    _Bool _imageColorPropertyIsSet;
    _Bool _titleFontSelectorNamePropertyIsSet;
    _Bool _contentEdgeInsetsPropertyIsSet;
    _Bool _titleEdgeInsetsPropertyIsSet;
    _Bool _imageEdgeInsetsPropertyIsSet;
    _Bool _tintColorIsAppliedToImagePropertyIsSet;
    _Bool _baseColorPropertyIsSet;
    _Bool _tintColorPropertyIsSet;
    _Bool _imagePositionPropertyIsSet;
    _Bool _imageFlipsHorizontallyForRTLLanguageDirectionPropertyIsSet;
    _Bool _minimumKerningPropertyIsSet;
    _Bool _minimumTitleScaleFactorPropertyIsSet;
    _Bool _lineBreakModePropertyIsSet;
    _Bool _accessibilityLabelPropertyIsSet;
    _Bool _accessibilityHintPropertyIsSet;
    _Bool _titlePropertyIsSet;
    _Bool _attributedTitlePropertyIsSet;
    _Bool _abbreviatedTitlePropertyIsSet;
    _Bool _abbreviatedAttributedTitlePropertyIsSet;
    _Bool _imageNamePropertyIsSet;
    _Bool _highContrastImageNamePropertyIsSet;
    _Bool _backgroundImagePropertyIsSet;
    NSMutableDictionary *_scalingModes;
    NSMutableDictionary *_defaultAppearanceKeysForStateMasks;
}

+ (id)_propertyNameKeyForPropertyName:(unsigned long long)arg1;
+ (id)defaultButtonStyleForAppearanceKey:(id)arg1;
+ (void)applyDefaultAppearanceKeysToTemplate:(id)arg1 presentation:(unsigned long long)arg2 variant:(unsigned long long)arg3 size:(unsigned long long)arg4 strength:(unsigned long long)arg5 state:(unsigned long long)arg6;
@property(readonly, nonatomic) _Bool backgroundImagePropertyIsSet; // @synthesize backgroundImagePropertyIsSet=_backgroundImagePropertyIsSet;
@property(readonly, nonatomic) _Bool highContrastImageNamePropertyIsSet; // @synthesize highContrastImageNamePropertyIsSet=_highContrastImageNamePropertyIsSet;
@property(readonly, nonatomic) _Bool imageNamePropertyIsSet; // @synthesize imageNamePropertyIsSet=_imageNamePropertyIsSet;
@property(readonly, nonatomic) _Bool abbreviatedAttributedTitlePropertyIsSet; // @synthesize abbreviatedAttributedTitlePropertyIsSet=_abbreviatedAttributedTitlePropertyIsSet;
@property(readonly, nonatomic) _Bool abbreviatedTitlePropertyIsSet; // @synthesize abbreviatedTitlePropertyIsSet=_abbreviatedTitlePropertyIsSet;
@property(readonly, nonatomic) _Bool attributedTitlePropertyIsSet; // @synthesize attributedTitlePropertyIsSet=_attributedTitlePropertyIsSet;
@property(readonly, nonatomic) _Bool titlePropertyIsSet; // @synthesize titlePropertyIsSet=_titlePropertyIsSet;
@property(readonly, nonatomic) _Bool accessibilityHintPropertyIsSet; // @synthesize accessibilityHintPropertyIsSet=_accessibilityHintPropertyIsSet;
@property(readonly, nonatomic) _Bool accessibilityLabelPropertyIsSet; // @synthesize accessibilityLabelPropertyIsSet=_accessibilityLabelPropertyIsSet;
@property(readonly, nonatomic) _Bool lineBreakModePropertyIsSet; // @synthesize lineBreakModePropertyIsSet=_lineBreakModePropertyIsSet;
@property(readonly, nonatomic) _Bool minimumTitleScaleFactorPropertyIsSet; // @synthesize minimumTitleScaleFactorPropertyIsSet=_minimumTitleScaleFactorPropertyIsSet;
@property(readonly, nonatomic) _Bool minimumKerningPropertyIsSet; // @synthesize minimumKerningPropertyIsSet=_minimumKerningPropertyIsSet;
@property(readonly, nonatomic) _Bool imageFlipsHorizontallyForRTLLanguageDirectionPropertyIsSet; // @synthesize imageFlipsHorizontallyForRTLLanguageDirectionPropertyIsSet=_imageFlipsHorizontallyForRTLLanguageDirectionPropertyIsSet;
@property(readonly, nonatomic) _Bool imagePositionPropertyIsSet; // @synthesize imagePositionPropertyIsSet=_imagePositionPropertyIsSet;
@property(readonly, nonatomic) _Bool tintColorPropertyIsSet; // @synthesize tintColorPropertyIsSet=_tintColorPropertyIsSet;
@property(readonly, nonatomic) _Bool baseColorPropertyIsSet; // @synthesize baseColorPropertyIsSet=_baseColorPropertyIsSet;
@property(readonly, nonatomic) _Bool tintColorIsAppliedToImagePropertyIsSet; // @synthesize tintColorIsAppliedToImagePropertyIsSet=_tintColorIsAppliedToImagePropertyIsSet;
@property(readonly, nonatomic) _Bool imageEdgeInsetsPropertyIsSet; // @synthesize imageEdgeInsetsPropertyIsSet=_imageEdgeInsetsPropertyIsSet;
@property(readonly, nonatomic) _Bool titleEdgeInsetsPropertyIsSet; // @synthesize titleEdgeInsetsPropertyIsSet=_titleEdgeInsetsPropertyIsSet;
@property(readonly, nonatomic) _Bool contentEdgeInsetsPropertyIsSet; // @synthesize contentEdgeInsetsPropertyIsSet=_contentEdgeInsetsPropertyIsSet;
@property(readonly, nonatomic) _Bool titleFontSelectorNamePropertyIsSet; // @synthesize titleFontSelectorNamePropertyIsSet=_titleFontSelectorNamePropertyIsSet;
@property(readonly, nonatomic) _Bool imageColorPropertyIsSet; // @synthesize imageColorPropertyIsSet=_imageColorPropertyIsSet;
@property(readonly, nonatomic) _Bool titleColorPropertyIsSet; // @synthesize titleColorPropertyIsSet=_titleColorPropertyIsSet;
@property(readonly, nonatomic) _Bool strokeColorPropertyIsSet; // @synthesize strokeColorPropertyIsSet=_strokeColorPropertyIsSet;
@property(readonly, nonatomic) _Bool fillColorPropertyIsSet; // @synthesize fillColorPropertyIsSet=_fillColorPropertyIsSet;
@property(readonly, nonatomic) _Bool opacityPropertyIsSet; // @synthesize opacityPropertyIsSet=_opacityPropertyIsSet;
@property(readonly, nonatomic) _Bool strokeLineWidthPropertyIsSet; // @synthesize strokeLineWidthPropertyIsSet=_strokeLineWidthPropertyIsSet;
@property(readonly, nonatomic) _Bool cornerRadiusDivisorPropertyIsSet; // @synthesize cornerRadiusDivisorPropertyIsSet=_cornerRadiusDivisorPropertyIsSet;
@property(readonly, nonatomic) _Bool imageHeightPropertyIsSet; // @synthesize imageHeightPropertyIsSet=_imageHeightPropertyIsSet;
@property(readonly, nonatomic) _Bool imageToTitlePaddingPropertyIsSet; // @synthesize imageToTitlePaddingPropertyIsSet=_imageToTitlePaddingPropertyIsSet;
@property(readonly, nonatomic) _Bool imagePaddingPropertyIsSet; // @synthesize imagePaddingPropertyIsSet=_imagePaddingPropertyIsSet;
@property(readonly, nonatomic) _Bool titlePaddingPropertyIsSet; // @synthesize titlePaddingPropertyIsSet=_titlePaddingPropertyIsSet;
@property(readonly, nonatomic) _Bool contentPaddingPropertyIsSet; // @synthesize contentPaddingPropertyIsSet=_contentPaddingPropertyIsSet;
@property(readonly, nonatomic) _Bool touchInsetsPropertyIsSet; // @synthesize touchInsetsPropertyIsSet=_touchInsetsPropertyIsSet;
@property(readonly, nonatomic) _Bool maximumWidthPropertyIsSet; // @synthesize maximumWidthPropertyIsSet=_maximumWidthPropertyIsSet;
@property(readonly, nonatomic) _Bool minimumHeightPropertyIsSet; // @synthesize minimumHeightPropertyIsSet=_minimumHeightPropertyIsSet;
@property(readonly, nonatomic) _Bool minimumWidthPropertyIsSet; // @synthesize minimumWidthPropertyIsSet=_minimumWidthPropertyIsSet;
@property(readonly, nonatomic) _Bool imageRemovalIsPermittedPropertyIsSet; // @synthesize imageRemovalIsPermittedPropertyIsSet=_imageRemovalIsPermittedPropertyIsSet;
@property(readonly, nonatomic) _Bool titleRemovalIsPermittedPropertyIsSet; // @synthesize titleRemovalIsPermittedPropertyIsSet=_titleRemovalIsPermittedPropertyIsSet;
@property(readonly, nonatomic) _Bool imageAndTitleAreBothPermittedPropertyIsSet; // @synthesize imageAndTitleAreBothPermittedPropertyIsSet=_imageAndTitleAreBothPermittedPropertyIsSet;
@property(readonly, nonatomic) _Bool imageIsPermittedPropertyIsSet; // @synthesize imageIsPermittedPropertyIsSet=_imageIsPermittedPropertyIsSet;
@property(readonly, nonatomic) _Bool titleIsPermittedPropertyIsSet; // @synthesize titleIsPermittedPropertyIsSet=_titleIsPermittedPropertyIsSet;
@property(retain, nonatomic) NSMutableDictionary *defaultAppearanceKeysForStateMasks; // @synthesize defaultAppearanceKeysForStateMasks=_defaultAppearanceKeysForStateMasks;
@property(retain, nonatomic) NSMutableDictionary *scalingModes; // @synthesize scalingModes=_scalingModes;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *backgroundImage;
@property(retain, nonatomic) NSString *highContrastImageName;
@property(retain, nonatomic) NSString *imageName;
@property(retain, nonatomic) NSAttributedString *abbreviatedAttributedTitle;
@property(retain, nonatomic) NSString *abbreviatedTitle;
@property(retain, nonatomic) NSAttributedString *attributedTitle;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *accessibilityHint;
@property(retain, nonatomic) NSString *accessibilityLabel;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) double minimumTitleScaleFactor;
@property(nonatomic) double minimumKerning;
@property(nonatomic) _Bool imageFlipsHorizontallyForRTLLanguageDirection;
@property(nonatomic) unsigned long long imagePosition;
@property(retain, nonatomic) UIColor *tintColor;
@property(retain, nonatomic) UIColor *baseColor;
@property(nonatomic) _Bool tintColorIsAppliedToImage;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets;
@property(copy, nonatomic) NSString *titleFontSelectorName;
@property(retain, nonatomic) UIColor *imageColor;
@property(retain, nonatomic) UIColor *titleColor;
@property(retain, nonatomic) UIColor *strokeColor;
@property(retain, nonatomic) UIColor *fillColor;
@property(nonatomic) double opacity;
@property(nonatomic) double strokeLineWidth;
@property(nonatomic) double cornerRadiusDivisor;
@property(nonatomic) double imageHeight;
@property(nonatomic) double imageToTitlePadding;
@property(nonatomic) struct UIEdgeInsets imagePadding;
@property(nonatomic) struct UIEdgeInsets titlePadding;
@property(nonatomic) struct UIEdgeInsets contentPadding;
@property(nonatomic) struct UIEdgeInsets touchInsets;
@property(nonatomic) double maximumWidth;
@property(nonatomic) double minimumHeight;
@property(nonatomic) double minimumWidth;
@property(nonatomic) _Bool imageRemovalIsPermitted;
@property(nonatomic) _Bool titleRemovalIsPermitted;
@property(nonatomic) _Bool imageAndTitleAreBothPermitted;
@property(nonatomic) _Bool imageIsPermitted;
@property(nonatomic) _Bool titleIsPermitted;
- (void)unsetValueForPropertyName:(unsigned long long)arg1;
- (_Bool)propertyIsSetForPropertyName:(unsigned long long)arg1;
- (void)setProperty:(id)arg1 forPropertyName:(unsigned long long)arg2;
- (id)propertyForPropertyName:(unsigned long long)arg1;
- (void)setDefaultAppearanceKey:(id)arg1 whenApplyingStateMask:(unsigned long long)arg2;
- (id)defaultAppearanceKeyWhenApplyingStateMask:(unsigned long long)arg1;
- (void)setScalingMode:(unsigned long long)arg1 forPropertyName:(unsigned long long)arg2;
- (unsigned long long)scalingModeForPropertyNameKey:(id)arg1;
- (void)applyTemplate:(id)arg1;

@end

