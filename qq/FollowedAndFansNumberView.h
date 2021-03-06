//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UILabel;

@interface FollowedAndFansNumberView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isNightMode;
    CDUnknownBlockType _clickAction;
    UILabel *_textLabel;
    UILabel *_numberLabel;
}

@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool isNightMode; // @synthesize isNightMode=_isNightMode;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)getLayoutSize:(id)arg1;
- (void)setNumber:(unsigned int)arg1;
- (id)genNumberShowingString:(unsigned int)arg1;
- (void)setText:(id)arg1;
- (void)onClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

