//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface GXDataManager : NSObject
{
    NSString *appId_;
    NSString *appKey_;
    NSString *appSecret_;
    NSString *clientId_;
    NSString *loginToken_;
    NSString *registerId_;
    NSString *checkCode_;
    NSData *gtAESSocketKey_;
    unsigned int packetId_;
    int lastServerPacketId_;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeGXSdkUserWithEnhancementForKey:(id)arg1 inAppId:(id)arg2;
- (void)clearSdkUserDataForKeychain;
- (void)removeGXDefaultLocalAddress;
- (void)removeGXDefaultCheckCode;
- (void)removeGXDefaultRegisterId;
- (void)removeGXDefaultClientId;
- (void)removeGXDefaultLoginToken;
- (void)clearSdkMemoryObject;
- (void)saveGXDefaultLocalAddress_undecrypt:(id)arg1;
- (void)saveGXDefaultLocalAddress:(id)arg1;
- (void)saveGXDefaultCheckCode:(id)arg1;
- (void)saveGXDefaultRegisterId:(id)arg1;
- (void)saveGXDefaultClientId:(id)arg1;
- (void)saveGXDefaultLoginToken:(id)arg1;
- (id)getGxDefaultLocalAddress_undecrypt_old;
- (id)getGxDefaultCheckCode_old;
- (id)getGXDefaultRegisterId_old;
- (id)getGXDefaultClientId_old;
- (id)getGXDefaultLoginToken_old;
- (id)getGxDefaultLocalAddress_undecrypt;
- (id)getGxDefaultLocalAddress;
- (id)getGxDefaultCheckCode_Original;
- (id)getGxDefaultCheckCode;
- (id)getGXDefaultRegisterId_Original;
- (id)getGXDefaultRegisterId;
- (id)getGXDefaultClientId_Original;
- (id)getGXDefaultClientIdForCusAppId:(id)arg1;
- (id)getGXDefaultClientId;
- (id)getGXDefaultLoginToken_Original;
- (id)getGXDefaultLoginToken;
- (id)getGXAppSecret;
- (id)getGXAppKey;
- (id)getGXAppId;
- (void)dealloc;
- (void)initWithAppId:(id)arg1 andAppKey:(id)arg2 andAppSecret:(id)arg3;
- (int)getLastServerPacketId;
- (void)setLastServerPacketId:(int)arg1;
- (id)getPacketNumberId;
- (id)getAESSocketKey;
- (id)getAESSocketKeyByResetId:(_Bool)arg1;
- (id)getAESSocketInitKey;

@end
