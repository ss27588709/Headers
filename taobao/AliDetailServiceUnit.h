//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailServiceUnit : TBJSONModel
{
    _Bool _free;
    _Bool _multi;
    _Bool _selected;
    _Bool _mustSelect;
    NSString *_price;
    NSString *_serId;
    NSString *_uniqId;
}

@property(nonatomic) _Bool mustSelect; // @synthesize mustSelect=_mustSelect;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *uniqId; // @synthesize uniqId=_uniqId;
@property(copy, nonatomic) NSString *serId; // @synthesize serId=_serId;
@property(nonatomic) _Bool multi; // @synthesize multi=_multi;
@property(nonatomic) _Bool free; // @synthesize free=_free;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
- (void).cxx_destruct;

@end

