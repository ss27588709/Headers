//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBMediaPlaybackItem-Protocol.h"

@class NSArray, NSString;

@interface WBSlidesItem : WBModelObject <WBMediaPlaybackItem>
{
    _Bool _isSingleStory;
    NSArray *_slideItems;
    NSArray *_videoItems;
    NSString *_title;
    NSString *_slidesId;
}

@property(nonatomic) _Bool isSingleStory; // @synthesize isSingleStory=_isSingleStory;
@property(copy, nonatomic) NSString *slidesId; // @synthesize slidesId=_slidesId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *videoItems; // @synthesize videoItems=_videoItems;
@property(retain, nonatomic) NSArray *slideItems; // @synthesize slideItems=_slideItems;
- (void).cxx_destruct;
- (id)dictionaryWithValues;
- (_Bool)_updateWithDictionary:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
@property(nonatomic) long long sp_currentSlideIndex;
- (long long)sp_nextSlideIndex;
- (_Bool)allowsMultipleMediaAutoPlayForSameContentInSameController;
- (_Bool)equalToMediaPlaybackItem:(id)arg1;
- (_Bool)canPerformMediaAutoPlay;
@property(readonly, nonatomic) NSString *mediaAutoPlayContextID;
@property(readonly, nonatomic) NSString *mediaPlaybackIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

