//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

__attribute__((visibility("hidden")))
@interface SnsGroup : PBGeneratedMessage
{
    unsigned int hasGroupId:1;
    unsigned long long groupId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetGroupId:) unsigned long long groupId; // @synthesize groupId;
@property(readonly, nonatomic) BOOL hasGroupId; // @synthesize hasGroupId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

