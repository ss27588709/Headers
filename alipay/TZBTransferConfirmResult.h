//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface TZBTransferConfirmResult : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *TransDate; // @dynamic TransDate;
@property(retain, nonatomic) NSString *amount; // @dynamic amount;
@property(retain, nonatomic) NSString *externalData; // @dynamic externalData;
@property(readonly) _Bool hasAmount; // @dynamic hasAmount;
@property(readonly) _Bool hasExternalData; // @dynamic hasExternalData;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultDesc; // @dynamic hasResultDesc;
@property(readonly) _Bool hasResultView; // @dynamic hasResultView;
@property(readonly) _Bool hasShowType; // @dynamic hasShowType;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(readonly) _Bool hasTitle; // @dynamic hasTitle;
@property(readonly) _Bool hasTransDate; // @dynamic hasTransDate;
@property(readonly) _Bool hasUuid; // @dynamic hasUuid;
@property(retain, nonatomic) NSArray *infoItemList; // @dynamic infoItemList;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultDesc; // @dynamic resultDesc;
@property(retain, nonatomic) NSString *resultView; // @dynamic resultView;
@property(nonatomic) int showType; // @dynamic showType;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

