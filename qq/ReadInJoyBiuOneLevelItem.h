//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ReadInJoyBiuOneLevelItem : NSObject
{
    BOOL _typeCodeLow;
    BOOL _typeCodeHigh;
    unsigned int _biuTime;
    unsigned long long _feeds_type;
    unsigned long long _feedsId;
    unsigned long long _uin;
    NSString *_biuComment;
    NSString *_nickName;
    _Bool *_needUpdateNickName;
    unsigned long long _itemAtMode;
    NSString *_editNickChange;
    struct _NSRange _nickRange;
}

+ (id)biuOneLevelItemFromDecoder:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *editNickChange; // @synthesize editNickChange=_editNickChange;
@property(nonatomic) unsigned long long itemAtMode; // @synthesize itemAtMode=_itemAtMode;
@property(nonatomic) BOOL typeCodeHigh; // @synthesize typeCodeHigh=_typeCodeHigh;
@property(nonatomic) BOOL typeCodeLow; // @synthesize typeCodeLow=_typeCodeLow;
@property(nonatomic) struct _NSRange nickRange; // @synthesize nickRange=_nickRange;
@property _Bool *needUpdateNickName; // @synthesize needUpdateNickName=_needUpdateNickName;
@property(retain) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *biuComment; // @synthesize biuComment=_biuComment;
@property(nonatomic) unsigned int biuTime; // @synthesize biuTime=_biuTime;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(nonatomic) unsigned long long feedsId; // @synthesize feedsId=_feedsId;
@property(nonatomic) unsigned long long feeds_type; // @synthesize feeds_type=_feeds_type;
- (void)dealloc;
- (void)toEncoder:(struct CPBMessageEncoder *)arg1;

@end

