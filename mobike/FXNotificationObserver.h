//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, NSOperationQueue, NSString;

@interface FXNotificationObserver : NSObject
{
    NSObject *_observer;
    NSObject *_object;
    NSString *_name;
    CDUnknownBlockType _block;
    NSOperationQueue *_queue;
    NSNotificationCenter *_center;
}

@property(nonatomic) __weak NSNotificationCenter *center; // @synthesize center=_center;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(nonatomic) __weak NSObject *observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)action:(id)arg1;

@end
