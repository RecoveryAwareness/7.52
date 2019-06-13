//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

#import <T1Twitter/TFNTwitterMediaAssetPackedSegmentedUploadAppendOperationDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterMediaAssetPackedSegmentedUploadFinalizeOperationDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterMediaAssetPackedSegmentedUploadInitOperationDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterMediaAssetPackedSegmentedUploadStatusOperationDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterMediaAssetRenderOperationDelegate-Protocol.h>
#import <T1Twitter/TFSOperationDependencyResult-Protocol.h>

@class NSError, NSHashTable, NSOperationQueue, NSString, TFNTwitterMediaAssetPackedSegmentedUploadContext;
@protocol TFNTwitterMediaAssetPackedSegmentedUploadOperationDelegate;

@interface TFNTwitterMediaAssetPackedSegmentedUploadOperation : TFSDependentConcurrentOperation <TFNTwitterMediaAssetRenderOperationDelegate, TFNTwitterMediaAssetPackedSegmentedUploadInitOperationDelegate, TFNTwitterMediaAssetPackedSegmentedUploadAppendOperationDelegate, TFNTwitterMediaAssetPackedSegmentedUploadFinalizeOperationDelegate, TFNTwitterMediaAssetPackedSegmentedUploadStatusOperationDelegate, TFSOperationDependencyResult>
{
    unsigned long long _resultState;
    NSError *_error;
    id <TFNTwitterMediaAssetPackedSegmentedUploadOperationDelegate> _delegate;
    TFNTwitterMediaAssetPackedSegmentedUploadContext *_context;
    NSOperationQueue *_queue;
    NSHashTable *_weakOperationsToCancel;
}

@property(readonly, nonatomic) NSHashTable *weakOperationsToCancel; // @synthesize weakOperationsToCancel=_weakOperationsToCancel;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) TFNTwitterMediaAssetPackedSegmentedUploadContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <TFNTwitterMediaAssetPackedSegmentedUploadOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSError *resultError; // @synthesize resultError=_error;
@property unsigned long long resultState; // @synthesize resultState=_resultState;
- (void).cxx_destruct;
- (void)packedSegmentedUploadStatusOperation:(id)arg1 mediaID:(id)arg2 didCompleteWithExpiryDate:(id)arg3;
- (void)packedSegmentedUploadStatusOperation:(id)arg1 mediaID:(id)arg2 didProgress:(float)arg3;
- (void)packedSegmentedUploadFinalizeOperation:(id)arg1 mediaID:(id)arg2 didFinalizeWithExpiryDate:(id)arg3;
- (void)packedSegmentedUploadAppendOperation:(id)arg1 mediaID:(id)arg2 didProgress:(float)arg3;
- (void)_tfn_main_packedSegmentedUploadDidUpdateMediaID:(id)arg1 expiryDate:(id)arg2;
- (void)packedSegmentedUploadInitOperation:(id)arg1 didInitMediaID:(id)arg2 expiryDate:(id)arg3;
- (void)_tfn_main_packedSegmentedUploadDidProgress:(float)arg1;
- (void)mediaAssetRenderOperation:(id)arg1 didProgress:(float)arg2;
- (void)cancel;
- (id)_tfn_background_completeOperationOperation;
- (void)_tfn_background_updateResultStateWithOperations:(id)arg1;
- (id)_tfn_background_updateResultStateOperationWithDependencies:(id)arg1;
- (void)_tfn_main_run;
- (void)run;
- (id)initWithAccount:(id)arg1 identifier:(id)arg2 configuration:(id)arg3 asset:(id)arg4 uploadSource:(long long)arg5 networkQualityProvider:(id)arg6 networkTransactionMetrics:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

