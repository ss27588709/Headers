//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSDate, NSString;

@interface WBTimelineTimestampInfo : WBModelObject
{
    double disableTime;
    unsigned long long timestampType;
    NSString *displayText;
    NSDate *_updateTime;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(retain, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText;
@property(nonatomic) unsigned long long timestampType; // @synthesize timestampType;
@property(nonatomic) double disableTime; // @synthesize disableTime;
- (void).cxx_destruct;
- (id)dictionaryWithValues;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

@end

