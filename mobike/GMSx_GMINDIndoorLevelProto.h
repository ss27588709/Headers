//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GSRectProto, GMSx_PBMutableArray, NSString;

@interface GMSx_GMINDIndoorLevelProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int averageElevationMeters; // @dynamic averageElevationMeters;
@property(retain, nonatomic) GMSx_PBMutableArray *enclosingBuildingArray; // @dynamic enclosingBuildingArray;
@property(nonatomic) _Bool hasAverageElevationMeters; // @dynamic hasAverageElevationMeters;
@property(nonatomic) _Bool hasEnclosingBuildingArray; // @dynamic hasEnclosingBuildingArray;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasNumberE3; // @dynamic hasNumberE3;
@property(nonatomic) _Bool hasPreferredViewport; // @dynamic hasPreferredViewport;
@property(nonatomic) _Bool hasShortName; // @dynamic hasShortName;
@property(retain, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int numberE3; // @dynamic numberE3;
@property(retain, nonatomic) GMSx_GSRectProto *preferredViewport; // @dynamic preferredViewport;
@property(retain, nonatomic) NSString *shortName; // @dynamic shortName;

@end
