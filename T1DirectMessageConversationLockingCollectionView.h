//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNCollectionView.h>

@interface T1DirectMessageConversationLockingCollectionView : TFNCollectionView
{
    _Bool _locked;
    _Bool _pinToBottom;
    struct CGPoint _contentOffsetLocked;
}

@property(nonatomic) struct CGPoint contentOffsetLocked; // @synthesize contentOffsetLocked=_contentOffsetLocked;
@property(nonatomic) _Bool pinToBottom; // @synthesize pinToBottom=_pinToBottom;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
- (void)_applyPinToBottom;
- (struct CGPoint)_bottomOffset;
@property(readonly, nonatomic) struct CGPoint bottomOffset;
@property(readonly, nonatomic, getter=isScrolledCloseToBottom) _Bool scrolledCloseToBottom;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

