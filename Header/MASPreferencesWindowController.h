//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSToolbarDelegate.h"
#import "NSWindowDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSToolbar, NSViewController<MASPreferencesViewController>;

@interface MASPreferencesWindowController : NSWindowController <NSToolbarDelegate, NSWindowDelegate>
{
    NSMutableArray *_viewControllers;
    NSMutableDictionary *_minimumViewRects;
    NSString *_title;
    NSViewController<MASPreferencesViewController> *_selectedViewController;
    NSToolbar *_toolbar;
}

@property(nonatomic) NSToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSViewController<MASPreferencesViewController> *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(readonly, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void)goPreviousTab:(id)arg1;
- (void)goNextTab:(id)arg1;
- (void)selectControllerWithIdentifier:(id)arg1;
- (void)selectControllerAtIndex:(unsigned long long)arg1;
- (void)toolbarItemDidClick:(id)arg1;
- (id)viewControllerForIdentifier:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
@property(readonly, nonatomic) unsigned long long indexOfSelectedController;
@property(readonly) NSArray *toolbarItemIdentifiers;
- (void)windowDidResize:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (id)firstViewController;
- (void)windowDidLoad;
- (void)addViewController:(id)arg1;
- (void)dealloc;
- (id)initWithViewControllers:(id)arg1 title:(id)arg2;
- (id)initWithViewControllers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

