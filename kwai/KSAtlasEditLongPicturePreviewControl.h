//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "KSInvocationBroadcasting-Protocol.h"

@class BFCancellationTokenSource, NSArray, NSString;
@protocol KSAtlasEditLongPicturePreviewControlDelegate;

@interface KSAtlasEditLongPicturePreviewControl : UIControl <KSInvocationBroadcasting>
{
    id <KSAtlasEditLongPicturePreviewControlDelegate> _delegate;
    double _threshold;
    NSArray *_containerViews;
    NSArray *_imageViews;
    long long _currentIndex;
    BFCancellationTokenSource *_reloadTCS;
    struct CGPoint _initialTouchPosition;
    struct CGPoint _previousTrackingPosition;
}

@property(retain, nonatomic) BFCancellationTokenSource *reloadTCS; // @synthesize reloadTCS=_reloadTCS;
@property(nonatomic) struct CGPoint previousTrackingPosition; // @synthesize previousTrackingPosition=_previousTrackingPosition;
@property(nonatomic) struct CGPoint initialTouchPosition; // @synthesize initialTouchPosition=_initialTouchPosition;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) NSArray *containerViews; // @synthesize containerViews=_containerViews;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(nonatomic) __weak id <KSAtlasEditLongPicturePreviewControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)leftEdgeSwipable;
- (_Bool)rightEdgeSwipable;
- (void)snapFromRighEdge:(_Bool)arg1 shoudSwitch:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetTrackingStatus;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)_followingContainerView;
- (id)_previousContainerView;
- (id)_currentContainerView;
- (id)_followingImageView;
- (id)_previousImageView;
- (id)_currentImageView;
- (void)_updateContainerViews;
- (id)preloadNextImage:(id)arg1;
- (id)preloadPreviousImage:(id)arg1;
- (id)reloadCurrentPreview;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)ks_subscriptEnabled;
- (_Bool)ks_broadcastEnabled;
- (id)ks_stringsOfSelectorToBroadcast;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

