//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;
@protocol TTLRoomManagerDelegate;

@interface TTLRoomManager : NSObject
{
    id <TTLRoomManagerDelegate> _delegate;
    NSHashTable *_audienceWeakTable;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSHashTable *audienceWeakTable; // @synthesize audienceWeakTable=_audienceWeakTable;
@property(nonatomic) __weak id <TTLRoomManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)allAudienceViewController;
- (void)prepare;
- (void)roomManagerRequireLoginWithCompletion:(CDUnknownBlockType)arg1;
- (void)_prepareLiveRoom;
- (id)walletViewController;
- (id)walletViewControllerWithExtraInfo:(id)arg1;
- (id)audienceRoomWithUserID:(id)arg1;
- (id)audienceRoomWithUserID:(id)arg1 extraInfo:(id)arg2;
- (id)audienceRoomWithRoomID:(id)arg1;
- (id)audienceRoomWithRoomID:(id)arg1 extraInfo:(id)arg2;
- (id)broadcastRoom;
- (id)broadcastRoomWithExtraInfo:(id)arg1;
- (id)init;

@end
