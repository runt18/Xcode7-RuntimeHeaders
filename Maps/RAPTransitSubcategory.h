//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPTransitSubcategory : NSObject <RAPTransitSubcategory>
{
    SEL _caseSelector;
    CDUnknownBlockType _followUpQuestionCreationBlock;
    NSString *_localizedName;
    RAPQuestion *_followUpQuestion;
}

@property(readonly, nonatomic) RAPQuestion *followUpQuestion; // @synthesize followUpQuestion=_followUpQuestion;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
- (void)track;
- (void)proceedWithCases:(id)arg1;
- (id)_followUpQuestion;
- (id)initWithLocalizedName:(id)arg1 caseSelector:(SEL)arg2 followUpQuestionCreationBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end