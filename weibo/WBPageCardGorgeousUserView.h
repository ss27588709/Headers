//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class UIImageView, UILabel, WBCommonButtonView, WBTimelineLargeCardTextView, WBUserProfileHeaderAvatarView, WBUserScreenNameAndRecomRemarkLabelControl;

@interface WBPageCardGorgeousUserView : WBPageCardViewBase
{
    UIImageView *_backGroundImg;
    UIImageView *_maskView;
    WBUserProfileHeaderAvatarView *_avatarView;
    WBUserScreenNameAndRecomRemarkLabelControl *_screenNameLabel;
    WBCommonButtonView *_commonButton;
    WBTimelineLargeCardTextView *_bottomTextView;
    UILabel *_descLabel;
}

+ (_Bool)allowBubble;
+ (struct UIEdgeInsets)edgeInsetsBubbleOutside;
+ (struct UIEdgeInsets)edgeInsetsViewOutside;
+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WBTimelineLargeCardTextView *bottomTextView; // @synthesize bottomTextView=_bottomTextView;
@property(retain, nonatomic) WBCommonButtonView *commonButton; // @synthesize commonButton=_commonButton;
@property(retain, nonatomic) WBUserScreenNameAndRecomRemarkLabelControl *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(retain, nonatomic) WBUserProfileHeaderAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *backGroundImg; // @synthesize backGroundImg=_backGroundImg;
- (void).cxx_destruct;
- (void)resetSubViewRects;
- (void)resetCommonButtonViewFrame:(struct CGSize)arg1;
- (void)buildCommonButton:(id)arg1;
- (void)setPageCard:(id)arg1;
- (_Bool)highlightCellBackgroundWhenPressed;
- (void)layoutSubviews;
- (void)reloadUIElements;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

