//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class NSIndexPath, UIButton, UIImageView, UILabel, WBContentImageView, WBPageChannelListInfoModel, WBPageCommonCellUIControl;
@protocol WBPageChannelEditTableViewCellDelegate;

@interface WBPageChannelEditTableViewCell : WBTableViewCell
{
    _Bool _isEditMode;
    _Bool _isInAddedList;
    id <WBPageChannelEditTableViewCellDelegate> _delegate;
    UIImageView *_backgroundImageView;
    UILabel *_name;
    UIImageView *_rightImageView;
    WBContentImageView *_iconImage;
    UIImageView *_badgeView;
    UIButton *_addButton;
    WBPageCommonCellUIControl *_cellControl;
    NSIndexPath *_indexPath;
    WBPageChannelListInfoModel *_model;
}

@property(retain, nonatomic) WBPageChannelListInfoModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isInAddedList; // @synthesize isInAddedList=_isInAddedList;
@property(nonatomic) _Bool isEditMode; // @synthesize isEditMode=_isEditMode;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) WBPageCommonCellUIControl *cellControl; // @synthesize cellControl=_cellControl;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) WBContentImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) id <WBPageChannelEditTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)addChannel:(id)arg1;
- (void)setChannelModel:(id)arg1 isEdit:(_Bool)arg2 isAdded:(_Bool)arg3;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)resetColorAndImage;
- (void)resetTextFont;
- (void)reloadUIElements;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

