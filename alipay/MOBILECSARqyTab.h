//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSAToString.h"

@class NSArray, NSDictionary, NSString;

@interface MOBILECSARqyTab : MOBILECSAToString
{
    _Bool _active;
    NSString *_catId;
    NSString *_name;
    NSString *_picture;
    NSString *_title;
    NSString *_showTitle;
    NSArray *_modelList;
    NSArray *_adList;
    NSString *_templateType;
    NSString *_scoreUrl;
    NSDictionary *_extendInfo;
    NSDictionary *_blockTemplates;
}

+ (Class)blockTemplatesElementClass;
+ (Class)extendInfoElementClass;
+ (Class)adListElementClass;
+ (Class)modelListElementClass;
@property(retain, nonatomic) NSDictionary *blockTemplates; // @synthesize blockTemplates=_blockTemplates;
@property(retain, nonatomic) NSDictionary *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(retain, nonatomic) NSString *scoreUrl; // @synthesize scoreUrl=_scoreUrl;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSArray *adList; // @synthesize adList=_adList;
@property(retain, nonatomic) NSArray *modelList; // @synthesize modelList=_modelList;
@property(retain, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *picture; // @synthesize picture=_picture;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
- (void).cxx_destruct;

@end

