//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RDUtils : NSObject
{
}

+ (void)showErrorAlertContent:(id)arg1;
+ (void)setFirstRewardStr:(id)arg1 rewardType:(id)arg2;
+ (id)firstRewardStr:(id)arg1;
+ (_Bool)customizedRewardType:(id)arg1;
+ (_Bool)isRewardEmptyString:(id)arg1;
+ (void)dynamicCreate;
+ (id)generateTokenID;
+ (id)loginUser;
+ (id)tlColorFromHexRGB:(id)arg1;
+ (id)tlSupportedColorString:(id)arg1;
+ (id)tlRgbFromString:(id)arg1;
+ (id)buildLabelWithText:(id)arg1 fontSize:(double)arg2 textColor:(id)arg3 maxWidth:(double)arg4 wrap:(_Bool)arg5;
+ (struct CGSize)sizeForText:(id)arg1 fontSize:(double)arg2 maxWidth:(double)arg3 wrap:(_Bool)arg4;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 forWidth:(double)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2;
+ (_Bool)isNumberOrDecimalWithString:(id)arg1;
+ (id)formatedMoney:(id)arg1;
+ (_Bool)isEmptyString:(id)arg1;

@end
