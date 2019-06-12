//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImageView, UILabel, UIView;

@interface T1PeriscopePillView : UIControl
{
    _Bool _isThreeSixtyVideo;
    unsigned long long _type;
    NSString *_viewerCount;
    UIView *_badgeView;
    UIView *_detailBadgeView;
    UIImageView *_detailBadgeImageView;
    UILabel *_label;
    UILabel *_detailBadgeViewLabel;
}

@property(retain, nonatomic) UILabel *detailBadgeViewLabel; // @synthesize detailBadgeViewLabel=_detailBadgeViewLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *detailBadgeImageView; // @synthesize detailBadgeImageView=_detailBadgeImageView;
@property(retain, nonatomic) UIView *detailBadgeView; // @synthesize detailBadgeView=_detailBadgeView;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) _Bool isThreeSixtyVideo; // @synthesize isThreeSixtyVideo=_isThreeSixtyVideo;
@property(copy, nonatomic) NSString *viewerCount; // @synthesize viewerCount=_viewerCount;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_t1_updateBadgeComponentsBackgroundColors;
- (void)_t1_appendThreeSixtyTextIfNeeded;
- (_Bool)_t1_willShowViewerIcon;
- (_Bool)_t1_willShowDetailBadgeView;
- (void)setCurrentTimeInterval:(double)arg1;
- (void)setType:(unsigned long long)arg1 viewerCount:(id)arg2 isThreeSixtyVideo:(_Bool)arg3;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

