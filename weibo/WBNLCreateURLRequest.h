//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLURLRequest.h"

@class NSString;

@interface WBNLCreateURLRequest : WBNLURLRequest
{
    _Bool _is_premium;
    NSString *_open_id;
    NSString *_address;
    NSString *_title;
    NSString *_desc;
    NSString *_pic_id;
    NSString *_live_id;
    NSString *_extend;
}

@property(copy, nonatomic) NSString *extend; // @synthesize extend=_extend;
@property(nonatomic) _Bool is_premium; // @synthesize is_premium=_is_premium;
@property(copy, nonatomic) NSString *live_id; // @synthesize live_id=_live_id;
@property(copy, nonatomic) NSString *pic_id; // @synthesize pic_id=_pic_id;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *open_id; // @synthesize open_id=_open_id;
- (void).cxx_destruct;
- (id)path;
- (id)parseResponseData:(id)arg1;

@end

