//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARECameraView.h"

@class UIViewController;

@interface ARECameraAttachView : ARECameraView
{
    UIViewController *_retainedController;
}

@property(retain, nonatomic) UIViewController *retainedController; // @synthesize retainedController=_retainedController;
- (void).cxx_destruct;
- (void)setupCamera;
- (void)resumeRunning;
- (void)pauseRunning;
- (void)stopRunning;
- (void)startRunning;
- (void)willMoveToSuperview:(id)arg1;

@end

