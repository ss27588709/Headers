//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface PBClientSimpleAppReq : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPlatform;
    _Bool _hasPre;
    _Bool _hasWidth;
    _Bool _pre;
    int _width;
    NSString *_platform;
    NSMutableArray *_stageList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *stageList; // @synthesize stageList=_stageList;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) _Bool pre; // @synthesize pre=_pre;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly) _Bool hasWidth; // @synthesize hasWidth=_hasWidth;
@property(readonly) _Bool hasPre; // @synthesize hasPre=_hasPre;
@property(readonly) _Bool hasPlatform; // @synthesize hasPlatform=_hasPlatform;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addStageList:(id)arg1;
- (void)setStageListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
