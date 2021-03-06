//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKHailingCar, NSMutableDictionary;

@interface MBKRideHailingCarPositionService : NSObject
{
    MBKHailingCar *_carInfo;
    NSMutableDictionary *_orderDictionary;
    struct CLLocationCoordinate2D _carPosition;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *orderDictionary; // @synthesize orderDictionary=_orderDictionary;
@property(retain, nonatomic) MBKHailingCar *carInfo; // @synthesize carInfo=_carInfo;
@property(nonatomic) struct CLLocationCoordinate2D carPosition; // @synthesize carPosition=_carPosition;
- (void).cxx_destruct;
- (void)handleRideHailingCarPositionResponse:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoringWithOrderId:(id)arg1 driverId:(id)arg2;

@end

