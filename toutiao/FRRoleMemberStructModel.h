//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRUserRoleStructModel, NSArray;
@protocol FRUserStructModel><Optional;

@interface FRRoleMemberStructModel : JSONModel
{
    FRUserRoleStructModel *_user_role;
    NSArray<FRUserStructModel><Optional> *_users;
}

@property(retain, nonatomic) NSArray<FRUserStructModel><Optional> *users; // @synthesize users=_users;
@property(retain, nonatomic) FRUserRoleStructModel *user_role; // @synthesize user_role=_user_role;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

