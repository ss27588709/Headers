//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface AccountRegisterRequestItem : NSObject
{
    int _requestType;
    NSTimer *_timer;
    id _data;
}

@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
- (void)dealloc;
- (id)initWithRequestType:(int)arg1 timeoutInterval:(double)arg2 target:(id)arg3 selector:(SEL)arg4;

@end

