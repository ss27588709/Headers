//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MCLongRecommandItemView;

@interface MCRecentContactRecommendTableViewCell : UITableViewCell
{
    CDUnknownBlockType _subcribedBlock;
    MCLongRecommandItemView *_recommandItemView;
}

@property(retain, nonatomic) MCLongRecommandItemView *recommandItemView; // @synthesize recommandItemView=_recommandItemView;
@property(copy, nonatomic) CDUnknownBlockType subcribedBlock; // @synthesize subcribedBlock=_subcribedBlock;
- (void).cxx_destruct;
- (void)itemViewSubscribeClick:(id)arg1;
- (void)setSubcribed:(_Bool)arg1;
- (void)setRecommendData:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

