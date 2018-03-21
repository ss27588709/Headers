//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IAsynDownloadImageObserver-Protocol.h>

@class NSMutableDictionary, NSString, QQVIPComicColorFulEggsMsgModel;

@interface QQVIPFunctionComicColorFulEggsManager : NSObject <IAsynDownloadImageObserver>
{
    QQVIPComicColorFulEggsMsgModel *_curModel;
    QQVIPComicColorFulEggsMsgModel *_aboutToJumpModel;
    NSMutableDictionary *_aboutToJumpUrlDic;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)downLoadImageFail:(id)arg1;
- (void)downloadImageFinished:(id)arg1;
- (id)getModelFromFile;
- (void)writeModelToFile;
- (id)getModelPath;
- (void)showColorFulEggsDlgWhenBackToReaderIfNeed:(id)arg1;
- (void)showColorFulEggsDlgIfNeedWithimage:(id)arg1;
- (void)tryShowComicColorFulEggsDlg;
- (void)jumpToWebviewWithModel:(id)arg1 url:(id)arg2;
- (_Bool)isCurVcReader;
- (void)onComicColorFulEggsImageViewClickNotice:(id)arg1;
- (void)onQQVIPFunctionComicColorFulEggsMsgNotice:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
