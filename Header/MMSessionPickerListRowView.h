//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class MMAvatarImageView, NSButton, NSTextField, NSTrackingArea, WCContactData;

__attribute__((visibility("hidden")))
@interface MMSessionPickerListRowView : NSTableRowView
{
    BOOL _highlighted;
    NSTrackingArea *_trackingArea;
    BOOL _rollover;
    BOOL _preSelected;
    BOOL _disabled;
    BOOL _keyboardFocused;
    WCContactData *_contact;
    id _target;
    SEL _action;
    id _context;
    NSButton *_checkbox;
    MMAvatarImageView *_avatarView;
    NSTextField *_sessionNameField;
}

@property(retain, nonatomic) NSTextField *sessionNameField; // @synthesize sessionNameField=_sessionNameField;
@property(retain, nonatomic) MMAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSButton *checkbox; // @synthesize checkbox=_checkbox;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) BOOL keyboardFocused; // @synthesize keyboardFocused=_keyboardFocused;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) BOOL preSelected; // @synthesize preSelected=_preSelected;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) BOOL rollover; // @synthesize rollover=_rollover;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)setupWithContact:(id)arg1;
- (void)_callDelegate;
- (void)checkboxChecked:(id)arg1;
- (void)_updateRollover;
@property(nonatomic) BOOL chosen;
- (id)currentBgColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewDidMoveToSuperview;
- (void)prepareForReuse;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

