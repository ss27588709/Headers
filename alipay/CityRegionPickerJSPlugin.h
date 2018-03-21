//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PSDPluginProtocol-Protocol.h"

@class NSString;

@interface CityRegionPickerJSPlugin : NSObject <PSDPluginProtocol>
{
    CDUnknownBlockType _regionPickerCallback;
    CDUnknownBlockType _bankCardChannelCallback;
}

@property(copy, nonatomic) CDUnknownBlockType bankCardChannelCallback; // @synthesize bankCardChannelCallback=_bankCardChannelCallback;
@property(copy, nonatomic) CDUnknownBlockType regionPickerCallback; // @synthesize regionPickerCallback=_regionPickerCallback;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name;
- (void)handleEvent:(id)arg1;
- (void)dealloc;
- (void)didCancelRegionPicker;
- (void)didSelectedRegionPicker:(id)arg1;
- (void)gotoRegionRootViewController:(id)arg1 withLastSelected:(id)arg2;
- (void)gotoSubRegionViewController:(id)arg1 withLastSelected:(id)arg2;
- (id)convertSourceRegion:(id)arg1;
- (id)findReigionFilterCountry:(id)arg1 filterArray:(id)arg2;
- (id)readLocalDataWithLastSelected:(id)arg1;
- (void)handleWithParams:(id)arg1;
- (id)convertJsonToValidData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
