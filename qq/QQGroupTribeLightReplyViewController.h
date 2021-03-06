//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/QQGTTaskUploadBatchManagerDelegate-Protocol.h>
#import <QQMainProject/QQGTTopicViewCellDeleteDelegate-Protocol.h>
#import <QQMainProject/QQGTTopicViewRecordCellDelegate-Protocol.h>
#import <QQMainProject/QQGroupTribeDetailInputTextViewProtocol-Protocol.h>
#import <QQMainProject/QQGroupTribePositionviewProtocol-Protocol.h>
#import <QQMainProject/QQGroupTribeRecordProtocol-Protocol.h>
#import <QQMainProject/QQGroupTribeTopicViewPhotoCellDelegate-Protocol.h>
#import <QQMainProject/QQGrowingTextViewDelegate-Protocol.h>
#import <QQMainProject/QQMultiImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/QQPOIListCGIProtocol-Protocol.h>
#import <QQMainProject/QQPttTryListtenPlayerDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, QQAsset, QQGTCachePhotoOnlineManager, QQGTDraftModel, QQGTTaskUploadBatchManager, QQGTTopicRecordCell, QQGroupTribeDetailInputTextView, QQGroupTribeLightReplyPhotoCell, QQPOIListCGIModel, QQPttTryListtenPlayer, UIImagePickerController, UIView;

@interface QQGroupTribeLightReplyViewController : QQViewController <QQGrowingTextViewDelegate, QQGroupTribeTopicViewPhotoCellDelegate, QQGroupTribePositionviewProtocol, QQGroupTribeDetailInputTextViewProtocol, QQPOIListCGIProtocol, UIActionSheetDelegate, QQGroupTribeRecordProtocol, QQGTTopicViewCellDeleteDelegate, QQGTTopicViewRecordCellDelegate, QQPttTryListtenPlayerDelegate, QQMultiImagePickerControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, QQGTTaskUploadBatchManagerDelegate>
{
    UIView *_bgView;
    QQGroupTribeDetailInputTextView *_textField;
    QQGroupTribeLightReplyPhotoCell *_photoView;
    unsigned long long _selectedMediaType;
    NSArray *_mediaContent;
    QQGTTopicRecordCell *_RecordCell;
    _Bool _isFirstCall;
    QQGTTaskUploadBatchManager *_picBatchMgr;
    QQGTCachePhotoOnlineManager *_onlineCacheManager;
    _Bool postSingethon;
    _Bool viewDidFinishLoad;
    _Bool browsingImageView;
    _Bool isReplyOptWaiting;
    _Bool needWaitForPreUpload;
    long long _maxTextLength;
    long long _minTextLength;
    unsigned long long _compressedVideoSize;
    _Bool photoOrContent;
    _Bool everEdit;
    _Bool isVideoProcessorCancleAlertShow;
    _Bool isVideoCompressedComplete;
    NSString *_curPid;
    NSString *_curBid;
    QQGTDraftModel *_replyDraft;
    UIImagePickerController *_cameraImgPicker;
    _Bool needToSaveDraft;
    _Bool viewDismissNormally;
    NSDictionary *passThroughMsg;
    int _recordTimeLimit;
    int _videoTimeLimit;
    int _tinyVideoTimeLimit;
    int _videoSizeLimit;
    _Bool _requireType;
    int _optionType;
    _Bool _sendToWeb;
    _Bool _needFace;
    int _forbiddenType;
    NSString *_forbiddenMsg;
    NSString *_from;
    QQAsset *_videoAsset;
    int _fromFlag;
    _Bool _recordTestPlay;
    NSString *_barName;
    QQPOIListCGIModel *_lbsPoiModel;
    NSDictionary *_params;
    NSString *_callback;
    id _webviewController;
    UIView *_backgroupMask;
    UIView *_topLine;
    int _groupType;
    NSString *_groupUin;
    QQPttTryListtenPlayer *_recordPlayer;
}

+ (void)openLightReplyViewControllerWithParams:(id)arg1;
@property(retain, nonatomic) QQPttTryListtenPlayer *recordPlayer; // @synthesize recordPlayer=_recordPlayer;
@property(retain, nonatomic) NSArray *mediaContent; // @synthesize mediaContent=_mediaContent;
- (void)showTips;
- (void)appDidEnterBackground:(id)arg1;
- (void)onPlayError:(id)arg1 withErrorCode:(id)arg2;
- (void)onPlayStateChange:(id)arg1 withState:(id)arg2;
- (void)recordEnd;
- (void)stopRecord;
- (void)playRecord;
- (void)adjustRecordCellUI:(id)arg1;
- (void)deleteCell:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onRecordFailed:(id)arg1;
- (void)onRecordSend:(id)arg1 recordPath:(id)arg2 recordTime:(int)arg3;
- (void)onRecordCanceled:(id)arg1;
- (void)uploadRecordFile:(id)arg1;
- (void)openCameraPicker;
- (void)openAlbumImagePicker;
- (_Bool)isAPPInstalled;
- (id)sendTribeURLStr:(unsigned long long)arg1;
- (void)gotoAPP:(unsigned long long)arg1;
- (void)didTouchRichKeyBorad:(id)arg1 withControl:(id)arg2 forEvent:(id)arg3;
- (_Bool)canClickGifViewButton;
- (_Bool)checkForbidderType:(unsigned long long)arg1 isGif:(_Bool)arg2;
- (void)showShortNoticeView:(id)arg1 iconType:(long long)arg2;
- (void)unilogExpReply;
- (void)unilogSuccessReply;
- (void)uniformLogForForwardWithOpName:(id)arg1;
- (void)uniformLogWithOpName:(id)arg1 reserve2:(id)arg2 reserve3:(id)arg3;
- (void)uniformLogForGroupWithOpName:(id)arg1;
- (void)uniformLogWithOpName:(id)arg1 reserve2:(id)arg2;
- (void)postReplyContentOpt;
- (id)getReplyOtherParams;
- (id)getCurrentInputText;
- (void)growingTextViewDidSendEmptyContent:(id)arg1;
- (void)onRightBtnClick;
- (void)gifContainerSelectedNewPhoto:(id)arg1 photoInfo:(id)arg2;
- (void)textViewLayoutDidChanged:(id)arg1 withFrame:(struct CGRect)arg2;
- (_Bool)textView:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)addBackgroupdMaskView;
- (_Bool)QQTextField:(id)arg1 didSendText:(id)arg2 showText:(id)arg3;
- (_Bool)growingTextViewInputReturnKey:(id)arg1;
- (void)clearAttachedAccessory;
- (_Bool)sendTextMsg:(id)arg1 showText:(id)arg2;
- (_Bool)checkRecordFileUpload;
- (_Bool)checkTopicMediaType;
- (id)requireMediaTypeString;
- (_Bool)checkSendPackageWithText:(id)arg1;
- (void)updateViewWithDraftAfterInitUI;
- (void)savePhotoDraft;
- (void)saveCurrentDraft;
- (id)getUploadPhotoInfo;
- (long long)getUploadPhotoGifCount;
- (id)getCurrentPhotoTask;
- (void)GTTaskUploadBatchManagerOnFinishFileUpload:(id)arg1 imagetag:(long long)arg2 info:(id)arg3;
- (void)photoCellBrowserClickEditBtn:(id)arg1;
- (void)photoCellDeletePhoto:(id)arg1;
- (void)photoCellPhotoDidFinishUploadAtIndex:(long long)arg1;
- (void)photoCellCheckPhotoState:(id)arg1 photoList:(id)arg2;
- (void)photoCellChangeHeight:(id)arg1 heightOffset:(double)arg2;
- (void)photoCellCancelActive:(id)arg1;
- (void)photoCellEndBrowserSelectedPhotos:(id)arg1;
- (void)photoCellBrowserSelectedPhotos:(id)arg1;
- (void)photoCellBecomeActive:(id)arg1;
- (void)didSelectPOIModel:(id)arg1;
- (void)getLocationDoneRetcode:(int)arg1 result:(id)arg2;
- (void)openLbsPickerView;
- (void)_createPhotoView;
- (void)_createTextFieldView;
- (void)dismiss;
- (void)show;
- (void)callbackToWeb:(int)arg1 result:(id)arg2;
- (void)handleBGClick:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)movePhotoViewWithKeyboardHeight:(double)arg1 withDuration:(double)arg2;
- (void)onHideKeyBoard;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)loadView;
- (void)setOptionType:(id)arg1;
- (void)createTopLine;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

