//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppComponent.h"

#import "WeAppSelectorDelegate-Protocol.h"
#import "WeAppSelectorSourceData-Protocol.h"

@class NSMutableArray, NSString, WeAppTSimpleSelectorScrollView;
@protocol WeAppSelectorDelegate;

@interface WeAppSimpleTabHeadView : WeAppComponent <WeAppSelectorDelegate, WeAppSelectorSourceData>
{
    id <WeAppSelectorDelegate> _delegate;
    WeAppTSimpleSelectorScrollView *_selectorView;
    NSMutableArray *_tabItems;
    long long _curIndex;
}

@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(retain, nonatomic) NSMutableArray *tabItems; // @synthesize tabItems=_tabItems;
@property(retain, nonatomic) WeAppTSimpleSelectorScrollView *selectorView; // @synthesize selectorView=_selectorView;
@property(nonatomic) id <WeAppSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelectorViewCssBinding:(id)arg1 selectorItem:(id)arg2 styleBinding:(id)arg3 isSelect:(_Bool)arg4;
- (void)setSelectorFrame:(id)arg1 buttonWidth:(void *)arg2 buttonHeight:(void *)arg3;
- (void)setSelectorFrame:(id)arg1;
- (void)changeSelectorViewProperty:(id)arg1 itemView:(id)arg2 withIndex:(unsigned long long)arg3 isSelect:(_Bool)arg4;
- (void)setSelectorViewProperty:(id)arg1 itemView:(id)arg2 withIndex:(unsigned long long)arg3 isSelect:(_Bool)arg4;
- (void)setSelectorViewStatus:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)selectorView:(id)arg1 didSelectSameRowAtIndex:(unsigned long long)arg2;
- (void)selectorView:(id)arg1 didSelectRowAtIndex:(unsigned long long)arg2;
- (void)setSelectBtn:(unsigned long long)arg1;
- (void)updateFrame;
- (void)setSelectedIndex;
- (void)setupData;
- (void)refreshData;
- (id)createView;
- (id)initWithComponentItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

