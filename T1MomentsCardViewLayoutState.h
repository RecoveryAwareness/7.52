//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewLayoutState.h>

@interface T1MomentsCardViewLayoutState : T1CardViewLayoutState
{
    _Bool _showsBlockedState;
    struct CGRect _momentViewFrame;
    struct CGRect _errorViewFrame;
    struct CGRect _errorLabelFrame;
}

@property(nonatomic) _Bool showsBlockedState; // @synthesize showsBlockedState=_showsBlockedState;
@property(nonatomic) struct CGRect errorLabelFrame; // @synthesize errorLabelFrame=_errorLabelFrame;
@property(nonatomic) struct CGRect errorViewFrame; // @synthesize errorViewFrame=_errorViewFrame;
@property(nonatomic) struct CGRect momentViewFrame; // @synthesize momentViewFrame=_momentViewFrame;
- (_Bool)isLayoutStateValidForCardContext:(id)arg1;

@end

