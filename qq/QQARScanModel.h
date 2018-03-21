//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQARBaseModel.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSString;

@interface QQARScanModel : QQARBaseModel <NSCopying>
{
    unsigned long long _activityId;
    unsigned long long _entryType;
    unsigned long long _actType;
    NSString *_start_time;
    NSString *_end_time;
    NSString *_scanIconText;
    NSString *_scan_Line1;
    NSString *_scan_Line2;
    NSString *_scan_Line3;
    NSString *_scan_Line3_URL;
    NSString *_what2ScanURL;
    NSString *_userGuideWording;
    NSString *_userGuideBeginTime;
    NSString *_userGuideEndTime;
    NSString *_userGuideType;
    unsigned long long _userGuideShowCount;
}

@property(nonatomic) unsigned long long activityId; // @synthesize activityId=_activityId;
@property(copy, nonatomic) NSString *userGuideType; // @synthesize userGuideType=_userGuideType;
@property(nonatomic) unsigned long long userGuideShowCount; // @synthesize userGuideShowCount=_userGuideShowCount;
@property(copy, nonatomic) NSString *userGuideEndTime; // @synthesize userGuideEndTime=_userGuideEndTime;
@property(copy, nonatomic) NSString *userGuideBeginTime; // @synthesize userGuideBeginTime=_userGuideBeginTime;
@property(copy, nonatomic) NSString *userGuideWording; // @synthesize userGuideWording=_userGuideWording;
@property(nonatomic) unsigned long long entryType; // @synthesize entryType=_entryType;
@property(copy, nonatomic) NSString *scanIconText; // @synthesize scanIconText=_scanIconText;
@property(copy, nonatomic) NSString *what2ScanURL; // @synthesize what2ScanURL=_what2ScanURL;
@property(copy, nonatomic) NSString *scan_Line3_URL; // @synthesize scan_Line3_URL=_scan_Line3_URL;
@property(copy, nonatomic) NSString *scan_Line3; // @synthesize scan_Line3=_scan_Line3;
@property(copy, nonatomic) NSString *scan_Line2; // @synthesize scan_Line2=_scan_Line2;
@property(copy, nonatomic) NSString *scan_Line1; // @synthesize scan_Line1=_scan_Line1;
@property(copy, nonatomic) NSString *end_time; // @synthesize end_time=_end_time;
@property(nonatomic) unsigned long long actType; // @synthesize actType=_actType;
@property(copy, nonatomic) NSString *start_time; // @synthesize start_time=_start_time;
- (void).cxx_destruct;
- (_Bool)isOlyPicAr;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
