//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBLiveCPCardHeaderModel;

@interface TBLiveCPPointAdGroupModel : TBJSONModel
{
    TBLiveCPCardHeaderModel *_hpCardHeadItem;
    NSString *_picJumpUrl;
    NSString *_pic;
}

@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *picJumpUrl; // @synthesize picJumpUrl=_picJumpUrl;
@property(retain, nonatomic) TBLiveCPCardHeaderModel *hpCardHeadItem; // @synthesize hpCardHeadItem=_hpCardHeadItem;
- (void).cxx_destruct;

@end

