//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@interface SystemEmojiCount : NSObject <NSCoding>
{
    unsigned int _id;
    unsigned int _type;
    unsigned int _count;
    unsigned long long _ts;
}

@property(nonatomic) unsigned long long ts; // @synthesize ts=_ts;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int id; // @synthesize id=_id;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
