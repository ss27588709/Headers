//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol GCVImageLoaderProtocol;

@interface GCVCommon : NSObject
{
    id <GCVImageLoaderProtocol> _imageLoader;
    long long _logLevel;
    NSMutableDictionary *_hadLoadImageDict;
}

+ (unsigned int)bindTexture:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *hadLoadImageDict; // @synthesize hadLoadImageDict=_hadLoadImageDict;
@property(nonatomic) long long logLevel; // @synthesize logLevel=_logLevel;
@property(nonatomic) __weak id <GCVImageLoaderProtocol> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void).cxx_destruct;
- (void)clearLoadImageDict;
- (void)removeLoadImage:(id)arg1;
- (id)fetchLoadImage:(id)arg1;
- (void)addPreLoadImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
