//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKDataBaseObject.h"

@class NSMutableArray, NSNumber, NSString;

@interface MovieSDKDataListInfo : MovieSDKDataBaseObject
{
    Class _classType;
    NSNumber *_total;
    NSMutableArray *_list;
    NSString *_nextSinceID;
}

+ (id)createDictByArray:(id)arg1;
@property(retain, nonatomic) NSString *nextSinceID; // @synthesize nextSinceID=_nextSinceID;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(retain, nonatomic) Class classType; // @synthesize classType=_classType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)parser:(id)arg1;
- (id)initWithJsonDict:(id)arg1 objClass:(Class)arg2;

@end

