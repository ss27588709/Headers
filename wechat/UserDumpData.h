//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSData;

@interface UserDumpData : MMObject
{
    unsigned int compressedBufSize;
    NSData *data;
}

+ (void)initialize;
@property(retain, nonatomic) NSData *data; // @synthesize data;
@property(nonatomic) unsigned int compressedBufSize; // @synthesize compressedBufSize;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

