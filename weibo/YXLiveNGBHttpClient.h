//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXLiveBaseHttpClient.h"

@interface YXLiveNGBHttpClient : YXLiveBaseHttpClient
{
}

+ (id)sharedInstance;
- (void)yxGetPath:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)postPath:(id)arg1 parameters:(id)arg2 queuePriority:(long long)arg3 cacheRequest:(_Bool)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6 cached:(CDUnknownBlockType)arg7;
- (void)getAlCDNPlayUrlWithDomain:(id)arg1 aliIp:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getAliCDNPublishUrlWithSourceDomain:(id)arg1 aliIp:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getTXCDNPublishUrlWithSourceUrl:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getKSYCDNPlayUrlWithDomain:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getKSYCDNPublishUrlWithSourceDomain:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getWSCDNPlayUrlWithProtocolDomainChannel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getWSCDNPublishUrlWithSourceUrl:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

