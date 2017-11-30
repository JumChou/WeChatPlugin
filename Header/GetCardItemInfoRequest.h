//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

__attribute__((visibility("hidden")))
@interface GetCardItemInfoRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasCardId:1;
    unsigned int hasFromScene:1;
    unsigned int hasFromUsername:1;
    unsigned int hasCardExt:1;
    unsigned int hasJsCheckinfoUrl:1;
    unsigned int hasJsCheckinfoSessionUsername:1;
    unsigned int fromScene;
    BaseRequest *baseRequest;
    NSString *cardId;
    NSString *fromUsername;
    NSString *cardExt;
    NSString *jsCheckinfoUrl;
    NSString *jsCheckinfoSessionUsername;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetJsCheckinfoSessionUsername:) NSString *jsCheckinfoSessionUsername; // @synthesize jsCheckinfoSessionUsername;
@property(readonly, nonatomic) BOOL hasJsCheckinfoSessionUsername; // @synthesize hasJsCheckinfoSessionUsername;
@property(retain, nonatomic, setter=SetJsCheckinfoUrl:) NSString *jsCheckinfoUrl; // @synthesize jsCheckinfoUrl;
@property(readonly, nonatomic) BOOL hasJsCheckinfoUrl; // @synthesize hasJsCheckinfoUrl;
@property(retain, nonatomic, setter=SetCardExt:) NSString *cardExt; // @synthesize cardExt;
@property(readonly, nonatomic) BOOL hasCardExt; // @synthesize hasCardExt;
@property(retain, nonatomic, setter=SetFromUsername:) NSString *fromUsername; // @synthesize fromUsername;
@property(readonly, nonatomic) BOOL hasFromUsername; // @synthesize hasFromUsername;
@property(nonatomic, setter=SetFromScene:) unsigned int fromScene; // @synthesize fromScene;
@property(readonly, nonatomic) BOOL hasFromScene; // @synthesize hasFromScene;
@property(retain, nonatomic, setter=SetCardId:) NSString *cardId; // @synthesize cardId;
@property(readonly, nonatomic) BOOL hasCardId; // @synthesize hasCardId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

