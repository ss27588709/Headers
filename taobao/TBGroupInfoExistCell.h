//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface TBGroupInfoExistCell : UITableViewCell
{
    UILabel *_existLabel;
    UIView *_existLabelBc;
}

+ (double)heightForCell;
@property(retain, nonatomic) UIView *existLabelBc; // @synthesize existLabelBc=_existLabelBc;
@property(retain, nonatomic) UILabel *existLabel; // @synthesize existLabel=_existLabel;
- (void).cxx_destruct;
- (void)setContent:(id)arg1;
- (void)initLabel;
- (void)initStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

