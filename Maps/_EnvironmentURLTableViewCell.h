//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _EnvironmentURLTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    unsigned long long _urlType;
    _Bool _editing;
    id <_EnvironmentURLTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <_EnvironmentURLTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long urlType; // @synthesize urlType=_urlType;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end