//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class LFGridCellItemView, NSArray, NSString, UIView;

@interface LFGridTableViewCell : UITableViewCell
{
    NSString *_publicId;
    LFGridCellItemView *_leftItemView;
    LFGridCellItemView *_rightItemView;
    UIView *_lineCenter;
    UIView *_lineBottom;
    NSArray *_modelArray;
}

@property(retain, nonatomic) NSArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) UIView *lineBottom; // @synthesize lineBottom=_lineBottom;
@property(retain, nonatomic) UIView *lineCenter; // @synthesize lineCenter=_lineCenter;
@property(retain, nonatomic) LFGridCellItemView *rightItemView; // @synthesize rightItemView=_rightItemView;
@property(retain, nonatomic) LFGridCellItemView *leftItemView; // @synthesize leftItemView=_leftItemView;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
- (void).cxx_destruct;
- (void)tapAction:(id)arg1;
- (void)loadData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

