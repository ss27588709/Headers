//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKMath : NSObject
{
}

+ (unsigned long long)hashWithPointer:(const void *)arg1;
+ (unsigned long long)hashWithLong:(unsigned long long)arg1;
+ (unsigned long long)hashWithIntegerArray:(unsigned long long *)arg1 count:(unsigned long long)arg2;
+ (unsigned long long)hashWithInteger:(unsigned long long)arg1 andInteger:(unsigned long long)arg2;
+ (unsigned long long)hashWithInteger:(unsigned long long)arg1;
+ (unsigned long long)hashWithFloat:(float)arg1;
+ (unsigned long long)hashWithDouble:(double)arg1;
+ (unsigned long long)hashWithCString:(const char *)arg1;
+ (unsigned long long)hashWithCGFloat:(double)arg1;
+ (struct CGSize)floorForSize:(struct CGSize)arg1;
+ (struct CGPoint)floorForPoint:(struct CGPoint)arg1;
+ (struct CGSize)ceilForSize:(struct CGSize)arg1;
+ (struct CGPoint)ceilForPoint:(struct CGPoint)arg1;
- (id)init;

@end
