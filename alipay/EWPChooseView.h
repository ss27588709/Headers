//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EWChooseTableViewCell, NSString;

@interface EWPChooseView : UIView
{
    NSString *_title;
    NSString *_previewText;
    CDUnknownBlockType _action;
    EWChooseTableViewCell *_cellView;
}

@property(retain, nonatomic) EWChooseTableViewCell *cellView; // @synthesize cellView=_cellView;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *previewText; // @synthesize previewText=_previewText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)doPressAction;
- (id)initWithFrame:(struct CGRect)arg1;

@end

