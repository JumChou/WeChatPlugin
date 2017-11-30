//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

__attribute__((visibility("hidden")))
@interface BindLinkedinContactRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasOpcode:1;
    unsigned int hasVisible:1;
    unsigned int hasLinkedinMemberId:1;
    unsigned int hasLinkedinName:1;
    unsigned int hasLinkedinPublicUrl:1;
    unsigned int hasTimestamp:1;
    unsigned int hasNounce:1;
    unsigned int hasLinkedinSignature:1;
    unsigned int hasLinkedinReturnSignature:1;
    unsigned int opcode;
    unsigned int visible;
    BaseRequest *baseRequest;
    NSString *linkedinMemberId;
    NSString *linkedinName;
    NSString *linkedinPublicUrl;
    NSString *timestamp;
    NSString *nounce;
    NSString *linkedinSignature;
    NSString *linkedinReturnSignature;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetLinkedinReturnSignature:) NSString *linkedinReturnSignature; // @synthesize linkedinReturnSignature;
@property(readonly, nonatomic) BOOL hasLinkedinReturnSignature; // @synthesize hasLinkedinReturnSignature;
@property(retain, nonatomic, setter=SetLinkedinSignature:) NSString *linkedinSignature; // @synthesize linkedinSignature;
@property(readonly, nonatomic) BOOL hasLinkedinSignature; // @synthesize hasLinkedinSignature;
@property(retain, nonatomic, setter=SetNounce:) NSString *nounce; // @synthesize nounce;
@property(readonly, nonatomic) BOOL hasNounce; // @synthesize hasNounce;
@property(retain, nonatomic, setter=SetTimestamp:) NSString *timestamp; // @synthesize timestamp;
@property(readonly, nonatomic) BOOL hasTimestamp; // @synthesize hasTimestamp;
@property(retain, nonatomic, setter=SetLinkedinPublicUrl:) NSString *linkedinPublicUrl; // @synthesize linkedinPublicUrl;
@property(readonly, nonatomic) BOOL hasLinkedinPublicUrl; // @synthesize hasLinkedinPublicUrl;
@property(retain, nonatomic, setter=SetLinkedinName:) NSString *linkedinName; // @synthesize linkedinName;
@property(readonly, nonatomic) BOOL hasLinkedinName; // @synthesize hasLinkedinName;
@property(retain, nonatomic, setter=SetLinkedinMemberId:) NSString *linkedinMemberId; // @synthesize linkedinMemberId;
@property(readonly, nonatomic) BOOL hasLinkedinMemberId; // @synthesize hasLinkedinMemberId;
@property(nonatomic, setter=SetVisible:) unsigned int visible; // @synthesize visible;
@property(readonly, nonatomic) BOOL hasVisible; // @synthesize hasVisible;
@property(nonatomic, setter=SetOpcode:) unsigned int opcode; // @synthesize opcode;
@property(readonly, nonatomic) BOOL hasOpcode; // @synthesize hasOpcode;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

