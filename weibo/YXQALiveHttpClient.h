//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXLiveHttpClient.h"

@interface YXQALiveHttpClient : YXLiveHttpClient
{
}

+ (id)sharedInstance;
- (void)getUserCardCountWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)pullingWithScid:(id)arg1 utcTime:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)queryCardUseStateWithQuestionOrder:(id)arg1 withScrid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)chooseAnswerWithAnswerkey:(id)arg1 withQuestionId:(id)arg2 withQuestionOrder:(id)arg3 withScid:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)getAnswerQualifiedWithScid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

