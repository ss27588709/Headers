//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface AWEChallengeParticipateTableViewCell : UITableViewCell
{
    UILabel *_challengeNameLabel;
    UILabel *_challengeCountLabel;
    UILabel *_challengeDescriptionLabel;
}

+ (id)identifier;
@property(retain, nonatomic) UILabel *challengeDescriptionLabel; // @synthesize challengeDescriptionLabel=_challengeDescriptionLabel;
@property(retain, nonatomic) UILabel *challengeCountLabel; // @synthesize challengeCountLabel=_challengeCountLabel;
@property(retain, nonatomic) UILabel *challengeNameLabel; // @synthesize challengeNameLabel=_challengeNameLabel;
- (void).cxx_destruct;
- (void)p_addSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

