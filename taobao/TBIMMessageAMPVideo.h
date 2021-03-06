//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMMessageAMP.h"

#import "TBIMVideoMessage-Protocol.h"

@class NSString;

@interface TBIMMessageAMPVideo : TBIMMessageAMP <TBIMVideoMessage>
{
}

- (id)getPreviwImageObject;
- (struct CGSize)getPreviewImageSize;
- (long long)getVideoDuration;
- (id)getVideoUrl:(_Bool *)arg1;
- (id)getPreviewCDNURL;
- (id)getPreviewURL:(_Bool *)arg1;
- (int)getMessageType;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) struct CGSize text1Size;
@property(nonatomic) struct CGSize text2Size;

@end

