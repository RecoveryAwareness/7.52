//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, T1OnboardingSubtaskController, TFNOnboardingNavigationLink, TFNTwitterAccount, UIViewController;
@protocol TFNNavigationStack, TFNOnboardingSubtaskDataProvider;

@protocol T1OnboardingSubtaskControllerDelegate
- (void)logAction:(NSString *)arg1 forSubtaskController:(T1OnboardingSubtaskController *)arg2 section:(NSString *)arg3 component:(NSString *)arg4 element:(NSString *)arg5 scribeItemEntries:(NSDictionary *)arg6;
- (void)subtaskController:(T1OnboardingSubtaskController *)arg1 registerEndOfFlowAction:(void (^)(TFNTwitterAccount *))arg2;
- (void)subtaskController:(T1OnboardingSubtaskController *)arg1 setFlowStatus:(long long)arg2;
- (void)subtaskController:(T1OnboardingSubtaskController *)arg1 setStateValue:(id)arg2 forKey:(NSString *)arg3;
- (id)subtaskController:(T1OnboardingSubtaskController *)arg1 stateValueForKey:(NSString *)arg2;
- (id <TFNOnboardingSubtaskDataProvider>)subtaskDataProviderForSubtaskController:(T1OnboardingSubtaskController *)arg1;
- (void)viewCurrentAccountForSubtaskController:(T1OnboardingSubtaskController *)arg1;
- (void)subtaskController:(T1OnboardingSubtaskController *)arg1 didChangeCurrentAccount:(TFNTwitterAccount *)arg2;
- (TFNTwitterAccount *)currentAccountForSubtaskController:(T1OnboardingSubtaskController *)arg1;
- (void)subtaskController:(T1OnboardingSubtaskController *)arg1 didActivateNavigationLink:(TFNOnboardingNavigationLink *)arg2;
- (void)subtaskController:(T1OnboardingSubtaskController *)arg1 waitWithMessage:(NSString *)arg2;
- (UIViewController *)subtaskControllerWillPresentOverCurrentViewController:(T1OnboardingSubtaskController *)arg1;
- (UIViewController<TFNNavigationStack> *)subtaskController:(T1OnboardingSubtaskController *)arg1 pushViewController:(UIViewController *)arg2 withPresentationType:(long long)arg3 completion:(void (^)(void))arg4;
@end

