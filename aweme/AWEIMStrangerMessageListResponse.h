//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray;

@interface AWEIMStrangerMessageListResponse : AWEBaseApiModel
{
    NSArray *_messageList;
}

+ (id)messageListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *messageList; // @synthesize messageList=_messageList;
- (void).cxx_destruct;

@end
