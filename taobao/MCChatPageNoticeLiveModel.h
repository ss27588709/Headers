//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseModel.h"

@class NSString;

@interface MCChatPageNoticeLiveModel : MCBaseModel
{
    NSString *_sessionID;
}

@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)shareMessageDataWithGroupInfo:(id)arg1 groupUser:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (id)groupAdapter;
- (id)initWithBizKey:(id)arg1 delegate:(id)arg2 session:(id)arg3 sessionType:(int)arg4;

@end

