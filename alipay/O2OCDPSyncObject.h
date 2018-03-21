//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMaskProcesser.h"

#import "O2OMaskViewCancleDelegate-Protocol.h"

@class CDPSpaceInfo, NSString, UIImage;
@protocol SDWebImageOperation;

@interface O2OCDPSyncObject : O2OMaskProcesser <O2OMaskViewCancleDelegate>
{
    _Bool _haveRedPoint;
    _Bool _hasMaskTap;
    unsigned long long _priority;
    NSString *_objectId;
    CDPSpaceInfo *_spaceInfo;
    NSString *_type;
    NSString *_content;
    NSString *_iconURL;
    NSString *_maskURL;
    NSString *_actionUrl;
    UIImage *_maskImage;
    UIImage *_iconImage;
    UIImage *_defaultIconImage;
    UIImage *_defaultMaskImage;
    id <SDWebImageOperation> _imageDownloadOperation;
}

+ (id)syncObjectWithType:(id)arg1 iconURL:(id)arg2 maskURL:(id)arg3 actionUrl:(id)arg4 objectId:(id)arg5 priority:(unsigned long long)arg6;
@property(nonatomic) _Bool hasMaskTap; // @synthesize hasMaskTap=_hasMaskTap;
@property(retain, nonatomic) id <SDWebImageOperation> imageDownloadOperation; // @synthesize imageDownloadOperation=_imageDownloadOperation;
@property(nonatomic) _Bool haveRedPoint; // @synthesize haveRedPoint=_haveRedPoint;
@property(retain, nonatomic) UIImage *defaultMaskImage; // @synthesize defaultMaskImage=_defaultMaskImage;
@property(retain, nonatomic) UIImage *defaultIconImage; // @synthesize defaultIconImage=_defaultIconImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *maskURL; // @synthesize maskURL=_maskURL;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) CDPSpaceInfo *spaceInfo; // @synthesize spaceInfo=_spaceInfo;
@property(readonly, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (_Bool)compared:(id)arg1 compareTo:(id)arg2;
- (_Bool)isIdenticalTo:(id)arg1;
- (void)hideMaskView;
- (void)tapCancleImage;
- (void)cancelMaskView;
- (void)tapMaskImage;
- (void)showMaskView;
- (_Bool)available;
- (void)check;
- (void)hide;
- (void)show;
- (void)process;
- (void)downloadImage:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
