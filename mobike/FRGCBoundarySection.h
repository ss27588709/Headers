//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FRGCBoundarySectionPolygon;

@interface FRGCBoundarySection : NSObject
{
    unsigned int _sectionID;
    unsigned int _offset;
    unsigned int _size;
    unsigned int _latLonCount;
    unsigned int _CRC;
    FRGCBoundarySectionPolygon *_polygon;
}

+ (unsigned int)length;
@property(retain, nonatomic) FRGCBoundarySectionPolygon *polygon; // @synthesize polygon=_polygon;
@property(nonatomic) unsigned int CRC; // @synthesize CRC=_CRC;
@property(nonatomic) unsigned int latLonCount; // @synthesize latLonCount=_latLonCount;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned int sectionID; // @synthesize sectionID=_sectionID;
- (void).cxx_destruct;
- (id)initWithBytes:(const char *)arg1 length:(unsigned int)arg2;

@end
