//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ADJavaScriptObject : NSObject
{
    id <ADJSODelegate> _delegate;
    ADSAdImpressionController *_impressionController;
    NSMutableArray *_downloads;
    NSMutableDictionary *_retainedJSValues;
    NSLock *_retainedJSValuesLock;
}

+ (void)setJSException:(id)arg1;
+ (void)initializeInContext:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSLock *retainedJSValuesLock; // @synthesize retainedJSValuesLock=_retainedJSValuesLock;
@property(readonly, nonatomic) NSMutableDictionary *retainedJSValues; // @synthesize retainedJSValues=_retainedJSValues;
@property(retain, nonatomic) NSMutableArray *downloads; // @synthesize downloads=_downloads;
@property(retain, nonatomic) JSValue *listener;
- (void)fireTestProbe:(id)arg1 withOptions:(id)arg2;
@property(readonly, nonatomic) ADSAdImpressionController *impressionController;
@property(nonatomic) __weak id <ADJSODelegate> delegate;
- (id)JSValueForKey:(id)arg1;
- (void)setJSValue:(id)arg1 forKey:(id)arg2;
- (void)adWillDismiss;
- (id)initWithDelegate:(id)arg1 impressionController:(id)arg2;
- (id)init;
- (void)dealloc;

@end