//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString;

@interface WCCardAcceptCardSeed : MMObject
{
    unsigned int _cardType;
    NSString *_cardTpID;
    NSString *_cardExt;
}

@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *cardTpID; // @synthesize cardTpID=_cardTpID;
@property(nonatomic) unsigned int cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (void)dealloc;

@end
