//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString;

@interface TTFoldCommentCellLayout : NSObject
{
    NSAttributedString *_contentAttriString;
    double _cellHeight;
    double _cellWidth;
    struct CGRect _avatarViewFrame;
    struct CGRect _nameViewFrame;
    struct CGRect _contentLabelFrame;
    struct CGRect _timeLabelFrame;
}

+ (id)arrayWithCommentModels:(id)arg1 cellWidth:(double)arg2;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSAttributedString *contentAttriString; // @synthesize contentAttriString=_contentAttriString;
@property(nonatomic) struct CGRect timeLabelFrame; // @synthesize timeLabelFrame=_timeLabelFrame;
@property(nonatomic) struct CGRect contentLabelFrame; // @synthesize contentLabelFrame=_contentLabelFrame;
@property(nonatomic) struct CGRect nameViewFrame; // @synthesize nameViewFrame=_nameViewFrame;
@property(nonatomic) struct CGRect avatarViewFrame; // @synthesize avatarViewFrame=_avatarViewFrame;
- (void).cxx_destruct;
- (void)layoutWithModel:(id)arg1;
- (id)initWithCommentModel:(id)arg1 cellWidth:(double)arg2;

@end

