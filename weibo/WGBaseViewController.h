//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

@class NSString, WGErrorView;

@interface WGBaseViewController : WBViewController
{
    _Bool _error;
    NSString *_backScheme;
    WGErrorView *_errorView;
}

@property(retain, nonatomic) WGErrorView *errorView; // @synthesize errorView=_errorView;
@property(copy, nonatomic) NSString *backScheme; // @synthesize backScheme=_backScheme;
@property(nonatomic, setter=isError:) _Bool error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)retryLoadData;
- (void)tapAction;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)cancelAction:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

