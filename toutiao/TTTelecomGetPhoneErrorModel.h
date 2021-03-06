//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface TTTelecomGetPhoneErrorModel : NSObject
{
    long long _clientErrorCode;
    NSError *_httpError;
    NSString *_errorText;
}

+ (id)textOfErrorCode:(long long)arg1;
@property(copy, nonatomic) NSString *errorText; // @synthesize errorText=_errorText;
@property(retain, nonatomic) NSError *httpError; // @synthesize httpError=_httpError;
@property(nonatomic) long long clientErrorCode; // @synthesize clientErrorCode=_clientErrorCode;
- (void).cxx_destruct;
- (id)toNSError;
- (id)toServerErrorJSONString;
- (long long)httpErrorCode;
- (long long)errorCode;
- (_Bool)hasError;
- (id)init;

@end

