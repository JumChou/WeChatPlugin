//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface UploadVideoRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasClientMsgId:1;
    unsigned int hasFromUserName:1;
    unsigned int hasToUserName:1;
    unsigned int hasThumbTotalLen:1;
    unsigned int hasThumbStartPos:1;
    unsigned int hasThumbData:1;
    unsigned int hasVideoTotalLen:1;
    unsigned int hasVideoStartPos:1;
    unsigned int hasVideoData:1;
    unsigned int hasPlayLength:1;
    unsigned int hasNetworkEnv:1;
    unsigned int hasCameraType:1;
    unsigned int hasFuncFlag:1;
    unsigned int hasMsgSource:1;
    unsigned int hasCdnvideoUrl:1;
    unsigned int hasAeskey:1;
    unsigned int hasEncryVer:1;
    unsigned int hasCdnthumbUrl:1;
    unsigned int hasCdnthumbImgSize:1;
    unsigned int hasCdnthumbImgHeight:1;
    unsigned int hasCdnthumbImgWidth:1;
    unsigned int hasCdnthumbAeskey:1;
    unsigned int hasVideoFrom:1;
    unsigned int hasReqTime:1;
    unsigned int hasVideoMd5:1;
    unsigned int hasStreamVideoUrl:1;
    unsigned int hasStreamVideoTotalTime:1;
    unsigned int hasStreamVideoTitle:1;
    unsigned int hasStreamVideoWording:1;
    unsigned int hasStreamVideoWebUrl:1;
    unsigned int hasStreamVideoThumbUrl:1;
    unsigned int hasStreamVideoPublishId:1;
    unsigned int hasStreamVideoAdUxInfo:1;
    unsigned int hasStatExtStr:1;
    unsigned int hasHitMd5:1;
    unsigned int hasVideoNewMd5:1;
    unsigned int hasCrc32:1;
    unsigned int hasMsgForwardType:1;
    unsigned int thumbTotalLen;
    unsigned int thumbStartPos;
    unsigned int videoTotalLen;
    unsigned int videoStartPos;
    unsigned int playLength;
    unsigned int networkEnv;
    unsigned int cameraType;
    unsigned int funcFlag;
    int encryVer;
    int cdnthumbImgSize;
    int cdnthumbImgHeight;
    int cdnthumbImgWidth;
    int videoFrom;
    unsigned int reqTime;
    unsigned int streamVideoTotalTime;
    unsigned int hitMd5;
    unsigned int crc32;
    unsigned int msgForwardType;
    BaseRequest *baseRequest;
    NSString *clientMsgId;
    NSString *fromUserName;
    NSString *toUserName;
    SKBuiltinBuffer_t *thumbData;
    SKBuiltinBuffer_t *videoData;
    NSString *msgSource;
    NSString *cdnvideoUrl;
    NSString *aeskey;
    NSString *cdnthumbUrl;
    NSString *cdnthumbAeskey;
    NSString *videoMd5;
    NSString *streamVideoUrl;
    NSString *streamVideoTitle;
    NSString *streamVideoWording;
    NSString *streamVideoWebUrl;
    NSString *streamVideoThumbUrl;
    NSString *streamVideoPublishId;
    NSString *streamVideoAdUxInfo;
    NSString *statExtStr;
    NSString *videoNewMd5;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetMsgForwardType:) unsigned int msgForwardType; // @synthesize msgForwardType;
@property(readonly, nonatomic) BOOL hasMsgForwardType; // @synthesize hasMsgForwardType;
@property(nonatomic, setter=SetCrc32:) unsigned int crc32; // @synthesize crc32;
@property(readonly, nonatomic) BOOL hasCrc32; // @synthesize hasCrc32;
@property(retain, nonatomic, setter=SetVideoNewMd5:) NSString *videoNewMd5; // @synthesize videoNewMd5;
@property(readonly, nonatomic) BOOL hasVideoNewMd5; // @synthesize hasVideoNewMd5;
@property(nonatomic, setter=SetHitMd5:) unsigned int hitMd5; // @synthesize hitMd5;
@property(readonly, nonatomic) BOOL hasHitMd5; // @synthesize hasHitMd5;
@property(retain, nonatomic, setter=SetStatExtStr:) NSString *statExtStr; // @synthesize statExtStr;
@property(readonly, nonatomic) BOOL hasStatExtStr; // @synthesize hasStatExtStr;
@property(retain, nonatomic, setter=SetStreamVideoAdUxInfo:) NSString *streamVideoAdUxInfo; // @synthesize streamVideoAdUxInfo;
@property(readonly, nonatomic) BOOL hasStreamVideoAdUxInfo; // @synthesize hasStreamVideoAdUxInfo;
@property(retain, nonatomic, setter=SetStreamVideoPublishId:) NSString *streamVideoPublishId; // @synthesize streamVideoPublishId;
@property(readonly, nonatomic) BOOL hasStreamVideoPublishId; // @synthesize hasStreamVideoPublishId;
@property(retain, nonatomic, setter=SetStreamVideoThumbUrl:) NSString *streamVideoThumbUrl; // @synthesize streamVideoThumbUrl;
@property(readonly, nonatomic) BOOL hasStreamVideoThumbUrl; // @synthesize hasStreamVideoThumbUrl;
@property(retain, nonatomic, setter=SetStreamVideoWebUrl:) NSString *streamVideoWebUrl; // @synthesize streamVideoWebUrl;
@property(readonly, nonatomic) BOOL hasStreamVideoWebUrl; // @synthesize hasStreamVideoWebUrl;
@property(retain, nonatomic, setter=SetStreamVideoWording:) NSString *streamVideoWording; // @synthesize streamVideoWording;
@property(readonly, nonatomic) BOOL hasStreamVideoWording; // @synthesize hasStreamVideoWording;
@property(retain, nonatomic, setter=SetStreamVideoTitle:) NSString *streamVideoTitle; // @synthesize streamVideoTitle;
@property(readonly, nonatomic) BOOL hasStreamVideoTitle; // @synthesize hasStreamVideoTitle;
@property(nonatomic, setter=SetStreamVideoTotalTime:) unsigned int streamVideoTotalTime; // @synthesize streamVideoTotalTime;
@property(readonly, nonatomic) BOOL hasStreamVideoTotalTime; // @synthesize hasStreamVideoTotalTime;
@property(retain, nonatomic, setter=SetStreamVideoUrl:) NSString *streamVideoUrl; // @synthesize streamVideoUrl;
@property(readonly, nonatomic) BOOL hasStreamVideoUrl; // @synthesize hasStreamVideoUrl;
@property(retain, nonatomic, setter=SetVideoMd5:) NSString *videoMd5; // @synthesize videoMd5;
@property(readonly, nonatomic) BOOL hasVideoMd5; // @synthesize hasVideoMd5;
@property(nonatomic, setter=SetReqTime:) unsigned int reqTime; // @synthesize reqTime;
@property(readonly, nonatomic) BOOL hasReqTime; // @synthesize hasReqTime;
@property(nonatomic, setter=SetVideoFrom:) int videoFrom; // @synthesize videoFrom;
@property(readonly, nonatomic) BOOL hasVideoFrom; // @synthesize hasVideoFrom;
@property(retain, nonatomic, setter=SetCdnthumbAeskey:) NSString *cdnthumbAeskey; // @synthesize cdnthumbAeskey;
@property(readonly, nonatomic) BOOL hasCdnthumbAeskey; // @synthesize hasCdnthumbAeskey;
@property(nonatomic, setter=SetCdnthumbImgWidth:) int cdnthumbImgWidth; // @synthesize cdnthumbImgWidth;
@property(readonly, nonatomic) BOOL hasCdnthumbImgWidth; // @synthesize hasCdnthumbImgWidth;
@property(nonatomic, setter=SetCdnthumbImgHeight:) int cdnthumbImgHeight; // @synthesize cdnthumbImgHeight;
@property(readonly, nonatomic) BOOL hasCdnthumbImgHeight; // @synthesize hasCdnthumbImgHeight;
@property(nonatomic, setter=SetCdnthumbImgSize:) int cdnthumbImgSize; // @synthesize cdnthumbImgSize;
@property(readonly, nonatomic) BOOL hasCdnthumbImgSize; // @synthesize hasCdnthumbImgSize;
@property(retain, nonatomic, setter=SetCdnthumbUrl:) NSString *cdnthumbUrl; // @synthesize cdnthumbUrl;
@property(readonly, nonatomic) BOOL hasCdnthumbUrl; // @synthesize hasCdnthumbUrl;
@property(nonatomic, setter=SetEncryVer:) int encryVer; // @synthesize encryVer;
@property(readonly, nonatomic) BOOL hasEncryVer; // @synthesize hasEncryVer;
@property(retain, nonatomic, setter=SetAeskey:) NSString *aeskey; // @synthesize aeskey;
@property(readonly, nonatomic) BOOL hasAeskey; // @synthesize hasAeskey;
@property(retain, nonatomic, setter=SetCdnvideoUrl:) NSString *cdnvideoUrl; // @synthesize cdnvideoUrl;
@property(readonly, nonatomic) BOOL hasCdnvideoUrl; // @synthesize hasCdnvideoUrl;
@property(retain, nonatomic, setter=SetMsgSource:) NSString *msgSource; // @synthesize msgSource;
@property(readonly, nonatomic) BOOL hasMsgSource; // @synthesize hasMsgSource;
@property(nonatomic, setter=SetFuncFlag:) unsigned int funcFlag; // @synthesize funcFlag;
@property(readonly, nonatomic) BOOL hasFuncFlag; // @synthesize hasFuncFlag;
@property(nonatomic, setter=SetCameraType:) unsigned int cameraType; // @synthesize cameraType;
@property(readonly, nonatomic) BOOL hasCameraType; // @synthesize hasCameraType;
@property(nonatomic, setter=SetNetworkEnv:) unsigned int networkEnv; // @synthesize networkEnv;
@property(readonly, nonatomic) BOOL hasNetworkEnv; // @synthesize hasNetworkEnv;
@property(nonatomic, setter=SetPlayLength:) unsigned int playLength; // @synthesize playLength;
@property(readonly, nonatomic) BOOL hasPlayLength; // @synthesize hasPlayLength;
@property(retain, nonatomic, setter=SetVideoData:) SKBuiltinBuffer_t *videoData; // @synthesize videoData;
@property(readonly, nonatomic) BOOL hasVideoData; // @synthesize hasVideoData;
@property(nonatomic, setter=SetVideoStartPos:) unsigned int videoStartPos; // @synthesize videoStartPos;
@property(readonly, nonatomic) BOOL hasVideoStartPos; // @synthesize hasVideoStartPos;
@property(nonatomic, setter=SetVideoTotalLen:) unsigned int videoTotalLen; // @synthesize videoTotalLen;
@property(readonly, nonatomic) BOOL hasVideoTotalLen; // @synthesize hasVideoTotalLen;
@property(retain, nonatomic, setter=SetThumbData:) SKBuiltinBuffer_t *thumbData; // @synthesize thumbData;
@property(readonly, nonatomic) BOOL hasThumbData; // @synthesize hasThumbData;
@property(nonatomic, setter=SetThumbStartPos:) unsigned int thumbStartPos; // @synthesize thumbStartPos;
@property(readonly, nonatomic) BOOL hasThumbStartPos; // @synthesize hasThumbStartPos;
@property(nonatomic, setter=SetThumbTotalLen:) unsigned int thumbTotalLen; // @synthesize thumbTotalLen;
@property(readonly, nonatomic) BOOL hasThumbTotalLen; // @synthesize hasThumbTotalLen;
@property(retain, nonatomic, setter=SetToUserName:) NSString *toUserName; // @synthesize toUserName;
@property(readonly, nonatomic) BOOL hasToUserName; // @synthesize hasToUserName;
@property(retain, nonatomic, setter=SetFromUserName:) NSString *fromUserName; // @synthesize fromUserName;
@property(readonly, nonatomic) BOOL hasFromUserName; // @synthesize hasFromUserName;
@property(retain, nonatomic, setter=SetClientMsgId:) NSString *clientMsgId; // @synthesize clientMsgId;
@property(readonly, nonatomic) BOOL hasClientMsgId; // @synthesize hasClientMsgId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

