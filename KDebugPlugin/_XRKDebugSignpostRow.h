//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _XRKDebugSignpostRow : NSObject
{
    NSNumber *code;
    NSString *name;
}

@property(copy) NSString *name; // @synthesize name;
@property(copy) NSNumber *code; // @synthesize code;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;
- (BOOL)validateCode:(id *)arg1 error:(id *)arg2;

@end