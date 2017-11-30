//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RecordNodeDataSource.h"

@class FavoritesItem, FavoritesItemDataField, NSString;

__attribute__((visibility("hidden")))
@interface FavDataItemWrap : NSObject <RecordNodeDataSource>
{
    unsigned int _index;
    FavoritesItemDataField *_dataItem;
    FavoritesItem *_parent;
}

@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) FavoritesItem *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) FavoritesItemDataField *dataItem; // @synthesize dataItem=_dataItem;
- (void).cxx_destruct;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 Index:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

