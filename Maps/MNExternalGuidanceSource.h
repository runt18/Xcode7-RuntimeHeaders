//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol MNExternalGuidanceSource <NSObject>
- (NSData *)routeRepresentation;
- (_Bool)answerTrafficRerouteWithResponse:(_Bool)arg1;
- (_Bool)repeatCurrentTrafficAlert;
- (_Bool)repeatCurrentGuidance;
- (void)setVoiceGuidanceEnabled:(_Bool)arg1;
@end