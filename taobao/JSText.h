//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSMutableDictionary, TGradient;

@interface JSText : UILabel
{
    NSMutableDictionary *_attrs;
    TGradient *_gradient;
}

+ (struct CGSize)hitSize:(struct CGSize)arg1 forTNode:(id)arg2;
+ (void)attrsTNodeMapper:(id)arg1;
@property(retain, nonatomic) TGradient *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) NSMutableDictionary *attrs; // @synthesize attrs=_attrs;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)resetText;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

