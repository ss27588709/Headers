//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPDataUpdate.h"

@class NSString;

@interface AMPDeleteFriendUpdate : AMPDataUpdate
{
    NSString *_userId;
}

@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)parseMtopData:(id)arg1;
- (void)memoryUpdateAfterNet:(id)arg1;
- (id)generatePacket;
- (id)initWithUserId:(id)arg1;

@end

