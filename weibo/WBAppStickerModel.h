//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStickerModel.h"

@class NSString;

@interface WBAppStickerModel : WBStickerModel
{
    NSString *_appKey;
    NSString *_appScheme;
    NSString *_appleUrl;
    NSString *_pack;
    NSString *_picUrl;
}

@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *pack; // @synthesize pack=_pack;
@property(retain, nonatomic) NSString *appleUrl; // @synthesize appleUrl=_appleUrl;
@property(retain, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (void)loadMarketData:(id)arg1;
- (_Bool)isDownload;
- (_Bool)isMatchDownload;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *oid;

@end

