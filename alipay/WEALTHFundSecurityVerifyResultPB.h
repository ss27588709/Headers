//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString, WEALTHPasswordTokenCreatorPB;

@interface WEALTHFundSecurityVerifyResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) PBMapStringString *extraInfo; // @dynamic extraInfo;
@property(retain, nonatomic) NSString *followAction; // @dynamic followAction;
@property(retain, nonatomic) NSString *formToken; // @dynamic formToken;
@property(readonly) _Bool hasExtraInfo; // @dynamic hasExtraInfo;
@property(readonly) _Bool hasFollowAction; // @dynamic hasFollowAction;
@property(readonly) _Bool hasFormToken; // @dynamic hasFormToken;
@property(readonly) _Bool hasPasswordTokenCreator; // @dynamic hasPasswordTokenCreator;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultDesc; // @dynamic hasResultDesc;
@property(readonly) _Bool hasResultView; // @dynamic hasResultView;
@property(readonly) _Bool hasSecurityId; // @dynamic hasSecurityId;
@property(readonly) _Bool hasSecurityVerifyId; // @dynamic hasSecurityVerifyId;
@property(readonly) _Bool hasShowType; // @dynamic hasShowType;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) WEALTHPasswordTokenCreatorPB *passwordTokenCreator; // @dynamic passwordTokenCreator;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultDesc; // @dynamic resultDesc;
@property(retain, nonatomic) NSString *resultView; // @dynamic resultView;
@property(retain, nonatomic) NSString *securityId; // @dynamic securityId;
@property(retain, nonatomic) NSString *securityVerifyId; // @dynamic securityVerifyId;
@property(nonatomic) int showType; // @dynamic showType;
@property(nonatomic) _Bool success; // @dynamic success;

@end
