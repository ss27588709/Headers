//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QOverlayPathView.h"

@class QCircle;

@interface QCircleView : QOverlayPathView
{
    QCircle *_circle;
}

@property(readonly, nonatomic) QCircle *circle; // @synthesize circle=_circle;
- (void).cxx_destruct;
- (void)createPath;
- (id)initWithCircle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

