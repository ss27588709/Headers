//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface OrangeUtil : NSObject
{
}

+ (_Bool)isIntegratedNetwork;
+ (id)urlDecodedString:(id)arg1;
+ (id)urlEncodedString:(id)arg1;
+ (id)signWithSecurityGuard:(id)arg1;
+ (id)signWithInputStr:(id)arg1;
+ (id)hmacSha1:(id)arg1 withKey:(id)arg2;
+ (id)dictionaryFromQuery:(id)arg1 usingEncoding:(unsigned long long)arg2;
+ (id)dataToJSon:(id)arg1;
+ (id)DataTOjsonString:(id)arg1;
+ (id)decryptWithKey:(id)arg1 data:(id)arg2;
+ (id)encryptWithKey:(id)arg1 data:(id)arg2;
+ (id)transpose:(id)arg1 forOperation:(int)arg2 data:(id)arg3;
+ (id)decryptWithKey:(id)arg1 decrypDta:(id)arg2;
+ (id)encryption:(id)arg1 key:(id)arg2;
+ (_Bool)addSkipBackupAttributeToItemAtPath:(id)arg1;
+ (id)getAppVersion;
+ (id)getDocumentPath;

@end

