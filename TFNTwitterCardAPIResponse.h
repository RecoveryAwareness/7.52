//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/TNLResponse.h>

@class TFNTwitterCardData;

@interface TFNTwitterCardAPIResponse : TNLResponse
{
    TFNTwitterCardData *_cardData;
}

+ (id)errorForResponseJSON:(id)arg1;
+ (id)cardDataForResponseData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) TFNTwitterCardData *cardData; // @synthesize cardData=_cardData;
- (void).cxx_destruct;
- (void)populateCardData;
- (void)prepare;

@end

