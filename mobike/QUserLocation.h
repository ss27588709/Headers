//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QAnnotation-Protocol.h"

@class CLHeading, CLLocation, NSString, QMMapView, UIView;

@interface QUserLocation : NSObject <QAnnotation>
{
    _Bool canMaskAnimation;
    _Bool autoAdjustCalloutViewPositon;
    QMMapView *_mapView;
    struct CLLocationCoordinate2D coordinate;
}

@property(nonatomic) __weak QMMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) _Bool autoAdjustCalloutViewPositon; // @synthesize autoAdjustCalloutViewPositon;
@property(nonatomic) _Bool canMaskAnimation; // @synthesize canMaskAnimation;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
- (void).cxx_destruct;
@property(readonly, nonatomic) CLHeading *heading;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) double horizontalAccuracy;
@property(readonly, nonatomic) double course;
@property(readonly, nonatomic) double speed;
- (id)initWithMapView:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) UIView *customCalloutView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

