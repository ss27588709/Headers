//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AWESettingManager : NSObject
{
}

+ (_Bool)useNewAudiovideoSync;
+ (_Bool)shouldEnableAgeGate;
+ (_Bool)enableVideoLogUpload;
+ (_Bool)enableAccountLogUpload;
+ (_Bool)enableHardDecode;
+ (_Bool)shouldUseTTPlayer;
+ (long long)pictureCaptchaVerifyTimeout;
+ (void)setShouldPlayNotWIFI:(_Bool)arg1;
+ (_Bool)shouldPlayNotWIFI;
+ (id)regularSyncToToutiaoURL;
+ (id)syncToToutiaoURL;
+ (void)setSyncToToutiao:(_Bool)arg1;
+ (_Bool)syncToToutiao;
+ (id)originalMusicianURL;
+ (_Bool)showOriginalMusicianEntry;
+ (_Bool)showOriginalMusicianShareStyle;
+ (_Bool)switchToForYou;
+ (_Bool)wakeUpWeiboAPP;
+ (long long)closeFantasy;
+ (_Bool)enableFeedTab;
+ (_Bool)enableFreshTab;
+ (_Bool)enableNearbyTab;
+ (void)disableAddressBook:(CDUnknownBlockType)arg1;
+ (void)enableAddressBook:(CDUnknownBlockType)arg1;
+ (_Bool)isAddressBookSwitchButtonOn;
+ (void)disableDynamicCover;
+ (void)enableDynamicCover;
+ (_Bool)isDyanmicCoverSwitchButtonOn;
+ (_Bool)isBackgroundStickerEnabled;
+ (_Bool)isDynamicCoverEnabled;
+ (id)estr;
+ (id)modelForAppSetting;
+ (void)syncSettings;
+ (void)updateSettingsWithModel:(id)arg1;
+ (void)startFetchSettings:(CDUnknownBlockType)arg1;
- (void)hasCreatedLiveRoomDidChange:(_Bool)arg1;

@end

