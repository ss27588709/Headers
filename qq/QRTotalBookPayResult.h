//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface QRTotalBookPayResult : NSObject
{
    long long _resultCode;
    NSString *_bookId;
    NSDictionary *_responeDict;
    long long _balanceValue;
    int _xo;
}

- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) long long balanceValue; // @dynamic balanceValue;
@property(retain, nonatomic) NSString *bookId; // @dynamic bookId;
@property(retain, nonatomic) NSDictionary *responeDict; // @dynamic responeDict;
@property(nonatomic) long long resultCode; // @dynamic resultCode;

@end
