//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol KSLoginAndSignCoverViewDelegate <NSObject>
- (void)didTapCountrySwitchBtn;
- (void)didTapSignNextBtnWithAccount:(NSString *)arg1;
- (void)didTapDoneBtnWithAccount:(NSString *)arg1 password:(NSString *)arg2 phoneCode:(NSString *)arg3 countryCode:(NSString *)arg4;
- (void)didTapForgetPasswordBtn;
- (void)didTapSignBtn;
- (void)didTapLoginBtn;
@end

