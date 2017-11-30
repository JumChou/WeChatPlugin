//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface CDNUploadMsgImgPrepareRequest : PBGeneratedMessage
{
    unsigned int hasClientImgId:1;
    unsigned int hasFromUserName:1;
    unsigned int hasToUserName:1;
    unsigned int hasThumbHeight:1;
    unsigned int hasThumbWidth:1;
    unsigned int hasMsgSource:1;
    unsigned int hasClientStat:1;
    unsigned int hasScene:1;
    unsigned int hasLongitude:1;
    unsigned int hasLatitude:1;
    unsigned int hasAttachedContent:1;
    unsigned int hasMidHeight:1;
    unsigned int hasMidWidth:1;
    unsigned int hasHdheight:1;
    unsigned int hasHdwidth:1;
    unsigned int hasAeskey:1;
    unsigned int hasEncryVer:1;
    unsigned int hasCrc32:1;
    unsigned int hasMsgForwardType:1;
    int thumbHeight;
    int thumbWidth;
    int scene;
    float longitude;
    float latitude;
    int midHeight;
    int midWidth;
    int hdheight;
    int hdwidth;
    int encryVer;
    unsigned int crc32;
    unsigned int msgForwardType;
    NSString *clientImgId;
    NSString *fromUserName;
    NSString *toUserName;
    NSString *msgSource;
    SKBuiltinBuffer_t *clientStat;
    NSString *attachedContent;
    NSString *aeskey;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetMsgForwardType:) unsigned int msgForwardType; // @synthesize msgForwardType;
@property(readonly, nonatomic) BOOL hasMsgForwardType; // @synthesize hasMsgForwardType;
@property(nonatomic, setter=SetCrc32:) unsigned int crc32; // @synthesize crc32;
@property(readonly, nonatomic) BOOL hasCrc32; // @synthesize hasCrc32;
@property(nonatomic, setter=SetEncryVer:) int encryVer; // @synthesize encryVer;
@property(readonly, nonatomic) BOOL hasEncryVer; // @synthesize hasEncryVer;
@property(retain, nonatomic, setter=SetAeskey:) NSString *aeskey; // @synthesize aeskey;
@property(readonly, nonatomic) BOOL hasAeskey; // @synthesize hasAeskey;
@property(nonatomic, setter=SetHdwidth:) int hdwidth; // @synthesize hdwidth;
@property(readonly, nonatomic) BOOL hasHdwidth; // @synthesize hasHdwidth;
@property(nonatomic, setter=SetHdheight:) int hdheight; // @synthesize hdheight;
@property(readonly, nonatomic) BOOL hasHdheight; // @synthesize hasHdheight;
@property(nonatomic, setter=SetMidWidth:) int midWidth; // @synthesize midWidth;
@property(readonly, nonatomic) BOOL hasMidWidth; // @synthesize hasMidWidth;
@property(nonatomic, setter=SetMidHeight:) int midHeight; // @synthesize midHeight;
@property(readonly, nonatomic) BOOL hasMidHeight; // @synthesize hasMidHeight;
@property(retain, nonatomic, setter=SetAttachedContent:) NSString *attachedContent; // @synthesize attachedContent;
@property(readonly, nonatomic) BOOL hasAttachedContent; // @synthesize hasAttachedContent;
@property(nonatomic, setter=SetLatitude:) float latitude; // @synthesize latitude;
@property(readonly, nonatomic) BOOL hasLatitude; // @synthesize hasLatitude;
@property(nonatomic, setter=SetLongitude:) float longitude; // @synthesize longitude;
@property(readonly, nonatomic) BOOL hasLongitude; // @synthesize hasLongitude;
@property(nonatomic, setter=SetScene:) int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetClientStat:) SKBuiltinBuffer_t *clientStat; // @synthesize clientStat;
@property(readonly, nonatomic) BOOL hasClientStat; // @synthesize hasClientStat;
@property(retain, nonatomic, setter=SetMsgSource:) NSString *msgSource; // @synthesize msgSource;
@property(readonly, nonatomic) BOOL hasMsgSource; // @synthesize hasMsgSource;
@property(nonatomic, setter=SetThumbWidth:) int thumbWidth; // @synthesize thumbWidth;
@property(readonly, nonatomic) BOOL hasThumbWidth; // @synthesize hasThumbWidth;
@property(nonatomic, setter=SetThumbHeight:) int thumbHeight; // @synthesize thumbHeight;
@property(readonly, nonatomic) BOOL hasThumbHeight; // @synthesize hasThumbHeight;
@property(retain, nonatomic, setter=SetToUserName:) NSString *toUserName; // @synthesize toUserName;
@property(readonly, nonatomic) BOOL hasToUserName; // @synthesize hasToUserName;
@property(retain, nonatomic, setter=SetFromUserName:) NSString *fromUserName; // @synthesize fromUserName;
@property(readonly, nonatomic) BOOL hasFromUserName; // @synthesize hasFromUserName;
@property(retain, nonatomic, setter=SetClientImgId:) NSString *clientImgId; // @synthesize clientImgId;
@property(readonly, nonatomic) BOOL hasClientImgId; // @synthesize hasClientImgId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

