//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileHandle, NSFileManager;

@interface WBRecordDebug : NSObject
{
    NSFileManager *_fileManager;
    NSFileHandle *_fileHandler;
}

@property(retain, nonatomic) NSFileHandle *fileHandler; // @synthesize fileHandler=_fileHandler;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (id)getLogContent;
- (void)writeLogWithString:(id)arg1;
- (void)logWithString:(id)arg1;
- (id)nowComponents;
- (_Bool)createDirectoryIfNotExist:(id)arg1;
- (id)logFullPath;
- (void)dealloc;
- (id)init;

@end

