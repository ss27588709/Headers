//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol KSDiskCachePath, OS_dispatch_queue, OS_dispatch_semaphore;

@interface KSDiskCache : NSObject
{
    _Bool _indexBusying;
    unsigned long long _limitOfSize;
    unsigned long long _cacheAlgorithm;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    id <KSDiskCachePath> _cachePath;
    unsigned long long _totalSize;
    NSObject<OS_dispatch_queue> *_indexQueue;
    NSMutableDictionary *_cacheLocks;
}

+ (id)liveResourceDiskCache;
+ (id)videoCache;
+ (id)magicFaceResourceCache;
+ (id)magicFaceGiftCache;
+ (id)musicCache;
+ (void)migrateOldConfigFiles;
+ (id)defaultDiskCache;
@property(retain, nonatomic) NSMutableDictionary *cacheLocks; // @synthesize cacheLocks=_cacheLocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *indexQueue; // @synthesize indexQueue=_indexQueue;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property _Bool indexBusying; // @synthesize indexBusying=_indexBusying;
@property(retain, nonatomic) id <KSDiskCachePath> cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) unsigned long long cacheAlgorithm; // @synthesize cacheAlgorithm=_cacheAlgorithm;
@property(nonatomic) unsigned long long limitOfSize; // @synthesize limitOfSize=_limitOfSize;
- (void).cxx_destruct;
- (void)_updateAccessedDataWithPath:(id)arg1;
- (void)unlockCacheForKey:(id)arg1;
- (void)lockCacheForKey:(id)arg1;
- (void)_lockFileWithKey:(id)arg1 lock:(_Bool)arg2;
- (void)_updateTotalSizeWithKey:(id)arg1;
- (void)_purgeOverlimitCache:(id)arg1;
- (void)purge;
- (unsigned long long)cachedSize;
- (void)updateTotalSize;
- (id)_buildFileIndexes;
- (id)_fileIndexForRelativePath:(id)arg1 fileManager:(id)arg2;
- (unsigned long long)_totalSizeForPath:(id)arg1;
- (id)_filePathWithKey:(id)arg1;
- (_Bool)_cachedForPath:(id)arg1;
- (_Bool)cachedForKey:(id)arg1;
- (void)clear;
- (_Bool)_recurseRemovePath:(id)arg1 error:(id *)arg2;
- (void)removeCacheForKey:(id)arg1;
- (id)dataForKey:(id)arg1 userInfo:(id *)arg2 error:(id *)arg3;
- (void)storeData:(id)arg1 forKey:(id)arg2 expireTime:(double)arg3 userInfo:(id)arg4 error:(id *)arg5;
- (_Bool)_prepareForPath:(id)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)storeObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 userInfo:(id *)arg2 error:(id *)arg3;
- (void)storeObject:(id)arg1 forKey:(id)arg2 expireTime:(double)arg3 userInfo:(id)arg4 error:(id *)arg5;
- (id)imageForKey:(id)arg1;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1 userInfo:(id *)arg2 error:(id *)arg3;
- (void)storeImage:(id)arg1 forKey:(id)arg2 expireTime:(double)arg3 userInfo:(id)arg4 error:(id *)arg5;
- (id)filePathForKey:(id)arg1;
- (id)filePathForKey:(id)arg1 userInfo:(id *)arg2 error:(id *)arg3;
- (void)storeContentOfFile:(id)arg1 forKey:(id)arg2;
- (void)storeContentOfFile:(id)arg1 forKey:(id)arg2 move:(_Bool)arg3 expireTime:(double)arg4 userInfo:(id)arg5 error:(id *)arg6;

@end

