//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQAsynUrlImageView, QQAvatarView;

@interface PLHeadView : UIView
{
    QQAvatarView *_headImageView;
    QQAsynUrlImageView *_bigVImageView;
    QQAsynUrlImageView *_leveImageView;
    unsigned long long _level;
}

@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(retain, nonatomic) QQAsynUrlImageView *leveImageView; // @synthesize leveImageView=_leveImageView;
@property(retain, nonatomic) QQAsynUrlImageView *bigVImageView; // @synthesize bigVImageView=_bigVImageView;
@property(retain, nonatomic) QQAvatarView *headImageView; // @synthesize headImageView=_headImageView;
- (int)getBigVViewSizeWithHeadSize:(int)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

