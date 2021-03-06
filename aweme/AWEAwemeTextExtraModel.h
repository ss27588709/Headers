//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber, NSString;

@interface AWEAwemeTextExtraModel : AWEBaseApiModel
{
    NSNumber *_start;
    NSNumber *_end;
    NSString *_userID;
    NSString *_hashtagName;
    long long _type;
}

+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *hashtagName; // @synthesize hashtagName=_hashtagName;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSNumber *end; // @synthesize end=_end;
@property(retain, nonatomic) NSNumber *start; // @synthesize start=_start;
- (void).cxx_destruct;

@end

