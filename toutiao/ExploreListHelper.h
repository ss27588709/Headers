//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ExploreListHelper : NSObject
{
}

+ (id)refreshTypeStrForReloadFromType:(int)arg1;
+ (void)trackEventForLabel:(id)arg1 listType:(unsigned long long)arg2 categoryID:(id)arg3 concernID:(id)arg4 refer:(unsigned long long)arg5;
+ (unsigned long long)countForPreloadCell;
+ (void)setPreloadCount:(unsigned long long)arg1 userSettingStatus:(unsigned long long)arg2;
+ (id)filterFavoriteItems:(id)arg1;
+ (id)sortByIndexForArray:(id)arg1 orderedAscending:(_Bool)arg2;
+ (id)sortByIndexForArray:(id)arg1 listType:(unsigned long long)arg2;
+ (_Bool)supportForCellType:(unsigned long long)arg1;

@end
