//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, NSString;

@interface TTMovieViewCacheManager : NSObject
{
    _Bool _userSelected;
    NSString *_currentPlayingVideoID;
    unsigned long long _lastDefinitionType;
    NSHashTable *_registMovieViewHash;
    long long _maxCacheCount;
    NSMutableArray *_cacheArray;
}

+ (id)sharedInstance;
+ (void)load;
@property(retain, nonatomic) NSMutableArray *cacheArray; // @synthesize cacheArray=_cacheArray;
@property(nonatomic) long long maxCacheCount; // @synthesize maxCacheCount=_maxCacheCount;
@property(nonatomic) _Bool userSelected; // @synthesize userSelected=_userSelected;
@property(retain, nonatomic) NSHashTable *registMovieViewHash; // @synthesize registMovieViewHash=_registMovieViewHash;
@property(nonatomic) unsigned long long lastDefinitionType; // @synthesize lastDefinitionType=_lastDefinitionType;
@property(copy, nonatomic) NSString *currentPlayingVideoID; // @synthesize currentPlayingVideoID=_currentPlayingVideoID;
- (void).cxx_destruct;
- (_Bool)hasCachedForKey:(id)arg1;
- (void)removeCacheMovieView:(id)arg1 forVideoID:(id)arg2;
- (void)cacheMovieView:(id)arg1 forVideoID:(id)arg2;
- (void)setCacheBlock:(id)arg1 videoID:(id)arg2;
- (id)movieViewWithVideoID:(id)arg1 frame:(struct CGRect)arg2 type:(unsigned long long)arg3 trackerDic:(id)arg4 movieViewModel:(id)arg5;
- (id)init;

@end
