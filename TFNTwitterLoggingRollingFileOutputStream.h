//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterLoggingService/TLSRollingFileOutputStream.h>

#import <T1Twitter/TDTBugReportAttachmentProvider-Protocol.h>

@class NSString;

@interface TFNTwitterLoggingRollingFileOutputStream : TLSRollingFileOutputStream <TDTBugReportAttachmentProvider>
{
}

- (long long)tls_shouldFilterLevel:(unsigned long long)arg1 channel:(id)arg2 contextObject:(id)arg3;
- (id)attachmentsWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

