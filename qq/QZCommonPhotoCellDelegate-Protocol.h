//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSMutableArray, NSString, QZEventPhotoModel, QzonePhotoModel, UIView;

@protocol QZCommonPhotoCellDelegate <NSObject>

@optional
- (_Bool)shouldSelectedPhoto:(_Bool)arg1;
- (void)onEnterHomePageWithUIN:(long long)arg1 nickName:(NSString *)arg2;
- (void)onClickCommentButton:(QzonePhotoModel *)arg1;
- (void)onClickLikeButton:(QzonePhotoModel *)arg1;
- (void)onClickUntimeCollectionConfirm;
- (void)onClickUntimeEventConfirm:(NSMutableArray *)arg1;
- (void)onSelectEventPhotosToManage:(NSMutableArray *)arg1 isSelected:(_Bool)arg2 sectionIndex:(long long)arg3;
- (void)onSelectEventPhotosToManage:(NSMutableArray *)arg1 isSelected:(_Bool)arg2;
- (void)onSelectPhotoToSelectBrowser:(QzonePhotoModel *)arg1;
- (void)onSelectPhotoToManage:(QzonePhotoModel *)arg1 isSelected:(_Bool)arg2 sectionIndex:(long long)arg3;
- (void)onSelectPhotoToManage:(QzonePhotoModel *)arg1 isSelected:(_Bool)arg2;
- (void)onClickManageUntime;
- (void)onClickMoreUntimePhotos;
- (void)onClickEventDescModify:(QZEventPhotoModel *)arg1;
- (void)onClickPhotoDescModify:(QzonePhotoModel *)arg1;
- (void)onClickPoiModify:(QZEventPhotoModel *)arg1;
- (void)onSelectPhotoToBrowse:(QzonePhotoModel *)arg1 btn:(UIView *)arg2;
@end

