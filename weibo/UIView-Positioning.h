//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (Positioning)
- (void)resetOriginToTopRight;
- (void)resetOriginToTopLeft;
- (void)setOrigin:(double)arg1:(double)arg2;
- (id)topLayerSubviewWithTag:(long long)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameHeight:(double)arg1;
- (void)setFrameWidth:(double)arg1;
- (void)setFrameY:(double)arg1;
- (void)setFrameX:(double)arg1;
@property(readonly, nonatomic) double rightMostX;
@property(readonly, nonatomic) double bottomY;
@property(readonly, nonatomic) double topY;
@property(readonly, nonatomic) double leftMostX;
@property(readonly, nonatomic) struct CGPoint bottomRightPoint;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
@end

