//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppExpressionOperator.h"

@interface WeAppBaseExpressionOperator : WeAppExpressionOperator
{
}

- (double)getNumberFromObject:(id)arg1;
- (id)executeDivideOperate:(id)arg1 with:(id)arg2;
- (id)executeMultiplyOperate:(id)arg1 with:(id)arg2;
- (id)executeSubtractOperate:(id)arg1 with:(id)arg2;
- (id)executeAddOperate:(id)arg1 with:(id)arg2;
- (id)executeLessOperate:(id)arg1 with:(id)arg2;
- (id)executeGreaterOperate:(id)arg1 with:(id)arg2;
- (id)executeEqualOperate:(id)arg1 with:(id)arg2;
- (id)exceptionalCase:(id)arg1 with:(id)arg2;

@end

