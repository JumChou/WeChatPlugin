//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RewardMagic : PBGeneratedMessage
{
    unsigned int hasMagicWord:1;
    unsigned int hasMagicUrl:1;
    unsigned int hasMagicExpire:1;
    unsigned int hasMagicLimit:1;
    unsigned int hasProductId:1;
    unsigned int hasMd5:1;
    unsigned int magicExpire;
    unsigned int magicLimit;
    NSString *magicWord;
    NSString *magicUrl;
    NSString *productId;
    NSString *md5;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetMd5:) NSString *md5; // @synthesize md5;
@property(readonly, nonatomic) BOOL hasMd5; // @synthesize hasMd5;
@property(retain, nonatomic, setter=SetProductId:) NSString *productId; // @synthesize productId;
@property(readonly, nonatomic) BOOL hasProductId; // @synthesize hasProductId;
@property(nonatomic, setter=SetMagicLimit:) unsigned int magicLimit; // @synthesize magicLimit;
@property(readonly, nonatomic) BOOL hasMagicLimit; // @synthesize hasMagicLimit;
@property(nonatomic, setter=SetMagicExpire:) unsigned int magicExpire; // @synthesize magicExpire;
@property(readonly, nonatomic) BOOL hasMagicExpire; // @synthesize hasMagicExpire;
@property(retain, nonatomic, setter=SetMagicUrl:) NSString *magicUrl; // @synthesize magicUrl;
@property(readonly, nonatomic) BOOL hasMagicUrl; // @synthesize hasMagicUrl;
@property(retain, nonatomic, setter=SetMagicWord:) NSString *magicWord; // @synthesize magicWord;
@property(readonly, nonatomic) BOOL hasMagicWord; // @synthesize hasMagicWord;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

