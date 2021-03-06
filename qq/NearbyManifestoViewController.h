//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/RichStateEditViewController.h>

@class NSString, UILabel;
@protocol NearbyManifestoViewControllerDelegate;

@interface NearbyManifestoViewController : RichStateEditViewController
{
    UILabel *_hintLabel;
    id <NearbyManifestoViewControllerDelegate> _delegate;
    NSString *_defaultText;
}

@property(copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
@property(nonatomic) __weak id <NearbyManifestoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)resetTextViewRelatedFrame;
- (void)leftButtonClick:(id)arg1;
- (void)layoutSubControls;
- (void)loadView;

@end

