//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/PTVTwitterCameraLiveDelegate-Protocol.h>
#import <T1Twitter/T1AutocompleteControllerDelegate-Protocol.h>
#import <T1Twitter/T1AutocompleteViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ComposeControllerDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraCaptureViewControllerEventHashtagsDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraCaptureViewControllerPlacesDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraEventHashtagsViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraGeoPickerControllerDelegate-Protocol.h>
#import <T1Twitter/TFNCircularCountProgressDataSource-Protocol.h>
#import <T1Twitter/TFNTwitterTweetTextCounterContext-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>
#import <T1Twitter/UITextViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, PTVAPIResponseErrorInfo, PTVBroadcast, T1AutocompleteViewController, T1ComposeAccountAvatarImageView, T1ComposeController, T1NewsCameraCaptureViewController, T1NewsCameraControlButton, T1NewsCameraEventHashtagsViewController, T1NewsCameraGeoPickerController, T1NewsCameraPlace, T1TextViewAutocompleteController, TFNCircularCountProgressView, TFNPlaceholderTextView, TFNTwitterComposition, TFNTwitterTweetTextCounter, TFSTwitterScribeContext, UIActivityIndicatorView, UIButton, UILabel, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView;

@interface T1NewsCameraCaptureLiveModeViewController : TFNViewController <UITextViewDelegate, T1AutocompleteControllerDelegate, T1AutocompleteViewControllerDelegate, T1NewsCameraCaptureViewControllerEventHashtagsDelegate, T1ComposeControllerDelegate, T1NewsCameraCaptureViewControllerPlacesDelegate, T1NewsCameraGeoPickerControllerDelegate, TFNCircularCountProgressDataSource, TFNTwitterTweetTextCounterContext, T1NewsCameraEventHashtagsViewControllerDelegate, UIGestureRecognizerDelegate, PTVTwitterCameraLiveDelegate>
{
    _Bool _stopButtonDidTransitionToIcon;
    _Bool _isPresentingGeoPicker;
    _Bool _ignoreNextTextSelectionChange;
    _Bool _didDetectAuthenticationError;
    _Bool _isPresentingRectifyViewController;
    _Bool _presented;
    _Bool _isDismissing;
    T1NewsCameraCaptureViewController *_captureViewController;
    unsigned long long _periscopePreBroadcastModeState;
    PTVAPIResponseErrorInfo *_periscopeAccountAuthenticationErrorInfo;
    TFSTwitterScribeContext *_scribeContext;
    UIView *_backgroundShade;
    T1NewsCameraControlButton *_backButton;
    UIButton *_stopBroadcastButton;
    NSLayoutConstraint *_stopLiveButtonWidthAnchor;
    T1NewsCameraGeoPickerController *_geoPickerController;
    UIView *_geoPickerEntryPointButton;
    NSLayoutConstraint *_geoPickerEntryPointButtonTopAnchor;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_preBroadcastDoubleTapRecognizer;
    double _initialPanY;
    UIScrollView *_tweetTextScrollView;
    NSLayoutConstraint *_tweetTextScrollViewBottomAnchor;
    T1ComposeAccountAvatarImageView *_avatarImageView;
    TFNPlaceholderTextView *_tweetTextView;
    TFNCircularCountProgressView *_progressView;
    T1NewsCameraEventHashtagsViewController *_eventHashtagsViewController;
    NSArray *_currentEventHashtags;
    NSString *_currentHashtag;
    UIButton *_goLiveButton;
    UIActivityIndicatorView *_goLiveButtonSpinner;
    UILabel *_goLiveConnectingText;
    NSLayoutConstraint *_goLiveButtonBottomAnchor;
    NSArray *_constraints;
    double _currentKeyboardHeight;
    T1AutocompleteViewController *_autocompleteViewController;
    T1TextViewAutocompleteController *_autocompleteController;
    TFNTwitterComposition *_currentComposition;
    TFNTwitterTweetTextCounter *_tweetTextCounter;
    T1NewsCameraPlace *_selectedPlace;
    unsigned long long _periscopeModeState;
    long long _liveBroadcastCapabilityStatus;
    PTVBroadcast *_broadcast;
    T1ComposeController *_composeTweetController;
}

@property(retain, nonatomic) T1ComposeController *composeTweetController; // @synthesize composeTweetController=_composeTweetController;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(nonatomic, getter=isPresented) _Bool presented; // @synthesize presented=_presented;
@property(nonatomic) _Bool isPresentingRectifyViewController; // @synthesize isPresentingRectifyViewController=_isPresentingRectifyViewController;
@property(nonatomic) _Bool didDetectAuthenticationError; // @synthesize didDetectAuthenticationError=_didDetectAuthenticationError;
@property(retain, nonatomic) PTVBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(nonatomic) long long liveBroadcastCapabilityStatus; // @synthesize liveBroadcastCapabilityStatus=_liveBroadcastCapabilityStatus;
@property(nonatomic) unsigned long long periscopeModeState; // @synthesize periscopeModeState=_periscopeModeState;
@property(retain, nonatomic) T1NewsCameraPlace *selectedPlace; // @synthesize selectedPlace=_selectedPlace;
@property(nonatomic) _Bool ignoreNextTextSelectionChange; // @synthesize ignoreNextTextSelectionChange=_ignoreNextTextSelectionChange;
@property(retain, nonatomic) TFNTwitterTweetTextCounter *tweetTextCounter; // @synthesize tweetTextCounter=_tweetTextCounter;
@property(retain, nonatomic) TFNTwitterComposition *currentComposition; // @synthesize currentComposition=_currentComposition;
@property(retain, nonatomic) T1TextViewAutocompleteController *autocompleteController; // @synthesize autocompleteController=_autocompleteController;
@property(retain, nonatomic) T1AutocompleteViewController *autocompleteViewController; // @synthesize autocompleteViewController=_autocompleteViewController;
@property(nonatomic) double currentKeyboardHeight; // @synthesize currentKeyboardHeight=_currentKeyboardHeight;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSLayoutConstraint *goLiveButtonBottomAnchor; // @synthesize goLiveButtonBottomAnchor=_goLiveButtonBottomAnchor;
@property(retain, nonatomic) UILabel *goLiveConnectingText; // @synthesize goLiveConnectingText=_goLiveConnectingText;
@property(retain, nonatomic) UIActivityIndicatorView *goLiveButtonSpinner; // @synthesize goLiveButtonSpinner=_goLiveButtonSpinner;
@property(retain, nonatomic) UIButton *goLiveButton; // @synthesize goLiveButton=_goLiveButton;
@property(copy, nonatomic) NSString *currentHashtag; // @synthesize currentHashtag=_currentHashtag;
@property(copy, nonatomic) NSArray *currentEventHashtags; // @synthesize currentEventHashtags=_currentEventHashtags;
@property(retain, nonatomic) T1NewsCameraEventHashtagsViewController *eventHashtagsViewController; // @synthesize eventHashtagsViewController=_eventHashtagsViewController;
@property(retain, nonatomic) TFNCircularCountProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) TFNPlaceholderTextView *tweetTextView; // @synthesize tweetTextView=_tweetTextView;
@property(retain, nonatomic) T1ComposeAccountAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) _Bool isPresentingGeoPicker; // @synthesize isPresentingGeoPicker=_isPresentingGeoPicker;
@property(retain, nonatomic) NSLayoutConstraint *tweetTextScrollViewBottomAnchor; // @synthesize tweetTextScrollViewBottomAnchor=_tweetTextScrollViewBottomAnchor;
@property(retain, nonatomic) UIScrollView *tweetTextScrollView; // @synthesize tweetTextScrollView=_tweetTextScrollView;
@property(nonatomic) double initialPanY; // @synthesize initialPanY=_initialPanY;
@property(retain, nonatomic) UITapGestureRecognizer *preBroadcastDoubleTapRecognizer; // @synthesize preBroadcastDoubleTapRecognizer=_preBroadcastDoubleTapRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *geoPickerEntryPointButtonTopAnchor; // @synthesize geoPickerEntryPointButtonTopAnchor=_geoPickerEntryPointButtonTopAnchor;
@property(retain, nonatomic) UIView *geoPickerEntryPointButton; // @synthesize geoPickerEntryPointButton=_geoPickerEntryPointButton;
@property(retain, nonatomic) T1NewsCameraGeoPickerController *geoPickerController; // @synthesize geoPickerController=_geoPickerController;
@property(retain, nonatomic) NSLayoutConstraint *stopLiveButtonWidthAnchor; // @synthesize stopLiveButtonWidthAnchor=_stopLiveButtonWidthAnchor;
@property(nonatomic) _Bool stopButtonDidTransitionToIcon; // @synthesize stopButtonDidTransitionToIcon=_stopButtonDidTransitionToIcon;
@property(retain, nonatomic) UIButton *stopBroadcastButton; // @synthesize stopBroadcastButton=_stopBroadcastButton;
@property(retain, nonatomic) T1NewsCameraControlButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *backgroundShade; // @synthesize backgroundShade=_backgroundShade;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) PTVAPIResponseErrorInfo *periscopeAccountAuthenticationErrorInfo; // @synthesize periscopeAccountAuthenticationErrorInfo=_periscopeAccountAuthenticationErrorInfo;
@property(readonly, nonatomic) unsigned long long periscopePreBroadcastModeState; // @synthesize periscopePreBroadcastModeState=_periscopePreBroadcastModeState;
@property(nonatomic) __weak T1NewsCameraCaptureViewController *captureViewController; // @synthesize captureViewController=_captureViewController;
- (void).cxx_destruct;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)newsCameraCaptureViewController:(id)arg1 didChangeGuestBroadcastingEnabled:(_Bool)arg2;
- (void)newsCameraCaptureViewControllerDidChangePeriscopeAccount:(id)arg1;
- (_Bool)_t1_main_isPeriscopeReady;
- (void)_t1_main_updateConnectionStatus;
- (void)_t1_main_updateGoLiveButton;
- (void)newsCameraCaptureViewController:(id)arg1 didUpdateCurrentEventHashtagsFetchResult:(id)arg2;
- (void)newsCameraEventHashtagsViewController:(id)arg1 didChangeSelectedIndex:(long long)arg2;
- (void)_t1_main_updateForEventHashtagsAnimated:(_Bool)arg1;
- (void)_t1_main_updateEventHashtagsViewAnimated:(_Bool)arg1;
- (void)_t1_main_updateCurrentHashtags;
- (void)autocompleteController:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteControllerDidEnd:(id)arg1;
- (void)autocompleteControllerDidBegin:(id)arg1;
- (void)autocompleteViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)autocompleteViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (double)_t1_main_preferredAutocompleteViewHeight;
- (struct CGRect)_t1_main_autocompleteViewFrameForVisiblity:(_Bool)arg1;
- (void)_t1_main_initializeAutocompleteViewController;
- (void)_t1_main_cleanupAutocomplete;
- (void)_t1_main_adjustTextViewForAutocompleteWithDuration:(double)arg1;
- (void)_t1_main_updateAutocompleteVisibility:(_Bool)arg1;
- (_Bool)_t1_main_shouldShowAutocomplete;
- (void)_t1_main_updateAutocompleteController;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)_t1_notification_keyboardWillChangeFrame:(id)arg1;
- (void)_t1_notification_keyboardWillHide:(id)arg1;
- (void)_t1_notification_keyboardWillShow:(id)arg1;
- (void)_t1_main_adjustViewsWithKeyboardHeight:(double)arg1 duration:(double)arg2 willHide:(_Bool)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_t1_doubleTapGestureAction:(id)arg1;
- (void)_t1_panGestureRecognizerAction:(id)arg1;
- (void)_t1_notification_textInputCurrentInputModeDidChange:(id)arg1;
- (void)_t1_main_scrollToCursor;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)_t1_updateGeoPickerButtonPosition;
- (void)_t1_updateProgressCounter;
@property(readonly, copy, nonatomic) NSString *textForCharacterCount;
- (void)_t1_main_updateControlsForTextInput;
- (long long)remainingCountForWarningDisplayInProgressView:(id)arg1;
- (long long)remainingCountForProgressView:(id)arg1;
- (long long)currentCountForProgressView:(id)arg1;
- (void)_t1_updateGeoPicker;
- (void)newsCameraCaptureViewController:(id)arg1 didUpdateCurrentPlacesFetchResult:(id)arg2;
- (void)geoPickerRequestedDismiss;
- (void)geoPickerRequestedLocationRetry;
- (void)_t1_presentGeoPicker;
- (void)geoPickerRequestedPresentation;
- (void)geoPickerDidSelectPlaceWithPlace:(id)arg1 preciseLocation:(id)arg2;
- (void)_t1_notification_compositionDidSend:(id)arg1;
- (_Bool)twitterCameraLiveIsGuestBroadcastingCreationEnabled;
- (double)twitterCameraLiveGuestViewsTopMargin;
- (id)twitterCameraLiveViewControllerForProfileFollow:(id)arg1;
- (void)twitterCameraLiveDeleteBroadcast:(id)arg1;
- (void)twitterCameraLiveDidStopBroadcast:(id)arg1;
- (void)twitterCameraLiveDidStartBroadcast:(id)arg1;
- (id)twitterCameraLiveBlockedTwitterIDs;
- (void)twitterCameraLiveDidUnblockUser:(id)arg1;
- (void)twitterCameraLiveDidBlockUser:(id)arg1;
- (void)twitterCameraLiveShareScreenshot:(id)arg1 forBroadcast:(id)arg2;
- (void)_t1_presentActivityViewControllerWithShareURL:(id)arg1 image:(id)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_t1_shareURLWithTimecode:(double)arg1 withShareURL:(id)arg2;
- (void)twitterCameraLiveShareURLOfBroadcast:(id)arg1 atTimecode:(double)arg2 initialTimecode:(double)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)twitterCameraLiveComposeDirectMessageForBroadcast:(id)arg1 atTimecode:(double)arg2 initialTimecode:(double)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)twitterCameraLiveComposeTweetForBroadcast:(id)arg1 atTimecode:(double)arg2 initialTimecode:(double)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (_Bool)twitterCameraLiveCanShareBroadcast;
- (void)twitterCameraLiveBroadcastCapabilityChanged:(long long)arg1;
- (void)twitterCameraLiveDidDismissCopyrightViewController;
- (void)_t1_handleViewUpdatesFromAuthenticationError;
- (void)_t1_handlePeriscopeAuthenticationErrorIfNeeded;
- (void)twitterCameraLiveDidObserveAuthErrorWithInfo:(id)arg1;
- (id)twitterCameraLiveCopyrightViolationLearnMoreURL;
- (void)twitterCameraLiveDidDetectCopyrightViolation;
- (_Bool)twitterCameraLiveCopyrightViolationMatchingEnabled;
- (void)composeControllerDidEndSession:(id)arg1;
- (void)composeControllerDidBeginSession:(id)arg1;
- (void)_t1_main_rectifyViewControllerDidComplete:(_Bool)arg1;
- (void)_t1_main_presentRectifyViewControllerWithURL:(id)arg1;
- (void)_t1_main_handleAuthError:(id)arg1;
- (void)newsCameraCpatureViewController:(id)arg1 didChangeAudioScopeEnabled:(_Bool)arg2;
- (void)_t1_main_sendTweet;
- (void)_t1_action_goLiveButtonDidTouchUp:(id)arg1;
- (void)_t1_action_stopBroadcast;
- (void)_t1_action_stopBroadcastButtonDidTouchUpInside:(id)arg1 event:(id)arg2;
- (void)_t1_action_closeButtonDidTouchUpInside:(id)arg1;
- (void)_t1_deleteAndDismiss:(id)arg1;
- (void)_t1_dismiss;
- (void)_t1_dismissEditor;
- (void)_t1_createComposition;
- (_Bool)tfn_prefersNavigationBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_t1_transitionFinalStopButton;
- (void)_t1_transitionInitialStopButton;
- (void)_t1_updateStopButton;
- (_Bool)_t1_didGoLive;
- (void)_t1_updateForLiveState;
- (void)_t1_stopLive;
- (void)_t1_goLive;
- (_Bool)_t1_isLive;
- (void)_t1_main_setHideCameraControls:(_Bool)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)tfn_viewControllerWillSwapWithTransitionCoordinator:(id)arg1;
- (void)_t1_main_createDoubleTapGestureRecognizer;
- (void)updateViewConstraints;
- (void)_t1_createViews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewControllerDidDismissAnimated:(_Bool)arg1;
- (void)viewControllerDidPresentAnimated:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

