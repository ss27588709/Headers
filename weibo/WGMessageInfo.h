//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WGGameAppInfo2.h"

@class NSString;

@interface WGMessageInfo : WGGameAppInfo2
{
    NSString *_messageid;
    NSString *_link;
    NSString *_time_long;
}

+ (id)messageDetailInfoWithDic:(id)arg1;
+ (id)messageInfoWithDic:(id)arg1;
@property(retain, nonatomic) NSString *time_long; // @synthesize time_long=_time_long;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *messageid; // @synthesize messageid=_messageid;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

