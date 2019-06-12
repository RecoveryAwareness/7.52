//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, TFNTwitterAccount, TFNTwitterMediaUploadConfiguration, TNUTransactionMetrics;
@protocol TFNTwitterMediaAssetUploaderDelegate, TNUNetworkQualityProvider;

@interface TFNTwitterMediaAssetsUploader : NSObject
{
    NSMutableSet *_uploadSessions;
    long long _uploadPolicy;
    unsigned long long _currentAssetIndexForSequentialUpload;
    unsigned long long _successCount;
    unsigned long long _failureCount;
    unsigned long long _cancelCount;
    TFNTwitterMediaUploadConfiguration *_configuration;
    TNUTransactionMetrics *_networkTransactionMetrics;
    TFNTwitterAccount *_account;
    NSArray *_assets;
    long long _source;
    unsigned long long _sourceType;
    double _startTime;
    double _endTime;
    id <TNUNetworkQualityProvider> _networkQualityProvider;
    id <TFNTwitterMediaAssetUploaderDelegate> _delegate;
}

@property(nonatomic) __weak id <TFNTwitterMediaAssetUploaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <TNUNetworkQualityProvider> networkQualityProvider; // @synthesize networkQualityProvider=_networkQualityProvider;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_scribeUploaderResults;
- (void)_incrementUploadResultsCount:(id)arg1;
- (void)_updateUploadPolicy;
- (void)_uploadProgressDidUpdate:(id)arg1;
- (_Bool)_uploadNextAsset;
- (_Bool)_uploadAsset:(id)arg1;
- (void)_uploaderDidComplete;
- (void)_uploadDidComplete:(id)arg1;
- (void)cancel;
- (_Bool)start;
- (id)initWithAssetsArray:(id)arg1 account:(id)arg2 configuration:(id)arg3 networkTransactionMetrics:(id)arg4;
- (id)init;

@end

