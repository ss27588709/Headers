//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseComponent.h"

@class UIView;

@interface TBCShadowSeparatorComponent : TBCBaseComponent
{
    UIView *_lineOne;
    UIView *_lineTwo;
}

+ (id)defaultStyle;
+ (id)componentTag;
@property(retain, nonatomic) UIView *lineTwo; // @synthesize lineTwo=_lineTwo;
@property(retain, nonatomic) UIView *lineOne; // @synthesize lineOne=_lineOne;
- (void).cxx_destruct;
- (void)loadContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

