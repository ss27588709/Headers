//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MBKTimeDayModel : NSObject
{
    NSString *_text;
    long long _day;
    NSArray *_hourArray;
}

@property(retain, nonatomic) NSArray *hourArray; // @synthesize hourArray=_hourArray;
@property(nonatomic) long long day; // @synthesize day=_day;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)filterWithLatestTime:(CDStruct_912cb5d2)arg1;
- (void)filterWithEarlistTime:(CDStruct_912cb5d2)arg1;
- (void)createCompleteHourAndMinuteIndexWithInterval:(long long)arg1;
- (id)minuteItemWithTime:(CDStruct_912cb5d2)arg1;
- (id)initWithDayIndex:(long long)arg1 interval:(long long)arg2 earlistTime:(CDStruct_912cb5d2)arg3 latestTime:(CDStruct_912cb5d2)arg4;

@end
