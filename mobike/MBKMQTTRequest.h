//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKRequest.h"

@class NSString;

@interface MBKMQTTRequest : MBKRequest
{
    unsigned char _qosLevel;
    _Bool _shouldReconnect;
    NSString *_topic;
}

+ (void)disconnectSession;
+ (void)connectSession;
@property(nonatomic) _Bool shouldReconnect; // @synthesize shouldReconnect=_shouldReconnect;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) unsigned char qosLevel; // @synthesize qosLevel=_qosLevel;
- (void).cxx_destruct;

@end
