//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface OGLAUniqueFindingPredicate : NSObject
{
    shared_ptr_97dceaa7 addresses;
    NSString *kind;
    OGLAFindingSample *findingSample;
    unsigned long long _hash;
}

@property(retain, nonatomic) OGLAFindingSample *findingSample; // @synthesize findingSample;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithKind:(id)arg1 addresses:(shared_ptr_97dceaa7)arg2;

@end