//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FMAudioRecognizationResource : NSObject
{
    NSString *_modelName;
    NSString *_paramsName;
    NSString *_metaName;
    NSArray *_checkType;
}

+ (id)objectWithKeyValues:(id)arg1;
@property(retain, nonatomic) NSArray *checkType; // @synthesize checkType=_checkType;
@property(retain, nonatomic) NSString *metaName; // @synthesize metaName=_metaName;
@property(retain, nonatomic) NSString *paramsName; // @synthesize paramsName=_paramsName;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
- (void).cxx_destruct;

@end
