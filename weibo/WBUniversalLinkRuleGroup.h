//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray;

@interface WBUniversalLinkRuleGroup : WBModelObject
{
    NSArray *_matchHosts;
    NSArray *_rules;
    NSArray *_secondJumpRules;
    NSArray *_essentialQuery;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(copy, nonatomic) NSArray *essentialQuery; // @synthesize essentialQuery=_essentialQuery;
@property(copy, nonatomic) NSArray *secondJumpRules; // @synthesize secondJumpRules=_secondJumpRules;
@property(copy, nonatomic) NSArray *rules; // @synthesize rules=_rules;
@property(copy, nonatomic) NSArray *matchHosts; // @synthesize matchHosts=_matchHosts;
- (void).cxx_destruct;
- (id)resultSchemeByMatchingURL:(id)arg1;
- (id)normalRulesResultSchemeByMatchingURL:(id)arg1;
- (id)jumpRulesResultSchemeByMatchingURL:(id)arg1;
- (_Bool)_checkValidityByMathingURL:(id)arg1;
- (_Bool)essentialQueryMatches:(id)arg1;
- (_Bool)needEssentialQueryMatches:(id)arg1;
- (_Bool)urlHostMatches:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)dealloc;

@end

