//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class AVID;

@protocol CallkitDelegate <NSObject>
- (void)onCallkitMute:(AVID *)arg1 mute:(_Bool)arg2;
- (void)onCallkitHold:(AVID *)arg1 hold:(_Bool)arg2;
- (void)onCallkitDeactivate:(AVID *)arg1;
- (void)onCallkitActivate:(AVID *)arg1;
- (void)onCallkitEnd:(AVID *)arg1;
- (void)onCallkitAccept:(AVID *)arg1 block:(void (^)(_Bool))arg2;
- (void)onCallkitStart:(AVID *)arg1;
@end

