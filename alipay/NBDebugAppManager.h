//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NBDebugAppManager : NSObject
{
    NSMutableDictionary *_debugApps;
}

@property(retain, nonatomic) NSMutableDictionary *debugApps; // @synthesize debugApps=_debugApps;
- (void).cxx_destruct;
- (_Bool)isSourceValid:(id)arg1;
- (id)valueForApp:(id)arg1 key:(id)arg2;
- (_Bool)containsApp:(id)arg1;
- (void)reset;
- (id)paramsForUrl:(id)arg1;
- (void)exitApp:(id)arg1;
- (void)openApp:(id)arg1;
- (id)init;

@end
