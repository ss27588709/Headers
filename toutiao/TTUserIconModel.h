//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class FRImageInfoModel, NSString;

@interface TTUserIconModel : NSObject <NSCoding>
{
    FRImageInfoModel *_icon_url;
    NSString *_action_url;
}

@property(retain, nonatomic) NSString *action_url; // @synthesize action_url=_action_url;
@property(retain, nonatomic) FRImageInfoModel *icon_url; // @synthesize icon_url=_icon_url;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

