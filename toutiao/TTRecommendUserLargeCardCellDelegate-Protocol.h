//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TTRecommendUserLargeCardCell;

@protocol TTRecommendUserLargeCardCellDelegate <NSObject>
- (void)didClickAvatarViewOfCell:(TTRecommendUserLargeCardCell *)arg1;
- (void)didChangeSelected:(_Bool)arg1 ofCell:(TTRecommendUserLargeCardCell *)arg2;
- (_Bool)shouldRespondsToChangeAction;
@end

