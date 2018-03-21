//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface PLTopicLabel : UILabel
{
    int _margin;
    unsigned long long _style;
}

+ (id)labelWithStyle:(unsigned long long)arg1;
@property(nonatomic) int margin; // @synthesize margin=_margin;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isAddTopicView;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)sizeToFit;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)init;

@end
