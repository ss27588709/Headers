//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KABAOPRODKabaoCommonResult.h"

@class KABAOPRODPassInfo, NSArray;

@interface KABAOPRODPassInfoResult : KABAOPRODKabaoCommonResult
{
    KABAOPRODPassInfo *_passInfo;
    NSArray *_passList;
}

+ (Class)passListElementClass;
@property(retain, nonatomic) NSArray *passList; // @synthesize passList=_passList;
@property(retain, nonatomic) KABAOPRODPassInfo *passInfo; // @synthesize passInfo=_passInfo;
- (void).cxx_destruct;

@end

