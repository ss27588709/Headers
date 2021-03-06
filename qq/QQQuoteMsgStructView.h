//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQQuoteMsgBaseView.h>

@class NSString, QQAvatarView, UILabel, UIView;

@interface QQQuoteMsgStructView : QQQuoteMsgBaseView
{
    QQAvatarView *_coverView;
    UIView *_labelView;
    UILabel *_titleLabel;
    UILabel *_sourceLabel;
    NSString *_jumpUrl;
    UIView *_separator;
}

+ (double)getTextWidthWithViewWidth:(double)arg1;
+ (id)parseResultWithModel:(id)arg1 width:(double)arg2 font:(id)arg3 fontId:(long long)arg4;
+ (struct CGRect)preCalRectWithFont:(id)arg1 titleResult:(id)arg2 msgResult:(id)arg3 maxWidth:(double)arg4;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *labelView; // @synthesize labelView=_labelView;
@property(retain, nonatomic) QQAvatarView *coverView; // @synthesize coverView=_coverView;
- (void)gotoQutoMsg;
- (struct CGRect)preCalRectWithWidth:(double)arg1 titleResult:(id)arg2 msgResult:(id)arg3;
- (void)refreshUI;
- (void)setFontColor:(id)arg1;
- (void)setFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

