//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TBTaoPasswordScreenshotsShareView : UIView
{
    CDUnknownBlockType _completeBlock;
    UIView *_backgroundView;
}

+ (void)showTaoPasswordScreenshotsShareViewWithTaoPassword:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void).cxx_destruct;
- (void)tapCancelButton:(id)arg1;
- (void)tap:(id)arg1;
- (void)dismiss;
- (void)present;

@end

