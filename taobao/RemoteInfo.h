//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface RemoteInfo : NSObject
{
    NSMutableArray *_remoteInfoIndex;
    NSString *_depComboUrl;
    NSString *_comboJsData;
}

@property(retain, nonatomic) NSString *comboJsData; // @synthesize comboJsData=_comboJsData;
@property(retain, nonatomic) NSString *depComboUrl; // @synthesize depComboUrl=_depComboUrl;
@property(retain, nonatomic) NSMutableArray *remoteInfoIndex; // @synthesize remoteInfoIndex=_remoteInfoIndex;
- (void).cxx_destruct;
- (id)init;

@end

