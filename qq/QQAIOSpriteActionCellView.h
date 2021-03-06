//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOTextCellView.h>

#import <QQMainProject/QQEmotionLabelDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSString, NSTimer, QQAIOSpriteActionModel, SpriteCartoonView, UIImageView;

@interface QQAIOSpriteActionCellView : QQAIOTextCellView <QQEmotionLabelDelegate, UIAlertViewDelegate>
{
    SpriteCartoonView *_spriteView;
    UIImageView *_downFailedView;
    NSTimer *_plusOneAutoDismissTimer;
}

@property(nonatomic) __weak NSTimer *plusOneAutoDismissTimer; // @synthesize plusOneAutoDismissTimer=_plusOneAutoDismissTimer;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)hidePlusOne;
- (void)schedulePlusoneAutoDismiss;
- (void)removeTimer;
- (void)showFollowUpstairsIndicatorIfNeccessary;
- (void)handleFollowUpstairsIndicatorAction;
- (_Bool)authAction:(id)arg1;
- (_Bool)shouldShowFollowUpstairsIndicator;
- (_Bool)isLastValidMsgModel;
- (void)showTipsImg:(id)arg1 atRootView:(id)arg2 startY:(int)arg3 success:(_Bool)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertWithBtnStr:(id)arg1 tips:(id)arg2 url:(id)arg3 isShop:(_Bool)arg4 opClickName:(id)arg5;
- (_Bool)addActionToLocal;
- (void)showVerifySuccessTips;
- (void)showVerifyFailedTipsWith:(id)arg1 actionModel:(id)arg2;
- (void)menuActionSaveSpriteAction:(id)arg1;
- (void)menuActionRecallSpriteAction:(id)arg1;
- (void)menuActionDeleteSpriteAction:(id)arg1;
- (id)getChatModelType;
- (id)getMenuItems;
- (void)handleSpriteOffLineRes:(id)arg1;
- (void)handleSpriteMsgStateChanged:(id)arg1;
- (void)layoutSenderViews;
- (void)layoutReceiverViews;
- (void)willDrawBubble;
- (void)drawContent:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(nonatomic) QQAIOSpriteActionModel *aioModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

