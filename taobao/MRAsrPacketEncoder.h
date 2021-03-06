//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, ZtEncoder2;

@interface MRAsrPacketEncoder : NSObject
{
    _Bool _isFinished;
    NSMutableArray *_buffer;
    unsigned long long _threshold;
    ZtEncoder2 *_encoder;
}

@property(retain, nonatomic) ZtEncoder2 *encoder; // @synthesize encoder=_encoder;
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property unsigned long long threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) NSMutableArray *buffer; // @synthesize buffer=_buffer;
- (void).cxx_destruct;
- (id)encodeFrame:(id)arg1;
@property(readonly, nonatomic) unsigned long long frameCount;
- (id)getPacketData:(_Bool)arg1;
- (void)bufferFrame:(id)arg1;
- (id)init;

@end

