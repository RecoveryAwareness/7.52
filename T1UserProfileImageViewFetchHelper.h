//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ImageViewFetchHelper.h>

@class TFNTwitterUserDataSource;
@protocol T1UserViewModel, TFSTwitterCanonicalUser;

@interface T1UserProfileImageViewFetchHelper : T1ImageViewFetchHelper
{
    id <TFSTwitterCanonicalUser> _user;
    TFNTwitterUserDataSource *_userDataSource;
    id <T1UserViewModel> _userViewModel;
}

@property(retain, nonatomic) id <T1UserViewModel> userViewModel; // @synthesize userViewModel=_userViewModel;
@property(retain, nonatomic) TFNTwitterUserDataSource *userDataSource; // @synthesize userDataSource=_userDataSource;
@property(retain, nonatomic) id <TFSTwitterCanonicalUser> user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)_t1_userViewModelDidUpdate:(id)arg1;
- (void)_t1_userDataSourceDidUpdate:(id)arg1;
- (void)_t1_userDidUpdate:(id)arg1;
- (void)_t1_updateWithMediaEntity:(id)arg1;
- (void)_t1_clearAllUsers;

@end

