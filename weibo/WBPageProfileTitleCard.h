//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray, NSString;

@interface WBPageProfileTitleCard : WBPageCard
{
    NSString *_titleName;
    NSString *_flagImageURL;
    NSString *_rightImageURL;
    NSArray *_titleColorData;
    NSArray *_menuModels;
    unsigned long long _pageProfileTitleCardshowType;
    long long _style;
    NSString *_decorateColor;
}

+ (Class)fangleTableCellClass;
+ (Class)viewClass;
+ (Class)tableViewCellClass;
@property(retain, nonatomic) NSString *decorateColor; // @synthesize decorateColor=_decorateColor;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long pageProfileTitleCardshowType; // @synthesize pageProfileTitleCardshowType=_pageProfileTitleCardshowType;
@property(retain, nonatomic) NSArray *menuModels; // @synthesize menuModels=_menuModels;
@property(retain, nonatomic) NSArray *titleColorData; // @synthesize titleColorData=_titleColorData;
@property(retain, nonatomic) NSString *rightImageURL; // @synthesize rightImageURL=_rightImageURL;
@property(retain, nonatomic) NSString *flagImageURL; // @synthesize flagImageURL=_flagImageURL;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)dealloc;

@end

