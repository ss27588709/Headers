//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (APAdditions)
- (id)keyForAccount:(id)arg1 loginType:(int)arg2;
- (void)removeEncryptedPasswordForAccount:(id)arg1 loginType:(int)arg2;
- (void)setEncryptedPassword:(id)arg1 forAccount:(id)arg2 loginType:(int)arg3;
- (id)encryptedPasswordForAccount:(id)arg1 loginType:(int)arg2;
@end
