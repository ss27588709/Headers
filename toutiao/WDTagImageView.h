//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTImageView.h"

@class SSThemedImageView, SSThemedLabel;

@interface WDTagImageView : TTImageView
{
    SSThemedImageView *_tagView;
    SSThemedLabel *_tagLabel;
}

@property(retain, nonatomic) SSThemedLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) SSThemedImageView *tagView; // @synthesize tagView=_tagView;
- (void).cxx_destruct;
- (void)setTagLabelText:(id)arg1 position:(long long)arg2;
- (void)setTagLabelText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
