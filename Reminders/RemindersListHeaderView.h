//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RemindersListHeaderView : UIView
{
    int _style;
    UITextField *_mainText;
    UILabel *_accountLabel;
    UILabel *_numberOfItemsLabel;
    UILabel *_sharingLabel;
    UILabel *_numberOverdueLabel;
    UIButton *_editButton;
    UIImageView *_imageView;
    UIColor *_color;
    id <RemindersListHeaderViewDelegate> _headerDelegate;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_detailsTopPaddingConstraint;
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_sharingTrailingConstraint;
    _Bool _showsNumberOfItems;
    _Bool _usesEditButtonAsDoneButton;
}

@property(nonatomic) _Bool usesEditButtonAsDoneButton; // @synthesize usesEditButtonAsDoneButton=_usesEditButtonAsDoneButton;
@property(nonatomic) _Bool showsNumberOfItems; // @synthesize showsNumberOfItems=_showsNumberOfItems;
- (void).cxx_destruct;
- (void)mainTextDidBeginEditing:(id)arg1;
- (void)setCardIsEditing:(_Bool)arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)beginEditingTextField;
- (void)setSharingText:(id)arg1;
- (void)setEditButtonHidden:(_Bool)arg1;
- (void)setAccountHidden:(_Bool)arg1;
- (void)editButtonTapped;
- (void)setTextFieldDelegate:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (id)placeholderAttributes;
- (void)setNumberOfOverdue:(long long)arg1 textColor:(id)arg2;
- (void)setNumberOfItems:(long long)arg1;
- (void)setAccount:(id)arg1;
- (void)setCategory:(id)arg1 withColor:(id)arg2;
- (void)setColor:(id)arg1;
- (id)mainTextAttributes;
- (id)coloredTextAttributes;
- (void)updateEditButtonTitle;
- (void)setHeaderDelegate:(id)arg1;
- (void)fontSizeChanged;
- (void)setupConstraints;
- (void)updateHeightConstraint;
- (void)setStyle:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end