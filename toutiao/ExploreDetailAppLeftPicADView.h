//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreDetailMixedLeftPicADView.h"

@class SSThemedButton;

@interface ExploreDetailAppLeftPicADView : ExploreDetailMixedLeftPicADView
{
    SSThemedButton *_downloadButton;
    SSThemedButton *_downloadIcon;
}

+ (double)heightForADModel:(id)arg1 constrainedToWidth:(double)arg2;
+ (void)load;
@property(retain, nonatomic) SSThemedButton *downloadIcon; // @synthesize downloadIcon=_downloadIcon;
@property(retain, nonatomic) SSThemedButton *downloadButton; // @synthesize downloadButton=_downloadButton;
- (void).cxx_destruct;
- (id)dislikeImageName;
- (void)_downloadAppActionFired:(id)arg1;
- (void)layout;
- (void)setAdModel:(id)arg1;
- (id)initWithWidth:(double)arg1;

@end
