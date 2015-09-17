//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKGameRatingCacheObject : GKExpiringCacheObject
{
}

+ (id)entityName;
+ (id)ratingForGameDescriptor:(id)arg1 context:(id)arg2;
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(retain, nonatomic) NSNumber *rating; // @dynamic rating;

@end