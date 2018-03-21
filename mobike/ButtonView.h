//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DPActionSheet, NSString, UIButton, UIImage, UILabel;

@interface ButtonView : UIView
{
    UILabel *_textLabel;
    UIButton *_imageButton;
    DPActionSheet *_activityView;
    NSString *_text;
    UIImage *_image;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak DPActionSheet *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)setup;
- (id)initWithText:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
