//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMFavoritesDetailCardBaseCell.h"

#import "MMCDNDownloadMgrExt.h"

@class MMCTTextView, NSString;

__attribute__((visibility("hidden")))
@interface MMFavoritesDetailTextCell : MMFavoritesDetailCardBaseCell <MMCDNDownloadMgrExt>
{
    MMCTTextView *_contentTextView;
}

@property(retain, nonatomic) MMCTTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
- (void).cxx_destruct;
- (void)willBeRecycled;
- (void)layoutFavContentView;
- (void)setUpTextView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

