//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIActionSheet, UIView;

@protocol ALIJPopupsProtocol <NSObject>
- (UIActionSheet *)showActionSheetWithTitle:(NSString *)arg1 cancelButtonTitle:(NSString *)arg2 destructiveButtonTitle:(NSString *)arg3 otherButtonTitles:(NSArray *)arg4 clickedCallback:(void (^)(UIActionSheet *, long long))arg5 inView:(UIView *)arg6;
@end

