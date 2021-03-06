//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, WBIndexeCachedCollection;
@protocol OS_dispatch_queue, WBUIImageCacheDelegate;

@interface WBUIImageCache : NSObject
{
    NSObject<OS_dispatch_queue> *cacheIOQueue;
    NSString *name;
    unsigned long long _totalCostLimit;
    id <WBUIImageCacheDelegate> _delegate;
    unsigned long long _policy;
    WBIndexeCachedCollection *_rootCache;
    NSMapTable *_imageStore;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSMapTable *imageStore; // @synthesize imageStore=_imageStore;
@property(retain, nonatomic) WBIndexeCachedCollection *rootCache; // @synthesize rootCache=_rootCache;
@property(nonatomic) unsigned long long policy; // @synthesize policy=_policy;
@property(nonatomic) id <WBUIImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long totalCostLimit; // @synthesize totalCostLimit=_totalCostLimit;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (void)removeAllImages;
- (void)removeImageForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (void)addCachedImage:(id)arg1 forKey:(id)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 permenent:(_Bool)arg4;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2 permenent:(_Bool)arg3;
- (void)_initailizeSelf;
- (id)init;
- (void)dealloc;

@end

