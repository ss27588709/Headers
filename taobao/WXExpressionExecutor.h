//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WXExpressionExecutor : NSObject
{
}

+ (id)hexFromUIColor:(id)arg1;
+ (double)unpackSingleRet:(id)arg1;
+ (id)makeColor:(id)arg1;
+ (void)makeColor:(id)arg1 model:(id *)arg2;
+ (void)makeBackgroundColor:(id)arg1 model:(id *)arg2;
+ (void)makeContentOffset:(id)arg1 model:(id *)arg2;
+ (void)makeScale:(id)arg1 model:(id *)arg2;
+ (void)makeTranslate:(id)arg1 model:(id *)arg2;
+ (id)viewPropertyMap;
+ (void)execute:(id)arg1 to:(id)arg2;
+ (void)change:(id *)arg1 property:(id)arg2 config:(id)arg3 to:(id)arg4;

@end

