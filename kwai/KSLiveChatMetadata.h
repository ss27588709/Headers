//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KS_user_info;

@interface KSLiveChatMetadata : NSObject
{
    short _guestAdminType;
    KS_user_info *_anchorUser;
    KS_user_info *_guestUser;
    long long _mediaType;
    long long _rolePlayedByCurrentUser;
}

@property(nonatomic) long long rolePlayedByCurrentUser; // @synthesize rolePlayedByCurrentUser=_rolePlayedByCurrentUser;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) short guestAdminType; // @synthesize guestAdminType=_guestAdminType;
@property(retain, nonatomic) KS_user_info *guestUser; // @synthesize guestUser=_guestUser;
@property(retain, nonatomic) KS_user_info *anchorUser; // @synthesize anchorUser=_anchorUser;
- (void).cxx_destruct;

@end
