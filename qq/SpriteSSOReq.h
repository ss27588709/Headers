//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SpriteSSOReq : NSObject
{
    int _seq;
    int _source;
    NSString *_ssoCmd;
    CDUnknownBlockType _callBack;
}

@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) NSString *ssoCmd; // @synthesize ssoCmd=_ssoCmd;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) int seq; // @synthesize seq=_seq;
- (void)dealloc;

@end
