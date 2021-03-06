//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, WBCommentViewModel, WBNBulletinCommentEngine, WBStatus;

@interface WBVideoBulletinCommentManager : NSObject
{
    _Bool _isLoadError;
    _Bool _isLoadingMore;
    _Bool _hasMore;
    _Bool _hasReloaded;
    WBNBulletinCommentEngine *_bulletinCommentEngine;
    NSError *_loadError;
    WBStatus *_status;
    WBCommentViewModel *_viewModel;
}

@property(nonatomic) _Bool hasReloaded; // @synthesize hasReloaded=_hasReloaded;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) _Bool isLoadError; // @synthesize isLoadError=_isLoadError;
@property(nonatomic) __weak WBCommentViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(retain, nonatomic) WBNBulletinCommentEngine *bulletinCommentEngine; // @synthesize bulletinCommentEngine=_bulletinCommentEngine;
- (void).cxx_destruct;
- (void)reloadData:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithStatus:(id)arg1;

@end

