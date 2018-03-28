//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString, TTLiveMessageArticleModel, TTLiveMessageMediaModel, TTLiveMessageProfileModel;

@interface TTLiveMessageModel : NSObject
{
    NSNumber *_liked;
    NSNumber *_uid;
    NSNumber *_content_type;
    NSNumber *_msgId;
    NSNumber *_cursor;
    NSString *_role;
    NSNumber *_like_count;
    NSString *_user_pic;
    NSNumber *_user_vip;
    NSString *_tag;
    NSNumber *_time;
    TTLiveMessageModel *_reply;
    NSString *_user_name;
    NSString *_contentLink;
    NSString *_contentOpenUrl;
    NSString *_contentText;
    NSArray *_contentAudioArray;
    NSArray *_contentPictureArray;
    NSArray *_contentVideoArray;
    TTLiveMessageProfileModel *_contentProfile;
    TTLiveMessageMediaModel *_contentMedia;
    TTLiveMessageArticleModel *_contentArticle;
}

@property(retain, nonatomic) TTLiveMessageArticleModel *contentArticle; // @synthesize contentArticle=_contentArticle;
@property(retain, nonatomic) TTLiveMessageMediaModel *contentMedia; // @synthesize contentMedia=_contentMedia;
@property(retain, nonatomic) TTLiveMessageProfileModel *contentProfile; // @synthesize contentProfile=_contentProfile;
@property(retain, nonatomic) NSArray *contentVideoArray; // @synthesize contentVideoArray=_contentVideoArray;
@property(retain, nonatomic) NSArray *contentPictureArray; // @synthesize contentPictureArray=_contentPictureArray;
@property(retain, nonatomic) NSArray *contentAudioArray; // @synthesize contentAudioArray=_contentAudioArray;
@property(copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(copy, nonatomic) NSString *contentOpenUrl; // @synthesize contentOpenUrl=_contentOpenUrl;
@property(copy, nonatomic) NSString *contentLink; // @synthesize contentLink=_contentLink;
@property(copy, nonatomic) NSString *user_name; // @synthesize user_name=_user_name;
@property(retain, nonatomic) TTLiveMessageModel *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSNumber *user_vip; // @synthesize user_vip=_user_vip;
@property(copy, nonatomic) NSString *user_pic; // @synthesize user_pic=_user_pic;
@property(retain, nonatomic) NSNumber *like_count; // @synthesize like_count=_like_count;
@property(copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSNumber *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSNumber *content_type; // @synthesize content_type=_content_type;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSNumber *liked; // @synthesize liked=_liked;
- (void).cxx_destruct;

@end
