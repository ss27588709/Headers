//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSCardView.h"

@class UIButton, UILabel, UIView;

@interface TBSNSCardFeedInteraction : TBSNSCardView
{
    UIButton *_commentClickAreaBtn;
    UIButton *_comment;
    UIButton *_commentIcon;
    UILabel *_commentCount;
    UIButton *_praiseClickAreaBtn;
    UIButton *_praise;
    UILabel *_praiseCount;
    UIView *_line1;
    UIView *_line2;
    UIButton *_btn;
    UIButton *_readIcon;
    UILabel *_readCount;
    UIButton *_praisedIconButton;
    UIButton *_unPraisedIconButton;
}

+ (struct CGSize)getDynamicSize:(_Bool)arg1;
+ (struct CGSize)fixedSize;
@property(retain, nonatomic) UIButton *unPraisedIconButton; // @synthesize unPraisedIconButton=_unPraisedIconButton;
@property(retain, nonatomic) UIButton *praisedIconButton; // @synthesize praisedIconButton=_praisedIconButton;
@property(retain, nonatomic) UILabel *readCount; // @synthesize readCount=_readCount;
@property(retain, nonatomic) UIButton *readIcon; // @synthesize readIcon=_readIcon;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
@property(retain, nonatomic) UIView *line2; // @synthesize line2=_line2;
@property(retain, nonatomic) UIView *line1; // @synthesize line1=_line1;
@property(retain, nonatomic) UILabel *praiseCount; // @synthesize praiseCount=_praiseCount;
@property(retain, nonatomic) UIButton *praise; // @synthesize praise=_praise;
@property(retain, nonatomic) UIButton *praiseClickAreaBtn; // @synthesize praiseClickAreaBtn=_praiseClickAreaBtn;
@property(retain, nonatomic) UILabel *commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) UIButton *commentIcon; // @synthesize commentIcon=_commentIcon;
@property(retain, nonatomic) UIButton *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) UIButton *commentClickAreaBtn; // @synthesize commentClickAreaBtn=_commentClickAreaBtn;
- (void).cxx_destruct;
- (void)shouldShowFeedInteraction:(_Bool)arg1;
- (void)setBkColor:(id)arg1;
- (void)setCommentCallback:(SEL)arg1 andTarget:(id)arg2;
- (void)setPraiseCallback:(SEL)arg1 andTarget:(id)arg2;
- (void)setClickCallback:(SEL)arg1 andTarget:(id)arg2;
- (void)reset;
- (void)setPraised:(_Bool)arg1;
- (void)setCommentCount:(id)arg1 andCommentWidth:(double *)arg2 andPraiseCount:(id)arg3 andPraiseWidth:(double *)arg4 andReadCount:(id)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)cardSize;

@end
