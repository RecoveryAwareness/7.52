//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>
#import <T1Twitter/T1InlineMediaContainerViewDelegate-Protocol.h>
#import <T1Twitter/T1InlineMediaViewDelegate-Protocol.h>
#import <T1Twitter/T1StatusPhotoVideoDetailsViewDelegate-Protocol.h>
#import <T1Twitter/T1StatusViewInlineImages-Protocol.h>
#import <T1Twitter/TAVPlaybackObserver-Protocol.h>
#import <T1Twitter/TFNReusable-Protocol.h>

@class NSString, T1ImageViewFetchHelper, T1InlineMediaContainerView, T1InlineMediaView, T1MultiPhotoView, T1PrerollCTAModel, T1StatusPhotoVideoDetailsView, TAVPlaybackState, TFNTwitterAccount;
@protocol T1StatusPhotoVideoForwardViewDelegate, T1StatusViewModel;

@interface T1StatusPhotoVideoForwardView : UIView <T1InlineMediaViewDelegate, T1StatusPhotoVideoDetailsViewDelegate, T1ImageViewFetchHelperDelegate, TAVPlaybackObserver, T1InlineMediaContainerViewDelegate, TFNReusable, T1StatusViewInlineImages>
{
    unsigned long long _imageState;
    UIView *_possiblySensitiveView;
    T1ImageViewFetchHelper *_fetchHelper;
    _Bool _playerWasPlaying;
    _Bool _borderHidden;
    _Bool _watchAgainButtonEnabled;
    _Bool _showingAd;
    id <T1StatusViewModel> _viewModel;
    unsigned long long _options;
    TFNTwitterAccount *_account;
    unsigned long long _attachmentType;
    T1InlineMediaView *_inlineMediaView;
    T1MultiPhotoView *_multiPhotoView;
    T1StatusPhotoVideoDetailsView *_attributionView;
    double _cornerRadius;
    id <T1StatusPhotoVideoForwardViewDelegate> _delegate;
    T1StatusPhotoVideoDetailsView *_videoDetailsView;
    T1InlineMediaContainerView *_mediaContainerView;
    TAVPlaybackState *_lastPlaybackState;
}

+ (_Bool)shouldShowVideoDetailsForStatusViewModel:(id)arg1 options:(unsigned long long)arg2;
+ (unsigned long long)_t1_imageStateForViewModel:(id)arg1 account:(id)arg2 options:(unsigned long long)arg3 attachmentType:(unsigned long long)arg4;
+ (struct CGSize)preferredSizeForWidth:(double)arg1 viewModel:(id)arg2 options:(unsigned long long)arg3 mediaParameters:(id)arg4 attachmentType:(unsigned long long)arg5;
@property(retain, nonatomic) TAVPlaybackState *lastPlaybackState; // @synthesize lastPlaybackState=_lastPlaybackState;
@property(nonatomic, getter=isShowingAd) _Bool showingAd; // @synthesize showingAd=_showingAd;
@property(retain, nonatomic) T1InlineMediaContainerView *mediaContainerView; // @synthesize mediaContainerView=_mediaContainerView;
@property(retain, nonatomic) T1StatusPhotoVideoDetailsView *videoDetailsView; // @synthesize videoDetailsView=_videoDetailsView;
@property(nonatomic) __weak id <T1StatusPhotoVideoForwardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isWatchAgainButtonEnabled) _Bool watchAgainButtonEnabled; // @synthesize watchAgainButtonEnabled=_watchAgainButtonEnabled;
@property(nonatomic, getter=isBorderHidden) _Bool borderHidden; // @synthesize borderHidden=_borderHidden;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) T1StatusPhotoVideoDetailsView *attributionView; // @synthesize attributionView=_attributionView;
@property(retain, nonatomic) T1MultiPhotoView *multiPhotoView; // @synthesize multiPhotoView=_multiPhotoView;
@property(readonly, nonatomic) T1InlineMediaView *inlineMediaView; // @synthesize inlineMediaView=_inlineMediaView;
@property(readonly, nonatomic) unsigned long long attachmentType; // @synthesize attachmentType=_attachmentType;
@property(readonly, nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <T1StatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)t1_fetchHelper:(id)arg1 readyToConfigureView:(id)arg2 state:(long long)arg3;
- (long long)tfn_scaleAspectFillFocusModeForFetchHelper:(id)arg1;
- (id)tfn_focusRectanglesForFocusMode:(long long)arg1 inBounds:(struct CGRect)arg2 forFetchHelper:(id)arg3;
- (void)t1_fetchHelper:(id)arg1 didLoadInitialImageFromSource:(long long)arg2;
- (void)_t1_updateVideoDetailsWithVideoContext:(id)arg1;
- (void)_t1_updateForAdDisplay:(id)arg1 animated:(_Bool)arg2;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)inlineMediaContainerView:(id)arg1 didTapCTAButtonWithModel:(id)arg2;
- (void)_t1_imageLongPressAction;
- (void)_t1_imageTapAction;
- (void)_t1_imageLongPressActionAtIndex:(unsigned long long)arg1;
- (void)_t1_imageTapActionAtIndex:(unsigned long long)arg1;
- (void)_t1_imageLoadedAtIndex:(unsigned long long)arg1 source:(long long)arg2 success:(_Bool)arg3;
- (void)statusPhotoVideoDetailsView:(id)arg1 didTapAttributionForMediaEntity:(id)arg2;
- (_Bool)inlineMediaViewShouldShowVideoDetailsInOverlay:(id)arg1;
- (void)mediaView:(id)arg1 didStopPresentingPlayerView:(id)arg2;
- (void)mediaView:(id)arg1 willPresentPlayerView:(id)arg2;
- (void)inlineMediaView:(id)arg1 wasLongPressedWithGestureRecognizer:(id)arg2;
- (void)inlineMediaViewWasTapped:(id)arg1 withEvent:(id)arg2;
- (void)_t1_setupPrerollContainer;
- (void)_t1_updateAccessoryViews;
- (void)layoutSubviews;
- (void)_t1_handleStatusViewModelUpdateNotification:(id)arg1;
- (void)_t1_updateForImageStateSensitive;
- (void)_t1_updateForImageStateMulti;
@property(readonly, nonatomic) T1PrerollCTAModel *prerollCTAModel;
- (void)_t1_updateForImageStateSingle;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (_Bool)_t1_isEmbeddedMedia;
- (_Bool)_t1_isNewsCameraMedia;
- (void)_t1_updateContent;
- (long long)_t1_imageContentMode;
- (long long)imageContentModeAtIndex:(long long)arg1;
- (struct CGRect)_t1_imageContentsRect;
- (struct CGRect)imageContentsRectAtIndex:(long long)arg1;
- (_Bool)hasAnyVisibleImageBeenDownloaded;
- (id)imageViewAtIndex:(long long)arg1;
- (id)imageAtIndex:(long long)arg1;
- (id)mediaInfoAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfImages;
- (void)_t1_updateBorderDisplay;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 attachmentType:(unsigned long long)arg4;
- (unsigned long long)currentImageState;
- (void)_t1_cleanup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

