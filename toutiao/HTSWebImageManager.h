//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SDWebImageManagerDelegate-Protocol.h"

@class NSMutableSet, NSString, SDWebImageManager;

@interface HTSWebImageManager : NSObject <SDWebImageManagerDelegate>
{
    SDWebImageManager *_blankManager;
    NSMutableSet *_managerSet;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableSet *managerSet; // @synthesize managerSet=_managerSet;
@property(retain, nonatomic) SDWebImageManager *blankManager; // @synthesize blankManager=_blankManager;
- (void).cxx_destruct;
- (void)cleanUnusedManagerInSet;
- (id)loadImageWithURLs:(id)arg1 atIndex:(unsigned long long)arg2 operation:(id)arg3 options:(unsigned long long)arg4 progress:(CDUnknownBlockType)arg5 transformer:(id)arg6 completed:(CDUnknownBlockType)arg7;
- (id)loadImageWithURLs:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 transformer:(id)arg4 completed:(CDUnknownBlockType)arg5;
- (id)loadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 transformer:(id)arg4 completed:(CDUnknownBlockType)arg5;
- (id)loadImageWithURL:(id)arg1 options:(unsigned long long)arg2 completed:(CDUnknownBlockType)arg3;
- (_Bool)isRunning;
- (void)cancelAll;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
