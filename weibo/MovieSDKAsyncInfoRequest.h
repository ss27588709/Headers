//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKHttpRequest.h"

@class MovieSDKDataAsyncableObject;

@interface MovieSDKAsyncInfoRequest : MovieSDKHttpRequest
{
    MovieSDKDataAsyncableObject *_data;
}

@property(retain, nonatomic) MovieSDKDataAsyncableObject *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)initWithAsyncData:(id)arg1;
- (_Bool)analysisData:(id)arg1;
- (id)requestPath;

@end

