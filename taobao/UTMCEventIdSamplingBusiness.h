//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UTMCConfigBusiness.h"

@interface UTMCEventIdSamplingBusiness : UTMCConfigBusiness
{
}

- (id)flatTableToTreeTable:(id)arg1;
- (void)treeTableToFlatTable:(id)arg1;
- (int)isSampleSuccess:(id)arg1 with:(id)arg2;
- (void)configItemDecode:(id)arg1 withKey:(id)arg2;
- (id)_setConfigItem:(id)arg1 mainkey:(id)arg2 subkey:(id)arg3;
- (void)setTableFromDB;
- (id)init;

@end
