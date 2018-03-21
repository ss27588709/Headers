//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ARUPFileInfo : NSObject
{
    NSString *_fileName;
    NSString *_filePath;
    NSDictionary *_xArupMeta;
    NSString *_fileID;
    NSString *_fileMD5;
    double _fileSize;
    double _fileMD5ConsumeTime;
}

@property(readonly, nonatomic) double fileMD5ConsumeTime; // @synthesize fileMD5ConsumeTime=_fileMD5ConsumeTime;
@property(readonly, nonatomic) double fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(readonly, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) NSDictionary *xArupMeta; // @synthesize xArupMeta=_xArupMeta;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)arg1 fileName:(id)arg2 xArupMeta:(id)arg3 error:(id *)arg4;
- (id)initWithFilePath:(id)arg1 fileName:(id)arg2 xArupMeta:(id)arg3 xArupCusMeta:(id)arg4 error:(id *)arg5;

@end
