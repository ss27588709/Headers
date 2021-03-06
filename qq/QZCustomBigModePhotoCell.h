//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBasePhotoCell.h>

#import <QQMainProject/QZPhotoModuleDownloaderInterfaceDelegate-Protocol.h>

@class NSString, PhotoTemplate, QZRichTextLabel, QzonePhotoModel, UIButton, UIImageView, UILabel, UIView;

@interface QZCustomBigModePhotoCell : QZBasePhotoCell <QZPhotoModuleDownloaderInterfaceDelegate>
{
    PhotoTemplate *_photoTemplate;
    UIImageView *_descBgImgView;
    UIImageView *_photoBgImgView;
    QZRichTextLabel *_descLabel;
    UIButton *_likeBtn;
    UIButton *_commentBtn;
    UIButton *_photoBtn;
    UIButton *_descBtn;
    UIImageView *_videoPlayImageView;
    UILabel *_videoTimeLabel;
    UIImageView *_bottomShadow;
    UIImageView *_tagView;
    UIView *_themePhotoBgView;
    QzonePhotoModel *_photoModel;
    UIImageView *_photoImgView;
}

+ (double)heightWithPhotoModel:(id)arg1 photoTemplate:(id)arg2 index:(long long)arg3 albumType:(long long)arg4;
@property(retain, nonatomic) UIImageView *photoImgView; // @synthesize photoImgView=_photoImgView;
@property(retain, nonatomic) QzonePhotoModel *photoModel; // @synthesize photoModel=_photoModel;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isFakeVideoFeed;
- (void)onClickDescModifyBtn:(id)arg1;
- (void)onClickPhotoBtn:(id)arg1;
- (void)onClickLikeBtn:(id)arg1;
- (void)onClickedCommentBtn:(id)arg1;
- (void)requestFinishedisSuccess:(_Bool)arg1 resInfo:(id)arg2 image:(id)arg3 reqUrl:(id)arg4;
- (id)photoButtonWithPhotoModel:(id)arg1;
- (void)updateWithPhotoModel:(id)arg1 photoTemplate:(id)arg2 index:(long long)arg3 backgroundType:(long long)arg4 albumType:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

