//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, NSString, UIImage;

@interface ARScanAREnvelopModel : NSObject
{
    _Bool _isRealFriend;
    unsigned long long _envelopeType;
    NSString *_prevBiz;
    NSString *_arType;
    NSString *_crowdNo;
    NSString *_crowdSign;
    NSString *_picFeatures;
    NSString *_remark;
    NSString *_cocaTouchTip;
    NSString *_creatorUserId;
    NSString *_creatorImgUrl;
    NSString *_creatorUserName;
    NSString *_creatorAlipayAccount;
    CLLocation *_userLocation;
    NSString *_previewPicUrlString;
    NSString *_poiString;
    NSString *_picId;
    UIImage *_currentImage;
    NSString *_limiter;
}

@property(copy, nonatomic) NSString *limiter; // @synthesize limiter=_limiter;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(retain, nonatomic) NSString *picId; // @synthesize picId=_picId;
@property(retain, nonatomic) NSString *poiString; // @synthesize poiString=_poiString;
@property(retain, nonatomic) NSString *previewPicUrlString; // @synthesize previewPicUrlString=_previewPicUrlString;
@property(retain, nonatomic) CLLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(nonatomic) _Bool isRealFriend; // @synthesize isRealFriend=_isRealFriend;
@property(retain, nonatomic) NSString *creatorAlipayAccount; // @synthesize creatorAlipayAccount=_creatorAlipayAccount;
@property(retain, nonatomic) NSString *creatorUserName; // @synthesize creatorUserName=_creatorUserName;
@property(retain, nonatomic) NSString *creatorImgUrl; // @synthesize creatorImgUrl=_creatorImgUrl;
@property(retain, nonatomic) NSString *creatorUserId; // @synthesize creatorUserId=_creatorUserId;
@property(retain, nonatomic) NSString *cocaTouchTip; // @synthesize cocaTouchTip=_cocaTouchTip;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *picFeatures; // @synthesize picFeatures=_picFeatures;
@property(retain, nonatomic) NSString *crowdSign; // @synthesize crowdSign=_crowdSign;
@property(retain, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
@property(retain, nonatomic) NSString *arType; // @synthesize arType=_arType;
@property(retain, nonatomic) NSString *prevBiz; // @synthesize prevBiz=_prevBiz;
@property(nonatomic) unsigned long long envelopeType; // @synthesize envelopeType=_envelopeType;
- (void).cxx_destruct;

@end

