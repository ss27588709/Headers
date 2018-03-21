//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface BCardListViewModel : NSObject
{
    unsigned long long _currentListSortStyle;
    NSMutableArray *_arrayCardInfos;
}

+ (id)getSortDateFormat:(long long)arg1;
+ (id)getSortLetterFormat:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *arrayCardInfos; // @synthesize arrayCardInfos=_arrayCardInfos;
@property(nonatomic) unsigned long long currentListSortStyle; // @synthesize currentListSortStyle=_currentListSortStyle;
- (void).cxx_destruct;
- (id)getViewTagStatus:(id)arg1;
- (void)sortArray:(unsigned long long)arg1;
- (void)sortArrayByLetter;
- (void)sortArrayByTime;
- (void)forceListSort;
- (_Bool)isAlphaViewrow:(unsigned long long)arg1;
- (long long)getCardCount;
- (id)getCardInfo:(long long)arg1;
- (void)addArrayFromCardInfos:(id)arg1;
- (void)setMineQQCardModel:(id)arg1;
- (void)resetArrayCardInfosWithOutMineCard;
- (void)resetArrayCardInfos;
- (id)init;

@end
