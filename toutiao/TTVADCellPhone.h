//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, TTVADInfo;

@interface TTVADCellPhone : GPBMessage
{
}

+ (id)descriptor;
+ (id)phoneWithContentStruct:(id)arg1;

// Remaining properties
@property(nonatomic) int actionType; // @dynamic actionType;
@property(copy, nonatomic) NSString *alertText; // @dynamic alertText;
@property(retain, nonatomic) TTVADInfo *base; // @dynamic base;
@property(nonatomic) int dialActionType; // @dynamic dialActionType;
@property(nonatomic) _Bool hasBase; // @dynamic hasBase;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;

@end

