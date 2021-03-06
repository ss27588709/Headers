//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, UIImage, UIView;

@interface TBBarButtonItem : NSObject
{
    _Bool _selected;
    _Bool _enabled;
    _Bool _isShowBadge;
    _Bool _isDefaultBack;
    _Bool _isUseCustomPositon;
    int _systemItem;
    UIImage *_image;
    UIImage *_highlightImage;
    UIImage *_selectedImage;
    UIImage *_backgroundImage;
    UIImage *_disabledImage;
    NSString *_title;
    double _width;
    UIView *_customView;
    id _target;
    SEL _action;
    UIView *_itemView;
    CDUnknownBlockType _itemLayoutBlock;
    NSMutableDictionary *_defaultColorDict;
}

+ (id)fixedSpaceToolbarItemWithWidth:(double)arg1;
+ (id)flexibleSpaceToolbarItem;
+ (void)setDefaultTextColorN:(id)arg1 TextColorH:(id)arg2 forStyle:(int)arg3;
+ (id)sharedInstance;
+ (void)buttonCustomViewClicked:(id)arg1;
+ (id)tbwbBarButtonWithButtonItem:(id)arg1 systemItem:(int)arg2;
@property(retain, nonatomic) NSMutableDictionary *defaultColorDict; // @synthesize defaultColorDict=_defaultColorDict;
@property(copy, nonatomic) CDUnknownBlockType itemLayoutBlock; // @synthesize itemLayoutBlock=_itemLayoutBlock;
@property(nonatomic) _Bool isUseCustomPositon; // @synthesize isUseCustomPositon=_isUseCustomPositon;
@property(nonatomic) _Bool isDefaultBack; // @synthesize isDefaultBack=_isDefaultBack;
@property(nonatomic) _Bool isShowBadge; // @synthesize isShowBadge=_isShowBadge;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *disabledImage; // @synthesize disabledImage=_disabledImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *highlightImage; // @synthesize highlightImage=_highlightImage;
@property(nonatomic) int systemItem; // @synthesize systemItem=_systemItem;
- (void).cxx_destruct;
- (id)wrapperViewWithTarget:(id)arg1;
- (void)itemTapped:(id)arg1;
- (void)originalItemTapped:(id)arg1;
- (id)itemViewWithTitle:(id)arg1 type:(int)arg2;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)fetchButtonFromItemView:(id)arg1;
- (void)setIconFontTextNormalColor:(id)arg1 highlightedColor:(id)arg2;
- (void)setBagdeBorderColor:(id)arg1 badgeColor:(id)arg2;
- (void)updateBadgeTextWithPrice:(id)arg1;
- (void)updateBadgeText:(id)arg1;
- (void)updateBadgeCount:(long long)arg1 messagetype:(long long)arg2 animation:(_Bool)arg3;
- (void)dealloc;
- (id)initWithBarButtonSystemItem:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithCustomView:(id)arg1;
- (id)initWithBarButtonSystemItem:(int)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithBarButtonSystemItem:(int)arg1 title:(id)arg2;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2 selectedImage:(id)arg3 disabledImage:(id)arg4 backgroundImage:(id)arg5 target:(id)arg6 action:(SEL)arg7;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2 selectedImage:(id)arg3 backgroundImage:(id)arg4 target:(id)arg5 action:(SEL)arg6;

@end

