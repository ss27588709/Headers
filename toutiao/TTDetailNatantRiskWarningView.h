//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTDetailNatantViewBase.h"

@class NSString, SSThemedLabel;

@interface TTDetailNatantRiskWarningView : TTDetailNatantViewBase
{
    double _lineHeight;
    SSThemedLabel *_riskWarningLabel;
    NSString *_riskWarningText;
}

@property(retain, nonatomic) NSString *riskWarningText; // @synthesize riskWarningText=_riskWarningText;
@property(retain, nonatomic) SSThemedLabel *riskWarningLabel; // @synthesize riskWarningLabel=_riskWarningLabel;
- (void).cxx_destruct;
- (void)reloadData:(id)arg1;
- (void)refreshUI;
- (id)initWithWidth:(double)arg1;

@end
