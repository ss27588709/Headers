//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString;

@interface WWTribeMember : NSManagedObject
{
}

- (void)setWWTribeMemberSectionAndSortKey:(id)arg1;
@property(retain, nonatomic) NSString *displayName; // @dynamic displayName;
- (void)setDisplayName:(id)arg1 withPriority:(long long)arg2;
@property(retain, nonatomic) NSString *userNick; // @dynamic userNick;
@property(retain, nonatomic) NSString *uid; // @dynamic uid;
@property(retain, nonatomic) NSString *avatarUrl; // @dynamic avatarUrl;
@property(retain, nonatomic) NSString *avatar; // @dynamic avatar;

// Remaining properties
@property(retain, nonatomic) NSNumber *deletedFlag; // @dynamic deletedFlag;
@property(retain, nonatomic) NSNumber *displayNameSource; // @dynamic displayNameSource;
@property(retain, nonatomic) NSNumber *flag; // @dynamic flag;
@property(retain, nonatomic) NSString *fullname; // @dynamic fullname;
@property(retain, nonatomic) NSString *keywords; // @dynamic keywords;
@property(retain, nonatomic) NSNumber *profileLatestUpdate; // @dynamic profileLatestUpdate;
@property(retain, nonatomic) NSNumber *profileLatestUpdateByISV; // @dynamic profileLatestUpdateByISV;
@property(retain, nonatomic) NSString *sectionName; // @dynamic sectionName;
@property(retain, nonatomic) NSString *sortKey; // @dynamic sortKey;
@property(retain, nonatomic) NSString *sortKeyWithNick; // @dynamic sortKeyWithNick;
@property(retain, nonatomic) NSNumber *sortWeight; // @dynamic sortWeight;
@property(retain, nonatomic) NSString *tribeId; // @dynamic tribeId;

@end

