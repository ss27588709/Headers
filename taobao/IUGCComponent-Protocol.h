//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView, UIViewController;
@protocol IUGCComponent, IUGCContext;

@protocol IUGCComponent <NSObject>
+ (NSString *)componentName;
+ (id <IUGCComponent>)createComponetWithContext:(id <IUGCContext>)arg1 parentComponent:(id <IUGCComponent>)arg2 inViewController:(UIViewController *)arg3;
@property(nonatomic) __weak id <IUGCComponent> parentComponent;
@property(readonly, nonatomic) id <IUGCContext> componentContext;
- (id)publicData;
- (UIView *)componentContentView;
- (void)publish:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (void)doActionWithCompleted:(void (^)(_Bool, id, NSError *))arg1;
- (_Bool)isModify;
- (_Bool)isValid;

@optional
- (void)didEndShow;
- (void)didShow;
@end
