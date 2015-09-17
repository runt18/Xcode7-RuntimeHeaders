//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEShadableObjectDocument : IDEEditorDocument
{
    SKEShadableMember *_shadableMember;
}

+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
+ (BOOL)preservesVersions;
+ (BOOL)autosavesDrafts;
- (void).cxx_destruct;
@property(readonly, nonatomic) SKEShadableMember *shadableMember;
- (int)readOnlyStatus;
- (BOOL)canSave;
- (BOOL)canExportDocument;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end