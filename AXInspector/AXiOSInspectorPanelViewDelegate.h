//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol AXiOSInspectorPanelViewDelegate <NSObject>
- (NSArray *)notificationStack:(AXiOSInspectorPanelView *)arg1;
- (AXInspectorElement *)focusedElement:(AXiOSInspectorPanelView *)arg1;
- (void)inspectorPanelCloseButtonPressed:(AXiOSInspectorPanelView *)arg1;
- (void)moveInspectorPanel:(AXiOSInspectorPanelView *)arg1 withDifference:(struct CGPoint)arg2;
@end