//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, TTImageInfosModel, UIColor;

@interface TTAdCanvasViewModel : NSObject
{
    _Bool _hasCreateFeedData;
    _Bool _disableShare;
    NSDictionary *_layoutInfo;
    NSDictionary *_adInfo;
    NSDictionary *_createFeedData;
    long long _animationStyle;
    TTImageInfosModel *_canvasImageModel;
    TTImageInfosModel *_sourceImageModel;
    long long _openStrategy;
    UIColor *_rootViewColor;
    NSString *_log_extra;
    NSString *_ad_id;
    NSString *_fromSource;
    struct CGRect _soureImageFrame;
}

@property(nonatomic) _Bool disableShare; // @synthesize disableShare=_disableShare;
@property(copy, nonatomic) NSString *fromSource; // @synthesize fromSource=_fromSource;
@property(copy, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
@property(copy, nonatomic) NSString *log_extra; // @synthesize log_extra=_log_extra;
@property(retain, nonatomic) UIColor *rootViewColor; // @synthesize rootViewColor=_rootViewColor;
@property(nonatomic) long long openStrategy; // @synthesize openStrategy=_openStrategy;
@property(nonatomic) struct CGRect soureImageFrame; // @synthesize soureImageFrame=_soureImageFrame;
@property(retain, nonatomic) TTImageInfosModel *sourceImageModel; // @synthesize sourceImageModel=_sourceImageModel;
@property(retain, nonatomic) TTImageInfosModel *canvasImageModel; // @synthesize canvasImageModel=_canvasImageModel;
@property(nonatomic) long long animationStyle; // @synthesize animationStyle=_animationStyle;
@property(nonatomic) _Bool hasCreateFeedData; // @synthesize hasCreateFeedData=_hasCreateFeedData;
@property(copy, nonatomic) NSDictionary *createFeedData; // @synthesize createFeedData=_createFeedData;
@property(copy, nonatomic) NSDictionary *adInfo; // @synthesize adInfo=_adInfo;
@property(copy, nonatomic) NSDictionary *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;
- (id)initWithCondition:(id)arg1;

@end
