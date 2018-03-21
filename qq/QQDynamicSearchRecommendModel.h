//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString;

@interface QQDynamicSearchRecommendModel : QQModel
{
    unsigned long long _showType;
    NSString *_title;
    NSString *_content;
    NSArray *_picUrlArray;
    NSString *_descText;
    NSString *_jumpUrl;
    int _xo;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(copy, nonatomic) NSString *descText; // @dynamic descText;
@property(copy, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) NSArray *picUrlArray; // @dynamic picUrlArray;
@property(nonatomic) unsigned long long showType; // @dynamic showType;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
