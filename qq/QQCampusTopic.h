//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSString;

@interface QQCampusTopic : NSObject <NSCoding>
{
    NSString *_topicId;
    NSString *_text;
    unsigned long long _uv;
    NSString *_color;
    NSString *_iconUrl;
    NSString *_iconUrlHl;
    NSString *_ext;
}

+ (struct NSArray *)readObjects:(id)arg1 key:(id)arg2;
+ (void)saveObjects:(struct NSArray *)arg1 key:(id)arg2 storage:(id)arg3;
+ (struct NSArray *)readObjects:(id)arg1;
+ (void)saveObjects:(struct NSArray *)arg1 storage:(id)arg2;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *iconUrlHl; // @synthesize iconUrlHl=_iconUrlHl;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long uv; // @synthesize uv=_uv;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)debugDescription;

@end

