//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SpritePushItemDrawerInfo.h>

@class NSString;

@interface SpriteRedDotModel : SpritePushItemDrawerInfo
{
    int _type;
    NSString *_redPath;
    NSString *_redID;
    NSString *_taskId;
}

@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *redID; // @synthesize redID=_redID;
@property(retain, nonatomic) NSString *redPath; // @synthesize redPath=_redPath;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;
- (id)toDictionary;
- (id)initWithDict:(id)arg1;

@end
