//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/PHPhotoLibraryChangeObserver-Protocol.h>
#import <T1Twitter/T1CameraContainerViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1FiltersViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1NativeCameraViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraCaptureViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1PhotoCachingImageManagerHelperDelegate-Protocol.h>
#import <T1Twitter/T1PhotoGalleryCollectionsViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1PhotoGalleryTitleViewDelegate-Protocol.h>
#import <T1Twitter/T1PhotoGalleryViewAssetCellDelegate-Protocol.h>
#import <T1Twitter/T1PhotoGalleryViewCellDelegate-Protocol.h>
#import <T1Twitter/T1VideoTrimmerViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerLayoutDelegate-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>
#import <T1Twitter/UICollectionViewDataSource-Protocol.h>
#import <T1Twitter/UICollectionViewDelegate-Protocol.h>
#import <T1Twitter/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSIndexPath, NSObject, NSPredicate, NSString, PHAssetCollection, PHFetchResult, T1PhotoCachingImageManagerHelper, TFNBarButtonItem, TFNScrollViewDelegateBroadcaster, TFNTooltip, TFNTwitterAccount, TFNTwitterCompositionAttachments, TFSTwitterScribeContext, UICollectionView, UICollectionViewCell;
@protocol T1PhotoGalleryViewControllerDelegate;

@interface T1PhotoGalleryViewController : TFNViewController <PHPhotoLibraryChangeObserver, T1CameraContainerViewControllerDelegate, T1FiltersViewControllerDelegate, T1NewsCameraCaptureViewControllerDelegate, T1PhotoCachingImageManagerHelperDelegate, T1PhotoGalleryCollectionsViewControllerDelegate, T1PhotoGalleryTitleViewDelegate, T1PhotoGalleryViewAssetCellDelegate, T1PhotoGalleryViewCellDelegate, T1NativeCameraViewControllerDelegate, T1VideoTrimmerViewControllerDelegate, TFNTooltipDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, TFNModalSheetViewControllerLayoutDelegate, TFNModalSheetViewControllerDelegate>
{
    _Bool _authorized;
    _Bool _disablesCellOnSessionEnd;
    _Bool _disableLongPressToEdit;
    _Bool _livePhotoAttachmentEnabled;
    _Bool _photoCameraItemHidden;
    _Bool _videoCameraItemHidden;
    _Bool _newsCameraItemHidden;
    _Bool _newsCameraItemEnabled;
    _Bool _periscopeGoLiveItemHidden;
    _Bool _removeProfileBannerItemHidden;
    _Bool _removeProfileBannerEnabled;
    _Bool _useNewsCameraForAttachment;
    _Bool _useLayoutModeNumberOfColumns;
    _Bool _adding;
    TFNTwitterAccount *_account;
    id <T1PhotoGalleryViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    unsigned long long _sessionMode;
    long long _cameraPreferredDevicePosition;
    TFSTwitterScribeContext *_cameraScribeContext;
    PHAssetCollection *_assetCollection;
    unsigned long long _attachmentTypes;
    PHFetchResult *_fetchResult;
    NSPredicate *_fetchPredicate;
    T1PhotoCachingImageManagerHelper *_cachingImageManagerHelper;
    TFNScrollViewDelegateBroadcaster *_scrollViewEventBroadcaster;
    NSIndexPath *_cameraItemIndexPath;
    NSIndexPath *_photoCameraItemIndexPath;
    NSIndexPath *_videoCameraItemIndexPath;
    NSIndexPath *_newsCameraItemIndexPath;
    NSIndexPath *_periscopeGoLiveItemIndexPath;
    NSIndexPath *_removeProfileBannerItemIndexPath;
    unsigned long long _assetItemIndexOffset;
    unsigned long long _numberOfColumns;
    unsigned long long _cachedNumberOfColumns;
    double _cachedCollectionViewWidth;
    NSObject *_currentSession;
    TFNTwitterCompositionAttachments *_attachments;
    TFNBarButtonItem *_addBarButtonItem;
    TFNBarButtonItem *_cancelBarButtonItem;
    UICollectionViewCell *_trackingLongPressedCell;
    TFNTooltip *_periscopeGoLiveTooltip;
    struct CGSize _cachedItemSize;
    struct UIEdgeInsets _cachedSectionInset;
}

@property(retain, nonatomic) TFNTooltip *periscopeGoLiveTooltip; // @synthesize periscopeGoLiveTooltip=_periscopeGoLiveTooltip;
@property(retain, nonatomic) UICollectionViewCell *trackingLongPressedCell; // @synthesize trackingLongPressedCell=_trackingLongPressedCell;
@property(readonly, nonatomic) TFNBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property(readonly, nonatomic) TFNBarButtonItem *addBarButtonItem; // @synthesize addBarButtonItem=_addBarButtonItem;
@property(nonatomic, getter=isAdding) _Bool adding; // @synthesize adding=_adding;
@property(retain, nonatomic) TFNTwitterCompositionAttachments *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSObject *currentSession; // @synthesize currentSession=_currentSession;
@property(nonatomic) struct UIEdgeInsets cachedSectionInset; // @synthesize cachedSectionInset=_cachedSectionInset;
@property(nonatomic) struct CGSize cachedItemSize; // @synthesize cachedItemSize=_cachedItemSize;
@property(nonatomic) double cachedCollectionViewWidth; // @synthesize cachedCollectionViewWidth=_cachedCollectionViewWidth;
@property(nonatomic) unsigned long long cachedNumberOfColumns; // @synthesize cachedNumberOfColumns=_cachedNumberOfColumns;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) _Bool useLayoutModeNumberOfColumns; // @synthesize useLayoutModeNumberOfColumns=_useLayoutModeNumberOfColumns;
@property(nonatomic) unsigned long long assetItemIndexOffset; // @synthesize assetItemIndexOffset=_assetItemIndexOffset;
@property(retain, nonatomic) NSIndexPath *removeProfileBannerItemIndexPath; // @synthesize removeProfileBannerItemIndexPath=_removeProfileBannerItemIndexPath;
@property(retain, nonatomic) NSIndexPath *periscopeGoLiveItemIndexPath; // @synthesize periscopeGoLiveItemIndexPath=_periscopeGoLiveItemIndexPath;
@property(retain, nonatomic) NSIndexPath *newsCameraItemIndexPath; // @synthesize newsCameraItemIndexPath=_newsCameraItemIndexPath;
@property(retain, nonatomic) NSIndexPath *videoCameraItemIndexPath; // @synthesize videoCameraItemIndexPath=_videoCameraItemIndexPath;
@property(retain, nonatomic) NSIndexPath *photoCameraItemIndexPath; // @synthesize photoCameraItemIndexPath=_photoCameraItemIndexPath;
@property(retain, nonatomic) NSIndexPath *cameraItemIndexPath; // @synthesize cameraItemIndexPath=_cameraItemIndexPath;
@property(readonly, nonatomic) TFNScrollViewDelegateBroadcaster *scrollViewEventBroadcaster; // @synthesize scrollViewEventBroadcaster=_scrollViewEventBroadcaster;
@property(readonly, nonatomic) T1PhotoCachingImageManagerHelper *cachingImageManagerHelper; // @synthesize cachingImageManagerHelper=_cachingImageManagerHelper;
@property(retain, nonatomic) NSPredicate *fetchPredicate; // @synthesize fetchPredicate=_fetchPredicate;
@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(readonly, nonatomic) unsigned long long attachmentTypes; // @synthesize attachmentTypes=_attachmentTypes;
@property(retain, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) _Bool useNewsCameraForAttachment; // @synthesize useNewsCameraForAttachment=_useNewsCameraForAttachment;
@property(retain, nonatomic) TFSTwitterScribeContext *cameraScribeContext; // @synthesize cameraScribeContext=_cameraScribeContext;
@property(nonatomic) long long cameraPreferredDevicePosition; // @synthesize cameraPreferredDevicePosition=_cameraPreferredDevicePosition;
@property(nonatomic, getter=isRemoveProfileBannerEnabled) _Bool removeProfileBannerEnabled; // @synthesize removeProfileBannerEnabled=_removeProfileBannerEnabled;
@property(nonatomic, getter=isRemoveProfileBannerItemHidden) _Bool removeProfileBannerItemHidden; // @synthesize removeProfileBannerItemHidden=_removeProfileBannerItemHidden;
@property(nonatomic, getter=isPeriscopeGoLiveItemHidden) _Bool periscopeGoLiveItemHidden; // @synthesize periscopeGoLiveItemHidden=_periscopeGoLiveItemHidden;
@property(nonatomic, getter=isNewsCameraItemEnabled) _Bool newsCameraItemEnabled; // @synthesize newsCameraItemEnabled=_newsCameraItemEnabled;
@property(nonatomic, getter=isNewsCameraItemHidden) _Bool newsCameraItemHidden; // @synthesize newsCameraItemHidden=_newsCameraItemHidden;
@property(nonatomic, getter=isVideoCameraItemHidden) _Bool videoCameraItemHidden; // @synthesize videoCameraItemHidden=_videoCameraItemHidden;
@property(nonatomic, getter=isPhotoCameraItemHidden) _Bool photoCameraItemHidden; // @synthesize photoCameraItemHidden=_photoCameraItemHidden;
@property(nonatomic, getter=isLivePhotoAttachmentEnabled) _Bool livePhotoAttachmentEnabled; // @synthesize livePhotoAttachmentEnabled=_livePhotoAttachmentEnabled;
@property(nonatomic) _Bool disableLongPressToEdit; // @synthesize disableLongPressToEdit=_disableLongPressToEdit;
@property(nonatomic) _Bool disablesCellOnSessionEnd; // @synthesize disablesCellOnSessionEnd=_disablesCellOnSessionEnd;
@property(nonatomic) unsigned long long sessionMode; // @synthesize sessionMode=_sessionMode;
@property(nonatomic, getter=isAuthorized) _Bool authorized; // @synthesize authorized=_authorized;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <T1PhotoGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeElementForIndexPath:(id)arg1;
- (id)scribeComponentForIndexPath:(id)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)_dismissTooltipIfNeeded:(id)arg1;
- (void)tooltipDidTap:(id)arg1;
- (_Bool)tooltipShouldPresent:(id)arg1;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)modalSheetViewControllerDidDismiss:(id)arg1 fromGesture:(_Bool)arg2;
- (void)modalSheetViewController:(id)arg1 willTransitionToLayoutMode:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (id)_indexPathsInRect:(struct CGRect)arg1;
- (id)cachingImageManagerHelper:(id)arg1 assetsInRect:(struct CGRect)arg2;
- (_Bool)cachingImageManagerHelper:(id)arg1 shouldUpdateForRect:(struct CGRect)arg2 cachedRect:(struct CGRect)arg3;
- (id)_t1_indexPathForAssetIndex:(unsigned long long)arg1 inFetchResult:(id)arg2;
- (id)_indexPathsForAssetIndexSet:(id)arg1 inFetchResult:(id)arg2;
- (void)_photoLibraryDidChange:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)_dismissViewController:(id)arg1 afterAddingOrReplacingAttachment:(id)arg2 preferToEndSession:(_Bool)arg3;
- (void)nativeCameraViewControllerDidCancel:(id)arg1;
- (void)nativeCameraViewController:(id)arg1 didCaptureAttachment:(id)arg2;
- (void)cameraContainerViewControllerDidCancel:(id)arg1;
- (void)cameraContainerViewController:(id)arg1 didAttachVideoAsset:(id)arg2;
- (void)cameraContainerViewController:(id)arg1 didAttachPhotoAsset:(id)arg2;
- (void)newsCameraCaptureViewController:(id)arg1 dismissWithResult:(id)arg2;
- (void)videoTrimmerViewControllerDidCancel:(id)arg1;
- (void)videoTrimmerViewControllerDidFail:(id)arg1;
- (void)videoTrimmerViewController:(id)arg1 didTrimVideo:(id)arg2;
- (void)filtersViewControllerDidCancel:(id)arg1;
- (void)filtersViewController:(id)arg1 didEditImage:(id)arg2;
- (void)photoGalleryCollectionsViewControllerDidCancel:(id)arg1;
- (void)photoGalleryCollectionsViewController:(id)arg1 didSelectAssetCollection:(id)arg2;
- (void)photoGalleryViewAssetCellDidTapEditButton:(id)arg1;
- (void)_editAsset:(id)arg1;
- (void)photoGalleryViewCellDidLongPress:(id)arg1;
- (void)photoGalleryViewCellDidEndTrackingLongPressGesture:(id)arg1;
- (_Bool)photoGalleryViewCellShouldBeginTrackingLongPressGesture:(id)arg1;
- (void)photoGalleryTitleViewDidTap:(id)arg1;
- (unsigned long long)_assetIndexForIndexPath:(id)arg1;
- (id)_t1_assetForIndexPath:(id)arg1;
- (void)_canAddAsset:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldEnableCellForSession;
- (void)_updateAssetCell:(id)arg1 animated:(_Bool)arg2;
- (void)_updateButtonCellForRemoveProfileBanner:(id)arg1;
- (void)_updateButtonCellForGoLive:(id)arg1;
- (void)_updateButtonCellForNewsCamera:(id)arg1;
- (void)_updateButtonCellForVideo:(id)arg1;
- (void)_updateButtonCellForPhoto:(id)arg1;
- (void)_updateButtonCellForCamera:(id)arg1;
- (_Bool)_shouldHideAssetCellEditButton;
- (_Bool)_shouldShowButtonCellTitle;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_updateItemSizeAndSectionInsetForCollectionViewBounds:(struct CGRect)arg1 withLayout:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)_presentVideoEditingViewControllerWithAttachment:(id)arg1 isAddingAttachment:(_Bool)arg2;
- (void)_presentImageEditingViewControllerWithAttachment:(id)arg1 isAddingAttachment:(_Bool)arg2;
- (void)_presentEditingViewControllerWithAttachment:(id)arg1 isAddingAttachment:(_Bool)arg2;
- (_Bool)_shouldEndSessionAfterAddingAttachment:(id)arg1 animated:(_Bool)arg2 preferToEndSession:(_Bool)arg3;
- (_Bool)_shouldEndSessionAfterAddingOrReplacingAttachment:(id)arg1 animated:(_Bool)arg2 preferToEndSession:(_Bool)arg3;
- (void)_addAttachment:(id)arg1 animated:(_Bool)arg2 preferToEndSession:(_Bool)arg3;
- (void)_addMediaAsset:(id)arg1 shouldEditAsset:(_Bool)arg2;
- (void)_addAsset:(id)arg1 shouldEditAsset:(_Bool)arg2;
- (void)_presentModalViewControllerInFullScreen:(id)arg1;
- (void)_presentCollectionsViewController;
- (void)_presentNewsCameraViewControllerWithMode:(long long)arg1;
- (void)_presentCameraViewControllerWithMode:(long long)arg1;
- (void)_presentCameraViewControllerWithAuthorizationAndMode:(long long)arg1;
- (void)_updateCellAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)_updateForSelectionAnimated:(_Bool)arg1;
- (void)_didSelectAsset:(id)arg1;
- (void)_didSelectRemoveProfileBannerItem;
- (void)_didSelectPeriscopeGoLiveItem;
- (void)_didSelectNewsCameraItem;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateUserInteractionEnabled;
- (void)_updateForSession;
- (void)_endSession;
- (void)_didTapAdd:(id)arg1;
- (void)_cancelSessionOnEvent:(_Bool)arg1;
- (void)_cancel;
- (void)_didTapCancel:(id)arg1;
- (void)_updateScrollIndicatorInsets;
- (void)_updateContentInset;
- (void)layoutGuidesDidChange:(long long)arg1;
- (id)tfn_contentScrollView;
- (void)tfn_keyboardDismissModalAction;
- (_Bool)tfn_canKeyboardDismissModal;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)_presentperiscopeGoLiveTooltip;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)_allPhotosAssetCollection;
- (void)_updateFetchResult;
- (void)_updateNavigationBarItemsFullScreenPresentation:(_Bool)arg1;
- (void)_updateTitle;
- (void)_updateForAssetCollection;
- (void)_updateTargetSize;
- (_Bool)_shouldShowRemoveProfileBannerItem;
- (_Bool)_shouldShowPeriscopeGoLiveItem;
- (_Bool)_shouldShowNewsCameraItem;
- (_Bool)_shouldShowVideoCameraItem;
- (_Bool)_shouldShowPhotoCameraItem;
- (_Bool)_shouldShowCameraItem;
- (void)_updateIndexPaths;
- (void)_updateTitleView;
- (void)requestUpdatingAuthorizedWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool scrollsToTop;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
@property(readonly, nonatomic, getter=isSessionActive) _Bool sessionActive;
- (void)removeScrollViewDelegate:(id)arg1;
- (void)addScrollViewDelegate:(id)arg1;
- (void)cancelSession;
- (void)_updateForAttachments;
- (void)beginSessionWithAttachments:(id)arg1;
- (void)dealloc;
- (void)_updateFetchPredicate;
- (id)initWithAttachmentTypes:(unsigned long long)arg1 account:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

