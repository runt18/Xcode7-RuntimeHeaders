//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLUnmatchedFakeBulletinStoreItem : NSObject
{
    _Bool _isWithdrawn;
    NSString *_mirroredSectionID;
    NSString *_publisherMatchID;
    NSString *_bulletinID;
    NSDate *_publicationDate;
}

@property(nonatomic) _Bool isWithdrawn; // @synthesize isWithdrawn=_isWithdrawn;
@property(retain, nonatomic) NSDate *publicationDate; // @synthesize publicationDate=_publicationDate;
@property(copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(copy, nonatomic) NSString *publisherMatchID; // @synthesize publisherMatchID=_publisherMatchID;
@property(copy, nonatomic) NSString *mirroredSectionID; // @synthesize mirroredSectionID=_mirroredSectionID;
- (void).cxx_destruct;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCSLUnmatchedFakeBulletinStoreItem:(id)arg1;
- (id)initWithMirroredSectionID:(id)arg1 publisherMatchID:(id)arg2 publicationDate:(id)arg3 bulletinID:(id)arg4;
- (id)initWithBulletin:(id)arg1;

@end