//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, TFNDatabaseConnection, TFNTwitterAccount, TFSLegacyModelSupport, TFSModelContext;
@protocol OS_dispatch_queue;

@interface TFNTwitterAccountModel : NSObject
{
    NSMapTable *_usersByID;
    NSMapTable *_usersByUsername;
    NSMapTable *_canonicalUsersByID;
    NSMapTable *_canonicalUsersByUsername;
    NSMapTable *_canonicalStatusesByID;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_lookupQueue;
    TFSLegacyModelSupport *_legacyModelSupport;
    _Bool _cs2StatusEnabled;
    NSString *_databaseFileFullPath;
    TFSModelContext *_modelContext;
    NSString *_databaseInstanceName;
    NSString *_databaseFileName;
    TFNTwitterAccount *_account;
    TFNDatabaseConnection *_backgroundReadWriteConnection;
}

+ (id)_currentBundle;
+ (void)_setUpDatabaseInfo;
+ (id)_bundledDatabaseFileName;
+ (id)_bundledDatabaseDigest;
+ (long long)_bundledDatabaseVersion;
+ (id)_sharedBackgroundThread;
+ (id)databaseFullVersion;
+ (id)databaseFileFullPathWithInstanceName:(id)arg1;
+ (id)defaultDatabaseFileName;
+ (id)SQLParameterStringWithCount:(long long)arg1;
+ (void)setCS2UserEnabled:(_Bool)arg1;
+ (void)_closeWriteConnection:(id)arg1;
@property(retain, nonatomic) TFNDatabaseConnection *backgroundReadWriteConnection; // @synthesize backgroundReadWriteConnection=_backgroundReadWriteConnection;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, copy, nonatomic) NSString *databaseFileName; // @synthesize databaseFileName=_databaseFileName;
@property(readonly, copy, nonatomic) NSString *databaseInstanceName; // @synthesize databaseInstanceName=_databaseInstanceName;
@property(nonatomic, getter=isCS2StatusEnabled, setter=setCS2StatusEnabled:) _Bool cs2StatusEnabled; // @synthesize cs2StatusEnabled=_cs2StatusEnabled;
@property(readonly, nonatomic) TFSModelContext *modelContext; // @synthesize modelContext=_modelContext;
@property(readonly, copy, nonatomic) NSString *databaseFileFullPath; // @synthesize databaseFileFullPath=_databaseFileFullPath;
- (void).cxx_destruct;
- (void)_handleDatabaseErrorForEmployeeBuild:(id)arg1;
- (void)handleDatabaseError:(id)arg1;
- (void)_prepareStatuses:(id)arg1;
- (id)_newConnection;
- (void)_openBackgroundReadWriteConnection;
- (_Bool)_insertUser:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)writeUsersIntoShadowTable:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)writeStatusesIntoShadowTable:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (void)moveStatusesAndUsersToProductionTablesForTests;
- (void)_moveToProduction:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_usersForIDs:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (void)lookUpNonDefinitiveUsersForIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)lookUpUsersForIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_userForUsername:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (void)lookUpUserForUsername:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_userForID:(long long)arg1 transaction:(id)arg2 error:(id *)arg3;
- (void)lookUpUserForID:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_tfn_userLookupAndFailingUserIDsForPlistDictionaries:(id)arg1 userCache:(struct NSDictionary *)arg2;
- (_Bool)_loadAllCardUsersInStatuses:(id)arg1 userCache:(id)arg2 legacyModelSupport:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
- (_Bool)loadAllCardUsersInStatuses:(id)arg1 userCache:(id)arg2 legacyModelSupport:(id)arg3 error:(id *)arg4;
- (id)_statusWithResultSet:(id)arg1 userCache:(id)arg2;
- (id)_statusesUsingUserTableForIDs:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)_statusesUsingCS2ForIDs:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)_statusesForIDs:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)_hydrateAdditionalTweetReferences:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)_hydrateAllStatuses:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (void)lookUpNonDefinitiveStatusesForIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)lookUpStatusesForIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)lookUpStatusForID:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_bulkInsert:(id)arg1 type:(int)arg2 writeUsersToDatabase:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)private_usersReferencedByStatuses:(id)arg1;
- (void)bulkInsertPaginatedResultsUsers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bulkInsertUsers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bulkInsertUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bulkInsertRichTimelineResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bulkInsertStatuses:(id)arg1 users:(id)arg2 dictionariesCompletion:(CDUnknownBlockType)arg3;
- (void)bulkInsertStatuses:(id)arg1 users:(id)arg2 writeUsersToDatabase:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)bulkInsertStatuses:(id)arg1 users:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)bulkInsertStatuses:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bulkInsertStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_transactionWithConnection:(id)arg1 transactionBlock:(CDUnknownBlockType)arg2;
- (void)asyncWriteTransactionWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncWriteTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)_writeTransactionWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_readTransactionAsyncWithBlock:(CDUnknownBlockType)arg1;
- (void)deleteStatus:(id)arg1;
- (void)removeUserFromCache:(id)arg1;
- (void)removeStatusFromCacheWithStatusID:(long long)arg1;
- (id)definitiveLists:(id)arg1;
- (id)_definitiveStatuses:(id)arg1 inTopLevel:(_Bool)arg2 cs2Transaction:(id)arg3;
- (id)_definitiveStatuses:(id)arg1 cs2Transaction:(id)arg2;
- (id)definitiveStatuses:(id)arg1;
- (id)_definitiveUsers:(id)arg1 cs2Transaction:(id)arg2;
- (id)definitiveUsers:(id)arg1;
- (id)definitiveTwitterObjects:(id)arg1;
- (id)_definitiveCarousel:(id)arg1 cs2Transaction:(id)arg2;
- (id)_definitiveList:(id)arg1 cs2Transaction:(id)arg2;
- (id)definitiveList:(id)arg1;
- (id)_definitiveStatus:(id)arg1 inTopLevel:(_Bool)arg2 cs2Transaction:(id)arg3;
- (id)_definitiveStatus:(id)arg1 cs2Transaction:(id)arg2;
- (id)definitiveStatus:(id)arg1;
- (id)_definitiveTimelineChunk:(id)arg1 cs2Transaction:(id)arg2;
- (id)definitiveTimelineChunk:(id)arg1;
- (void)_updateUserCacheIndicesWithUser:(id)arg1;
- (void)registerDirectMessageUser:(id)arg1;
- (id)_definitiveUser:(id)arg1 cs2Transaction:(id)arg2;
- (id)definitiveUser:(id)arg1;
- (void)_updateLegacySuggestsModuleFields:(id)arg1 withModule:(id)arg2;
- (id)_definitiveTwitterObject:(id)arg1 cs2Transaction:(id)arg2;
- (id)allStatusesWithCachedCanonicalStatuses;
- (id)_cachedUserWithCanonicalUser:(id)arg1;
- (id)_cachedCanonicalUserForUsername:(id)arg1;
- (id)_cachedCanonicalUserForID:(long long)arg1;
- (id)_cachedUserForUsername:(id)arg1;
- (id)_cachedUserForID:(long long)arg1;
- (id)deprecatedCachedStatusForID:(long long)arg1;
- (void)waitUntilAllOperationsAreFinished;
@property(readonly, nonatomic, getter=isCS2UserEnabled) _Bool cs2UserEnabled;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 databaseFileFullPath:(id)arg2 modelContext:(id)arg3;

@end

