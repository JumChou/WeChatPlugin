//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCDataBaseItem;

__attribute__((visibility("hidden")))
@interface WCDBTableColumnInfo : NSObject
{
    BOOL m_isRowId;
    unsigned int m_objectIndex;
    WCDataBaseItem *m_item;
}

@property(nonatomic) BOOL m_isRowId; // @synthesize m_isRowId;
@property(nonatomic) unsigned int m_objectIndex; // @synthesize m_objectIndex;
@property(retain, nonatomic) WCDataBaseItem *m_item; // @synthesize m_item;
- (void).cxx_destruct;

@end

