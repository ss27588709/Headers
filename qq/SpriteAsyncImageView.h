//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString;

@interface SpriteAsyncImageView : UIImageView
{
    NSString *_urlKey;
    NSString *_url;
    NSString *_defaultImage;
}

@property(retain, nonatomic) NSString *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *urlKey; // @synthesize urlKey=_urlKey;
- (void)handleGifDecodeNotification:(id)arg1;
- (void)startLoadImage;
- (void)startLoadGif;
- (void)loadUrlImage:(id)arg1 defaultImage:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

