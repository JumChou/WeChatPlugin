//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, CmdList, SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface SnsSyncResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasCmdList:1;
    unsigned int hasContinueFlag:1;
    unsigned int hasKeyBuf:1;
    unsigned int continueFlag;
    BaseResponse *baseResponse;
    CmdList *cmdList;
    SKBuiltinBuffer_t *keyBuf;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetKeyBuf:) SKBuiltinBuffer_t *keyBuf; // @synthesize keyBuf;
@property(readonly, nonatomic) BOOL hasKeyBuf; // @synthesize hasKeyBuf;
@property(nonatomic, setter=SetContinueFlag:) unsigned int continueFlag; // @synthesize continueFlag;
@property(readonly, nonatomic) BOOL hasContinueFlag; // @synthesize hasContinueFlag;
@property(retain, nonatomic, setter=SetCmdList:) CmdList *cmdList; // @synthesize cmdList;
@property(readonly, nonatomic) BOOL hasCmdList; // @synthesize hasCmdList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

