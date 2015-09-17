//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUISegment : NSObject <IBDocumentArchiving, NSCoding>
{
    NSString *title;
    double width;
    BOOL enabled;
    struct CGSize contentOffset;
    NSImage *image;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(retain, nonatomic) NSImage *image; // @synthesize image;
@property struct CGSize contentOffset; // @synthesize contentOffset;
@property BOOL enabled; // @synthesize enabled;
@property double width; // @synthesize width;
@property(copy) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 width:(double)arg2 enabled:(BOOL)arg3 contentOffset:(struct CGSize)arg4 image:(id)arg5;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end