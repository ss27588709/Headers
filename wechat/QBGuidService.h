//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBWupService.h"

@interface QBGuidService : QBWupService
{
}

+ (void)saveGuidData:(id)arg1 returnCode:(long long)arg2;
+ (id)service;
- (id)getGuidWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getGuidWithTrigeredType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

