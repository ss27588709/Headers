//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath;

@interface WBTimeStatistics : NSObject
{
    long long _type;
    double _contentOffsetY;
    NSIndexPath *_lastTopIndexPath;
    NSIndexPath *_lastBottomIndexPath;
}

@property(retain, nonatomic) NSIndexPath *lastBottomIndexPath; // @synthesize lastBottomIndexPath=_lastBottomIndexPath;
@property(retain, nonatomic) NSIndexPath *lastTopIndexPath; // @synthesize lastTopIndexPath=_lastTopIndexPath;
@property(nonatomic) double contentOffsetY; // @synthesize contentOffsetY=_contentOffsetY;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)reset;

@end

