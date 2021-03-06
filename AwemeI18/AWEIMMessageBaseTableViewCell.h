//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEIMMessage;
@protocol AWEIMMessageBaseTableViewCellDelegate;

@interface AWEIMMessageBaseTableViewCell : UITableViewCell
{
    _Bool _hasSetupMessageStateKVO;
    AWEIMMessage *_message;
    id <AWEIMMessageBaseTableViewCellDelegate> _delegate;
}

+ (struct CGSize)contentSizeWithMesasge:(id)arg1;
+ (id)identifier;
@property(nonatomic) __weak id <AWEIMMessageBaseTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasSetupMessageStateKVO; // @synthesize hasSetupMessageStateKVO=_hasSetupMessageStateKVO;
@property(retain, nonatomic) AWEIMMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)handleLongTap:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeKVOForMessage:(id)arg1;
- (void)_addKVOForMessage:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)notifyMessageStateChanged:(long long)arg1;
- (void)handleLongGestureAtLocation:(struct CGPoint)arg1;
- (void)configWithMessage:(id)arg1;
- (void)setupUI;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

