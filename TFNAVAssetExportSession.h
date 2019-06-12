//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetExportSession, NSURL;

@interface TFNAVAssetExportSession : NSObject
{
    AVAsset *_asset;
    double _progress;
    AVAssetExportSession *_currentSession;
    _Bool _shouldTranscodeWithCustomizations;
    _Bool _disableVideoComposition;
    NSURL *_outputURL;
    double _maximumOutputBitrate;
    double _timeScale;
    long long _exportMode;
    long long _exportType;
    double _progressUpdateInterval;
    CDUnknownBlockType _progressBlock;
    CDStruct_e83c9415 _timeRange;
}

+ (id)exportQueue;
@property(nonatomic) _Bool disableVideoComposition; // @synthesize disableVideoComposition=_disableVideoComposition;
@property(nonatomic) _Bool shouldTranscodeWithCustomizations; // @synthesize shouldTranscodeWithCustomizations=_shouldTranscodeWithCustomizations;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) double progressUpdateInterval; // @synthesize progressUpdateInterval=_progressUpdateInterval;
@property(nonatomic) long long exportType; // @synthesize exportType=_exportType;
@property(nonatomic) long long exportMode; // @synthesize exportMode=_exportMode;
@property(nonatomic) double timeScale; // @synthesize timeScale=_timeScale;
@property(nonatomic) double maximumOutputBitrate; // @synthesize maximumOutputBitrate=_maximumOutputBitrate;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
- (void).cxx_destruct;
- (void)_updateProgressOfSession:(id)arg1;
- (void)_checkExportSession:(id)arg1;
- (void)_exportSessionWithMultipass:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_createExportSessionWithAsset:(id)arg1 multipass:(_Bool)arg2;
- (id)_fileType;
- (id)_presetName;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelExport;
- (id)_tempPath;
- (id)initWithAsset:(id)arg1 outputURL:(id)arg2;

@end

