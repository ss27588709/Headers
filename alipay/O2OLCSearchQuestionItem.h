//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistListItem.h"

@class NSString;

@interface O2OLCSearchQuestionItem : O2OMistListItem
{
    unsigned long long _type;
    NSString *_contentId;
}

+ (id)itemFromDic:(id)arg1 query:(id)arg2 viewController:(id)arg3;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setIdx:(unsigned long long)arg1;

@end
