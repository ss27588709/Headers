//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AMPDataGroupUtility : NSObject
{
}

+ (void)saveGroupUserDefaultName:(id)arg1;
+ (void)sortJoinGroupList:(id)arg1;
+ (id)cachedGroupInfo:(id)arg1;
+ (id)localGroupInfo:(id)arg1;
+ (void)cacheGroupInfos:(id)arg1;
+ (void)removeCacheUsersFromGroup:(id)arg1;
+ (void)removeCacheUser:(id)arg1 groupid:(id)arg2;
+ (id)cachedGroupUser:(id)arg1 userId:(id)arg2;
+ (id)localGroupUser:(id)arg1 userId:(id)arg2;
+ (void)cacheUser:(id)arg1 groupId:(id)arg2;
+ (id)proccessGroupUserObject:(id)arg1;
+ (id)proccessGroupUserObjectList:(id)arg1;
+ (id)transferGroupInfoObject:(id)arg1;
+ (id)transferGroupInfoObjectList:(id)arg1;

@end
