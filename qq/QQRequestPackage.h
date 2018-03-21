//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSTimer;

@interface QQRequestPackage : NSObject
{
    long long _requestID;
    int _requestType;
    NSString *_requestCmd;
    NSTimer *_timer;
    id _data;
    long long _userUIN;
    int _xo;
}

- (void)dealloc;
- (id)initWithID:(int)arg1 cmd:(id)arg2 userUIN:(long long)arg3 timeoutInterval:(double)arg4 target:(id)arg5 selector:(SEL)arg6;

// Remaining properties
@property(retain, nonatomic) id data; // @dynamic data;
@property(retain, nonatomic) NSString *requestCmd; // @dynamic requestCmd;
@property(readonly, nonatomic) long long requestID; // @dynamic requestID;
@property(nonatomic) int requestType; // @dynamic requestType;
@property(retain, nonatomic) NSTimer *timer; // @dynamic timer;
@property(nonatomic) long long userUIN; // @dynamic userUIN;

@end
