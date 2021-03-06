//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KOSessionTask, NSDictionary, NSString;

@protocol KOTalkMessageSending <NSObject>
- (KOSessionTask *)sendMessageWithTemplateId:(NSString *)arg1 templateArgs:(NSDictionary *)arg2 completionHandler:(void (^)(NSError *))arg3;

@optional
- (KOSessionTask *)sendMemoWithTemplateID:(NSString *)arg1 messageArguments:(NSDictionary *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (KOSessionTask *)sendMessageWithTemplateID:(NSString *)arg1 arguments:(NSDictionary *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (KOSessionTask *)sendMemoWithTemplateId:(NSString *)arg1 templateArgs:(NSDictionary *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

