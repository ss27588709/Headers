//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FalconIDCardSMDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class FalconIDCardSM, NSString, UIImagePickerController, UIPopoverController;

@interface RNIPhotoManager : NSObject <FalconIDCardSMDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIAlertViewDelegate, UIWebViewDelegate>
{
    _Bool _isSingleSide;
    FalconIDCardSM *_falconIDCardController;
    long long _IDCardType;
    UIImagePickerController *_picker;
    UIPopoverController *_popOverController;
    NSString *_imgKey;
    CDUnknownBlockType _completionBlock;
}

@property(nonatomic) _Bool isSingleSide; // @synthesize isSingleSide=_isSingleSide;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *imgKey; // @synthesize imgKey=_imgKey;
@property(retain, nonatomic) UIPopoverController *popOverController; // @synthesize popOverController=_popOverController;
@property(retain, nonatomic) UIImagePickerController *picker; // @synthesize picker=_picker;
@property(nonatomic) long long IDCardType; // @synthesize IDCardType=_IDCardType;
@property(retain, nonatomic) FalconIDCardSM *falconIDCardController; // @synthesize falconIDCardController=_falconIDCardController;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)scaleImage:(id)arg1;
- (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;
- (id)compressAndEncodeImage:(id)arg1;
- (void)FalconIDCardSMViewController:(id)arg1 cardRecResult:(id)arg2;
- (void)showCameraDeniedAlert;
- (void)requestCameraAuthorization;
- (_Bool)isCameraAuthorized;
- (void)takePhotoWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

