//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface FalconTemplate : NSObject
{
    float _TemplateWidth;
    float _TemplateHeight;
    NSMutableArray *_childTemplateRect;
    long long _addNumber;
    NSString *_Label;
}

@property(retain, nonatomic) NSString *Label; // @synthesize Label=_Label;
@property(nonatomic) long long addNumber; // @synthesize addNumber=_addNumber;
@property(retain, nonatomic) NSMutableArray *childTemplateRect; // @synthesize childTemplateRect=_childTemplateRect;
@property(nonatomic) float TemplateHeight; // @synthesize TemplateHeight=_TemplateHeight;
@property(nonatomic) float TemplateWidth; // @synthesize TemplateWidth=_TemplateWidth;
- (void).cxx_destruct;
- (void)addChildRect:(struct CGRect)arg1;
- (id)initWithSize:(float)arg1 templateHeight:(float)arg2;

@end
