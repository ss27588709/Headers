//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class QQAIODynaDoodleImageView;

@protocol QQDoodlePlayDelegate <NSObject>

@optional
- (void)staticDoodleImageReadyFailed:(QQAIODynaDoodleImageView *)arg1;
- (void)staticDoodleImageReadySucceed:(QQAIODynaDoodleImageView *)arg1;
- (void)staticDoodleImageKeepState:(QQAIODynaDoodleImageView *)arg1;
- (void)playDoodleCancel:(QQAIODynaDoodleImageView *)arg1;
- (void)playDoodleEnd:(QQAIODynaDoodleImageView *)arg1;
- (void)playDoodleBegin:(QQAIODynaDoodleImageView *)arg1;
@end
