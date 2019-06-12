//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

#import <T1Twitter/TFNTwitterCompositionUpdateStatusDependency-Protocol.h>

@class NSArray, NSString, TFNTwitterCompositionUploadContext, TFNTwitterStatus;

@interface TFNTwitterCompositionUpdateAltTextsForStatusOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusDependency>
{
    TFNTwitterStatus *_status;
    NSArray *_attachments;
    TFNTwitterCompositionUploadContext *_context;
}

@property(readonly, nonatomic) TFNTwitterCompositionUploadContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain) TFNTwitterStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)_tfn_main_run;
- (void)run;
- (void)dealloc;
- (id)initWithAttachments:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

