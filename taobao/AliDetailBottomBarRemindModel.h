//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailBottomBarItemModel.h"

@class NSString;

@interface AliDetailBottomBarRemindModel : AliDetailBottomBarItemModel
{
    NSString *_supplement;
    long long _verticalBiz;
    NSString *_itemId;
    long long _startTime;
    long long _endTime;
    NSString *_salesSite;
}

@property(retain, nonatomic) NSString *salesSite; // @synthesize salesSite=_salesSite;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) long long verticalBiz; // @synthesize verticalBiz=_verticalBiz;
@property(retain, nonatomic) NSString *supplement; // @synthesize supplement=_supplement;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end
