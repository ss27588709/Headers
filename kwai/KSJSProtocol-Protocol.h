//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol KSJSProtocol
- (void)clearClipBoard:(NSString *)arg1;
- (void)startWatchForTaoPass:(NSString *)arg1;
- (void)popToPageWithUid:(NSString *)arg1 callback:(NSString *)arg2;
- (void)dropPageWithUid:(NSString *)arg1 callback:(NSString *)arg2;
- (void)exitAll;
- (void)exitWebView;
- (void)popBack;
- (void)loadUrlOnNewPage:(NSString *)arg1 leftTopBtnType:(NSString *)arg2 uid:(NSString *)arg3;
- (void)setUid:(NSString *)arg1;
- (void)getUid:(NSString *)arg1;
- (void)runSequencialTasks:(NSArray *)arg1 callback:(NSString *)arg2;
- (void)onItemSelected:(NSDictionary *)arg1;
- (void)getFeed:(NSString *)arg1 callback:(NSString *)arg2;
- (void)selectAndUploadMedia:(NSDictionary *)arg1;
- (void)submitData:(NSDictionary *)arg1 type:(NSString *)arg2 query:(NSDictionary *)arg3;
- (void)submitData:(NSDictionary *)arg1 type:(NSString *)arg2;
- (void)showPicker:(NSString *)arg1 callback:(NSString *)arg2;
- (void)selectCity:(NSString *)arg1;
- (void)verifySMSCode:(NSString *)arg1 info:(NSString *)arg2 type:(int)arg3 needMobile:(_Bool)arg4 submitBtnText:(NSString *)arg5 preventPopBackOnSubmit:(_Bool)arg6 callback:(NSString *)arg7;
- (void)verifyAccount:(NSString *)arg1 callback:(NSString *)arg2;
- (void)webLogin:(NSString *)arg1;
- (void)loadUrlOnNewPage:(NSString *)arg1 leftTopBtnType:(NSString *)arg2;
- (void)setSwipeBackEnabled:(_Bool)arg1;
- (void)showSocialShareBoard:(NSDictionary *)arg1;
- (void)realNameAuthentication:(NSDictionary *)arg1;
- (void)iapPaymentWithFen:(NSNumber *)arg1 coin:(NSNumber *)arg2 itemName:(NSString *)arg3 onSuccess:(void (^)(void))arg4 onError:(void (^)(NSError *))arg5 onCancel:(void (^)(void))arg6;
- (void)sendSMS:(NSString *)arg1 content:(NSString *)arg2 callback:(NSString *)arg3;
- (void)uploadContacts:(NSString *)arg1;
- (void)bindPhone:(NSString *)arg1;
- (void)selectImage:(NSDictionary *)arg1;
- (void)updateAuthorizeVideoWithToken:(NSString *)arg1 showUserPortrait:(_Bool)arg2 steps:(NSArray *)arg3 callback:(NSString *)arg4;
- (void)captureCertVideo:(_Bool)arg1 steps:(NSArray *)arg2 callback:(NSString *)arg3;
- (void)selectCountryPhoneCode:(NSString *)arg1;
- (void)verifyThirdPartyLogin:(NSString *)arg1 callback:(NSString *)arg2;
- (void)freeTrafficNeedUpdateState:(NSDictionary *)arg1;
- (void)simCardinfoForFreeTrafficWithCallback:(NSString *)arg1;
- (void)hasInstalledApp:(NSString *)arg1 callback:(NSString *)arg2;
- (void)openPage:(NSString *)arg1 annotation:(id)arg2;
- (void)getDeviceInfo:(NSString *)arg1;
- (void)setMiddleSlideBackEnabled:(_Bool)arg1;
- (void)showDialog:(NSDictionary *)arg1;
- (void)showToast:(NSString *)arg1 text:(NSString *)arg2;
- (void)setRightNavBtnStyle:(NSDictionary *)arg1;
- (void)setSecondLeftNavBtnStyle:(NSDictionary *)arg1;
- (void)setLeftNavBtnStyle:(NSDictionary *)arg1;
- (void)setPageTitle:(NSString *)arg1;
@end
