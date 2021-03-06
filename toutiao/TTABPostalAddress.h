//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface TTABPostalAddress : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_ISOCountryCode;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *ISOCountryCode; // @synthesize ISOCountryCode=_ISOCountryCode;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionaryRef:(struct __CFDictionary *)arg1;
- (id)toDictionary;

@end

