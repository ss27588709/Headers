//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCharacterSet, NSLayoutManager, NSParagraphStyle, NSTextContainer, NSTextStorage, UIFont;

@interface KSTextLayoutEngine : NSObject
{
    NSParagraphStyle *_paragraphStyle;
    UIFont *_baseFont;
    NSCharacterSet *_lineEndCharacterSet;
    NSArray *_lineBreakByCharacterLanguages;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
}

@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(retain, nonatomic) NSArray *lineBreakByCharacterLanguages; // @synthesize lineBreakByCharacterLanguages=_lineBreakByCharacterLanguages;
@property(retain, nonatomic) NSCharacterSet *lineEndCharacterSet; // @synthesize lineEndCharacterSet=_lineEndCharacterSet;
@property(readonly, nonatomic) UIFont *baseFont; // @synthesize baseFont=_baseFont;
- (void).cxx_destruct;
- (id)languageForString:(id)arg1;
- (_Bool)canLineBreakByCharacter:(id)arg1;
- (_Bool)validLineEndCharacter:(id)arg1;
- (_Bool)hasLineBreakByCharacterWithText:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (struct CGSize)verticalScaleBoundingSize:(struct CGSize)arg1 withText:(id)arg2 fontSize:(double)arg3;
- (struct CGSize)horizontalScaleBoundingSize:(struct CGSize)arg1 withText:(id)arg2 fontSize:(double)arg3;
- (struct CGSize)aspectScaleBoundingSize:(struct CGSize)arg1 withText:(id)arg2 fontSize:(double)arg3;
- (id)fontThatFitsSingleHorizontalLineHeight:(double)arg1 withText:(id)arg2;
- (id)fontThatFitsSingleVerticalLineWidth:(double)arg1 withText:(id)arg2;
- (id)fontThatFitsBoundingSize:(struct CGSize)arg1 withText:(id)arg2;
- (struct CGSize)singleLineSizeWithText:(id)arg1 font:(id)arg2 extraAttributes:(id)arg3;
- (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2 extraAttributes:(id)arg3 maxWidth:(double)arg4;
- (id)initWithBaseFont:(id)arg1;
- (id)init;

@end

