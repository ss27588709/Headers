//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKTopupViewController.h"

#import "SFSafariViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MBKAdyenPaymentHeaderModel, MBKAdyenPaymentHeaderView, MBKAdyenPaymentPickerView, MBKAdyenSafariViewController, MBKAdyenWebViewController, NSMutableArray, NSMutableDictionary, NSMutableString, NSString, NSUserDefaults, UIButton, UITableView, ricingstrategy;

@interface MBKAdyenPaymentViewController : MBKTopupViewController <UITableViewDelegate, UITableViewDataSource, SFSafariViewControllerDelegate>
{
    NSMutableArray *creditArray;
    NSMutableArray *issuersArray;
    NSUserDefaults *defaults;
    _Bool isCreditCardChannelOpen;
    _Bool isIdealChannelOpen;
    _Bool isBalanceChannelOpen;
    _Bool isBalanceEnough;
    _Bool isNeedChechPayStatus;
    long long cardCount;
    NSMutableDictionary *parameterDict;
    long long creditCardPlatformType;
    double utcTimestamp;
    NSMutableString *paramStr;
    _Bool _isRigister;
    _Bool _isAddCreditCellShow;
    _Bool _isIdealSubCellShow;
    _Bool _haveNoCard;
    unsigned long long _payType;
    long long _pricingstrategy;
    NSString *_cardId;
    CDUnknownBlockType _payResultHandler;
    CDUnknownBlockType _dismissBlock;
    long long _payStatus;
    ricingstrategy *_payStrategy;
    UITableView *_tableView;
    NSMutableArray *_modelsArray;
    UIButton *_paymentButton;
    MBKAdyenPaymentHeaderView *_headerView;
    MBKAdyenPaymentHeaderModel *_headerModel;
    MBKAdyenPaymentPickerView *_pickerView;
    NSMutableString *_paymentUrl;
    NSString *_idealIssuerId;
    NSString *_brandCode;
    NSString *_orderId;
    long long _creditSelectedIndex;
    MBKAdyenSafariViewController *_safariViewController;
    MBKAdyenWebViewController *_uiwebViewController;
    NSString *_hudText;
}

+ (void)load;
@property(copy, nonatomic) NSString *hudText; // @synthesize hudText=_hudText;
@property(retain, nonatomic) MBKAdyenWebViewController *uiwebViewController; // @synthesize uiwebViewController=_uiwebViewController;
@property(retain, nonatomic) MBKAdyenSafariViewController *safariViewController; // @synthesize safariViewController=_safariViewController;
@property(nonatomic) _Bool haveNoCard; // @synthesize haveNoCard=_haveNoCard;
@property(nonatomic) _Bool isIdealSubCellShow; // @synthesize isIdealSubCellShow=_isIdealSubCellShow;
@property(nonatomic) _Bool isAddCreditCellShow; // @synthesize isAddCreditCellShow=_isAddCreditCellShow;
@property(nonatomic) long long creditSelectedIndex; // @synthesize creditSelectedIndex=_creditSelectedIndex;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *brandCode; // @synthesize brandCode=_brandCode;
@property(copy, nonatomic) NSString *idealIssuerId; // @synthesize idealIssuerId=_idealIssuerId;
@property(copy, nonatomic) NSMutableString *paymentUrl; // @synthesize paymentUrl=_paymentUrl;
@property(retain, nonatomic) MBKAdyenPaymentPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) MBKAdyenPaymentHeaderModel *headerModel; // @synthesize headerModel=_headerModel;
@property(retain, nonatomic) MBKAdyenPaymentHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIButton *paymentButton; // @synthesize paymentButton=_paymentButton;
@property(retain, nonatomic) NSMutableArray *modelsArray; // @synthesize modelsArray=_modelsArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) ricingstrategy *payStrategy; // @synthesize payStrategy=_payStrategy;
@property(nonatomic) long long payStatus; // @synthesize payStatus=_payStatus;
@property(nonatomic) _Bool isRigister; // @synthesize isRigister=_isRigister;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType payResultHandler; // @synthesize payResultHandler=_payResultHandler;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(nonatomic) long long pricingstrategy; // @synthesize pricingstrategy=_pricingstrategy;
@property(nonatomic) unsigned long long payType; // @synthesize payType=_payType;
- (void).cxx_destruct;
- (void)setCookie;
- (void)dealloc;
- (id)normalAttributedString:(id)arg1 sub:(id)arg2;
- (id)urlEncodeStr:(id)arg1;
- (void)safariViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)openSafariViewController;
- (void)goBackController;
- (void)creditCardPayment;
- (void)balancePayment;
- (void)idealPayment;
- (void)paymentButtonTapped:(id)arg1;
- (void)addAddCreditData;
- (void)addBalanceData;
- (void)addIdealSubData;
- (void)addDeaultCreditData;
- (void)addDeaultIssuersData;
- (void)requestDelCreditFailed:(id)arg1;
- (void)requestDelCreditSucc:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateHeaderView;
- (void)updateModesArray;
- (void)requestLocalPaymentChannelFailed:(id)arg1;
- (void)requestLocalPaymentChannelSucc:(id)arg1;
- (void)requestLocalPaymentFailed:(id)arg1;
- (void)requestLocalPaymentSucc:(id)arg1;
- (void)getUiConfigData;
- (void)paymenResult:(_Bool)arg1;
- (void)pendingCycles;
- (void)checkPayStatus;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldHideNavigationBarShadow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
