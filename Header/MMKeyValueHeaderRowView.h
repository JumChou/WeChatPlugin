//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMKeyValueRowView.h"

@class MMView, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface MMKeyValueHeaderRowView : MMKeyValueRowView
{
    NSString *_header;
    double _topPadding;
    NSTextField *_headLabel;
    MMView *_divider;
}

@property(retain, nonatomic) MMView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSTextField *headLabel; // @synthesize headLabel=_headLabel;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 header:(id)arg2;

@end

