//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class UIView, UserSummaryPhotoWallModel;

@interface UserSummaryPhotosWallImageModel : NSObject <NSCopying>
{
    _Bool _checked;
    UserSummaryPhotoWallModel *_photoWallModel;
    UIView *_superview;
    long long _rowIndex;
    long long _columnIndex;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) long long columnIndex; // @synthesize columnIndex=_columnIndex;
@property(nonatomic) long long rowIndex; // @synthesize rowIndex=_rowIndex;
@property(retain, nonatomic) UIView *superview; // @synthesize superview=_superview;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) UserSummaryPhotoWallModel *photoWallModel; // @synthesize photoWallModel=_photoWallModel;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

