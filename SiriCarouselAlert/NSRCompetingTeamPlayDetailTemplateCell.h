//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRCompetingTeamPlayDetailTemplateCell : NSRTemplateCell
{
    NSRLabel *_playDetailLabel;
}

+ (int)lastLineTextStyle;
+ (int)firstLineTextStyle;
+ (float)desiredBaselineForCellBelowLayoutType:(int)arg1;
+ (int)defaultLayoutType;
+ (id)calculateLayoutValuesForTemplate:(id)arg1 suggestedSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (id)_layoutValues;
- (void)setTemplateObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end