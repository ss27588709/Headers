//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class PACardDynamicMsgModel;

@protocol QQPAProfileCardSubscribeTableViewDelegate <NSObject>

@optional
- (void)onClickMoreInfoBtn;
- (void)onClickFollowBtn;
- (void)fetchMoreDynamicInfo;
- (void)onClickDynamicMsgCell:(PACardDynamicMsgModel *)arg1;
- (void)tableViewWillEndDragging;
- (void)tableViewDidScroll;
@end
