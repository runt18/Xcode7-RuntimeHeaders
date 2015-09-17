//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CMSedentaryTimerData : NSObject <NSSecureCoding, NSCopying>
{
    double fStartDate;
    double fFiredDate;
    int fAlarmType;
    _Bool fDidWake;
}

+ (_Bool)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) _Bool didWake;
@property(readonly, nonatomic) int alarmType;
@property(readonly, nonatomic) NSDate *firedDate;
@property(readonly, nonatomic) NSDate *startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 firedDate:(double)arg2 alarmType:(int)arg3 didWake:(_Bool)arg4;

@end