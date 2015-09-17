//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGViewWindow : DBGViewSurface
{
    NSMapTable *_viewAddressesToViewSurfaces;
    DBGLayoutConstraintSet *_layoutConstraintSet;
    unsigned long long _orientation;
}

@property unsigned long long orientation; // @synthesize orientation=_orientation;
@property(retain) DBGLayoutConstraintSet *layoutConstraintSet; // @synthesize layoutConstraintSet=_layoutConstraintSet;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)viewObjectForAddress:(id)arg1;
- (id)constraintForAddress:(id)arg1;
- (id)childViewSurfaceForAddress:(id)arg1;
- (id)window;
- (id)initWithViewDescriber:(id)arg1 parent:(id)arg2 dictionary:(id)arg3;
@property(readonly) DBGViewSurface *contentView;

@end