//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRBlockRecord : NSObject <NSCoding, XRDispatchData>
{
    struct BlockStats _displayStats;
    BOOL _selected;
    BOOL _modified;
    struct BlockStats _overallStats;
    NSMutableArray *_blockInvokeEvents;
    NSMutableArray *_blockEvents;
    XRBlockEvent *_currentEvent;
    NSString *_queueIdentifier;
    struct XRTimeRange _timeRange;
    struct __CFDictionary *_invokeStackCounts;
    id _displayMaxInvokeStack;
    id _overallMaxInvokeStack;
    int _overallMaxInvokeStackCount;
    int _displayMaxInvokeStackCount;
}

+ (int)dataType;
@property BOOL modified; // @synthesize modified=_modified;
@property(readonly) NSArray *blockInvokeEvents; // @synthesize blockInvokeEvents=_blockInvokeEvents;
@property(readonly) NSArray *blockEvents; // @synthesize blockEvents=_blockEvents;
@property(readonly) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property BOOL selected; // @synthesize selected=_selected;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (void)transferEventAtTimestamp:(unsigned long long)arg1;
- (void)blockInvokeComplete:(id)arg1;
- (void)addBlockInvokeEvent:(id)arg1;
- (void)_updateInvokeStackCount:(id)arg1;
@property(readonly) int maxInvokeStackCount; // @dynamic maxInvokeStackCount;
@property(readonly) id maxInvokeStack; // @dynamic maxInvokeStack;
@property(readonly) unsigned long long totalExecTime; // @dynamic totalExecTime;
@property(readonly) int usageCount; // @dynamic usageCount;
@property(readonly) NSString *displayQueuePointer; // @dynamic displayQueuePointer;
@property(readonly) unsigned long long averageExecTime; // @dynamic averageExecTime;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end