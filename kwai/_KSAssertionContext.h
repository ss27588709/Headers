//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _KSAssertionContext : NSObject
{
    NSString *_fileName;
    long long _fileLine;
    NSString *_message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long fileLine; // @synthesize fileLine=_fileLine;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (id)initWithFileName:(id)arg1 fileLine:(long long)arg2 message:(id)arg3;

@end

