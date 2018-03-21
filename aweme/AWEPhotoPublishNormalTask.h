//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEVideoPublishTask.h"

@class AWEAwemeModel, AWEVideoPublisher, NSURL;

@interface AWEPhotoPublishNormalTask : AWEVideoPublishTask
{
    AWEAwemeModel *_aweme;
    AWEVideoPublisher *_photoPublisher;
    NSURL *_photoFileURL;
}

@property(retain, nonatomic) NSURL *photoFileURL; // @synthesize photoFileURL=_photoFileURL;
@property(retain, nonatomic) AWEVideoPublisher *photoPublisher; // @synthesize photoPublisher=_photoPublisher;
@property(retain, nonatomic) AWEAwemeModel *aweme; // @synthesize aweme=_aweme;
- (void).cxx_destruct;
- (void)observePublishProgress;
- (void)removeTmpPhotoFile;
- (void)savePhotoToSandbox;
- (void)beginVideoEditing;
- (id)initWithModel:(id)arg1;

@end
