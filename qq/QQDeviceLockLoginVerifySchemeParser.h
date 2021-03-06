//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQDeviceLockLoginVerifySchemeParser : NSObject
{
    int _verifyType;
    _Bool _useLocalScheme;
    _Bool _isSchemeAvaliable;
    int _button1Type;
    NSString *_button1Caption;
    int _button1AuthType;
    int _button2Type;
    NSString *_button2Caption;
    int _button2AuthType;
    int _xo;
    NSString *_title;
    NSString *_text;
    NSString *_subText;
}

@property(copy, nonatomic, getter=subText) NSString *subText; // @synthesize subText=_subText;
@property(copy, nonatomic, getter=text) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic, getter=title) NSString *title; // @synthesize title=_title;
- (id)button2BySchemeDataWithTarget:(id)arg1 andAction:(SEL)arg2;
- (id)button1BySchemeDataWithTarget:(id)arg1 andAction:(SEL)arg2;
- (void)dealloc;
- (id)initWithVerifyType:(int)arg1 andSchemeData:(id)arg2;
- (id)initWithVerifyType:(int)arg1 andSchemeDataBuf:(const void *)arg2 andDataLength:(int)arg3;

// Remaining properties
@property(nonatomic) int button1AuthType; // @dynamic button1AuthType;
@property(copy, nonatomic) NSString *button1Caption; // @dynamic button1Caption;
@property(nonatomic) int button1Type; // @dynamic button1Type;
@property(nonatomic) int button2AuthType; // @dynamic button2AuthType;
@property(copy, nonatomic) NSString *button2Caption; // @dynamic button2Caption;
@property(nonatomic) int button2Type; // @dynamic button2Type;
@property(nonatomic) _Bool isSchemeAvaliable; // @dynamic isSchemeAvaliable;

@end

