//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TTForumTableItem : NSObject
{
    _Bool _joinCommonParameters;
    NSString *_name;
    NSString *_URLString;
    NSDictionary *_extra;
    double _refreshInterval;
}

@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(nonatomic) _Bool joinCommonParameters; // @synthesize joinCommonParameters=_joinCommonParameters;
@property(copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

