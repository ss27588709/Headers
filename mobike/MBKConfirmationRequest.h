//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSNumber, NSString;

@interface MBKConfirmationRequest : MBKMobikeRequest
{
    _Bool _isactive;
    NSString *_bikeIds;
    NSNumber *_biketype;
    double _latitude;
    double _longitude;
}

@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) _Bool isactive; // @synthesize isactive=_isactive;
@property(nonatomic) NSNumber *biketype; // @synthesize biketype=_biketype;
@property(copy, nonatomic) NSString *bikeIds; // @synthesize bikeIds=_bikeIds;
- (void).cxx_destruct;
- (id)init;

@end

