//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class TFNDirectMessageTypingIndicatorController;
@protocol TFNDirectMessageUser;

@protocol TFNDirectMessageTypingIndicatorControllerDelegate
- (void)typingIndicatorControllerConversationDidUpdate:(TFNDirectMessageTypingIndicatorController *)arg1;
- (void)typingIndicatorController:(TFNDirectMessageTypingIndicatorController *)arg1 userDidStopTyping:(id <TFNDirectMessageUser>)arg2 didReceiveMessage:(_Bool)arg3;
- (void)typingIndicatorController:(TFNDirectMessageTypingIndicatorController *)arg1 userDidStartTyping:(id <TFNDirectMessageUser>)arg2;
@end

