//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UISwipeGestureRecognizer;
@protocol LSPlayerGuideViewDelegate;

@interface LSBizPlayerGuideView : UIView
{
    id <LSPlayerGuideViewDelegate> _delegate;
    UIImageView *_logoView;
    UIButton *_exitButton;
    UISwipeGestureRecognizer *_closeSwipeGesture;
}

@property(retain, nonatomic) UISwipeGestureRecognizer *closeSwipeGesture; // @synthesize closeSwipeGesture=_closeSwipeGesture;
@property(retain, nonatomic) UIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) __weak id <LSPlayerGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeGuideViewBySelf;
- (void)closeGuideView;
- (id)init;

@end

