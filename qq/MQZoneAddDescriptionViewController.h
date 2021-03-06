//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/PhotoBrowserBaseViewContoller.h>

#import <QQMainProject/MQZFaceDetectorCoverViewDelegate-Protocol.h>
#import <QQMainProject/MulMemSelBusiProcessDelegate-Protocol.h>
#import <QQMainProject/PhotoEditDelegate-Protocol.h>
#import <QQMainProject/QQImagePickerBottomBarDelegate-Protocol.h>
#import <QQMainProject/QQVideoEditorControllerDelegate-Protocol.h>
#import <QQMainProject/QUIAlertViewDelegate-Protocol.h>
#import <QQMainProject/QZMoodTagDelegate-Protocol.h>
#import <QQMainProject/UITextFieldDelegate-Protocol.h>

@class AVAssetExportSession, CAGradientLayer, NSMutableArray, NSMutableDictionary, NSString, NSTimer, QQImagePickerBottomBar, UIButton, UIView;
@protocol MQZonePhotoDescriptionDelegate;

@interface MQZoneAddDescriptionViewController : PhotoBrowserBaseViewContoller <QQImagePickerBottomBarDelegate, PhotoEditDelegate, QUIAlertViewDelegate, QZMoodTagDelegate, QQVideoEditorControllerDelegate, MQZFaceDetectorCoverViewDelegate, MulMemSelBusiProcessDelegate, UITextFieldDelegate>
{
    id <MQZonePhotoDescriptionDelegate> _delegate;
    _Bool _enabledCheckBtn;
    _Bool _enabledLongPress;
    UIButton *_checkButton;
    NSMutableDictionary *_checkStateDict;
    QQImagePickerBottomBar *_bottomBar;
    NSMutableArray *_selectedAssets;
    UIButton *_tagBtn;
    UIButton *_faceMarkBtn;
    UIView *_editBottomBar;
    UIButton *_editButton;
    CAGradientLayer *_gradientLayer;
    UIView *_videoIndicatorView;
    NSTimer *_videoProgressTimer;
    AVAssetExportSession *_videoExporter;
    _Bool _isAllowToDetect;
    _Bool _forceHideBottomBar;
    unsigned long long _photoEventFromType;
    long long _eventIndex;
    long long _selectedCount;
    CDUnknownBlockType _updateTagBlock;
    NSMutableArray *_photoModelList;
    CDUnknownBlockType _updateFaceMarkStatus;
    CDUnknownBlockType _updateScanManagerBlock;
}

@property(copy, nonatomic) CDUnknownBlockType updateScanManagerBlock; // @synthesize updateScanManagerBlock=_updateScanManagerBlock;
@property(copy, nonatomic) CDUnknownBlockType updateFaceMarkStatus; // @synthesize updateFaceMarkStatus=_updateFaceMarkStatus;
@property(retain, nonatomic) UIButton *faceMarkBtn; // @synthesize faceMarkBtn=_faceMarkBtn;
@property(retain, nonatomic) NSMutableArray *photoModelList; // @synthesize photoModelList=_photoModelList;
@property(copy, nonatomic) CDUnknownBlockType updateTagBlock; // @synthesize updateTagBlock=_updateTagBlock;
@property(nonatomic) long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(nonatomic) _Bool forceHideBottomBar; // @synthesize forceHideBottomBar=_forceHideBottomBar;
@property(nonatomic) long long eventIndex; // @synthesize eventIndex=_eventIndex;
@property(nonatomic) unsigned long long photoEventFromType; // @synthesize photoEventFromType=_photoEventFromType;
@property(nonatomic) _Bool enabledLongPress; // @synthesize enabledLongPress=_enabledLongPress;
@property(nonatomic) _Bool enabledCheckBtn; // @synthesize enabledCheckBtn=_enabledCheckBtn;
- (void).cxx_destruct;
- (void)onBusinessProcessPopCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)coverViewUnMark:(id)arg1;
- (void)coverViewFaceClick:(id)arg1;
- (void)coverViewRecommendClick:(id)arg1;
- (void)coverViewSelectToFriendSelector:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)handleUIApplicationDidEnterBackgroundNotification:(id)arg1;
- (id)getCurrentProvider;
- (id)getCurrentImage;
- (void)setButtonState;
- (void)photoEditor:(id)arg1 didFinishWithImage:(id)arg2 asset:(id)arg3 shouldOpenDoodle:(_Bool)arg4 hasEdited:(_Bool)arg5;
- (void)startPhotoEdit;
- (void)videoEditorControllerDidCancel:(id)arg1;
- (void)videoEditorController:(id)arg1 didFinishEidtWithInfo:(id)arg2;
- (void)updateVideoExportProgress;
- (void)hideExportIndicator;
- (void)showExportIndicator;
- (void)exportVideoWithProvider:(id)arg1 outputPath:(id)arg2;
- (void)editVideoWithPath:(id)arg1;
- (void)startVideoEdit;
- (void)onEditButtonClick;
- (void)clickVideoPlayButtonWithimageView:(id)arg1 photo:(id)arg2;
- (void)clickPanoramaPlayButtonWithPhoto:(id)arg1;
- (void)imageView:(id)arg1 photoPlayButtonPressed:(id)arg2 photo:(id)arg3;
- (void)didScrollToPage:(int)arg1;
- (void)singleTapDetected;
- (_Bool)showPanoramaPhoto:(id)arg1;
- (void)QQImagePickerBottomBarSendButtonDidClick;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)getToolbarItems;
- (id)getToolbar;
- (void)hidePhotoBrowser;
- (void)updateCheckButton;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickCurrentPhotoCheckButton:(id)arg1 forEvent:(id)arg2;
- (void)faceMarkBtnClick:(id)arg1;
- (void)setSelectedAssets:(id)arg1;
- (void)setCheckStateDict:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealWithDetactFace;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateButton:(id)arg1 color:(id)arg2;
- (void)QZMoodTagDelBtnClick:(id)arg1;
- (void)setUpWithTagStrs:(id)arg1 andTahResult:(id)arg2;
- (void)updateTagWithIndex:(unsigned long long)arg1;
- (void)showRightDeleteButton;
- (void)showFaceMarkBtn;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MQZonePhotoDescriptionDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

