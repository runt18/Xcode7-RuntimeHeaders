//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKDelayedAcceptFriendRequestsCacheWriter : NSObject <GKDatabaseWriter>
{
    GKDatabaseConnection *_connection;
    NSDictionary *_gameDescriptor;
}

+ (id)writerWithDatabaseConnection:(id)arg1 gameDescriptor:(id)arg2;
@property(retain, nonatomic) NSDictionary *gameDescriptor; // @synthesize gameDescriptor=_gameDescriptor;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 payload:(id)arg2 requestsRowID:(long long)arg3;
- (id)acceptFriendRequestsInsertSQL;
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;
- (void)deleteSubmittedRequestsWithIDs:(id)arg1 onConnection:(id)arg2;
- (id)requestsInsertSQL;
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;
- (id)initWithDatabaseConnection:(id)arg1 gameDescriptor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end