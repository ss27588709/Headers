//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class AWSPopupView;
@protocol AWSPopupBtnDelegate;

@interface AWSPopupWindow : UIWindow
{
    long long _arrowDirection;
    AWSPopupView *_popupView;
    id <AWSPopupBtnDelegate> _popupDelegate;
}

@property(nonatomic) __weak id <AWSPopupBtnDelegate> popupDelegate; // @synthesize popupDelegate=_popupDelegate;
@property(retain, nonatomic) AWSPopupView *popupView; // @synthesize popupView=_popupView;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)moveToPosition:(struct CGPoint)arg1;
- (void)showArrowPointTo:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
