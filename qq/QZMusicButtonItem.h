//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/LKLayoutItem.h>

@class NSString, QZDrawMusicButton;

@interface QZMusicButtonItem : LKLayoutItem
{
    QZDrawMusicButton *_musicItem;
    NSString *_source;
    NSString *_musicButtonType;
}

@property(retain, nonatomic) NSString *musicButtonType; // @synthesize musicButtonType=_musicButtonType;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) QZDrawMusicButton *musicItem; // @synthesize musicItem=_musicItem;
- (void).cxx_destruct;
- (void)configView:(id)arg1 context:(id)arg2;
- (id)createView;
- (void)setUpForItemConfiguration:(id)arg1 globalConfiguration:(id)arg2;

@end
