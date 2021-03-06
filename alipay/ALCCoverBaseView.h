//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface ALCCoverBaseView : UIView
{
    double buttonHeight;
    double buttonSpacerHeight;
    _Bool _useMotionEffects;
    UIView *_parentView;
    UIView *_dialogView;
    NSArray *_buttonTitles;
    CDUnknownBlockType _onButtonClicked;
}

@property(copy) CDUnknownBlockType onButtonClicked; // @synthesize onButtonClicked=_onButtonClicked;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(nonatomic) _Bool useMotionEffects; // @synthesize useMotionEffects=_useMotionEffects;
@property(retain, nonatomic) UIView *dialogView; // @synthesize dialogView=_dialogView;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyMotionEffects;
- (struct CGSize)countScreenSize;
- (void)close;
- (void)alertViewButtonClicked:(id)arg1 atIndex:(long long)arg2;
- (void)alertButtonClicked:(id)arg1;
- (void)addButtonsToView:(id)arg1;
- (id)createContainerView;
- (void)show;
- (id)initWithParent:(id)arg1;
- (id)init;

@end

