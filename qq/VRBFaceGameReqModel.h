//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface VRBFaceGameReqModel : QQModel
{
    int _requestType;
    int _cur_score;
    int _red_packet_total;
    long long _sendUin;
    long long _receiveUin;
    NSString *_redPacket_id;
    NSString *_authkey;
}

@property(nonatomic) int red_packet_total; // @synthesize red_packet_total=_red_packet_total;
@property(retain, nonatomic) NSString *authkey; // @synthesize authkey=_authkey;
@property(retain, nonatomic) NSString *redPacket_id; // @synthesize redPacket_id=_redPacket_id;
@property(nonatomic) int cur_score; // @synthesize cur_score=_cur_score;
@property(nonatomic) long long receiveUin; // @synthesize receiveUin=_receiveUin;
@property(nonatomic) long long sendUin; // @synthesize sendUin=_sendUin;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;

@end

