//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTFEmbedShareView, UIButton, UIImageView, UILabel;

@interface TTFShareTaskTipView : UIView
{
    CDUnknownBlockType _ttf_inviteFriendsBlock;
    CDUnknownBlockType _ttf_directShareCompleteBlock;
    CDUnknownBlockType _ttf_getShareExtraParamsBlock;
    UIView *_backgroundMaskView;
    UIView *_containerView;
    UIImageView *_imageView;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_shareButton;
    TTFEmbedShareView *_embedShareView;
}

+ (void)setShowedTimeInterval:(double)arg1;
+ (double)showedTimeInterval;
@property(retain, nonatomic) TTFEmbedShareView *embedShareView; // @synthesize embedShareView=_embedShareView;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(copy, nonatomic) CDUnknownBlockType ttf_getShareExtraParamsBlock; // @synthesize ttf_getShareExtraParamsBlock=_ttf_getShareExtraParamsBlock;
@property(copy, nonatomic) CDUnknownBlockType ttf_directShareCompleteBlock; // @synthesize ttf_directShareCompleteBlock=_ttf_directShareCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType ttf_inviteFriendsBlock; // @synthesize ttf_inviteFriendsBlock=_ttf_inviteFriendsBlock;
- (void).cxx_destruct;
- (void)hide;
- (void)showInView:(id)arg1;
- (id)getSubTitleAttributedString;
- (void)inviteFriends:(id)arg1;
- (void)initComponents;
- (id)initWithFrame:(struct CGRect)arg1;

@end
