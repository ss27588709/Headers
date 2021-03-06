//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, UIView;

@protocol TTAdSplashDelegate <NSObject>

@optional
- (NSString *)splashReadMoreString;
- (NSString *)splashOpenAppString;
- (UIView *)splashReadMoreView;
- (UIView *)splashWifiView;
- (UIView *)splashLogoView;
- (UIView *)splashBGViewWithFrame:(struct CGRect)arg1;
- (void)splashActionWithCondition:(NSDictionary *)arg1;
- (void)trackWithTag:(NSString *)arg1 label:(NSString *)arg2 extra:(NSDictionary *)arg3;
- (void)trackURLs:(NSArray *)arg1 dict:(NSDictionary *)arg2;
- (void)splashViewDidDisappear;
- (void)splashViewWillAppear;
- (_Bool)enableSplashLog;
- (NSString *)splashSkipBtnName;
- (NSString *)splashArrowImageName;
- (NSString *)splashViewMoreImageName;
- (NSString *)splashWifiImageName;
- (NSString *)splashVideoLogoName;
- (NSString *)splashBgImageName;
- (NSString *)installId;
- (NSString *)deviceId;
- (NSNumber *)ntType;
- (NSString *)splashNetwokType;
- (NSString *)splashPathUrl;
- (NSString *)splashBaseUrl;
- (void)requestWithUrl:(NSString *)arg1 responseBlock:(void (^)(NSData *, NSError *, long long))arg2;
@end

