//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDDataProviderTableViewCell : UITableViewCell
{
    UILabel *_displayNameLabel;
    UILabel *_inactiveLabel;
    UIImageView *_iconImageView;
    UIButton *_checkmarkButton;
    UIColor *_inactiveColor;
    NSLayoutConstraint *_alignDisplayLabelCenter;
    NSLayoutConstraint *_alignDisplayLabelTop;
    NSLayoutConstraint *_checkMarkLeftEdgeFromContentEdge;
    NSLayoutConstraint *_checkMarkIconSpace;
    NSLayoutConstraint *_iconLabelSpace;
}

- (void).cxx_destruct;
- (_Bool)isActive;
- (void)setActive:(_Bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setDisplayName:(id)arg1;
@property(readonly, nonatomic) struct CGSize iconSize;
- (void)setSeparatorInset:(struct UIEdgeInsets)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end