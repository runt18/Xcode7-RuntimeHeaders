//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FROfflineModeCollectionViewCell : UICollectionViewCell
{
    long long _offlineReason;
    FRUnableToConnectView *_offlineView;
}

@property(retain, nonatomic) FRUnableToConnectView *offlineView; // @synthesize offlineView=_offlineView;
@property(nonatomic) long long offlineReason; // @synthesize offlineReason=_offlineReason;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end