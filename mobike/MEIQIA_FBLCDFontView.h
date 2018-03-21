//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor;

@interface MEIQIA_FBLCDFontView : UIView
{
    _Bool _drawOffLine;
    float _edgeLength;
    float _margin;
    float _lineWidth;
    float _horizontalPadding;
    float _verticalPadding;
    float _glowSize;
    float _innerGlowSize;
    UIColor *_lineColor;
    UIColor *_offColor;
    UIColor *_glowColor;
    UIColor *_innerGlowColor;
    NSString *_text;
    NSArray *_symbols;
}

@property(copy, nonatomic) NSArray *symbols; // @synthesize symbols=_symbols;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *innerGlowColor; // @synthesize innerGlowColor=_innerGlowColor;
@property(retain, nonatomic) UIColor *glowColor; // @synthesize glowColor=_glowColor;
@property(retain, nonatomic) UIColor *offColor; // @synthesize offColor=_offColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) float innerGlowSize; // @synthesize innerGlowSize=_innerGlowSize;
@property(nonatomic) float glowSize; // @synthesize glowSize=_glowSize;
@property(nonatomic) float verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) float horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) float margin; // @synthesize margin=_margin;
@property(nonatomic) float edgeLength; // @synthesize edgeLength=_edgeLength;
@property(nonatomic) _Bool drawOffLine; // @synthesize drawOffLine=_drawOffLine;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeOfContents;
- (void)resetSize;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
