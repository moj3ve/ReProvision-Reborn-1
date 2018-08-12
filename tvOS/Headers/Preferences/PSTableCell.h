//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, PSCellType) {
    PSGroupCell,
    PSLinkCell,
    PSLinkListCell,
    PSListItemCell,
    PSTitleValueCell,
    PSSliderCell,
    PSSwitchCell,
    PSStaticTextCell,
    PSEditTextCell,
    PSSegmentCell,
    PSGiantIconCell,
    PSGiantCell,
    PSSecureEditTextCell,
    PSButtonCell,
    PSEditTextViewCell,
    PSSpinnerCell
};

@class NSString, NSURL, NSURLSession, PSSpecifier, PSTableCellHighlightContext, UIImageView, UILongPressGestureRecognizer;

@interface PSTableCell : UITableViewCell
{
    id _value;
    UIImageView *_checkedImageView;
    _Bool _checked;
    _Bool _shouldHideTitle;
    NSString *_hiddenTitle;
    int _alignment;
    SEL _pAction;
    id _pTarget;
    _Bool _cellEnabled;
    PSSpecifier *_specifier;
    long long _type;
    _Bool _lazyIcon;
    _Bool _lazyIconDontUnload;
    _Bool _lazyIconForceSynchronous;
    NSString *_lazyIconAppID;
    _Bool _reusedCell;
    PSTableCellHighlightContext *_customHighlightContext;
    NSURLSession *_urlSession;
    NSURL *_lazyIconURL;
    _Bool _forceHideDisclosureIndicator;
    _Bool _isCopyable;
    UILongPressGestureRecognizer *_longTapRecognizer;
}

+ (double)defaultCellHeight;
+ (Class)cellClassForSpecifier:(id)arg1;
+ (long long)cellStyle;
+ (id)reuseIdentifierForSpecifier:(id)arg1;
+ (id)reuseIdentifierForClassAndType:(long long)arg1;
+ (id)reuseIdentifierForBasicCellTypes:(long long)arg1;
+ (id)stringFromCellType:(long long)arg1;
+ (long long)cellTypeFromString:(id)arg1;
@property(retain, nonatomic) UILongPressGestureRecognizer *longTapRecognizer; // @synthesize longTapRecognizer=_longTapRecognizer;
@property(nonatomic) _Bool isCopyable; // @synthesize isCopyable=_isCopyable;
@property(nonatomic) _Bool forceHideDisclosureIndicator; // @synthesize forceHideDisclosureIndicator=_forceHideDisclosureIndicator;
@property(nonatomic) _Bool reusedCell; // @synthesize reusedCell=_reusedCell;
@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(nonatomic) long long type; // @synthesize type=_type;

- (id)_disclosureChevronImage:(_Bool)arg1;
- (id)_checkmarkImage:(_Bool)arg1;
- (void)_invalidateHighlightContext;
- (void)highlightCellForDuration:(double)arg1 animateUnighlight:(_Bool)arg2;
- (double)textFieldOffset;
- (void)reloadWithSpecifier:(id)arg1 animated:(_Bool)arg2;
- (_Bool)cellEnabled;
- (void)setCellEnabled:(_Bool)arg1;
- (SEL)cellAction;
- (void)setCellAction:(SEL)arg1;
- (id)cellTarget;
- (void)setCellTarget:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (void)setAlignment:(int)arg1;
- (id)iconImageView;
- (id)valueLabel;
- (id)titleLabel;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setIcon:(id)arg1;
- (_Bool)canBeChecked;
- (_Bool)isChecked;
- (void)setChecked:(_Bool)arg1;
- (void)setShouldHideTitle:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)getIcon;
- (void)forceSynchronousIconLoadOnNextIconLoad;
- (void)cellRemovedFromView;
- (id)blankIcon;
- (id)getLazyIconID;
- (id)getLazyIcon;
- (id)_urlSession;
- (id)_contentString;
- (_Bool)canReload;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)titleTextLabel;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)lazyIconQueue:(id)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)_updateAccessoryTypeForSpecifier:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (id)_copyableText;
- (void)longPressed:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)scriptingInfoWithChildren;
- (id)_automationID;

@end

