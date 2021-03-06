//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WBImageTagView;

@protocol WBImageTagViewDelegate <NSObject>

@optional
- (double)maxStableWidthForImageTagView:(WBImageTagView *)arg1;
- (UIView *)referenceViewForImageTagView:(WBImageTagView *)arg1;
- (double)maxWidthForImageTagView:(WBImageTagView *)arg1;
- (void)imageTagViewFinishedEditing:(WBImageTagView *)arg1;
- (void)imageTagViewBeginDragging:(WBImageTagView *)arg1;
@end

