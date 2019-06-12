//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1LiveEventRemindMeViewModel, TFNTwitterAccount, TFNTwitterLiveEvent, TFNTwitterLiveEventCarouselEntry, TFNTwitterLiveEventSlate, TFNTwitterStatus;

@interface T1LiveEventHeaderCarouselEntryViewModel : NSObject
{
    TFNTwitterAccount *_account;
    TFNTwitterLiveEvent *_liveEvent;
    TFNTwitterLiveEventCarouselEntry *_carouselEntry;
    TFNTwitterStatus *_status;
    TFNTwitterLiveEventSlate *_slate;
    T1LiveEventRemindMeViewModel *_remindMeViewModel;
}

@property(readonly, nonatomic) T1LiveEventRemindMeViewModel *remindMeViewModel; // @synthesize remindMeViewModel=_remindMeViewModel;
@property(readonly, nonatomic) TFNTwitterLiveEventSlate *slate; // @synthesize slate=_slate;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) TFNTwitterLiveEventCarouselEntry *carouselEntry; // @synthesize carouselEntry=_carouselEntry;
@property(retain, nonatomic) TFNTwitterLiveEvent *liveEvent; // @synthesize liveEvent=_liveEvent;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)_t1_slateFromCarouselEntry:(id)arg1;
- (_Bool)isEqualToCarouselEntryViewModel:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLiveEvent:(id)arg1 carouselEntry:(id)arg2 status:(id)arg3 account:(id)arg4;
- (id)init;
- (id)mediaViewModel;

@end

