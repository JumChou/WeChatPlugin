//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

__attribute__((visibility("hidden")))
@interface BindSafeMobileRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasMobile:1;
    unsigned int hasOpcode:1;
    int opcode;
    BaseRequest *baseRequest;
    NSString *mobile;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetOpcode:) int opcode; // @synthesize opcode;
@property(readonly, nonatomic) BOOL hasOpcode; // @synthesize hasOpcode;
@property(retain, nonatomic, setter=SetMobile:) NSString *mobile; // @synthesize mobile;
@property(readonly, nonatomic) BOOL hasMobile; // @synthesize hasMobile;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

