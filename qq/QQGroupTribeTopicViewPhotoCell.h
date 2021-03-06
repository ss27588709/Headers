//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQGroupTribeAddNewImageDelegate-Protocol.h>
#import <QQMainProject/QQGroupTribeDescriptionDelegate-Protocol.h>
#import <QQMainProject/QQMultiImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, QQActionSheet, QQGroupFaceWallPicCompress, QQMultiImagePickerController, UIButton, UIImagePickerController, UIImageView, UIScrollView, UIView, UIViewController;
@protocol QQGroupTribeTopicViewPhotoCellDelegate, QQGroupTribeTopicViewPhotoCellRemoveDelegate;

@interface QQGroupTribeTopicViewPhotoCell : NSObject <QQMultiImagePickerControllerDelegate, QQGroupTribeDescriptionDelegate, QQGroupTribeAddNewImageDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIView *_view;
    NSMutableArray *_photoBtnList;
    NSMutableArray *_photoRectList;
    UIImageView *_bgView;
    UIImageView *_splitView;
    UIScrollView *_scrollView;
    UIButton *_fullBtn;
    UIButton *_addBtn;
    long long _compressBatchId;
    id <QQGroupTribeTopicViewPhotoCellDelegate> _delegate;
    UIViewController *_presentDelegate;
    QQActionSheet *_qqActionSheet;
    UIView *_bottomLine;
    UIView *_topLine;
    UIImageView *_addbtnImgView;
    id <QQGroupTribeTopicViewPhotoCellRemoveDelegate> _removeFromSuperVDelegate;
    _Bool _enabledAddPhoto;
    _Bool _enabledDelPhoto;
    int _animationType;
    int _maxImageCount;
    int _xo;
    UIImagePickerController *_imagePicker;
    QQMultiImagePickerController *_multiImagePickerController;
    NSMutableArray *_selectPhotoQueue;
    long long _editedImageCountBeforReChoose;
    NSMutableArray *_photoProviders;
    QQGroupFaceWallPicCompress *_picCompress;
}

@property(retain, nonatomic) NSMutableArray *selectPhotoQueue; // @synthesize selectPhotoQueue=_selectPhotoQueue;
- (void)hidden:(id)arg1;
- (void)animatePhotoFrom:(int)arg1 to:(int)arg2 withDeletedImgIndex:(int)arg3 withDelayDura:(double)arg4;
- (void)deleteAddNewsImage:(id)arg1;
- (void)QQMultiImagePickerControllerClickEditBtn:(id)arg1;
- (void)QQMultiImagePickerControllerDidCancel:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didSendEditedPhoto:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didClickPhoto:(id)arg2 isSelected:(_Bool)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)handleSelectedImage:(id)arg1 FromImagePicker:(id)arg2;
- (void)activeCamera;
- (void)activeAlbumImagePickerView;
- (id)takeAlbumPhotoForTopicVC;
- (void)takeAlbumPhoto;
- (id)ActionCameraCallbackForTopicVC;
- (void)ActionCameraCallback;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickAddBtnOnlyForAlbumPhoto:(id)arg1;
- (void)clickAddBtn:(id)arg1;
- (void)changeAddBtnClick;
- (void)onPhotoEditor:(id)arg1 didFinishWithImage:(id)arg2 hasEdited:(_Bool)arg3 index:(long long)arg4;
- (void)onDeleteWithIndexset:(id)arg1;
- (void)onUpdateOnePhoto:(unsigned long long)arg1 isSelected:(_Bool)arg2;
- (void)onDelete:(unsigned long long)arg1;
- (void)clickPhoto:(id)arg1;
- (void)forceToClose;
- (void)sendRemoveConflictNotificationToAV;
- (void)sendConflictNotificationToAV;
- (_Bool)isPicCountFull;
- (id)getCurrentPhotoTask;
@property(nonatomic) _Bool enabledAddPhoto; // @dynamic enabledAddPhoto;
- (id)getPhotoInformation;
- (_Bool)isPhotoUploadReady;
- (void)addNewPhotoList:(id)arg1;
- (void)setDraftPhotoList:(id)arg1;
- (_Bool)isPhotoSelected:(id)arg1;
- (void)removeAllPhoto;
- (void)doSomethingBeforeDisappear;
- (long long)photoTaskCount;
- (void)handleGifDecodeNotification:(id)arg1;
- (void)updateImageInView:(id)arg1 withPhotoModel:(id)arg2;
- (void)adjustUI;
- (void)initUI;
- (void)dealloc;
- (id)getBackgroundImage:(_Bool)arg1;
- (void)cz_addSubview:(id)arg1;
- (id)initViewWithFrame:(struct CGRect)arg1;
- (id)initViewWithFrame:(struct CGRect)arg1 maxImageCount:(int)arg2;

// Remaining properties
@property(nonatomic) int animationType; // @dynamic animationType;
@property(nonatomic) long long compressBatchId; // @dynamic compressBatchId;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <QQGroupTribeTopicViewPhotoCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enabledDelPhoto; // @dynamic enabledDelPhoto;
@property(readonly) unsigned long long hash;
@property(nonatomic) int maxImageCount; // @dynamic maxImageCount;
@property(nonatomic) __weak UIViewController *presentDelegate; // @dynamic presentDelegate;
@property(nonatomic) id <QQGroupTribeTopicViewPhotoCellRemoveDelegate> removeFromSuperVDelegate; // @dynamic removeFromSuperVDelegate;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *view; // @dynamic view;

@end

