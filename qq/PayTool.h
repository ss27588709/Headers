//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol ILogDelegate;

@interface PayTool : NSObject
{
    id <ILogDelegate> logDelegate;
}

+ (void)showCommonCouponAlert:(long long)arg1 inner:(id)arg2 errMsg:(id)arg3 action:(id)arg4 msg:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)showPrepayPrompt:(long long)arg1 inner:(id)arg2 errMsg:(id)arg3 bizManager:(id)arg4 netErr:(CDUnknownBlockType)arg5 err:(CDUnknownBlockType)arg6 succ:(CDUnknownBlockType)arg7;
+ (_Bool)checkPrepaySuspend:(long long)arg1 inner:(id)arg2 errMsg:(id)arg3 bizManager:(id)arg4 netErr:(CDUnknownBlockType)arg5 err:(CDUnknownBlockType)arg6 succ:(CDUnknownBlockType)arg7;
+ (void)releaseInstance;
+ (id)singleton;
@property(nonatomic) id <ILogDelegate> LogDelegate; // @synthesize LogDelegate=logDelegate;
- (void)AppleLog:(id)arg1;
- (void)dealloc;

@end
