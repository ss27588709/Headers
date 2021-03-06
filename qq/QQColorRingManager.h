//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQColorRingManager : NSObject
{
}

+ (id)rootDirectoryPath;
+ (id)sharedInstance;
- (id)ringPathForColorRingID:(unsigned int)arg1;
- (id)imagePathForColorRingID:(unsigned int)arg1;
- (id)configPathForColorRingID:(unsigned int)arg1;
- (id)downloadRingUrlForColorRingID:(unsigned int)arg1;
- (id)downloadImageUrlForColorRingID:(unsigned int)arg1;
- (id)downloadConfigUrlForColorRingID:(unsigned int)arg1;
- (long long)colorRingIdByFriendUin:(id)arg1;
- (void)startDownload:(unsigned int)arg1 resourceType:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)colorRingConfigDicByID:(unsigned int)arg1;

@end

