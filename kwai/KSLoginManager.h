//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSCountryInfo, KSLoginContext, KSLoginStatParam, KSLoginUIPresenter, NSArray, NSDictionary, NSMutableDictionary, NSString, UIImage;

@interface KSLoginManager : NSObject
{
    _Bool _isInLoginProcess;
    KSLoginContext *_context;
    KSLoginUIPresenter *_presenter;
    NSMutableDictionary *_loginServiceMapping;
    NSArray *_loginMiddleware;
}

+ (id)sharedKSLoginManager;
@property(retain, nonatomic) NSArray *loginMiddleware; // @synthesize loginMiddleware=_loginMiddleware;
@property(retain, nonatomic) NSMutableDictionary *loginServiceMapping; // @synthesize loginServiceMapping=_loginServiceMapping;
@property(retain, nonatomic) KSLoginUIPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) KSLoginContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool isInLoginProcess; // @synthesize isInLoginProcess=_isInLoginProcess;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)_loginServiceForContext:(id)arg1;
- (id)_proccessTaskInMiddlewares:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)callCancel;
- (void)callCompletion;
- (id)login;
- (void)showLoginFromViewController:(id)arg1 isDialog:(_Bool)arg2;
- (void)showLoginFromViewController:(id)arg1;
- (void)setup;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSDictionary *OAuthParams; // @dynamic OAuthParams;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @dynamic cancel;
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;
@property(retain, nonatomic) KSCountryInfo *country; // @dynamic country;
@property(copy, nonatomic) NSString *email; // @dynamic email;
@property(nonatomic) long long loginMaxErrorCount; // @dynamic loginMaxErrorCount;
@property(nonatomic) _Bool loginPromptShowed; // @dynamic loginPromptShowed;
@property(copy, nonatomic) NSString *loginType; // @dynamic loginType;
@property(copy, nonatomic) NSString *password; // @dynamic password;
@property(copy, nonatomic) NSString *phone; // @dynamic phone;
@property(retain, nonatomic) NSString *phoneCaptcha; // @dynamic phoneCaptcha;
@property(retain, nonatomic) KSLoginStatParam *statParams; // @dynamic statParams;
@property(retain, nonatomic) UIImage *userAvatarImage; // @dynamic userAvatarImage;
@property(copy, nonatomic) NSString *userName; // @dynamic userName;
@property(copy, nonatomic) NSString *userSex; // @dynamic userSex;

@end

