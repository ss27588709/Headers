//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "TTVFrameBasedLinearLayoutContainer-Protocol.h"

@class NSString, TTVFrameBasedLinearLayoutView;

@interface TTVFrameBasedLinearLayoutScrollView : UIScrollView <TTVFrameBasedLinearLayoutContainer>
{
    TTVFrameBasedLinearLayoutView *_contentView;
}

@property(retain, nonatomic) TTVFrameBasedLinearLayoutView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)handleKeyboardWillHideNotification:(id)arg1;
- (void)handleKeyboardWillShowNotification:(id)arg1;
- (id)firstResponderTextFieldInView:(id)arg1;
- (void)setAutoScrollTextFieldToVisible:(_Bool)arg1;
- (void)dealloc;
- (void)addItem:(id)arg1;
- (void)addSubview:(id)arg1 withTopMargin:(double)arg2;
- (void)addSubview:(id)arg1 withEdgeInsets:(struct UIEdgeInsets)arg2;
- (id)allItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
