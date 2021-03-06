//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FriendDataManager, NSArray, NSDictionary, NSError;

@protocol FriendDataManagerDelegate <NSObject>

@optional
- (void)friendDataManager:(FriendDataManager *)arg1 finishFriendProfileResult:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)friendDataManager:(FriendDataManager *)arg1 gotFollowersCount:(long long)arg2 followingCount:(long long)arg3 newFriendCount:(long long)arg4 pgcLikeCount:(long long)arg5 error:(NSError *)arg6;
- (void)friendDataManager:(FriendDataManager *)arg1 finishActionType:(int)arg2 error:(NSError *)arg3 result:(NSDictionary *)arg4;
- (void)friendDataManager:(FriendDataManager *)arg1 finishGotListWithType:(int)arg2 error:(NSError *)arg3 result:(NSArray *)arg4 totalNumber:(unsigned long long)arg5 anonymousNumber:(unsigned long long)arg6 hasMore:(_Bool)arg7 offset:(int)arg8;
@end

