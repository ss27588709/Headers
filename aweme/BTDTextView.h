//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UIFont;

@interface BTDTextView : UITextView
{
    _Bool _isCustomPlaceHolderFont;
    NSString *_placeHolder;
    UIColor *_placeHolderColor;
    UIFont *_placeHolderFont;
    UITextView *_placeHolderTextView;
    struct UIEdgeInsets _placeHolderEdgeInsets;
}

@property(nonatomic) __weak UITextView *placeHolderTextView; // @synthesize placeHolderTextView=_placeHolderTextView;
@property(nonatomic) struct UIEdgeInsets placeHolderEdgeInsets; // @synthesize placeHolderEdgeInsets=_placeHolderEdgeInsets;
@property(retain, nonatomic) UIFont *placeHolderFont; // @synthesize placeHolderFont=_placeHolderFont;
@property(retain, nonatomic) UIColor *placeHolderColor; // @synthesize placeHolderColor=_placeHolderColor;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
- (void).cxx_destruct;
- (void)showOrHidePlaceHolderTextView;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

