//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class DSFeedList, NSString;

@interface WBRecommendFlowModel : WBModelObject
{
    NSString *_flowType;
    DSFeedList *_dsFeedList;
    NSString *_lastoid;
}

@property(copy, nonatomic) NSString *lastoid; // @synthesize lastoid=_lastoid;
@property(retain, nonatomic) DSFeedList *dsFeedList; // @synthesize dsFeedList=_dsFeedList;
@property(copy, nonatomic) NSString *flowType; // @synthesize flowType=_flowType;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;
@property(nonatomic) _Bool hasMoreFlag;

@end

