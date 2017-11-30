//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GetPackageListResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasCount:1;
    unsigned int hasContinueFlag:1;
    unsigned int hasSvrCount:1;
    unsigned int hasType:1;
    unsigned int count;
    unsigned int continueFlag;
    unsigned int svrCount;
    unsigned int type;
    BaseResponse *baseResponse;
    NSMutableArray *mutableListList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(nonatomic, setter=SetSvrCount:) unsigned int svrCount; // @synthesize svrCount;
@property(readonly, nonatomic) BOOL hasSvrCount; // @synthesize hasSvrCount;
@property(nonatomic, setter=SetContinueFlag:) unsigned int continueFlag; // @synthesize continueFlag;
@property(readonly, nonatomic) BOOL hasContinueFlag; // @synthesize hasContinueFlag;
@property(retain, nonatomic) NSMutableArray *mutableListList; // @synthesize mutableListList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addList:(id)arg1;
- (void)addListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
- (id)listList;
- (id)init;

@end

