//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

__attribute__((visibility("hidden")))
@interface SendC2cSecMsgResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasErrCode:1;
    unsigned int hasErrMsg:1;
    unsigned int hasMsgId:1;
    int errCode;
    BaseResponse *baseResponse;
    NSString *errMsg;
    NSString *msgId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetMsgId:) NSString *msgId; // @synthesize msgId;
@property(readonly, nonatomic) BOOL hasMsgId; // @synthesize hasMsgId;
@property(retain, nonatomic, setter=SetErrMsg:) NSString *errMsg; // @synthesize errMsg;
@property(readonly, nonatomic) BOOL hasErrMsg; // @synthesize hasErrMsg;
@property(nonatomic, setter=SetErrCode:) int errCode; // @synthesize errCode;
@property(readonly, nonatomic) BOOL hasErrCode; // @synthesize hasErrCode;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

