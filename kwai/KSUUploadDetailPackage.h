//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface KSUUploadDetailPackage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long completedLength; // @dynamic completedLength;
@property(nonatomic) unsigned long long encodeConfigId; // @dynamic encodeConfigId;
@property(nonatomic) unsigned int failedSegments; // @dynamic failedSegments;
@property(nonatomic) unsigned long long fileLength; // @dynamic fileLength;
@property(nonatomic) int fileType; // @dynamic fileType;
@property(copy, nonatomic) NSString *host; // @dynamic host;
@property(copy, nonatomic) NSString *ip; // @dynamic ip;
@property(nonatomic) _Bool segmentUploadEnabled; // @dynamic segmentUploadEnabled;
@property(nonatomic) _Bool segmentUploadFirst; // @dynamic segmentUploadFirst;
@property(nonatomic) unsigned int segmentUploadTryCount; // @dynamic segmentUploadTryCount;
@property(nonatomic) unsigned int segments; // @dynamic segments;
@property(nonatomic) unsigned int wholeUploadTryCount; // @dynamic wholeUploadTryCount;

@end

