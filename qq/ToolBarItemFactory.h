//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ToolBarItemFactory : NSObject
{
}

+ (void)themeProcessButton:(id)arg1 image:(unsigned long long)arg2;
+ (void)changeItem:(id)arg1 to:(int)arg2;
+ (id)sliderWithName:(int)arg1 isDayMode:(_Bool)arg2 width:(double)arg3 height:(double)arg4;
+ (id)sliderWithName:(int)arg1 isDayMode:(_Bool)arg2 width:(double)arg3;
+ (id)sliderWithName:(int)arg1 isDayMode:(_Bool)arg2;
+ (id)sliderWithName:(int)arg1;
+ (id)buttonWithName:(int)arg1 isDayMode:(_Bool)arg2;
+ (id)buttonWithName:(int)arg1;
+ (id)buttonWithName:(id)arg1 imageName:(unsigned long long)arg2 imageAndTitleSpacing:(double)arg3;
+ (id)topButtonWithImageName:(unsigned long long)arg1;
+ (id)itemWithName:(int)arg1;

@end
