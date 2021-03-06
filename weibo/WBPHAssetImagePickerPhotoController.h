//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAssetImagePickerPhotoController.h"

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "WBAssetImagePickerCellDelegate-Protocol.h"
#import "WBCollectionViewDelegate-Protocol.h"
#import "WBMediaBrowserViewScrollSelectDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString, PHAssetCollection, PHCachingImageManager, PHFetchOptions, PHFetchResult, PHImageRequestOptions;
@protocol OS_dispatch_queue;

@interface WBPHAssetImagePickerPhotoController : WBAssetImagePickerPhotoController <WBAssetImagePickerCellDelegate, PHPhotoLibraryChangeObserver, WBCollectionViewDelegate, WBMediaBrowserViewScrollSelectDelegate>
{
    struct {
        unsigned int isScrollingToTop:1;
    } _flags;
    _Bool _showVideoCameraButton;
    _Bool _showPhotoCameraButton;
    NSArray *_allCollections;
    NSMutableArray *_assetCollections;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_phAssets;
    PHFetchOptions *_fetchOptions;
    NSObject<OS_dispatch_queue> *_assetQueue;
    PHCachingImageManager *_imageManager;
    PHImageRequestOptions *_options;
    struct CGRect _previousPreheatRect;
}

+ (_Bool)checkPHAssetFullScreenImageAvailabe:(id)arg1;
@property(nonatomic) _Bool showPhotoCameraButton; // @synthesize showPhotoCameraButton=_showPhotoCameraButton;
@property(nonatomic) _Bool showVideoCameraButton; // @synthesize showVideoCameraButton=_showVideoCameraButton;
@property struct CGRect previousPreheatRect; // @synthesize previousPreheatRect=_previousPreheatRect;
@property(retain, nonatomic) PHImageRequestOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueue; // @synthesize assetQueue=_assetQueue;
@property(retain, nonatomic) PHFetchOptions *fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(retain, nonatomic) PHFetchResult *phAssets; // @synthesize phAssets=_phAssets;
@property(retain) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(retain, nonatomic) NSMutableArray *assetCollections; // @synthesize assetCollections=_assetCollections;
@property(retain, nonatomic) NSArray *allCollections; // @synthesize allCollections=_allCollections;
- (void).cxx_destruct;
- (void)photoPreviewerScrollingWithFoundIndex:(long long)arg1 indexPath:(id)arg2 scrollDirection:(unsigned long long)arg3;
- (long long)cacheIndexInCollectionView:(id)arg1;
- (void)photoPreviewer:(id)arg1 didSelectWithCache:(id)arg2 withScrollDirection:(unsigned long long)arg3;
- (void)mediaBrowser:(id)arg1 didSelectWithCache:(id)arg2 withScrollDirection:(unsigned long long)arg3;
- (id)assetsAtIndexPaths:(id)arg1;
- (void)computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
- (void)updateCachedAssets;
- (void)resetCachedAssets;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (id)collectionView:(id)arg1 peekingViewControllerForItemAtIndexPath:(id)arg2;
- (_Bool)registersPeekingGesture;
- (id)tempCacheWithCache:(id)arg1;
- (long long)indexForCache:(id)arg1;
- (id)emptyViewDescription;
- (_Bool)shouldEnableOriginalToggle;
- (_Bool)shouldIgnoreFullScreenImageCheck;
- (_Bool)shouldEnableCellToggleButtonCount;
- (Class)imageBrowserClass;
- (void)reloadCellToggleButtonNumber;
- (void)thumnailImageForAsset:(id)arg1 requestOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateViewWithScrollOffset:(struct CGPoint)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (_Bool)isInCameraRoll:(id)arg1;
- (void)selectAssetGroupWithIndex:(unsigned long long)arg1 filterView:(id)arg2;
- (void)livePhotoForAssetImagePickerCell:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)livePhotoButtonPressed:(_Bool)arg1 assetImagePickerCell:(id)arg2;
- (_Bool)assetImagePickerCellIsLivePhotoOpened:(id)arg1;
- (_Bool)assetImagePickerCellIsLivePhoto:(id)arg1;
- (void)thumnailImageForAssetImagePickerCell:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accessibilityLabelForAssetImagePickerCell:(id)arg1;
- (unsigned long long)videoDurationForAssetImagePickerCell:(id)arg1;
- (void)assetImagePickerCell:(id)arg1 queryExtraTypesWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)assetImagePickerCellIsSoloVideo:(id)arg1;
- (_Bool)assetImagePickerCellIsVideo:(id)arg1;
- (_Bool)assetImagePickerCell:(id)arg1 selected:(_Bool)arg2;
- (unsigned long long)assetImagePickerCellSelectedIndex:(id)arg1;
- (_Bool)assetImagePickerCellIsSelected:(id)arg1;
- (void)stopDoneButtonAnimation;
- (_Bool)isNeedHideToggleButtonForIndex:(id)arg1;
- (struct CGSize)thumnailImageSize;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)indexForAsset:(id)arg1;
- (long long)indexForAssetInfo:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)cache:(id)arg1 toggled:(_Bool)arg2;
- (_Bool)toggleWithPhotoDict:(id)arg1 selected:(_Bool)arg2;
- (unsigned long long)selectedIndexForIndexPath:(id)arg1;
- (id)photoInfoDictForIndexPath:(id)arg1;
- (id)indexPathForPhotoInfoDict:(id)arg1;
- (void)previewBeginWithAssetDictionary:(id)arg1 forCell:(id)arg2;
- (void)startPanoramaImagePreviewWithEditorCache:(id)arg1 sourceView:(id)arg2;
- (void)previewAction;
- (void)previewButtonPressed;
- (void)filterButtonPressed;
- (void)switchToVideoAlbum;
- (_Bool)isPanoramaImageForDic:(id)arg1;
- (_Bool)isVideoForDic:(id)arg1;
- (_Bool)isInCameraRoll;
- (_Bool)isInSoloVideoAlbum;
- (_Bool)isInVideoAlbum;
- (void)reloadData;
- (void)configHeadButton;
- (void)refreshAllItems;
- (id)fetchResultFromCurrentCollection;
- (void)reloadAssetCollecitons:(_Bool)arg1 sync:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadAssetCollecitonsSync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadAssetCollecitonsCompletion:(CDUnknownBlockType)arg1;
- (id)allCollections:(_Bool)arg1;
- (id)videoCollection;
- (id)dummyAssetCachedArray;
- (void)viewDidLoad;
- (id)initWithPHAssetCollection:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

