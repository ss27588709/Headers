//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString, QQGroupFaceWallPicTransferManager, UIView;

@protocol QQGroupFaceWallLogicDelegate <NSObject>

@optional
- (void)FaceWallPicTranferFileUploadProcess:(QQGroupFaceWallPicTransferManager *)arg1 imagetag:(long long)arg2 process:(double)arg3;
- (void)FaceWallPicTranferOnstartFileUpload:(QQGroupFaceWallPicTransferManager *)arg1 imagetag:(long long)arg2;
- (void)didClickVerifyingImage:(_Bool)arg1;
- (void)photoBrowserViewIsShow:(_Bool)arg1;
- (void)uploadPicState:(int)arg1;
- (struct CGRect)getViewRect;
- (void)uploadFaceWallHeader:(NSString *)arg1 thumburl:(NSString *)arg2;
- (void)defaultHeaderChanged:(NSString *)arg1 thumburl:(NSString *)arg2;
- (void)didLockScroll:(_Bool)arg1;
- (UIView *)getRouteTipParentView;
- (void)didUISizeChange:(struct CGRect)arg1 newSize:(struct CGRect)arg2;
@end

