//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface UIAInstrumentEventDecorator : DTTimelineDecorator
{
    UIARun *_run;
    NSMutableArray *_images;
    struct CGSize _imageSize;
}

- (id)decorateInspectionRanges:(id)arg1;
- (id)decorateContainer:(struct DTTimelineDecorationContainer *)arg1;
- (void)setDefaultsForPlane:(id)arg1;
- (void)dealloc;
- (id)initWithRun:(id)arg1;

@end