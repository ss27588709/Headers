//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SmobaUtils : NSObject
{
}

+ (void)reportEvent:(id)arg1 targetUin:(id)arg2 subSourceId:(long long)arg3;
+ (void)addSmobaFriend:(id)arg1 friendGameNick:(id)arg2 addFriendController:(id)arg3 rootController:(id)arg4;
+ (id)_verfyMessageKeyWithUin:(id)arg1;
+ (void)removeVerfyMessageWithUin:(id)arg1;
+ (id)verfyMessageWithUin:(id)arg1;
+ (void)storageVerfyMessage:(id)arg1 message:(id)arg2;
+ (id)displayNameWithNickName:(id)arg1 gameNickName:(id)arg2;

@end

