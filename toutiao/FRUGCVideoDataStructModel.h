//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRUGCVideoRawDataStructModel, NSNumber, NSString;
@protocol Optional;

@interface FRUGCVideoDataStructModel : JSONModel
{
    NSNumber<Optional> *_group_id;
    NSString<Optional> *_show_tips;
    NSNumber<Optional> *_show_origin;
    FRUGCVideoRawDataStructModel<Optional> *_raw_data;
}

+ (id)keyMapper;
@property(retain, nonatomic) FRUGCVideoRawDataStructModel<Optional> *raw_data; // @synthesize raw_data=_raw_data;
@property(retain, nonatomic) NSNumber<Optional> *show_origin; // @synthesize show_origin=_show_origin;
@property(retain, nonatomic) NSString<Optional> *show_tips; // @synthesize show_tips=_show_tips;
@property(retain, nonatomic) NSNumber<Optional> *group_id; // @synthesize group_id=_group_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

