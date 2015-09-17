//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRChannelPickerPendingSubscriptionCollectionViewCell : FRPickerCollectionViewCell
{
    FCSubscription *_pendingSubscription;
    UIActivityIndicatorView *_spinner;
    FCSubscriptionController *_subscriptionController;
}

@property(readonly, nonatomic) FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(nonatomic) __weak UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(readonly, nonatomic) FCSubscription *pendingSubscription; // @synthesize pendingSubscription=_pendingSubscription;
- (void).cxx_destruct;
- (id)accessibilityPublisherOrTopicName;
- (void)_removePendingSubscription;
- (void)_actionButtonTapped:(id)arg1;
- (_Bool)isRemovable;
- (_Bool)isSubscribedTo;
- (_Bool)isAddable;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)populateWithPendingSubscription:(id)arg1 feldsparContext:(id)arg2 showSpinner:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end