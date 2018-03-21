//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQZUrlDownloaderDelegate-Protocol.h>

@class NSString;

@interface QzCustomPraiseManager : NSObject <IQZUrlDownloaderDelegate>
{
    _Bool _isShowPassivePraise;
}

+ (void)runOCSPluginWithSucessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
+ (id)instance;
+ (id)unzipPathForComboZip:(id)arg1;
+ (id)unzipPathForAnimZip:(id)arg1;
+ (id)unzipPathForBirthdayAnimZip:(id)arg1;
+ (id)savePathForPraiseBeforeIcon:(id)arg1;
+ (id)savePathForButtonIcon:(id)arg1;
+ (id)CustomPraisePath;
+ (id)ComboImageWithUrl:(id)arg1 count:(long long)arg2;
+ (id)FileListWithPath:(id)arg1;
+ (id)FrameAnimFileList:(id)arg1;
+ (id)BirthdayFrameAnimFileList:(id)arg1;
+ (id)ButtonIcon:(id)arg1;
+ (void)downloadResource:(id)arg1 type:(unsigned long long)arg2;
+ (void)downloadResource:(id)arg1 type:(unsigned long long)arg2 keySuffix:(id)arg3;
+ (_Bool)isResourceReady:(id)arg1 type:(unsigned long long)arg2;
+ (_Bool)isResourceForFeedReady:(id)arg1;
+ (_Bool)isSelfResourceReady:(id)arg1;
+ (id)readSetting;
+ (void)writeSetting:(id)arg1 caller:(id)arg2;
- (void)setPassivePraiseSwitch:(_Bool)arg1;
- (_Bool)isShowPassivePraise;
- (void)preLoadComboCountWithId:(id)arg1;
- (void)unzipAndFixFileName:(id)arg1 destDir:(id)arg2;
- (void)requestFinished:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
