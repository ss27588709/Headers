//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppTaskJumpWeAppInfo : NSObject
{
    NSString *_appID;
    unsigned long long _jumpRole;
    unsigned long long _jumpScene;
}

@property(nonatomic) unsigned long long jumpScene; // @synthesize jumpScene=_jumpScene;
@property(nonatomic) unsigned long long jumpRole; // @synthesize jumpRole=_jumpRole;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)init;

@end
