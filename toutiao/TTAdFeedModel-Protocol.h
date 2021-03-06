//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTAd-Protocol.h"
#import "TTAdAppAction-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, TTImageInfosModel;

@protocol TTAdFeedModel <TTAd, TTAdAppAction>
@property(copy, nonatomic) NSString *source;
@property(retain, nonatomic) TTImageInfosModel *imageModel;
@property(retain, nonatomic) NSNumber *ui_type;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *playOverTrackUrls;
@property(copy, nonatomic) NSArray *effectivePlayTrackUrls;
@property(copy, nonatomic) NSArray *activePlayTrackUrls;
@property(copy, nonatomic) NSArray *playTrackUrls;
@property(nonatomic) double effectivePlayTime;
@property(copy, nonatomic) NSArray *click_track_url_list;
@property(copy, nonatomic) NSArray *track_url_list;
@property(copy, nonatomic) NSDictionary *location_data;
@property(copy, nonatomic) NSString *location_url;
@property(readonly, copy, nonatomic) NSString *locationDisdance;
@property(readonly, copy, nonatomic) NSString *locationStreet;
@property(readonly, copy, nonatomic) NSString *locationDistrict;
@property(retain, nonatomic) NSNumber *hideIfExists;
@property(retain, nonatomic) NSNumber *dialActionType;
@property(copy, nonatomic) NSString *phoneNumber;
@property(retain, nonatomic) NSNumber *use_size_validation;
@property(retain, nonatomic) NSNumber *form_height;
@property(retain, nonatomic) NSNumber *form_width;
@property(copy, nonatomic) NSString *form_url;
@property(copy, nonatomic) NSString *descInfo;
@property(copy, nonatomic) NSString *appName;
@property(copy, nonatomic) NSString *webTitle;
@property(copy, nonatomic) NSString *webURL;
@property(copy, nonatomic) NSString *sub_title;
@property(nonatomic) long long displayType;
@property(copy, nonatomic) NSString *type;
- (NSDictionary *)mointerInfo;
- (_Bool)showActionButtonIcon;
- (_Bool)showActionButton;
- (_Bool)isCreativeAd;
- (NSString *)actionButtonTitle;
- (long long)adType;
@end

