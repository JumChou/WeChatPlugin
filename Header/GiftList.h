//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GiftList : PBGeneratedMessage
{
    unsigned int hasGiftId:1;
    unsigned int hasIconUrl:1;
    unsigned int hasTitle:1;
    unsigned int hasDesc:1;
    unsigned int hasGiftUrl:1;
    NSString *giftId;
    NSString *iconUrl;
    NSString *title;
    NSString *desc;
    NSString *giftUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetGiftUrl:) NSString *giftUrl; // @synthesize giftUrl;
@property(readonly, nonatomic) BOOL hasGiftUrl; // @synthesize hasGiftUrl;
@property(retain, nonatomic, setter=SetDesc:) NSString *desc; // @synthesize desc;
@property(readonly, nonatomic) BOOL hasDesc; // @synthesize hasDesc;
@property(retain, nonatomic, setter=SetTitle:) NSString *title; // @synthesize title;
@property(readonly, nonatomic) BOOL hasTitle; // @synthesize hasTitle;
@property(retain, nonatomic, setter=SetIconUrl:) NSString *iconUrl; // @synthesize iconUrl;
@property(readonly, nonatomic) BOOL hasIconUrl; // @synthesize hasIconUrl;
@property(retain, nonatomic, setter=SetGiftId:) NSString *giftId; // @synthesize giftId;
@property(readonly, nonatomic) BOOL hasGiftId; // @synthesize hasGiftId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

