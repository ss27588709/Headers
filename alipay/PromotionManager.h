//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PromotionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_promotionUIQueue;
    NSObject<OS_dispatch_queue> *_promotionDataQueue;
    NSMutableDictionary *_promotionObserverDic;
    NSMutableArray *_handleAfterInitSpaceCodes;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *handleAfterInitSpaceCodes; // @synthesize handleAfterInitSpaceCodes=_handleAfterInitSpaceCodes;
@property(retain, nonatomic) NSMutableDictionary *promotionObserverDic; // @synthesize promotionObserverDic=_promotionObserverDic;
- (void).cxx_destruct;
- (void)feedbackWithInfo:(id)arg1 objectId:(id)arg2 behavior:(id)arg3 needUpdateLocalInfo:(_Bool)arg4 completionOnMainQueue:(CDUnknownBlockType)arg5;
- (void)feedback:(id)arg1 objectId:(id)arg2 behavior:(id)arg3 completionOnMainQueue:(CDUnknownBlockType)arg4;
- (void)sendPromotionViewWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendNilPromotion:(id)arg1;
- (void)sendPromotionSpaceView:(id)arg1 Observer:(id)arg2;
- (void)sendPromotionViewWithModel:(id)arg1 viewController:(id)arg2;
- (void)sendPromotionDataWithModel:(id)arg1;
- (void)sendDataAndViewToObserver:(id)arg1 spaceCode:(id)arg2 returnedCacheSpaceInfos:(id)arg3 extInfo:(id)arg4;
- (_Bool)isAdCodeChanged:(id)arg1 spaceCode:(id)arg2;
- (void)getLbsInfoWithExtInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)needRpcWithLBS:(id)arg1 extInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCDPData:(id)arg1 extInfo:(id)arg2 returnedCacheSpaceInfos:(id)arg3 spaceCodesWithLbs:(id)arg4;
- (void)getCDPSpaceViewByCodes:(id)arg1 extInfo:(id)arg2 immediately:(_Bool)arg3;
- (void)getCDPSpaceViewByCodes:(id)arg1 extInfo:(id)arg2 immediately:(_Bool)arg3 fromCheck:(_Bool)arg4;
- (void)addObserver:(id)arg1 spaceCodes:(id)arg2 observerType:(int)arg3;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 spaceCode:(id)arg2;
- (void)checkSpaceCodes:(id)arg1 extInfo:(id)arg2 immediately:(_Bool)arg3;
- (void)addObserver:(id)arg1 spaceCodesForView:(id)arg2 spaceCodesForData:(id)arg3 extInfo:(id)arg4 immediately:(_Bool)arg5 onlyForRegister:(_Bool)arg6;
- (void)dataSourceInitFinishNotification;
- (void)viewShouldUpdateBySpaceInfos:(id)arg1;
- (id)getPromotionDataQueue;
- (id)getPromotionUIQueue;
- (void)dealloc;

@end
