//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, QQAROD_BBox;

@interface QQARIRLogicRsp : NSObject
{
    int _iRetCode;
    int _iBusiness;
    NSString *_sMsg;
    NSMutableArray *_vClassInfo;
    NSString *_sKey;
    QQAROD_BBox *_stBBox;
}

@property(retain, nonatomic) QQAROD_BBox *stBBox; // @synthesize stBBox=_stBBox;
@property(retain, nonatomic) NSString *sKey; // @synthesize sKey=_sKey;
@property(nonatomic) int iBusiness; // @synthesize iBusiness=_iBusiness;
@property(retain, nonatomic) NSMutableArray *vClassInfo; // @synthesize vClassInfo=_vClassInfo;
@property(retain, nonatomic) NSString *sMsg; // @synthesize sMsg=_sMsg;
@property(nonatomic) int iRetCode; // @synthesize iRetCode=_iRetCode;
- (void).cxx_destruct;

@end

