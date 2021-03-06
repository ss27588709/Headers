//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/BDHUploadDelegate-Protocol.h>

@class NSMutableDictionary, NSString, QQARRootParameterInfo, QQARUploadImgCallback;

@interface QQARCloudProcessorUpload : NSObject <BDHUploadDelegate>
{
    _Bool _savePicAfterRecog;
    _Bool _isUploadThisDealloc;
    int _uploadTimeOut;
    float _picQuality;
    NSMutableDictionary *_mUploadDetailMap;
    QQARRootParameterInfo *_mParameterinfo;
    QQARUploadImgCallback *_mCallback;
}

@property(nonatomic) _Bool isUploadThisDealloc; // @synthesize isUploadThisDealloc=_isUploadThisDealloc;
@property(nonatomic) float picQuality; // @synthesize picQuality=_picQuality;
@property(nonatomic) int uploadTimeOut; // @synthesize uploadTimeOut=_uploadTimeOut;
@property(nonatomic) _Bool savePicAfterRecog; // @synthesize savePicAfterRecog=_savePicAfterRecog;
@property(retain, nonatomic) QQARUploadImgCallback *mCallback; // @synthesize mCallback=_mCallback;
@property(retain, nonatomic) QQARRootParameterInfo *mParameterinfo; // @synthesize mParameterinfo=_mParameterinfo;
@property(retain, nonatomic) NSMutableDictionary *mUploadDetailMap; // @synthesize mUploadDetailMap=_mUploadDetailMap;
- (void).cxx_destruct;
- (void)storpCloudProcessor;
- (long long)upload:(long long)arg1 path:(id)arg2 md5:(id)arg3 imageSize:(struct CGSize)arg4 parameterinfo:(id)arg5;
- (void)notifyBDHFail:(long long)arg1 uploadDetail:(id)arg2 fail:(id)arg3;
- (void)notifyBDHSuccess:(long long)arg1 uploadDetail:(id)arg2;
- (void)notifyBDHProgress:(long long)arg1 progress:(float)arg2;
- (void)saveFileForDebug:(id)arg1 addTag:(id)arg2;
- (void)deleteFile:(id)arg1;
- (long long)startCloudProcessor:(id)arg1 parameterinfo:(id)arg2 callback:(id)arg3;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImageToPhotos:(id)arg1;
- (id)getImgFileDir;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

