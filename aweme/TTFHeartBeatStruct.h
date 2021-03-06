//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, TTFAnswerStruct, TTFCeremonyStruct, TTFCeremonyTeamStruct, TTFGeneralControlStruct, TTFQuestionStruct;

@interface TTFHeartBeatStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long activityId; // @dynamic activityId;
@property(retain, nonatomic) TTFAnswerStruct *answer; // @dynamic answer;
@property(retain, nonatomic) TTFCeremonyStruct *ceremonyContent; // @dynamic ceremonyContent;
@property(retain, nonatomic) TTFCeremonyTeamStruct *ceremonyTeam; // @dynamic ceremonyTeam;
@property(nonatomic) int currentActivityStatus; // @dynamic currentActivityStatus;
@property(nonatomic) long long currentQuestionId; // @dynamic currentQuestionId;
@property(nonatomic) long long currentUsers; // @dynamic currentUsers;
@property(retain, nonatomic) TTFGeneralControlStruct *generalControl; // @dynamic generalControl;
@property(nonatomic) _Bool hasAnswer; // @dynamic hasAnswer;
@property(nonatomic) _Bool hasCeremonyContent; // @dynamic hasCeremonyContent;
@property(nonatomic) _Bool hasCeremonyTeam; // @dynamic hasCeremonyTeam;
@property(nonatomic) _Bool hasGeneralControl; // @dynamic hasGeneralControl;
@property(nonatomic) _Bool hasQuestion; // @dynamic hasQuestion;
@property(retain, nonatomic) NSMutableArray *livingStreamURLArray; // @dynamic livingStreamURLArray;
@property(readonly, nonatomic) unsigned long long livingStreamURLArray_Count; // @dynamic livingStreamURLArray_Count;
@property(retain, nonatomic) TTFQuestionStruct *question; // @dynamic question;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;

@end

