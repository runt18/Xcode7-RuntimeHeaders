//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRObjectAllocVMRegionTracker : NSObject
{
    DVT_VMURangeArray *_regionInfoArray;
    DVT_VMURangeArray *_loadedDylibArray;
    XRBacktraceRepository *_repository;
}

- (CDStruct_d66149c5 *)processEvent:(CDStruct_d66149c5 *)arg1 withFakeEventInsertionBlock:(CDUnknownBlockType)arg2;
- (CDStruct_d66149c5 *)processDylibRelatedEvent:(CDStruct_d66149c5 *)arg1;
- (void)debugValidityOfRange:(struct _VMURange)arg1 withExistingRangeAtIndex:(unsigned int)arg2 andMessage:(id)arg3;
- (id)regionInfoArray;
- (void)setRepository:(id)arg1;
- (void)dealloc;
- (id)initWithRepository:(id)arg1;

@end