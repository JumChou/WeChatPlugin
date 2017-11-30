//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BatchDelGameMsgRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasCount:1;
    int msgIdListMemoizedSerializedSize;
    unsigned int count;
    BaseRequest *baseRequest;
    NSMutableArray *mutableMsgIdListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableMsgIdListList; // @synthesize mutableMsgIdListList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addMsgIdListFromArray:(id)arg1;
- (void)addMsgIdList:(unsigned int)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *msgIdList; // @dynamic msgIdList;
- (id)msgIdListList;
- (id)init;

@end

