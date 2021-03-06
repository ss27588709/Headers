//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBShopViewProtocol-Protocol.h"

@class CALayer, NSMutableArray, NSMutableDictionary, NSString, TBShopTabContainerViewModel;

@interface TBShopTabBarView : UIView <TBShopViewProtocol>
{
    _Bool _observered;
    CDUnknownBlockType _touchTabBtnHandler;
    NSMutableArray *_tabButtons;
    TBShopTabContainerViewModel *_data;
    CALayer *_indicatorLayer;
    NSMutableDictionary *_bgPicMap;
}

+ (id)viewHeightForData:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *bgPicMap; // @synthesize bgPicMap=_bgPicMap;
@property(nonatomic) _Bool observered; // @synthesize observered=_observered;
@property(retain, nonatomic) CALayer *indicatorLayer; // @synthesize indicatorLayer=_indicatorLayer;
@property(retain, nonatomic) TBShopTabContainerViewModel *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableArray *tabButtons; // @synthesize tabButtons=_tabButtons;
@property(copy, nonatomic) CDUnknownBlockType touchTabBtnHandler; // @synthesize touchTabBtnHandler=_touchTabBtnHandler;
- (void).cxx_destruct;
- (void)removeKVOForData:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)tabButtonAtIndex:(long long)arg1;
- (void)touchTabButtton:(id)arg1;
- (void)updateTabWhenSelected:(unsigned long long)arg1;
- (void)updateIndicatorWhenSelected:(unsigned long long)arg1;
- (void)setBtn:(id)arg1 Image:(id)arg2 forState:(unsigned long long)arg3 withDefaultImage:(id)arg4;
- (void)changePirateElfVisibleIfNeeded:(unsigned long long)arg1 nextIndex:(unsigned long long)arg2;
- (void)changeSelectWithoutCallback:(unsigned long long)arg1;
- (void)bindData:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithContext:(id)arg1 identifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

