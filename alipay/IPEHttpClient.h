//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IPEHttpClient : NSObject
{
}

+ (void)requestUrl:(id)arg1 paramters:(id)arg2 httpMethod:(id)arg3 succBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
+ (_Bool)isNSStringAndNotEmpty:(id)arg1;
+ (id)stringUrlEncode:(id)arg1;
+ (id)orderParametersDicToString:(id)arg1 removeKeys:(id)arg2;
+ (id)addSignToOldParameters:(id)arg1;
+ (id)requestParamSign:(id)arg1;
+ (id)defaultParam;
+ (void)requestUrl:(id)arg1 paramters:(id)arg2 succBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end
