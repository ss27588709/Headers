//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GMPEpochResources;

@interface GMSx_GMPPaintParameterResponse : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMPEpochResources *epochResources; // @dynamic epochResources;
@property(nonatomic) _Bool hasEpochResources; // @dynamic hasEpochResources;
@property(nonatomic) _Bool hasRequestSigningKey; // @dynamic hasRequestSigningKey;
@property(nonatomic) _Bool hasTileControlKey; // @dynamic hasTileControlKey;
@property(nonatomic) unsigned int requestSigningKey; // @dynamic requestSigningKey;
@property(nonatomic) unsigned int tileControlKey; // @dynamic tileControlKey;

@end

