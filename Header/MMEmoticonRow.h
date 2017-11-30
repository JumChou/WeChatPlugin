//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MMEmoticonRow : NSObject <WCDBCoding>
{
    unsigned int fileType;
    unsigned int sortOrder;
    NSString *packageID;
    NSString *md5;
    long long m___rowID;
    NSDictionary *_localizedCaptions;
}

+ (void)_initPBTableOfMMEmoticonRow;
+ (id)dummyObject;
@property(retain, nonatomic) NSDictionary *localizedCaptions; // @synthesize localizedCaptions=_localizedCaptions;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned int sortOrder; // @synthesize sortOrder;
@property(nonatomic) unsigned int fileType; // @synthesize fileType;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *packageID; // @synthesize packageID;
- (void).cxx_destruct;
- (const basic_string_805fe43b *)getWCDBPrimaryColumnName;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long long)getWCDBIndexArrayCount;
- (const map_d2afedfd *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const map_d2afedfd *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_d2afedfd *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_7a576766 *)getValueNameIndexMap;
- (id)getValueTable;
- (const WCDBCondition_8b94cd3d *)db_sortOrder;
- (const WCDBCondition_8b94cd3d *)db_fileType;
- (const WCDBCondition_0fe98630 *)db_md5;
- (const WCDBCondition_0fe98630 *)db_packageID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

