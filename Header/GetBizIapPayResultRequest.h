//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

__attribute__((visibility("hidden")))
@interface GetBizIapPayResultRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasSerialId:1;
    BaseRequest *baseRequest;
    NSString *serialId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetSerialId:) NSString *serialId; // @synthesize serialId;
@property(readonly, nonatomic) BOOL hasSerialId; // @synthesize hasSerialId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

