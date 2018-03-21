//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, WeAppViewManager;

@interface WeAppTagView : UIView
{
    _Bool _selected;
    UIButton *_button;
    WeAppViewManager *_viewManager;
    WeAppViewManager *_selectedViewManager;
    UIView *_selectedView;
    UIView *_unselectedView;
}

@property(retain, nonatomic) UIView *unselectedView; // @synthesize unselectedView=_unselectedView;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) WeAppViewManager *selectedViewManager; // @synthesize selectedViewManager=_selectedViewManager;
@property(retain, nonatomic) WeAppViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)createTagWithIndex:(int)arg1 parentItem:(id)arg2 parentViewManager:(id)arg3;
- (void)setSelection:(_Bool)arg1;
- (id)init;

@end
