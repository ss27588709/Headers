//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface KSLiveNotice : NSObject
{
    NSNumber *_userId;
    NSString *_userGender;
    NSString *_userName;
    NSString *_content;
}

@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userGender; // @synthesize userGender=_userGender;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

