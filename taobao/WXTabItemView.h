//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol WXTabItemViewDelegate;

@interface WXTabItemView : UIView
{
    UIImageView *_imageView;
    UILabel *_label;
    UILabel *_badge;
    id <WXTabItemViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WXTabItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)arg1;
- (void)itemSelected:(id)arg1;
- (void)layoutViewWithDO:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

