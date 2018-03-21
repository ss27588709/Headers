//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "AWEUserMessage-Protocol.h"

@class AWEUserModel, CAShapeLayer, NSString, UIButton, UIImageView, UILabel, UIView;

@interface AWEInviteInterestedTableViewCell : UITableViewCell <AWEUserMessage>
{
    UIView *_baseView;
    CAShapeLayer *_baseLayer;
    UIButton *_avatarBtn;
    UIImageView *_verifyImageView;
    UILabel *_nameLabel;
    UILabel *_workAndFansLabel;
    UILabel *_introLabel;
    UIButton *_followBtn;
    AWEUserModel *_user;
}

+ (id)_defaultImage;
+ (id)identifier;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *workAndFansLabel; // @synthesize workAndFansLabel=_workAndFansLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *verifyImageView; // @synthesize verifyImageView=_verifyImageView;
@property(retain, nonatomic) UIButton *avatarBtn; // @synthesize avatarBtn=_avatarBtn;
@property(retain, nonatomic) CAShapeLayer *baseLayer; // @synthesize baseLayer=_baseLayer;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
- (void).cxx_destruct;
- (id)_countStr:(long long)arg1;
- (id)_baseLayerPath;
- (void)layoutSubviews;
- (void)_refreshFollowBtnUI;
- (void)_setupUI;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)followBtnClicked:(id)arg1;
- (void)avatarBtnClicked:(id)arg1;
- (void)configWithUser:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
