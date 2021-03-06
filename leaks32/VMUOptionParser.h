//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface VMUOptionParser : NSObject
{
    NSString *_purposeDescription;
    NSString *_syntaxDescription;
    NSString *_discussionDescription;
    NSMutableArray *_optionDescriptions;
    NSMutableDictionary *_optionBlockByString;
    struct __CFArray *_longOptStructs;
    NSMutableString *_shortOpts;
    unsigned int _spacing;
    BOOL _singleHyphenLongNames;
    BOOL _parametersShowAsAssignment;
}

- (void)setParametersShowAsAssignment:(BOOL)arg1;
- (BOOL)parametersShowAsAssignment;
- (void)setSingleHyphenLongNames:(BOOL)arg1;
- (BOOL)singleHyphenLongNames;
- (void)setDiscussion:(id)arg1;
- (id)discussion;
- (void)setSyntaxDescription:(id)arg1;
- (id)syntaxDescription;
- (void)setPurposeDescription:(id)arg1;
- (id)purposeDescription;
- (void)usage:(id)arg1;
- (id)parseArgumentsWithBlock:(CDUnknownBlockType)arg1;
- (void)registerOptionWithLongName:(id)arg1 shortName:(BOOL)arg2 hasArgument:(int)arg3 argumentName:(id)arg4 optionDescription:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;

@end