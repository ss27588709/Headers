//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEAddressModel, AWEShareModel, AWEURLModel, NSString;

@interface AWEPOIInfoModel : AWEBaseApiModel
{
    NSString *_poiID;
    NSString *_poiName;
    NSString *_typeCode;
    long long _userCount;
    long long _itemCount;
    AWEShareModel *_shareInfo;
    AWEURLModel *_coverHD;
    AWEURLModel *_coverLarge;
    AWEURLModel *_coverMedium;
    AWEURLModel *_coverThumb;
    NSString *_distance;
    AWEAddressModel *_addressInfo;
    unsigned long long _iconType;
}

+ (id)placeholderObjectForEmpty;
+ (id)placeholderObjectForSchool;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) unsigned long long iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) AWEAddressModel *addressInfo; // @synthesize addressInfo=_addressInfo;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) AWEURLModel *coverThumb; // @synthesize coverThumb=_coverThumb;
@property(retain, nonatomic) AWEURLModel *coverMedium; // @synthesize coverMedium=_coverMedium;
@property(retain, nonatomic) AWEURLModel *coverLarge; // @synthesize coverLarge=_coverLarge;
@property(retain, nonatomic) AWEURLModel *coverHD; // @synthesize coverHD=_coverHD;
@property(retain, nonatomic) AWEShareModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) long long userCount; // @synthesize userCount=_userCount;
@property(copy, nonatomic) NSString *typeCode; // @synthesize typeCode=_typeCode;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
- (void).cxx_destruct;

@end
