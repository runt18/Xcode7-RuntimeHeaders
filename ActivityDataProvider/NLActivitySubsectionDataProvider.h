//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NLActivitySubsectionDataProvider <NSObject>
+ (NSString *)subsectionIdentifier;
+ (long long)sectionSubtype;
@property(nonatomic) __weak id <NLActivitySubsectionDataProviderDelegate> delegate;
- (id)clearedInfoForBulletins:(NSSet *)arg1 lastClearedInfo:(id)arg2;
- (NSSet *)bulletinsFilteredBy:(unsigned long long)arg1 enabledSectionIDs:(NSSet *)arg2 count:(unsigned long long)arg3 lastCleared:(id)arg4;
- (void)handleBulletinActionResponse:(BBActionResponse *)arg1;

@optional
+ (NSString *)coachingSubmanagerIdentifier;
- (void)showCoachingAlertRequest:(NLCoachingAlertRequest *)arg1;
@end