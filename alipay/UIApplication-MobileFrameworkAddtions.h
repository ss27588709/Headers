//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface UIApplication (MobileFrameworkAddtions)
@property(nonatomic) _Bool launchFromBackground;
@property(nonatomic) unsigned long long backgroundFetchCounter;
@property(nonatomic) _Bool underBackgroundFetch;
@property(nonatomic) _Bool bCoverInstallation;
@property(nonatomic) _Bool bFirstInstalled;
@property(retain, nonatomic) NSString *sourceId;
@property(nonatomic) int launchFlag;
@property(retain, nonatomic) NSDictionary *lastRemoteNotification;
@property(retain, nonatomic) NSDate *appActiveTime;
@property(nonatomic) _Bool launchingOpenURL;
@property(retain, nonatomic) NSURL *lastOpenedURL;
@property(retain, nonatomic) NSDictionary *launchOptions;
@end
