//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TBShareContactViewModel : NSObject
{
    CDUnknownBlockType _actionBlock;
    NSArray *_models;
}

@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)shareWithModel:(id)arg1;
- (void)popMoreContactsView;
- (id)initWithModels:(id)arg1;

@end
