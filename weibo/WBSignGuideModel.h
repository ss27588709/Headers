//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString, WBPageCard;

@interface WBSignGuideModel : WBModelObject
{
    WBPageCard *_pageCard;
    NSString *_lockImageUlr;
    NSString *_titleStr;
    NSString *_closeImageUrl;
    NSString *_topicBgImageUrl;
    long long _guideSource;
}

@property(nonatomic) long long guideSource; // @synthesize guideSource=_guideSource;
@property(retain, nonatomic) NSString *topicBgImageUrl; // @synthesize topicBgImageUrl=_topicBgImageUrl;
@property(retain, nonatomic) NSString *closeImageUrl; // @synthesize closeImageUrl=_closeImageUrl;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) NSString *lockImageUlr; // @synthesize lockImageUlr=_lockImageUlr;
@property(retain, nonatomic) WBPageCard *pageCard; // @synthesize pageCard=_pageCard;
- (void).cxx_destruct;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

@end

