//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseUGCComponent.h"

@class UILabel;

@interface TBOTextLabelUGCComponent : TBOBaseUGCComponent
{
    float _maxHeight;
    float _minHeight;
    UILabel *_lb;
}

+ (id)componentName;
@property(nonatomic) float minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) float maxHeight; // @synthesize maxHeight=_maxHeight;
@property(retain, nonatomic) UILabel *lb; // @synthesize lb=_lb;
- (void).cxx_destruct;
- (id)publicData;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)defaultStyle;
- (id)initWithContext:(id)arg1 parent:(id)arg2;

@end
