//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APSKShareBasePlugin.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class MFMessageComposeViewController, NSString, UIViewController;
@protocol APSKPluginDelegate;

@interface APSKMessagePlugin : APSKShareBasePlugin <MFMessageComposeViewControllerDelegate>
{
    id <APSKPluginDelegate> _delegate;
    UIViewController *_rootController;
    MFMessageComposeViewController *_messageComposeViewController;
    CDUnknownBlockType _completionBlock;
}

+ (_Bool)isChannelAppInstalled;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
@property(nonatomic) __weak id <APSKPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareContent:(id)arg1 toChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendMessageWithBody:(id)arg1 recipient:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyWindowFix;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)shareMessage:(id)arg1 toChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

