//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageGIFView, UIImageView, UILabel;

@interface TBXSearchBotSearchPullToRefreshAnimationView : UIView
{
    UIImageGIFView *_gifView;
    UILabel *_title;
    UIImageView *_backgroundImage;
}

@property(retain, nonatomic) UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageGIFView *gifView; // @synthesize gifView=_gifView;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)arg1;
- (void)configWithBGImageURL:(id)arg1 title:(id)arg2 gifUrl:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

