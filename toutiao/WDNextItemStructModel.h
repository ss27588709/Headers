//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface WDNextItemStructModel : WDBaseModel
{
    NSString<Optional> *_ansid;
    NSString<Optional> *_schema;
    NSNumber<Optional> *_show_toast;
}

@property(retain, nonatomic) NSNumber<Optional> *show_toast; // @synthesize show_toast=_show_toast;
@property(retain, nonatomic) NSString<Optional> *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString<Optional> *ansid; // @synthesize ansid=_ansid;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
