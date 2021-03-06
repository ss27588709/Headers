//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBARDetailShareViewDelegate-Protocol.h"
#import "TaoPasswordShareDelegate-Protocol.h"

@class NSString, TBARDetailBaseViewController, TPShareHandler, TPShareResult;

@interface TBARDetailTPShareDelegate : NSObject <TBARDetailShareViewDelegate, TaoPasswordShareDelegate>
{
    _Bool _needSaveImage;
    TBARDetailBaseViewController *_arDetailVC;
    TPShareResult *_shareResult;
    TPShareHandler *_shareHandler;
}

@property(retain, nonatomic) TPShareHandler *shareHandler; // @synthesize shareHandler=_shareHandler;
@property(retain, nonatomic) TPShareResult *shareResult; // @synthesize shareResult=_shareResult;
@property(nonatomic) _Bool needSaveImage; // @synthesize needSaveImage=_needSaveImage;
@property(nonatomic) __weak TBARDetailBaseViewController *arDetailVC; // @synthesize arDetailVC=_arDetailVC;
- (void).cxx_destruct;
- (void)shareView:(id)arg1 shareTargetClicked:(unsigned long long)arg2;
- (void)saveImageToAlbum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didPasswordRequestFinished:(id)arg1 afterHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

