//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface QQPluginFeedCountManager : NSObject
{
    NSString *_uin;
    NSMutableDictionary *_feedCountMap;
}

+ (id)feedCountPathname;
+ (id)instance;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void)save;
- (void)load;
- (void)setFeedCount:(id)arg1;
- (void)setFeedCount:(id)arg1 withPluginID:(int)arg2;
- (void)updateFeedCount:(id)arg1 withPluginID:(int)arg2;
- (void)resetFeedCountWithPluginID:(int)arg1;
- (id)getFeedCountWithPluginID:(int)arg1;
- (void)dealloc;
- (id)init;

@end
