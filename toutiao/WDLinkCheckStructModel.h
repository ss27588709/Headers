//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface WDLinkCheckStructModel : WDBaseModel
{
    NSNumber<Optional> *_is_legal;
    NSString<Optional> *_title;
}

@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber<Optional> *is_legal; // @synthesize is_legal=_is_legal;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
