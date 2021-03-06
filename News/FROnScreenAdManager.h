//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FROnScreenAdManager : NSObject
{
    _Bool _processingEvents;
    _Bool _cancelled;
    id <FROnScreenAdManagerDelegate> _delegate;
    id <FROnScreenAdManagerDataSource> _dataSource;
    id <FROnScreenAdManageVisibilityDelegate> _visibilityDelegate;
    FRFeedAdInventory *_feedAdInventory;
    NSMutableArray *_pendingOperations;
    NSMutableArray *_skippedOperations;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (unsigned long long)numberOfItemsToProcess;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool processingEvents; // @synthesize processingEvents=_processingEvents;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSMutableArray *skippedOperations; // @synthesize skippedOperations=_skippedOperations;
@property(retain, nonatomic) NSMutableArray *pendingOperations; // @synthesize pendingOperations=_pendingOperations;
@property(retain, nonatomic) FRFeedAdInventory *feedAdInventory; // @synthesize feedAdInventory=_feedAdInventory;
@property(nonatomic) __weak id <FROnScreenAdManageVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
@property(nonatomic) __weak id <FROnScreenAdManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FROnScreenAdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collapseAd:(id)arg1;
- (void)expandAd:(long long)arg1 withIdentifier:(id)arg2;
- (void)addOperationWithHighPriorityOrRemoveExisting:(id)arg1;
- (void)addOperationOrModifyExisting:(id)arg1;
- (void)_sip;
- (_Bool)adIsExpandedWithIdentifier:(id)arg1 expandedHeight:(double)arg2;
- (void)endProcessingEvents;
- (void)cancel;
- (void)startProcessingEvents;
- (id)initWithDispatchQueue:(id)arg1;

@end