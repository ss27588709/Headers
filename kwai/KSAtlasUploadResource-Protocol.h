//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol KSAtlasUploadResource <NSObject>
- (NSDictionary *)addictionalParams;
- (NSString *)fileName;
- (NSString *)name;
- (unsigned long long)index;
- (NSData *)data;
- (NSString *)mimeType;
- (NSString *)remotePath;

@optional
- (NSString *)extraInfo;
- (NSString *)localPath;
@end
