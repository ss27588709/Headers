//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTActivityContentItemProtocol-Protocol.h"

@class NSString;

@interface TTCopyContentItem : NSObject <TTActivityContentItemProtocol>
{
    NSString *_desc;
    NSString *_contentTitle;
    NSString *_activityImageName;
}

@property(copy, nonatomic) NSString *activityImageName; // @synthesize activityImageName=_activityImageName;
@property(copy, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *contentItemType;
- (id)initWithDesc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

