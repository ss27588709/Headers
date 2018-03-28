//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "TTLPreserveViewProtocol-Protocol.h"

@class NSString;

@interface TTLPreserveButton : UIButton <TTLPreserveViewProtocol>
{
    TTLPreserveButton *_copiedOne;
    id _target;
    SEL _action;
    unsigned long long _controlEvents;
}

@property(nonatomic) unsigned long long controlEvents; // @synthesize controlEvents=_controlEvents;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) TTLPreserveButton *copiedOne; // @synthesize copiedOne=_copiedOne;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)copiedSyncView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
