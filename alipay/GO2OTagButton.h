//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface GO2OTagButton : UIButton
{
    _Bool _isItemSelected;
    UIColor *_normalColor;
    UIColor *_selectedColor;
}

@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(nonatomic) _Bool isItemSelected; // @synthesize isItemSelected=_isItemSelected;
- (void).cxx_destruct;
- (void)select:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end

