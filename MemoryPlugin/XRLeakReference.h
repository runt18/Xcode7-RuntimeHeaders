//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRLeakReference : NSObject
{
    XRLeak *_source;
    XRLeak *_destination;
    int _type;
    unsigned int _offset;
}

@property(readonly) XRLeak *destination; // @synthesize destination=_destination;
@property(readonly) int type; // @synthesize type=_type;
@property(readonly) unsigned int offset; // @synthesize offset=_offset;
@property(readonly) XRLeak *source; // @synthesize source=_source;
- (id)name;
@property(readonly) NSString *ivarTypeDescription;
@property(readonly) NSString *ivarDescription;
@property(readonly) NSString *ivarName;
- (void)_doWithIvar:(CDUnknownBlockType)arg1;
@property(readonly) DVT_VMUClassInfo *sourceLayout;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithSource:(id)arg1 offset:(unsigned int)arg2 type:(int)arg3 destination:(id)arg4;

@end