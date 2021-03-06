//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface NaverOAuth20Result : NSObject
{
    NSString *_errorCode;
    NSString *_errorDescription;
    NSString *_accessToken;
    NSDate *_accessTokenExpireDate;
    NSString *_refreshToken;
    NSString *_tokenType;
}

@property(retain, nonatomic) NSDate *accessTokenExpireDate; // @synthesize accessTokenExpireDate=_accessTokenExpireDate;
@property(retain, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setOAuthResult:(id)arg1;
- (id)initData:(id)arg1;

@end

