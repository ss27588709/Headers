//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SSUserModel, TTAsyncCornerImageView;

@interface _TTCommentDetailHeaderDigAvatarCell : UICollectionViewCell
{
    TTAsyncCornerImageView *_avatarView;
    SSUserModel *_userModel;
}

@property(retain, nonatomic) SSUserModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) TTAsyncCornerImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)refreshWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

