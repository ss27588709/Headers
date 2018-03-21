//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WAPrefetchSequenceInfo : MMObject <WCTTableCoding>
{
    unsigned int _cmdType;
    unsigned int _sequence;
    NSString *_cmdId;
    NSString *_appId;
}

+ (const struct WCTProperty *)sequence;
+ (const struct WCTProperty *)cmdType;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)cmdId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned int sequence; // @synthesize sequence=_sequence;
@property(nonatomic) unsigned int cmdType; // @synthesize cmdType=_cmdType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *cmdId; // @synthesize cmdId=_cmdId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
