//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _NMGPendingTileRequest : NSObject
{
    struct _GEOTileKey _tileKey;
    NSString *_cachedETag;
    CDUnknownBlockType _callback;
}

@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSString *cachedETag; // @synthesize cachedETag=_cachedETag;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct _GEOTileKey *tileKey;
- (id)initWithTileKey:(const struct _GEOTileKey *)arg1 cachedETag:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end