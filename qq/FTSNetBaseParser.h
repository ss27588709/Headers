//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FTSNetBaseParser : NSObject
{
    unsigned int _busitype;
}

@property(nonatomic) unsigned int busitype; // @synthesize busitype=_busitype;
- (void)ftsParseRespBody:(char *)arg1 bufflen:(int)arg2;

@end
