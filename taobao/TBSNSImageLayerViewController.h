//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

@class NSArray, NSMutableDictionary, TBSNSILAnimationModel, UIImageView;

@interface TBSNSImageLayerViewController : TBViewController
{
    UIImageView *_background;
    NSMutableDictionary *_utParams;
    NSArray *_ilModels;
    TBSNSILAnimationModel *_animationModel;
    long long _index;
    long long _displayCount;
    CDUnknownBlockType _actionHandler;
}

+ (_Bool)tbNeedNavibar;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) long long displayCount; // @synthesize displayCount=_displayCount;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) TBSNSILAnimationModel *animationModel; // @synthesize animationModel=_animationModel;
@property(retain, nonatomic) NSArray *ilModels; // @synthesize ilModels=_ilModels;
@property(retain, nonatomic) NSMutableDictionary *utParams; // @synthesize utParams=_utParams;
@property(retain, nonatomic) UIImageView *background; // @synthesize background=_background;
- (void).cxx_destruct;
- (void)addReadCount;
- (void)dealloc;
- (void)updatePageUT;
- (void)didReceiveMemoryWarning;
- (_Bool)forbidbackPanGestureRecognized;
- (void)setUpView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithIlModels:(id)arg1 animationModel:(id)arg2 index:(long long)arg3 displayCount:(long long)arg4 utParams:(id)arg5 bounceTipHandler:(CDUnknownBlockType)arg6;

@end
