//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ARTCEngineKitRemoteVideoStats : NSObject
{
    int _delay;
    int _width;
    int _height;
    int _receivedFrameRate;
    unsigned long long _receivedBitrate;
}

@property(nonatomic) int receivedFrameRate; // @synthesize receivedFrameRate=_receivedFrameRate;
@property(nonatomic) unsigned long long receivedBitrate; // @synthesize receivedBitrate=_receivedBitrate;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) int delay; // @synthesize delay=_delay;

@end

