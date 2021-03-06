//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LYWState.h"

@class KSMTextureItem, NSArray, NSObject, NSString, NSValue;
@protocol KSAdvTextureEdit;

@interface KSMediaEditTextureCanvasState : LYWState
{
    _Bool _userInteractionEnabled;
    NSArray *_addingTextureItems;
    KSMTextureItem<KSAdvTextureEdit> *_replacingTextureItem;
    unsigned long long _replacingIndex;
    NSArray *_removingTextureItems;
    NSObject<KSAdvTextureEdit> *_editingTextureItem;
    NSValue *_canvasSize;
    NSString *_rollbackID;
}

@property(copy, nonatomic) NSString *rollbackID; // @synthesize rollbackID=_rollbackID;
@property(nonatomic) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(retain, nonatomic) NSValue *canvasSize; // @synthesize canvasSize=_canvasSize;
@property(retain, nonatomic) NSObject<KSAdvTextureEdit> *editingTextureItem; // @synthesize editingTextureItem=_editingTextureItem;
@property(retain, nonatomic) NSArray *removingTextureItems; // @synthesize removingTextureItems=_removingTextureItems;
@property(nonatomic) unsigned long long replacingIndex; // @synthesize replacingIndex=_replacingIndex;
@property(retain, nonatomic) KSMTextureItem<KSAdvTextureEdit> *replacingTextureItem; // @synthesize replacingTextureItem=_replacingTextureItem;
@property(retain, nonatomic) NSArray *addingTextureItems; // @synthesize addingTextureItems=_addingTextureItems;
- (void).cxx_destruct;

@end

