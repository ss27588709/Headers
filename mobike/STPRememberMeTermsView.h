//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, STPTheme, UITextView;

@interface STPRememberMeTermsView : UIView <UITextViewDelegate>
{
    UITextView *_textView;
    STPTheme *_theme;
    struct UIEdgeInsets _insets;
}

@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(retain, nonatomic) STPTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)layoutSubviews;
- (void)updateAppearance;
- (id)buildAttributedString;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

