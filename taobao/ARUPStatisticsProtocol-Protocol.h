//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol ARUPStatisticsProtocol <NSObject>

@optional
- (void)report:(NSString *)arg1 biz:(NSString *)arg2 ip:(NSString *)arg3 port:(int)arg4 ret:(int)arg5 size:(float)arg6 costTime:(float)arg7 fileID:(NSString *)arg8 token:(NSString *)arg9 errorCode:(int)arg10 subcode:(int)arg11 errorMsg:(NSString *)arg12 retryTimes:(int)arg13 connectiontime:(float)arg14 fileMD5Time:(float)arg15 encrypted:(NSString *)arg16 exitDict:(NSDictionary *)arg17;
@end

