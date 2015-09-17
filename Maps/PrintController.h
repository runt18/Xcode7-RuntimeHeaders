//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PrintController : NSObject <UIPrintInteractionControllerDelegate>
{
    id <PrintControllerDelegate> _delegate;
    MKMapView *_mapView;
    struct CGRect _presentationRect;
    UIView *_presentationView;
    _Bool _isShowingPopover;
    _Bool _shouldShowPopoverAfterOrientationChange;
    unsigned long long _printTaskBackgroundIdentifier;
    NSString *_jobType;
    UIPrintInteractionController *_pic;
}

@property(retain, nonatomic) UIView *presentationView; // @synthesize presentationView=_presentationView;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <PrintControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)printInteractionControllerDidFinishJob:(id)arg1;
- (void)printInteractionControllerWillStartJob:(id)arg1;
- (void)printInteractionControllerDidPresentPrinterOptions:(id)arg1;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (id)_printInfoForSearchString:(id)arg1 route:(id)arg2;
- (id)_rendererForSearchResults:(id)arg1 title:(id)arg2 subTitle:(id)arg3;
- (id)_rendererForRoute:(id)arg1;
- (_Bool)_searchResults:(id)arg1 areFarAwayFromView:(id)arg2;
- (id)mapRegion:(id)arg1 insetLat:(double)arg2 insetLng:(double)arg3;
- (void)orientationDidChange;
- (void)orientationWillChange;
- (void)print;
- (void)printSearchString:(id)arg1 searchResults:(id)arg2 title:(id)arg3 subTitle:(id)arg4;
- (void)_print:(id)arg1;
- (void)printRoute:(id)arg1 searchString:(id)arg2;
- (id)_printControllerForSearchString:(id)arg1 searchResults:(id)arg2 title:(id)arg3 subTitle:(id)arg4;
- (id)_printControllerForRoute:(id)arg1 searchString:(id)arg2;
- (void)_endBackgroundTask;
- (_Bool)_isInBackground;
@property(readonly, nonatomic) _Bool isPrinting;
- (id)initWithMapView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end