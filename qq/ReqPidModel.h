//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ReqPidModel : NSObject
{
    int _selectedPoiLat;
    int _selectedPoiLon;
    unsigned int _allFriend;
    unsigned int _packIndex;
    int _selfPoiLastLat;
    int _selfPoiLastLon;
    int _selfPoiCurrentLat;
    int _selfPoiCurrentLon;
    unsigned int _selfTimeStamp;
    unsigned int _lbsAccuracy;
    unsigned long long _selectedPoiId;
    NSString *_selectedPoiName;
    NSString *_selectedPoiAddr;
    unsigned long long _friUin;
    unsigned long long _troopCode;
    unsigned long long _disGroupCode;
    NSString *_selfVerifyKey;
    NSString *_encrytSig;
}

@property(copy, nonatomic) NSString *encrytSig; // @synthesize encrytSig=_encrytSig;
@property(nonatomic) unsigned int lbsAccuracy; // @synthesize lbsAccuracy=_lbsAccuracy;
@property(copy, nonatomic) NSString *selfVerifyKey; // @synthesize selfVerifyKey=_selfVerifyKey;
@property(nonatomic) unsigned int selfTimeStamp; // @synthesize selfTimeStamp=_selfTimeStamp;
@property(nonatomic) int selfPoiCurrentLon; // @synthesize selfPoiCurrentLon=_selfPoiCurrentLon;
@property(nonatomic) int selfPoiCurrentLat; // @synthesize selfPoiCurrentLat=_selfPoiCurrentLat;
@property(nonatomic) int selfPoiLastLon; // @synthesize selfPoiLastLon=_selfPoiLastLon;
@property(nonatomic) int selfPoiLastLat; // @synthesize selfPoiLastLat=_selfPoiLastLat;
@property(nonatomic) unsigned int packIndex; // @synthesize packIndex=_packIndex;
@property(nonatomic) unsigned long long disGroupCode; // @synthesize disGroupCode=_disGroupCode;
@property(nonatomic) unsigned long long troopCode; // @synthesize troopCode=_troopCode;
@property(nonatomic) unsigned long long friUin; // @synthesize friUin=_friUin;
@property(nonatomic) unsigned int allFriend; // @synthesize allFriend=_allFriend;
@property(copy, nonatomic) NSString *selectedPoiAddr; // @synthesize selectedPoiAddr=_selectedPoiAddr;
@property(copy, nonatomic) NSString *selectedPoiName; // @synthesize selectedPoiName=_selectedPoiName;
@property(nonatomic) int selectedPoiLon; // @synthesize selectedPoiLon=_selectedPoiLon;
@property(nonatomic) int selectedPoiLat; // @synthesize selectedPoiLat=_selectedPoiLat;
@property(nonatomic) unsigned long long selectedPoiId; // @synthesize selectedPoiId=_selectedPoiId;
- (void).cxx_destruct;

@end

