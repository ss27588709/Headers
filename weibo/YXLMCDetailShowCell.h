//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, UIButton, UIImageView, UILabel, UIView, YXLMCDetailShowListModel, YXWBNLAvatarView;
@protocol YXLMCDetailShowCellDelegate;

@interface YXLMCDetailShowCell : UITableViewCell
{
    _Bool _loading;
    NSIndexPath *_indexPath;
    id <YXLMCDetailShowCellDelegate> _delegate;
    CDUnknownBlockType _followButtonClick;
    YXWBNLAvatarView *_avatarImgView;
    UIImageView *_certImgView;
    UILabel *_nickNameLabel;
    UILabel *_descLabel;
    UILabel *_timeLabel;
    UIButton *_followButton;
    UIView *_separationLine;
    YXLMCDetailShowListModel *_currentModel;
}

@property(retain, nonatomic) YXLMCDetailShowListModel *currentModel; // @synthesize currentModel=_currentModel;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIView *separationLine; // @synthesize separationLine=_separationLine;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIImageView *certImgView; // @synthesize certImgView=_certImgView;
@property(retain, nonatomic) YXWBNLAvatarView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
@property(copy, nonatomic) CDUnknownBlockType followButtonClick; // @synthesize followButtonClick=_followButtonClick;
@property(nonatomic) __weak id <YXLMCDetailShowCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)hideSeparationLine:(_Bool)arg1;
- (void)followBtnClicked:(id)arg1;
- (void)setViewAndBackImageViewwithType:(long long)arg1;
- (void)updateWithModel:(id)arg1;
- (void)initView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

