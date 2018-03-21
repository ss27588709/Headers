//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <QQMainProject/AddFriendSendMsgHeaderUploadDelegate-Protocol.h>
#import <QQMainProject/AvatarServiceDelegate-Protocol.h>
#import <QQMainProject/QQEmotionLabelDelegate-Protocol.h>
#import <QQMainProject/QQMultiImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>
#import <QQMainProject/UIImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>
#import <QQMainProject/UITextFieldDelegate-Protocol.h>
#import <QQMainProject/UITextViewDelegate-Protocol.h>

@class AddFriendSendMsgHeaderUpload, NSDictionary, NSMutableArray, NSString, QQGroupFaceWallAddNewImageView, UIImage, UILabel, UITapGestureRecognizer, UITextField, UserInfoHead;
@protocol UITextFieldDelegate><IGroupSelectDelegate;

@interface MessageCollectorUI : UITableView <AvatarServiceDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, UITextViewDelegate, UIGestureRecognizerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, QQMultiImagePickerControllerDelegate, AddFriendSendMsgHeaderUploadDelegate, QQEmotionLabelDelegate>
{
    UserInfoHead *_headView;
    long long _queryUin;
    NSMutableArray *_questions;
    NSMutableArray *_answers;
    NSDictionary *_settingDict;
    NSString *_nickName;
    NSString *_infoMsg;
    struct CGRect _keyboardRect;
    struct CGRect _oldFrame;
    id <UITextFieldDelegate><IGroupSelectDelegate> _delegate;
    unsigned long long indices[2];
    unsigned long long _groupCode;
    NSMutableArray *_dataSourceSectionIndex;
    long long _remarkAndGroupSection;
    long long _groupShareLocationSection;
    _Bool _isFromNearFile;
    _Bool _isGroupWrongAnswer;
    _Bool _isShareLocationDefaultOn;
    _Bool _isShareLocationSwitchOn;
    _Bool _isFeedsSwitchOn;
    NSString *_oldInputText;
    NSString *_originInputText;
    QQGroupFaceWallAddNewImageView *_userHeader;
    UITapGestureRecognizer *_tapGesture;
    AddFriendSendMsgHeaderUpload *_headerUpLoad;
    UIImage *_headerImage;
    int _addFriendVCType;
    UITextField *_remarkTextField;
    UILabel *_groupLabel;
    NSString *_md5;
    unsigned int _fileID;
    NSString *_url;
    int _xo;
    _Bool _isSmobaTextChangedReported;
    _Bool _viewDidAppeared;
    _Bool _isEncounterType;
    int _groupID;
    NSString *_openID;
    NSString *_appID;
    NSString *_remarkName;
    NSString *_groupName;
}

@property(retain, nonatomic) UserInfoHead *headView; // @synthesize headView=_headView;
@property(nonatomic) _Bool isEncounterType; // @synthesize isEncounterType=_isEncounterType;
@property(nonatomic) _Bool isFromNearFile; // @synthesize isFromNearFile=_isFromNearFile;
@property(nonatomic) _Bool viewDidAppeared; // @synthesize viewDidAppeared=_viewDidAppeared;
@property(nonatomic) int groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *remarkName; // @synthesize remarkName=_remarkName;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *openID; // @synthesize openID=_openID;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleGroupShareLocation:(id)arg1;
- (void)switchShareLocationAction:(id)arg1;
- (void)onQZoneCompetenceCompleteNoti:(id)arg1;
- (void)qZoneCompetenceSwitchAction:(id)arg1;
- (void)requestCompetenceInfo;
- (id)createDefaultStyleForCellWithIdentifier:(id)arg1;
- (void)tapGestureUpdated:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)getCompressImageByAsset:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)onFinishFileUpload:(id)arg1 info:(id)arg2;
- (void)onFileUploadProcess:(id)arg1 process:(double)arg2;
- (void)onStartFileUpload:(id)arg1;
- (void)didPickingImage:(id)arg1 thumbImage:(id)arg2;
- (void)uploadFile:(id)arg1 thumbImage:(id)arg2 gc:(unsigned long long)arg3;
- (void)showGetPhotoActionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showImagePicker;
- (void)showCamera;
- (id)GetCurrentNavigationController;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)actionChooseGroup;
- (void)goToGroupListChooseOperation;
- (void)goToGroupListChooseOperationUseForwardService;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)getHeaderViewHeightWithTitle:(id)arg1 section:(long long)arg2;
- (id)getHeaderViewWithTitle:(id)arg1 section:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateHeadView;
- (void)updateHeadViewWithNickName:(id)arg1 infoMsg:(id)arg2;
- (id)getTableHeaderView;
- (double)GetHeightOfIndexPath:(id)arg1;
- (_Bool)isAllQuestionAnswered;
- (int)getGroupId;
- (id)getRemarkName;
- (id)getMessage:(int)arg1;
- (id)getOldMsg;
- (void)saveMsg:(id)arg1;
- (void)updateRemarkName:(id)arg1 groupID:(int)arg2 groupName:(id)arg3;
- (void)updateGroupResult:(int)arg1;
@property(nonatomic) unsigned long long groupCode; // @dynamic groupCode;
- (void)resetFrameWithoutKeyboard:(struct CGRect)arg1;
- (id)init:(struct CGRect)arg1 settingDict:(id)arg2 delegate:(id)arg3 addFriendVCType:(int)arg4 friendUin:(id)arg5 groupSettingModel:(id)arg6;
- (void)dealloc;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardHide;
- (void)delayBecomeFirstResponder:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)makeInputFieldVisible;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)initSettingDataSource;
- (void)deregisterNotifications;
- (void)registerNotifications;
- (_Bool)isFromMoba;
- (_Bool)isFromGroupMemberBatchAdd;
- (_Bool)isFromContactBatchAdd;
- (_Bool)isFromByOpenID;
- (_Bool)isFromGroup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned int fileID; // @dynamic fileID;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isGroupWrongAnswer; // @dynamic isGroupWrongAnswer;
@property(nonatomic) _Bool isShareLocationDefaultOn; // @dynamic isShareLocationDefaultOn;
@property(nonatomic) _Bool isShareLocationSwitchOn; // @dynamic isShareLocationSwitchOn;
@property(copy, nonatomic) NSString *md5; // @dynamic md5;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *url; // @dynamic url;

@end
