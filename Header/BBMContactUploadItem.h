//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BBMContactUploadItem : PBGeneratedMessage
{
    unsigned int hasBbppid:1;
    unsigned int hasBbpin:1;
    unsigned int hasBbmnickName:1;
    NSString *bbppid;
    NSString *bbpin;
    NSString *bbmnickName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetBbmnickName:) NSString *bbmnickName; // @synthesize bbmnickName;
@property(readonly, nonatomic) BOOL hasBbmnickName; // @synthesize hasBbmnickName;
@property(retain, nonatomic, setter=SetBbpin:) NSString *bbpin; // @synthesize bbpin;
@property(readonly, nonatomic) BOOL hasBbpin; // @synthesize hasBbpin;
@property(retain, nonatomic, setter=SetBbppid:) NSString *bbppid; // @synthesize bbppid;
@property(readonly, nonatomic) BOOL hasBbppid; // @synthesize hasBbppid;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

