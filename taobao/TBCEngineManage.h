//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface TBCEngineManage : NSObject
{
    NSMapTable *_engineCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMapTable *engineCache; // @synthesize engineCache=_engineCache;
- (void).cxx_destruct;
- (void)cacheEngine:(id)arg1;
- (id)getEngineById:(id)arg1;
- (id)engineInstance;
- (id)init;

@end
