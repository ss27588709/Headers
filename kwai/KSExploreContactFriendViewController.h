//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSExploreFriendViewController.h"

@class KSAddressBookModel, KSContactModel;

@interface KSExploreContactFriendViewController : KSExploreFriendViewController
{
    CDUnknownBlockType _onFetchAuthSuccess;
    KSContactModel *_contactModel;
    KSAddressBookModel *_addressBookModel;
}

@property(retain, nonatomic) KSAddressBookModel *addressBookModel; // @synthesize addressBookModel=_addressBookModel;
@property(retain, nonatomic) KSContactModel *contactModel; // @synthesize contactModel=_contactModel;
@property(copy, nonatomic) CDUnknownBlockType onFetchAuthSuccess; // @synthesize onFetchAuthSuccess=_onFetchAuthSuccess;
- (void).cxx_destruct;
- (id)ksuShowMetaData;
- (void)guideViewDidClickConfirm:(id)arg1;
- (id)init;

@end
