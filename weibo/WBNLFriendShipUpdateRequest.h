//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLURLRequest.h"

@class NSString;

@interface WBNLFriendShipUpdateRequest : WBNLURLRequest
{
    int _action_type;
    NSString *_from_uid;
    NSString *_to_uid;
    NSString *_special_group_id;
}

@property(copy, nonatomic) NSString *special_group_id; // @synthesize special_group_id=_special_group_id;
@property(nonatomic) int action_type; // @synthesize action_type=_action_type;
@property(copy, nonatomic) NSString *to_uid; // @synthesize to_uid=_to_uid;
@property(copy, nonatomic) NSString *from_uid; // @synthesize from_uid=_from_uid;
- (void).cxx_destruct;
- (id)path;
- (id)parseResponseData:(id)arg1;

@end

