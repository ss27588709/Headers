//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface QZConfigTask : NSObject
{
    NSString *_taskId;
    NSDictionary *_jsonDic;
    NSString *_jsonStr;
    id _object;
}

+ (id)md5:(id)arg1;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(retain, nonatomic) NSString *jsonStr; // @synthesize jsonStr=_jsonStr;
@property(retain, nonatomic) NSDictionary *jsonDic; // @synthesize jsonDic=_jsonDic;
@property(readonly, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (long long)integerOfKey:(id)arg1;
- (_Bool)writeToFile:(id)arg1;

@end
