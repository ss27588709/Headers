//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QAVVideoEffect;

@interface QAVVideoEffectCtrl : NSObject
{
    QAVVideoEffect *_effectInstance;
}

+ (id)shareContext;
@property(retain, nonatomic) QAVVideoEffect *effectInstance; // @synthesize effectInstance=_effectInstance;
- (void)destroy;
- (long long)onInputFrame:(char *)arg1 toBuf:(char *)arg2 BufferSize:(unsigned long long)arg3 Width:(unsigned long long)arg4 HeightY:(unsigned long long)arg5 colorFormat:(int)arg6;
- (long long)setPendant:(id)arg1;
- (long long)setFilter:(id)arg1;
- (long long)stop;
- (long long)start;

@end
