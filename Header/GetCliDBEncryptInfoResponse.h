//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface GetCliDBEncryptInfoResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasCliDbencryptKey:1;
    unsigned int hasCliDbencryptInfo:1;
    BaseResponse *baseResponse;
    SKBuiltinBuffer_t *cliDbencryptKey;
    SKBuiltinBuffer_t *cliDbencryptInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetCliDbencryptInfo:) SKBuiltinBuffer_t *cliDbencryptInfo; // @synthesize cliDbencryptInfo;
@property(readonly, nonatomic) BOOL hasCliDbencryptInfo; // @synthesize hasCliDbencryptInfo;
@property(retain, nonatomic, setter=SetCliDbencryptKey:) SKBuiltinBuffer_t *cliDbencryptKey; // @synthesize cliDbencryptKey;
@property(readonly, nonatomic) BOOL hasCliDbencryptKey; // @synthesize hasCliDbencryptKey;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

