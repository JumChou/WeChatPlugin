//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, SKBuiltinString_t;

__attribute__((visibility("hidden")))
@interface CreateTalkRoomRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasTopic:1;
    unsigned int hasMemberCount:1;
    unsigned int hasScene:1;
    unsigned int memberCount;
    unsigned int scene;
    BaseRequest *baseRequest;
    SKBuiltinString_t *topic;
    NSMutableArray *mutableMemberListList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic) NSMutableArray *mutableMemberListList; // @synthesize mutableMemberListList;
@property(nonatomic, setter=SetMemberCount:) unsigned int memberCount; // @synthesize memberCount;
@property(readonly, nonatomic) BOOL hasMemberCount; // @synthesize hasMemberCount;
@property(retain, nonatomic, setter=SetTopic:) SKBuiltinString_t *topic; // @synthesize topic;
@property(readonly, nonatomic) BOOL hasTopic; // @synthesize hasTopic;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addMemberList:(id)arg1;
- (void)addMemberListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
- (id)memberListList;
- (id)init;

@end

