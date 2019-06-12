//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1CustomerFeedbackCardPresenter-Protocol.h>
#import <T1Twitter/T1CustomerFeedbackCommentViewControllerDelegate-Protocol.h>

@class NSString;

@interface T1CustomerFeedbackCardPresenter : NSObject <T1CustomerFeedbackCommentViewControllerDelegate, T1CustomerFeedbackCardPresenter>
{
}

- (void)feedbackCommentViewControllerDidCancel:(id)arg1;
- (void)feedbackCommentViewController:(id)arg1 didSubmitComments:(id)arg2;
- (void)presentWebURL:(id)arg1 fromViewController:(id)arg2 account:(id)arg3;
- (void)presentFeedbackCommentComposeForAccount:(id)arg1 businessUser:(id)arg2 feedbackID:(id)arg3 score:(id)arg4 feedbackType:(unsigned long long)arg5;
- (void)presentTweetComposeForAccount:(id)arg1 businessUser:(id)arg2 dismissCompletion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

