//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/MQzoneAlbumPickerDelegate-Protocol.h>

@class NSString, QZQuoteAlbumInfoView, UIButton, UILabel;

@interface QZQuoteDialogView : UIView <MQzoneAlbumPickerDelegate>
{
    UIView *_contentView;
    QZQuoteAlbumInfoView *_albumInfoView;
    UILabel *_label;
    UIButton *_quoteBtn;
    _Bool _isCopy;
    CDUnknownBlockType _quoteDialogViewOnClickSelectAlbumBlock;
    CDUnknownBlockType _quoteDialogViewOnClickQuote;
    CDUnknownBlockType _photoForwardingBarOnClickCancel;
}

+ (id)convertFeedModelToPhotoAlbum:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType photoForwardingBarOnClickCancel; // @synthesize photoForwardingBarOnClickCancel=_photoForwardingBarOnClickCancel;
@property(copy, nonatomic) CDUnknownBlockType quoteDialogViewOnClickQuote; // @synthesize quoteDialogViewOnClickQuote=_quoteDialogViewOnClickQuote;
@property(copy, nonatomic) CDUnknownBlockType quoteDialogViewOnClickSelectAlbumBlock; // @synthesize quoteDialogViewOnClickSelectAlbumBlock=_quoteDialogViewOnClickSelectAlbumBlock;
@property(nonatomic) _Bool isCopy; // @synthesize isCopy=_isCopy;
- (void).cxx_destruct;
- (void)didSelectAlbum:(id)arg1;
- (void)dealloc;
- (void)onClickCancel:(id)arg1;
- (void)onClickQuote:(id)arg1;
- (void)onClickChangeAlbum:(id)arg1;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

