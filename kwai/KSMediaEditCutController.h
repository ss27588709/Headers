//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSMediaEditActionController.h"

#import "KSMediaEditCancelable-Protocol.h"

@class KSMediaEditCutActionsView, NSArray, NSString;

@interface KSMediaEditCutController : KSMediaEditActionController <KSMediaEditCancelable>
{
    KSMediaEditCutActionsView *_actionsView;
    CDUnknownBlockType _showAlertBlock;
    double _minRemainingDuration;
    NSArray *_previousCutItems;
}

@property(retain, nonatomic) NSArray *previousCutItems; // @synthesize previousCutItems=_previousCutItems;
@property(readonly, nonatomic) double minRemainingDuration; // @synthesize minRemainingDuration=_minRemainingDuration;
@property(copy, nonatomic) CDUnknownBlockType showAlertBlock; // @synthesize showAlertBlock=_showAlertBlock;
@property(retain, nonatomic) KSMediaEditCutActionsView *actionsView; // @synthesize actionsView=_actionsView;
- (void).cxx_destruct;
- (void)finishEditing;
- (void)cancelEditing;
- (void)beginEditing;
- (double)_cutDurationWithCutRanges:(id)arg1;
- (_Bool)_hasSufficientRemainingTimeWithCutRanges:(id)arg1;
- (id)_mergeOverlappingRanges:(id)arg1;
- (double)_calcMaxEndTimeFromStartTimeToUseUpAvailableCutTimeAsMuchAsPossible:(double)arg1;
- (double)_calcMinStartTimeToEndTimeToUseUpAvailableCutTimeAsMuchAsPossible:(double)arg1;
- (void)timeLineViewController:(id)arg1 didUpdateItemAtIndex:(unsigned long long)arg2;
- (void)_showRemainingDurationTooShortAlert;
- (double)timeLineViewController:(id)arg1 willAdjustEndTimeOfItemAtIndex:(unsigned long long)arg2 toNewValue:(double)arg3;
- (double)timeLineViewController:(id)arg1 willAdjustStartTimeOfItemAtIndex:(unsigned long long)arg2 toNewValue:(double)arg3;
- (_Bool)timeLineViewController:(id)arg1 shouldEditItemAtIndex:(unsigned long long)arg2;
- (void)_updateUndoButton:(id)arg1;
- (void)_updateCutButton:(id)arg1;
- (void)undo;
- (void)cut;
- (void)endEdit;
- (void)startEdit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

