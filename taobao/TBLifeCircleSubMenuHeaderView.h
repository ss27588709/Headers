//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface TBLifeCircleSubMenuHeaderView : UIView
{
    NSString *_subMenuTitle;
    CDUnknownBlockType _onClickedBlock;
    UILabel *_titleLabel;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onClickedBlock; // @synthesize onClickedBlock=_onClickedBlock;
@property(copy, nonatomic) NSString *subMenuTitle; // @synthesize subMenuTitle=_subMenuTitle;
- (void).cxx_destruct;
- (void)closeButtonClicked;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
