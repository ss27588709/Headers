//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FileCache2.h"

@class APCacheCounter;

@interface VoiceCache2 : FileCache2
{
    APCacheCounter *_counter;
}

+ (id)defaultCache;
@property(retain, nonatomic) APCacheCounter *counter; // @synthesize counter=_counter;
- (void).cxx_destruct;
- (id)generateMemoryKeyFromKey:(id)arg1 type:(unsigned long long)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 type:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 duration:(long long)arg3 type:(unsigned long long)arg4 options:(id)arg5;
- (id)initWithName:(id)arg1;

@end

