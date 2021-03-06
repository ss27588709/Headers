//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol ATSDataComponent;

@protocol ATSDataComponent <NSObject>
- (void)recalculateCheck;
- (void)checkAll:(_Bool)arg1;
- (_Bool)isCheckAll;
- (void)notifyCheck:(_Bool)arg1;
- (void)clearAllChildren;
- (void)removeChild:(id <ATSDataComponent>)arg1;
- (void)addChild:(id <ATSDataComponent>)arg1;
- (void)setParent:(id <ATSDataComponent>)arg1;
- (id <ATSDataComponent>)parent;
- (NSMutableArray *)children;
- (NSMutableDictionary *)fields;
- (void)setData:(NSMutableDictionary *)arg1;
- (NSMutableDictionary *)data;
- (_Bool)editable;
- (NSString *)tag;
@end

