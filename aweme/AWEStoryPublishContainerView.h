//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class AWEStoryColorSlider, AWEStoryPenColorCollectionView, AWEStoryPublishAnimationButton, AWEStoryTextView, NSArray, NSMutableArray, NSString, UIButton, UIColor, UIImageView, UILabel;
@protocol AWEStoryPublishContainerViewDelegate;

@interface AWEStoryPublishContainerView : UIView <UITextViewDelegate>
{
    _Bool _expendPen;
    id <AWEStoryPublishContainerViewDelegate> _delegate;
    unsigned long long _state;
    UIButton *_cancelBtn;
    UIButton *_labelBtn;
    UIButton *_penBtn;
    UIButton *_voiceBtn;
    UIButton *_deleteBtn;
    UIImageView *_saveBtn;
    UILabel *_saveLabel;
    NSMutableArray *_mainBtns;
    AWEStoryPenColorCollectionView *_penColorView;
    NSMutableArray *_penBtns;
    unsigned long long _selectedBrush;
    unsigned long long _selectedPenNum;
    NSArray *_allPenTypes;
    UIColor *_selectedPenColor;
    AWEStoryPublishAnimationButton *_penRevokeBtn;
    AWEStoryPublishAnimationButton *_penFinishBtn;
    NSMutableArray *_labelViews;
    UIView *_labelMaskView;
    AWEStoryColorSlider *_labelColorSlider;
    AWEStoryPublishAnimationButton *_labelFinishBtn;
    AWEStoryTextView *_currentLabelTextView;
    NSMutableArray *_textViews;
    UIImageView *_labelAaImage;
    UIView *_saveContainer;
    unsigned long long _saveAnimationState;
}

@property(nonatomic) unsigned long long saveAnimationState; // @synthesize saveAnimationState=_saveAnimationState;
@property(retain, nonatomic) UIView *saveContainer; // @synthesize saveContainer=_saveContainer;
@property(retain, nonatomic) UIImageView *labelAaImage; // @synthesize labelAaImage=_labelAaImage;
@property(retain, nonatomic) NSMutableArray *textViews; // @synthesize textViews=_textViews;
@property(retain, nonatomic) AWEStoryTextView *currentLabelTextView; // @synthesize currentLabelTextView=_currentLabelTextView;
@property(retain, nonatomic) AWEStoryPublishAnimationButton *labelFinishBtn; // @synthesize labelFinishBtn=_labelFinishBtn;
@property(retain, nonatomic) AWEStoryColorSlider *labelColorSlider; // @synthesize labelColorSlider=_labelColorSlider;
@property(retain, nonatomic) UIView *labelMaskView; // @synthesize labelMaskView=_labelMaskView;
@property(retain, nonatomic) NSMutableArray *labelViews; // @synthesize labelViews=_labelViews;
@property(retain, nonatomic) AWEStoryPublishAnimationButton *penFinishBtn; // @synthesize penFinishBtn=_penFinishBtn;
@property(retain, nonatomic) AWEStoryPublishAnimationButton *penRevokeBtn; // @synthesize penRevokeBtn=_penRevokeBtn;
@property(retain, nonatomic) UIColor *selectedPenColor; // @synthesize selectedPenColor=_selectedPenColor;
@property(retain, nonatomic) NSArray *allPenTypes; // @synthesize allPenTypes=_allPenTypes;
@property(nonatomic) unsigned long long selectedPenNum; // @synthesize selectedPenNum=_selectedPenNum;
@property(nonatomic) unsigned long long selectedBrush; // @synthesize selectedBrush=_selectedBrush;
@property(nonatomic) _Bool expendPen; // @synthesize expendPen=_expendPen;
@property(retain, nonatomic) NSMutableArray *penBtns; // @synthesize penBtns=_penBtns;
@property(retain, nonatomic) AWEStoryPenColorCollectionView *penColorView; // @synthesize penColorView=_penColorView;
@property(retain, nonatomic) NSMutableArray *mainBtns; // @synthesize mainBtns=_mainBtns;
@property(retain, nonatomic) UILabel *saveLabel; // @synthesize saveLabel=_saveLabel;
@property(retain, nonatomic) UIImageView *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIButton *voiceBtn; // @synthesize voiceBtn=_voiceBtn;
@property(retain, nonatomic) UIButton *penBtn; // @synthesize penBtn=_penBtn;
@property(retain, nonatomic) UIButton *labelBtn; // @synthesize labelBtn=_labelBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <AWEStoryPublishContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)getButtonWithImageName:(id)arg1;
- (struct CGRect)getPenFrameWithIndex:(long long)arg1;
- (void)didFinishChooseColor;
- (void)didChangeColor;
- (id)textsArray;
- (id)generateTexts;
- (void)hidePenRevokeBtn:(_Bool)arg1;
- (void)pensHideWithAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)pensShowWithAnimation;
- (void)mainBtnsShowWithAnimation;
- (void)setSaveTitle:(id)arg1;
- (void)stopSaveAnimation;
- (void)startSaveAnimation;
- (void)didClickedSave;
- (void)didClickedLabelMaskView;
- (void)didClickedLabelFinish:(id)arg1;
- (void)startLabelProgress:(id)arg1;
- (void)didClickedLabel:(id)arg1;
- (void)didClickedPenFinish:(id)arg1;
- (void)didClickedPenRevoke:(id)arg1;
- (void)didClickedOneKindOfPen:(id)arg1;
- (void)didClickedVoice:(id)arg1;
- (void)didClickedPen:(id)arg1;
- (void)didFinish;
- (void)dealloc;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
