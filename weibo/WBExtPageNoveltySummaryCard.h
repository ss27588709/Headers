//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSString;

@interface WBExtPageNoveltySummaryCard : WBPageCard
{
    NSString *_title;
    long long _showType;
    long long _page_size;
    long long _total;
    NSString *_mp_cardid;
    NSString *_block_id;
}

@property(copy, nonatomic) NSString *block_id; // @synthesize block_id=_block_id;
@property(copy, nonatomic) NSString *mp_cardid; // @synthesize mp_cardid=_mp_cardid;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long page_size; // @synthesize page_size=_page_size;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

