//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array;

@interface TTFLastAnswerInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long hasLifeNum; // @dynamic hasLifeNum;
@property(retain, nonatomic) GPBInt64Array *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(nonatomic) long long questionId; // @dynamic questionId;
@property(nonatomic) long long useLife; // @dynamic useLife;

@end
