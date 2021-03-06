//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APDAOProxyRouterDelegate-Protocol.h"

@class APCustomStorage, APDAOProxyRouter, APSharedPreferences, NSMutableDictionary, NSString, NSTimer;
@protocol APSharedPreferencesRunMode;

@interface APDataCenter : NSObject <APDAOProxyRouterDelegate>
{
    APSharedPreferences<APSharedPreferencesRunMode> *_commonPreferences;
    APSharedPreferences<APSharedPreferencesRunMode> *_userPreferences;
    NSMutableDictionary *_userPreferencesMap;
    NSMutableDictionary *_daoContainerPreferences;
    APDAOProxyRouter *_userProxy;
    NSTimer *_dbHeartbeatTimer;
    APCustomStorage *_currentVersionStorage;
    NSString *_currentUserId;
}

+ (id)preferencesRootPath;
+ (id)libraryPath;
+ (id)documentsPath;
+ (id)defaultDataCenter;
@property(readonly) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
- (void).cxx_destruct;
- (id)userDatabaseProxy;
- (id)commonDatabaseProxy;
- (void)removeZeroReferencedDAOContainer:(id)arg1;
- (id)daoWithPath:(id)arg1 databasePath:(id)arg2 protocol:(id)arg3;
- (id)daoWithPath:(id)arg1 userDependent:(_Bool)arg2 protocol:(id)arg3;
- (id)configWithPath:(id)arg1 replaceContent:(id)arg2;
- (void)postHeartbeatNotification;
- (void)reset:(CDUnknownBlockType)arg1 after:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)doSwitchUser:(id)arg1 saveLastUser:(_Bool)arg2;
- (void)didUserReallyChange;
- (void)willUserReallyChange;
- (id)currentVersionStorage;
- (id)accessorForBusiness:(id)arg1;
- (id)preferencesForUser:(id)arg1;
- (void)setCurrentUserId:(id)arg1;
- (id)userPreferences;
- (id)commonPreferences;
- (void)loadPreferences;
- (void)dealloc;
- (id)init;
- (id)filePathWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

