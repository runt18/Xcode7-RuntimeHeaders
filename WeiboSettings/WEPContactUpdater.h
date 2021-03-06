//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WEPContactUpdater : NSObject
{
    void *_addressBook;
    ACAccount *_account;
    ACAccountStore *_store;
    NSMutableDictionary *_personDictionary;
    NSMutableArray *_allEmails;
    NSMutableArray *_allPhoneNumbers;
    NSMutableSet *_updatedPeople;
    NSOperationQueue *_operationQueue;
    id <WEPContactUpdaterDelegate> _delegate;
    int _expectedBatchJobs;
    int _completedBatchJobs;
    float _partialBatchJobsCompleted;
    int _expectedPhotoJobs;
    int _completedPhotoJobs;
    _Bool _warnedOfFailure;
}

@property(nonatomic) __weak id <WEPContactUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_photoLookupFinished:(id)arg1;
- (void)_batchLookupFinished:(id)arg1;
- (void)_batchLookupProgress:(id)arg1;
- (void)cancel;
- (void)updatePhotos;
- (void)updateContacts;
- (void)_populatePhoneNumbersAndEmails;
- (id)_canonicalizaPhoneNumbers:(id)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 store:(id)arg2;

@end