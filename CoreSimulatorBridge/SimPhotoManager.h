//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SimPhotoManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void).cxx_destruct;
- (void)saveImageSync:(id)arg1 error:(id *)arg2;
- (void)finishedWritingImage:(id)arg1 withError:(id)arg2 contextInfo:(void *)arg3;
- (void)dealloc;

@end