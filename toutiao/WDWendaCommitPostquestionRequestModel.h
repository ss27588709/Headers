//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSString;
@protocol Optional;

@interface WDWendaCommitPostquestionRequestModel : TTRequestModel
{
    NSString<Optional> *_title;
    NSString<Optional> *_content;
    NSString<Optional> *_pic_list;
    NSString<Optional> *_concern_ids;
    NSString<Optional> *_api_param;
    NSString<Optional> *_list_entrance;
    NSString<Optional> *_source;
    NSString<Optional> *_gd_ext_json;
}

@property(retain, nonatomic) NSString<Optional> *gd_ext_json; // @synthesize gd_ext_json=_gd_ext_json;
@property(retain, nonatomic) NSString<Optional> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString<Optional> *list_entrance; // @synthesize list_entrance=_list_entrance;
@property(retain, nonatomic) NSString<Optional> *api_param; // @synthesize api_param=_api_param;
@property(retain, nonatomic) NSString<Optional> *concern_ids; // @synthesize concern_ids=_concern_ids;
@property(retain, nonatomic) NSString<Optional> *pic_list; // @synthesize pic_list=_pic_list;
@property(retain, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end
