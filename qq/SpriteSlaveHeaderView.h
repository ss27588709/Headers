//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQBubbleTipsView, SpriteUrlBtn, UILabel;
@protocol SpriteSlaveHeaderViewDelegate;

@interface SpriteSlaveHeaderView : UIView
{
    SpriteUrlBtn *_slavePersonBtn;
    UILabel *_titleLabel;
    QQBubbleTipsView *_tipView;
    UILabel *_noCapSlaveTipLabel;
    _Bool _isCaptured;
    unsigned long long _slaveNum;
    id <SpriteSlaveHeaderViewDelegate> _delegate;
}

@property(nonatomic) id <SpriteSlaveHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)slavePersonPressed:(id)arg1;
- (void)updateNoSlaveTipViewIsShow:(_Bool)arg1;
- (void)updateCanCapSlaveTipViewIsShow:(_Bool)arg1;
- (void)updateHeaderViewWithSlaveNumber:(unsigned long long)arg1 isCaptured:(_Bool)arg2;
- (id)noCapSlaveTipLabel;
- (id)tipView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

