//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface KeyboardMigrator : DataClassMigrator
{
    CPBitmapStore *_store;
}

- (id)dataClassName;
- (_Bool)performMigration;
- (float)estimatedDuration;
@property(readonly) CPBitmapStore *store; // @dynamic store;
- (void)dealloc;

@end