//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, TTFShareData, TTFTaskInfo;

@interface TTFclient_v1_treasure_init_response : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool enableTask; // @dynamic enableTask;
@property(nonatomic) int errNo; // @dynamic errNo;
@property(copy, nonatomic) NSString *errTips; // @dynamic errTips;
@property(nonatomic) _Bool hasChest; // @dynamic hasChest;
@property(nonatomic) _Bool hasShareData; // @dynamic hasShareData;
@property(nonatomic) _Bool hasTaskInitInfo; // @dynamic hasTaskInitInfo;
@property(retain, nonatomic) TTFShareData *shareData; // @dynamic shareData;
@property(retain, nonatomic) TTFTaskInfo *taskInitInfo; // @dynamic taskInitInfo;

@end

