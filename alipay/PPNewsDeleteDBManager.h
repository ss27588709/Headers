//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APCustomStorage;
@protocol PPNewsDeleteDAOProxy;

@interface PPNewsDeleteDBManager : NSObject
{
    id <PPNewsDeleteDAOProxy> _daoProxy;
    APCustomStorage *_storage;
}

+ (id)sharedInstance;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) id <PPNewsDeleteDAOProxy> daoProxy; // @synthesize daoProxy=_daoProxy;
- (void).cxx_destruct;
- (_Bool)isMessageDeleted:(id)arg1 userId:(id)arg2;
- (void)recordMessageDeleted:(id)arg1 userId:(id)arg2;
- (void)setupDaoProxy;
- (id)dbConfigPath;

@end

