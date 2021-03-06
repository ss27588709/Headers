//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKDataBaseObject.h"

@class MovieSDKDataListInfo, NSNumber, NSString;

@interface MovieSDKMovie : MovieSDKDataBaseObject
{
    NSString *_name;
    NSString *_film_id;
    NSString *_genre;
    NSString *_release_time;
    NSString *_score;
    NSString *_wanttosee;
    NSString *_poster_url;
    NSString *_preview_url;
    MovieSDKDataListInfo *_actors;
    NSString *_share_text;
    NSNumber *_user_score;
}

@property(retain, nonatomic) NSNumber *user_score; // @synthesize user_score=_user_score;
@property(copy, nonatomic) NSString *share_text; // @synthesize share_text=_share_text;
@property(retain, nonatomic) MovieSDKDataListInfo *actors; // @synthesize actors=_actors;
@property(copy, nonatomic) NSString *preview_url; // @synthesize preview_url=_preview_url;
@property(copy, nonatomic) NSString *poster_url; // @synthesize poster_url=_poster_url;
@property(copy, nonatomic) NSString *wanttosee; // @synthesize wanttosee=_wanttosee;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *release_time; // @synthesize release_time=_release_time;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *film_id; // @synthesize film_id=_film_id;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;
- (id)actorStr;
- (id)getStrFromActersArray:(id)arg1 WithFrontStr:(id)arg2;

@end

