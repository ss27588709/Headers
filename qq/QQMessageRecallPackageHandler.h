//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQMessageRecallPackageHandler : NSObject
{
}

+ (_Bool)parseDiscussRecallNotify:(char *)arg1 bufferLen:(unsigned int)arg2 model:(struct RecallModel *)arg3;
+ (void)parseDicussRecallNotify:(unsigned long long)arg1 decoder:(struct CPBMessageDecoder *)arg2 model:(struct RecallModel *)arg3;
+ (_Bool)parseGroupRecallNotify:(char *)arg1 bufferLen:(unsigned int)arg2 model:(struct RecallModel *)arg3;
+ (void)parseGroupRecallNotify:(unsigned long long)arg1 decoder:(struct CPBMessageDecoder *)arg2 model:(struct RecallModel *)arg3;
+ (void)parseC2CRecallInOut:(struct RecallItemForC2C *)arg1;
+ (_Bool)parseC2CRecallNotify:(const void *)arg1 bufferLen:(int)arg2 subcmd:(int)arg3 model:(struct RecallModel *)arg4;
+ (void)parseRecallResp:(CDStruct_7895f40e)arg1 outC2C:(struct RecallResp **)arg2 outGroup:(struct RecallRespForGroup **)arg3;

@end
