//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSNumber;

@interface TTVLastRead : NSObject <NSCoding>
{
    NSDate *_refreshDate;
    NSDate *_lastDate;
    NSNumber *_showRefresh;
    NSNumber *_orderIndex;
}

@property(retain, nonatomic) NSNumber *orderIndex; // @synthesize orderIndex=_orderIndex;
@property(retain, nonatomic) NSNumber *showRefresh; // @synthesize showRefresh=_showRefresh;
@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
@property(retain, nonatomic) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

