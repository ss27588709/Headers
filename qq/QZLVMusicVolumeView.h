//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QZLVVolumView;

@interface QZLVMusicVolumeView : UIView
{
    QZLVVolumView *_voiceView;
    QZLVVolumView *_musicView;
}

@property(retain, nonatomic) QZLVVolumView *musicView; // @synthesize musicView=_musicView;
@property(retain, nonatomic) QZLVVolumView *voiceView; // @synthesize voiceView=_voiceView;
- (void).cxx_destruct;
- (void)willDisappear;
- (void)willAppear;
- (void)configUIWithFrame:(struct CGRect)arg1;
- (id)initWithPoint:(struct CGPoint)arg1;

@end

