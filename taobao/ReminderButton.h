//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView;
@protocol RemindButtonDelegate;

@interface ReminderButton : UIButton
{
    int _remindTime;
    NSString *_remindStr;
    UIImageView *_checkMark;
    id <RemindButtonDelegate> _delegate;
}

@property id <RemindButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *checkMark; // @synthesize checkMark=_checkMark;
@property(retain, nonatomic) NSString *remindStr; // @synthesize remindStr=_remindStr;
@property int remindTime; // @synthesize remindTime=_remindTime;
- (void).cxx_destruct;
- (void)unSelectButton;
- (void)selectButton;
- (void)click;
- (id)initWithFrame:(struct CGRect)arg1 AndRemindStr:(id)arg2 AndRemindTime:(int)arg3 AndDelegate:(id)arg4;

@end

