//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QZYellowDiamondEnterPayViewManager : NSObject
{
}

+ (void)notifyPaySuccToDomains:(id)arg1;
+ (id)shareInstance;
- (void)payWithH5:(id)arg1 aid:(id)arg2 uin:(long long)arg3 defaultVipType:(long long)arg4 defaultMonth:(unsigned long long)arg5;
- (void)payWithIAP:(id)arg1 aid:(id)arg2 uin:(long long)arg3 defaultVipType:(long long)arg4 defaultMonth:(unsigned long long)arg5;
- (void)enterYellowDiamondPayControllerWithAid:(id)arg1 uin:(long long)arg2 defaultOpenType:(long long)arg3 defaultOpenMonth:(unsigned long long)arg4 viewController:(id)arg5;

@end
