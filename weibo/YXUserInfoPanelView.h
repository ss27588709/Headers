//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CAShapeLayer, NSArray, NSObject, NSString, UIButton, UICollectionView, UIImageView, WBNLSpecialFollowButton;
@protocol YXUserInfoPanelViewDelegate;

@interface YXUserInfoPanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _isYZBSourceUser;
    int _isAnnoy;
    NSObject<YXUserInfoPanelViewDelegate> *_delegate;
    NSArray *_models;
    UIButton *_accusationBtn;
    UIButton *_fieldControlBtn;
    WBNLSpecialFollowButton *_specialFollowButton;
    UIImageView *_bgImageView;
    NSString *_nick;
    unsigned long long _viewFrom;
    UICollectionView *_collectView;
    UIImageView *_topTransformIconView;
}

@property(nonatomic) _Bool isYZBSourceUser; // @synthesize isYZBSourceUser=_isYZBSourceUser;
@property(retain, nonatomic) UIImageView *topTransformIconView; // @synthesize topTransformIconView=_topTransformIconView;
@property(retain, nonatomic) UICollectionView *collectView; // @synthesize collectView=_collectView;
@property(nonatomic) unsigned long long viewFrom; // @synthesize viewFrom=_viewFrom;
@property(nonatomic) int isAnnoy; // @synthesize isAnnoy=_isAnnoy;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) WBNLSpecialFollowButton *specialFollowButton; // @synthesize specialFollowButton=_specialFollowButton;
@property(retain, nonatomic) UIButton *fieldControlBtn; // @synthesize fieldControlBtn=_fieldControlBtn;
@property(retain, nonatomic) UIButton *accusationBtn; // @synthesize accusationBtn=_accusationBtn;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(nonatomic) __weak NSObject<YXUserInfoPanelViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonDidSelect:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)loadUI;
- (void)layoutSubviews;
@property(readonly, nonatomic) CAShapeLayer *mask;
- (void)reloadData;
- (void)showTransformSchemeButton:(int)arg1;
- (void)setNormalStyle;
- (void)setTransformStyle;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

