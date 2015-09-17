//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKPlayerProfileCacheReader : GKCacheReader
{
    int _familiarity;
    NSString *_localPlayerGCID;
    NSString *_language;
}

+ (id)readerWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *localPlayerGCID; // @synthesize localPlayerGCID=_localPlayerGCID;
@property(nonatomic) int familiarity; // @synthesize familiarity=_familiarity;
- (void)readResources:(id)arg1 inDatabase:(struct sqlite3 *)arg2 statementStore:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)processAvailableResource:(id)arg1 retrievedWithStatement:(struct sqlite3_stmt *)arg2 fromDatabase:(struct sqlite3 *)arg3 statementStore:(id)arg4;
- (id)playerProfileSQLString;
- (double)TTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;
- (id)playerForProfileStatementResult:(struct sqlite3_stmt *)arg1;
- (int)availablePiecesForProfileStatementResult:(struct sqlite3_stmt *)arg1;
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 playerGCID:(id)arg2;
- (void)dealloc;
- (id)initWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4;

@end