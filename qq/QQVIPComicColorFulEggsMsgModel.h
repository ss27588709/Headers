//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface QQVIPComicColorFulEggsMsgModel : QQModel
{
    NSString *_msgId;
    long long _type;
    NSString *_icon_url;
    NSString *_icon_jump_url;
    NSString *_dlg_bg_url;
    NSString *_jump_url;
    long long _expire;
    NSString *_ticket;
    long long _receiveTime;
    NSString *_aboutToShow_imageUrl;
}

@property(retain, nonatomic) NSString *aboutToShow_imageUrl; // @synthesize aboutToShow_imageUrl=_aboutToShow_imageUrl;
@property(nonatomic) long long receiveTime; // @synthesize receiveTime=_receiveTime;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) long long expire; // @synthesize expire=_expire;
@property(retain, nonatomic) NSString *jump_url; // @synthesize jump_url=_jump_url;
@property(retain, nonatomic) NSString *dlg_bg_url; // @synthesize dlg_bg_url=_dlg_bg_url;
@property(retain, nonatomic) NSString *icon_jump_url; // @synthesize icon_jump_url=_icon_jump_url;
@property(retain, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
- (void).cxx_destruct;

@end
