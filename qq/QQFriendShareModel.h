//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSString;

@interface QQFriendShareModel : NSObject <NSCoding>
{
    NSString *originalNick;
    NSString *filteredNick;
    NSString *freindUin;
}

@property(retain, nonatomic) NSString *freindUin; // @synthesize freindUin;
@property(retain, nonatomic) NSString *filteredNick; // @synthesize filteredNick;
@property(retain, nonatomic) NSString *originalNick; // @synthesize originalNick;
- (void).cxx_destruct;
- (id)filterIllegalCharacter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUin:(id)arg1 nick:(id)arg2;

@end

