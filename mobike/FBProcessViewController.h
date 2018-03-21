//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "JTSImageViewControllerDismissalDelegate-Protocol.h"
#import "JTSImageViewControllerOptionsDelegate-Protocol.h"
#import "ProcessFtrDelegate-Protocol.h"
#import "SendMessageDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SendMessageView, UILabel, UITableView, UIView;

@interface FBProcessViewController : MBKBaseViewController <UITableViewDelegate, UITableViewDataSource, ProcessFtrDelegate, JTSImageViewControllerDismissalDelegate, JTSImageViewControllerOptionsDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, SendMessageDelegate, UIActionSheetDelegate>
{
    _Bool isEditFTR;
    NSString *_ticketId;
    UILabel *_procellLabel;
    UILabel *_ticketLabel;
    UITableView *_tableView;
    NSMutableArray *_items;
    UIView *_bottomView;
    SendMessageView *_sendMsgView;
}

@property(retain, nonatomic) SendMessageView *sendMsgView; // @synthesize sendMsgView=_sendMsgView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *ticketLabel; // @synthesize ticketLabel=_ticketLabel;
@property(retain, nonatomic) UILabel *procellLabel; // @synthesize procellLabel=_procellLabel;
@property(retain, nonatomic) NSString *ticketId; // @synthesize ticketId=_ticketId;
- (void).cxx_destruct;
- (void)saveImage:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)openImagePickerControllerWith:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)uploadServiceWithText:(id)arg1 keys:(id)arg2;
- (void)getuploadtoken:(id)arg1;
- (void)sendMessage:(id)arg1 text:(id)arg2;
- (void)openCameraAction:(id)arg1;
- (void)changeContentViewPoint:(id)arg1;
- (void)sendMsgViewResign:(_Bool)arg1;
- (void)popInputView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)canSendMessage:(_Bool)arg1;
- (id)tableHeaderView;
- (void)updateHeaderView:(id)arg1;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)imageViewerDidDismiss:(id)arg1;
- (void)reViewImage:(id)arg1 superView:(id)arg2;
- (void)checkFTRImage:(id)arg1 index:(long long)arg2 cell:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)setupView;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)requestProcess;
- (void)setupController;
- (id)createNavigationBar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
