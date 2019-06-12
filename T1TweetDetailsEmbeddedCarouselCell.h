//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

#import <T1Twitter/T1CardViewDelegate-Protocol.h>
#import <T1Twitter/T1StatusEmbeddedCarouselHost-Protocol.h>

@class NSString, T1TimelinesItemsCarouselViewController, T1TweetDetailsViewController, TFNTwitterAccount, TFNTwitterStatus;

@interface T1TweetDetailsEmbeddedCarouselCell : TFNTableViewCell <T1StatusEmbeddedCarouselHost, T1CardViewDelegate>
{
    TFNTwitterAccount *_account;
    TFNTwitterStatus *_outerStatus;
    T1TimelinesItemsCarouselViewController *_embeddedCarouselViewController;
    T1TweetDetailsViewController *_detailsViewController;
}

@property(nonatomic) __weak T1TweetDetailsViewController *detailsViewController; // @synthesize detailsViewController=_detailsViewController;
@property(retain, nonatomic) T1TimelinesItemsCarouselViewController *embeddedCarouselViewController; // @synthesize embeddedCarouselViewController=_embeddedCarouselViewController;
@property(retain, nonatomic) TFNTwitterStatus *outerStatus; // @synthesize outerStatus=_outerStatus;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)layoutMetricsForCardView:(id)arg1;
- (id)cardView:(id)arg1 didFireViewEvent:(id)arg2;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)timelinesItemsCarouselViewController:(id)arg1 didTapCellAtIndex:(unsigned long long)arg2;
- (id)layoutMetricsForCollectionViewLayout:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

