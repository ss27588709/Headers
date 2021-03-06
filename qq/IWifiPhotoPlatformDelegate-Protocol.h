//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString;

@protocol IWifiPhotoPlatformDelegate <NSObject>
- (_Bool)isAlbumAuthorized;
- (_Bool)canSupportRelayChn;
- (unsigned int)GetNetWorkStatus;
- (unsigned int)GetAppStatus;
- (void)LockScreen:(_Bool)arg1;
- (void)ClearCache;
- (void)AsyncBatchDelWifiPhotoImage:(unsigned long long)arg1 DelList:(NSString *)arg2;
- (void)AsyncDelWifiPhotoImage:(unsigned long long)arg1 ImageId:(NSString *)arg2;
- (void)AysncGetWifiPhotoImage:(unsigned long long)arg1 ImageId:(NSString *)arg2 Isthumb:(_Bool)arg3;
- (void)AsyncGetWifiPhotoGroupThumb:(unsigned long long)arg1 AlbumId:(NSString *)arg2;
- (void)AsyncGetAlbumInfoJson:(unsigned long long)arg1 AlbumId:(NSString *)arg2 Offset:(NSString *)arg3 Limit:(NSString *)arg4;
- (void)AsyncLoadImageInfo:(unsigned long long)arg1;
- (void)ShowWifiPhotoTip:(unsigned int)arg1;
- (void)SendMsg:(_Bool)arg1 Cmd:(struct strutf8)arg2;
@end

