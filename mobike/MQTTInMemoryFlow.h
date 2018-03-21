//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQTTFlow-Protocol.h"

@class NSData, NSDate, NSNumber, NSString;

@interface MQTTInMemoryFlow : NSObject <MQTTFlow>
{
    NSString *clientId;
    NSNumber *incomingFlag;
    NSNumber *retainedFlag;
    NSNumber *commandType;
    NSNumber *qosLevel;
    NSNumber *messageId;
    NSString *topic;
    NSData *data;
    NSDate *deadline;
}

@property(retain, nonatomic) NSDate *deadline; // @synthesize deadline;
@property(retain, nonatomic) NSData *data; // @synthesize data;
@property(retain, nonatomic) NSString *topic; // @synthesize topic;
@property(retain, nonatomic) NSNumber *messageId; // @synthesize messageId;
@property(retain, nonatomic) NSNumber *qosLevel; // @synthesize qosLevel;
@property(retain, nonatomic) NSNumber *commandType; // @synthesize commandType;
@property(retain, nonatomic) NSNumber *retainedFlag; // @synthesize retainedFlag;
@property(retain, nonatomic) NSNumber *incomingFlag; // @synthesize incomingFlag;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId;
- (void).cxx_destruct;

@end
