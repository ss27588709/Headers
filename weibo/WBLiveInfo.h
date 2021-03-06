//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString, WBPayLiveModel;

@interface WBLiveInfo : WBModelObject
{
    _Bool _allowComment;
    _Bool _showShareTips;
    _Bool _showLoopShareTips;
    NSString *_roomID;
    NSString *_ownerID;
    NSString *_shareText;
    NSString *_shareLink;
    NSString *_payUrl;
    NSString *_praiseUrl;
    unsigned long long _liveStatus;
    long long _startTime;
    long long _endTime;
    long long _serverTime;
    NSString *_url;
    NSString *_urlHD;
    NSString *_prevLD;
    NSString *_prevHD;
    NSString *_procLD;
    NSString *_procHD;
    NSString *_liveLD;
    NSString *_liveHD;
    NSString *_rtmpLD;
    NSString *_rtmpHD;
    NSString *_flvLD;
    NSString *_flvHD;
    NSString *_replayLD;
    NSString *_replayHD;
    double _liveWidth;
    double _liveHeight;
    long long _hiddenComments;
    NSString *_shareTipText;
    long long _is_premium;
    WBPayLiveModel *_premium_info;
    unsigned long long _followTime;
}

@property(nonatomic) unsigned long long followTime; // @synthesize followTime=_followTime;
@property(copy, nonatomic) WBPayLiveModel *premium_info; // @synthesize premium_info=_premium_info;
@property(nonatomic) long long is_premium; // @synthesize is_premium=_is_premium;
@property(copy, nonatomic) NSString *shareTipText; // @synthesize shareTipText=_shareTipText;
@property(nonatomic) _Bool showLoopShareTips; // @synthesize showLoopShareTips=_showLoopShareTips;
@property(nonatomic) _Bool showShareTips; // @synthesize showShareTips=_showShareTips;
@property(nonatomic) long long hiddenComments; // @synthesize hiddenComments=_hiddenComments;
@property(nonatomic) double liveHeight; // @synthesize liveHeight=_liveHeight;
@property(nonatomic) double liveWidth; // @synthesize liveWidth=_liveWidth;
@property(copy, nonatomic) NSString *replayHD; // @synthesize replayHD=_replayHD;
@property(copy, nonatomic) NSString *replayLD; // @synthesize replayLD=_replayLD;
@property(copy, nonatomic) NSString *flvHD; // @synthesize flvHD=_flvHD;
@property(copy, nonatomic) NSString *flvLD; // @synthesize flvLD=_flvLD;
@property(copy, nonatomic) NSString *rtmpHD; // @synthesize rtmpHD=_rtmpHD;
@property(copy, nonatomic) NSString *rtmpLD; // @synthesize rtmpLD=_rtmpLD;
@property(copy, nonatomic) NSString *liveHD; // @synthesize liveHD=_liveHD;
@property(copy, nonatomic) NSString *liveLD; // @synthesize liveLD=_liveLD;
@property(copy, nonatomic) NSString *procHD; // @synthesize procHD=_procHD;
@property(copy, nonatomic) NSString *procLD; // @synthesize procLD=_procLD;
@property(copy, nonatomic) NSString *prevHD; // @synthesize prevHD=_prevHD;
@property(copy, nonatomic) NSString *prevLD; // @synthesize prevLD=_prevLD;
@property(copy, nonatomic) NSString *urlHD; // @synthesize urlHD=_urlHD;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long serverTime; // @synthesize serverTime=_serverTime;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(nonatomic) _Bool allowComment; // @synthesize allowComment=_allowComment;
@property(copy, nonatomic) NSString *praiseUrl; // @synthesize praiseUrl=_praiseUrl;
@property(copy, nonatomic) NSString *payUrl; // @synthesize payUrl=_payUrl;
@property(copy, nonatomic) NSString *shareLink; // @synthesize shareLink=_shareLink;
@property(copy, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(copy, nonatomic) NSString *ownerID; // @synthesize ownerID=_ownerID;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;
- (_Bool)containsValidUrl;
- (void)updateWithLiveItem:(id)arg1;
- (unsigned long long)liveMode;
- (_Bool)updateWithDictionary:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (id)init;

@end

