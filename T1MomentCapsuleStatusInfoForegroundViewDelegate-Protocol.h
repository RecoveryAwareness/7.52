//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL, T1CardView, T1CardViewEvent, T1MomentCapsuleStatusInfoForegroundView, TFNTwitterMomentCapsule, TFNTwitterStatus, TFSTwitterUserReference, UIView;

@protocol T1MomentCapsuleStatusInfoForegroundViewDelegate
- (void)statusInfoForegroundViewDidTapDesignatorBadge:(UIView *)arg1;
- (void)statusInfoForegroundViewDidTapCTA;
- (void)statusInfoForegroundViewDidTapConversationContext:(long long)arg1 sender:(UIView *)arg2;
- (void)statusInfoForegroundView:(T1MomentCapsuleStatusInfoForegroundView *)arg1 didTapMomentCapsule:(TFNTwitterMomentCapsule *)arg2 sender:(UIView *)arg3;
- (void)statusInfoForegroundView:(T1MomentCapsuleStatusInfoForegroundView *)arg1 cardView:(T1CardView *)arg2 didFireViewEvent:(T1CardViewEvent *)arg3;
- (void)statusInfoForegroundViewDidTapURL:(NSURL *)arg1;
- (void)statusInfoForegroundViewDidTapMentionWithUserReference:(TFSTwitterUserReference *)arg1 fromView:(UIView *)arg2 frame:(struct CGRect)arg3;
- (void)statusInfoForegroundViewDidTapStockSymbol:(NSString *)arg1;
- (void)statusInfoForegroundViewDidTapHashtag:(NSString *)arg1;
- (void)statusInfoForegroundViewDidTapMore:(UIView *)arg1;
- (void)statusInfoForegroundViewDidTapRetweet:(UIView *)arg1 completion:(void (^)(void))arg2;
- (void)statusInfoForegroundView:(T1MomentCapsuleStatusInfoForegroundView *)arg1 didTapQuotedStatus:(TFNTwitterStatus *)arg2 sender:(UIView *)arg3;
- (void)statusInfoForegroundViewDidTapPeriscopeSummaryView;
- (void)statusInfoForegroundView:(T1MomentCapsuleStatusInfoForegroundView *)arg1 didTapSummaryLink:(NSURL *)arg2;
- (void)statusInfoForegroundViewDidTapAuthor:(T1MomentCapsuleStatusInfoForegroundView *)arg1;
@end

