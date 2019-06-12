//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSString, UIImage, UIImageView, UIScrollView;
@protocol T1ZoomableImageViewZoomDelegate;

@interface T1ZoomableImageView : UIView <UIScrollViewDelegate>
{
    struct CGSize _detailImageDimensions;
    _Bool _hasPerformedLayout;
    id <T1ZoomableImageViewZoomDelegate> _zoomDelegate;
    UIImageView *_imageView;
    long long _displayMode;
    double _minimumZoomScale;
    double _maximumZoomScale;
    UIScrollView *_scrollView;
    double _initialZoomScale;
}

@property(nonatomic) double initialZoomScale; // @synthesize initialZoomScale=_initialZoomScale;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) double minimumZoomScale; // @synthesize minimumZoomScale=_minimumZoomScale;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <T1ZoomableImageViewZoomDelegate> zoomDelegate; // @synthesize zoomDelegate=_zoomDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)_updateZoomScales;
- (struct CGSize)_imageSize;
- (struct CGSize)_imageViewSize;
- (struct CGPoint)_originToCenterSize:(struct CGSize)arg1;
- (struct CGRect)_imageViewFrame;
- (void)layoutSubviews;
- (struct CGSize)_viewportSize;
- (struct CGPoint)_viewportOrigin;
- (void)_zoomAtPointInImageView:(struct CGPoint)arg1 scale:(double)arg2;
- (_Bool)_isScale:(double)arg1 equalToScale:(double)arg2;
- (void)toggleZoomAtPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double zoomScale;
- (struct CGRect)imageFrame;
- (void)notifyImageWasReplacedWithDetailImage;
- (void)notifyImageWasSetWithDetailImageDimensions:(struct CGSize)arg1;
@property(readonly, nonatomic) UIImage *image;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

