//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ALBBCookieManager : NSObject
{
}

+ (void)handleCookies:(id)arg1 cookieArray:(id)arg2;
+ (void)deleteCookies:(_Bool)arg1;
+ (void)loadCookies;
+ (void)saveDomain:(id)arg1;
+ (void)saveCookies:(id)arg1;
+ (void)deleteCookieForName:(id)arg1;
+ (id)cookieForName:(id)arg1;
+ (id)cookiesWithCookieString:(id)arg1;
+ (id)standardizeCookieProperties:(id)arg1;
+ (id)cookiePropertiesWithCookieString:(id)arg1;

@end

