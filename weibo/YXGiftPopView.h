//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "YXRepeatBtnDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView, UICollectionViewCell, UIImageView, UILabel, UIPageControl, YXButton, YXGiftTypeModel, YXRepeatBtn;

@interface YXGiftPopView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, YXRepeatBtnDelegate>
{
    _Bool _isPrivateChat;
    CDUnknownBlockType _giftChatBlock;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _giveGiftBlock;
    CDUnknownBlockType _noMoneyBlock;
    CDUnknownBlockType _popCoinBlock;
    CDUnknownBlockType _pathItemOnClick;
    CDUnknownBlockType _repeatBtnDismissBlock;
    long long _goldcoin;
    long long _popcoin;
    NSArray *_dataSource;
    YXGiftTypeModel *_selectedModel;
    UICollectionViewCell *_selectedCell;
    UIView *_colorBGView;
    UIImageView *_bgImageView;
    YXButton *_sendBtn;
    YXRepeatBtn *_repeatBtn;
    UICollectionView *_mainCollectionView;
    UIPageControl *_pageController;
    UILabel *_balanceLabel;
    UIImageView *_nailImageView;
    UIView *_balanceView;
    UIView *_bannerView;
    NSString *_scheme;
}

@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak UIView *balanceView; // @synthesize balanceView=_balanceView;
@property(nonatomic) __weak UIImageView *nailImageView; // @synthesize nailImageView=_nailImageView;
@property(nonatomic) __weak UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(nonatomic) __weak UIPageControl *pageController; // @synthesize pageController=_pageController;
@property(nonatomic) __weak UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(nonatomic) __weak YXRepeatBtn *repeatBtn; // @synthesize repeatBtn=_repeatBtn;
@property(nonatomic) __weak YXButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(nonatomic) __weak UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak UIView *colorBGView; // @synthesize colorBGView=_colorBGView;
@property(nonatomic) _Bool isPrivateChat; // @synthesize isPrivateChat=_isPrivateChat;
@property(nonatomic) __weak UICollectionViewCell *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(retain, nonatomic) YXGiftTypeModel *selectedModel; // @synthesize selectedModel=_selectedModel;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long popcoin; // @synthesize popcoin=_popcoin;
@property(nonatomic) long long goldcoin; // @synthesize goldcoin=_goldcoin;
@property(copy, nonatomic) CDUnknownBlockType repeatBtnDismissBlock; // @synthesize repeatBtnDismissBlock=_repeatBtnDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType pathItemOnClick; // @synthesize pathItemOnClick=_pathItemOnClick;
@property(copy, nonatomic) CDUnknownBlockType popCoinBlock; // @synthesize popCoinBlock=_popCoinBlock;
@property(copy, nonatomic) CDUnknownBlockType noMoneyBlock; // @synthesize noMoneyBlock=_noMoneyBlock;
@property(copy, nonatomic) CDUnknownBlockType giveGiftBlock; // @synthesize giveGiftBlock=_giveGiftBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType giftChatBlock; // @synthesize giftChatBlock=_giftChatBlock;
- (void).cxx_destruct;
- (void)reloadGift;
- (_Bool)isShownSelf;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateSendButtonStatus;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)dismiss;
- (void)sendGiftAction:(id)arg1;
- (void)pathItemBtnOnClick:(id)arg1 amount:(long long)arg2;
- (void)p_sendBtnScaleAnimation;
- (void)popBalanceViewDidClick;
- (void)chargemoney;
- (void)reduceFreeGiftCountForGiftID:(long long)arg1;
- (void)updateFreeGiftCount:(long long)arg1 forGiftID:(long long)arg2;
- (void)hideTransformBanner;
- (void)showTransformBanner:(id)arg1 scheme:(id)arg2;
- (void)bannerGestureHandle:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 fromChat:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

