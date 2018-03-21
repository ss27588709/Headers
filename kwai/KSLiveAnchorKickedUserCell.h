//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HLRichLabel, KSEdgeRoundImageView, KSLiveAnchorKickedUser, UILabel, UIView;

@interface KSLiveAnchorKickedUserCell : UITableViewCell
{
    KSLiveAnchorKickedUser *_user;
    CDUnknownBlockType _didTapAvatarView;
    KSEdgeRoundImageView *_avatarView;
    UILabel *_nameLabel;
    HLRichLabel *_kickOperationLabel;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) HLRichLabel *kickOperationLabel; // @synthesize kickOperationLabel=_kickOperationLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) KSEdgeRoundImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) CDUnknownBlockType didTapAvatarView; // @synthesize didTapAvatarView=_didTapAvatarView;
@property(retain, nonatomic) KSLiveAnchorKickedUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)updateAvatarWithUser:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
