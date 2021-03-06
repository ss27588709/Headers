//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCExpressionUtilDelegate-Protocol.h"
#import "NSCoding-Protocol.h"

@class MCExpressionHandle, MCTemplateOpt, NSMutableArray, NSString;

@interface MCTemplateComponent : NSObject <MCExpressionUtilDelegate, NSCoding>
{
    long long _version;
    NSString *_type;
    MCTemplateOpt *_opt;
    NSString *_name;
    NSString *_key;
    MCExpressionHandle *_expressionHandle;
    NSMutableArray *_observerList;
}

+ (double)convertToLayoutValue:(id)arg1;
@property(retain, nonatomic) NSMutableArray *observerList; // @synthesize observerList=_observerList;
@property(retain, nonatomic) MCExpressionHandle *expressionHandle; // @synthesize expressionHandle=_expressionHandle;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) MCTemplateOpt *opt; // @synthesize opt=_opt;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)expressionHandle:(id)arg1 valueDidChange:(id)arg2 forKey:(id)arg3;
- (void)addDataChangeListen:(id)arg1;
- (id)getTransformExpression:(id)arg1;
- (void)updateExpressionHandle:(id)arg1;
- (id)initWithDict:(id)arg1 expressionHandle:(id)arg2;
- (id)initWithDict:(id)arg1;
- (void)defaultValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

