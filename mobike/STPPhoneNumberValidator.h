//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface STPPhoneNumberValidator : NSObject
{
}

+ (id)formattedPhoneNumberForString:(id)arg1 forCountryCode:(id)arg2;
+ (id)formattedRedactedPhoneNumberForString:(id)arg1 forCountryCode:(id)arg2;
+ (id)formattedRedactedPhoneNumberForString:(id)arg1;
+ (id)formattedSanitizedPhoneNumberForString:(id)arg1 forCountryCode:(id)arg2;
+ (id)formattedSanitizedPhoneNumberForString:(id)arg1;
+ (_Bool)stringIsValidPhoneNumber:(id)arg1 forCountryCode:(id)arg2;
+ (_Bool)stringIsValidPartialPhoneNumber:(id)arg1 forCountryCode:(id)arg2;
+ (_Bool)stringIsValidPhoneNumber:(id)arg1;
+ (_Bool)stringIsValidPartialPhoneNumber:(id)arg1;
+ (id)countryCodeOrCurrentLocaleCountryFromString:(id)arg1;

@end

