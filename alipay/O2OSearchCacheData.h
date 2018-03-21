//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, O2OSEARCHSearchResult;

@interface O2OSearchCacheData : NSObject
{
    NSArray *_menuGroups;
    NSString *_title;
    NSString *_tab;
    O2OSEARCHSearchResult *_searchResult;
}

+ (id)cacheDataWithFilterModel:(id)arg1 resultModel:(id)arg2;
+ (Class)menuGroupsElementClass;
@property(retain, nonatomic) O2OSEARCHSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(copy, nonatomic) NSString *tab; // @synthesize tab=_tab;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *menuGroups; // @synthesize menuGroups=_menuGroups;
- (void).cxx_destruct;

@end
