//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLLWData.h"

@class BLLWTextData;

@interface BLLWSummaryDetailData : BLLWData
{
    BLLWTextData *_leftText;
    BLLWTextData *_rightText;
    BLLWTextData *_optionText;
}

+ (id)dataWithResponseData:(id)arg1 userInfo:(id)arg2;
@property(retain, nonatomic) BLLWTextData *optionText; // @synthesize optionText=_optionText;
@property(retain, nonatomic) BLLWTextData *rightText; // @synthesize rightText=_rightText;
@property(retain, nonatomic) BLLWTextData *leftText; // @synthesize leftText=_leftText;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1;

@end

