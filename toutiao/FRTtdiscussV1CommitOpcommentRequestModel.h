//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber;
@protocol Optional;

@interface FRTtdiscussV1CommitOpcommentRequestModel : TTRequestModel
{
    NSNumber *_user_id;
    NSNumber *_comment_id;
    NSNumber *_action_type;
    NSNumber<Optional> *_forum_id;
}

@property(retain, nonatomic) NSNumber<Optional> *forum_id; // @synthesize forum_id=_forum_id;
@property(retain, nonatomic) NSNumber *action_type; // @synthesize action_type=_action_type;
@property(retain, nonatomic) NSNumber *comment_id; // @synthesize comment_id=_comment_id;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end
