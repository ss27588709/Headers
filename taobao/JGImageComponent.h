//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JGComponent.h"

@class NSString, UIImage;

@interface JGImageComponent : JGComponent
{
    NSString *_imageSrc;
    long long _resizeMode;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long resizeMode; // @synthesize resizeMode=_resizeMode;
@property(retain, nonatomic) NSString *imageSrc; // @synthesize imageSrc=_imageSrc;
- (void).cxx_destruct;
- (void)updateImage;
- (void)updateAttributes:(id)arg1;
- (void)updateStyles:(id)arg1;
- (void)layoutDidFinish;
- (void)viewDidLoad;
- (id)loadView;
- (id)initWithStyles:(id)arg1 attributes:(id)arg2;

@end

