//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class ECDHKey, NSString, SKBuiltinBuffer_t, ShowStyleKey, WTLoginImgRespInfo, WxVerifyCodeRespInfo;

__attribute__((visibility("hidden")))
@interface AuthSectResp : PBGeneratedMessage
{
    unsigned int hasUin:1;
    unsigned int hasSvrPubEcdhkey:1;
    unsigned int hasSessionKey:1;
    unsigned int hasAutoAuthKey:1;
    unsigned int hasWtloginRspBuffFlag:1;
    unsigned int hasWtloginRspBuff:1;
    unsigned int hasWtloginImgRespInfo:1;
    unsigned int hasWxVerifyCodeRespInfo:1;
    unsigned int hasCliDbencryptKey:1;
    unsigned int hasCliDbencryptInfo:1;
    unsigned int hasAuthKey:1;
    unsigned int hasA2Key:1;
    unsigned int hasApplyBetaUrl:1;
    unsigned int hasShowStyle:1;
    unsigned int hasAuthTicket:1;
    unsigned int hasNewVersion:1;
    unsigned int hasUpdateFlag:1;
    unsigned int hasAuthResultFlag:1;
    unsigned int hasFsurl:1;
    unsigned int uin;
    unsigned int wtloginRspBuffFlag;
    unsigned int newVersion;
    unsigned int updateFlag;
    unsigned int authResultFlag;
    ECDHKey *svrPubEcdhkey;
    SKBuiltinBuffer_t *sessionKey;
    SKBuiltinBuffer_t *autoAuthKey;
    SKBuiltinBuffer_t *wtloginRspBuff;
    WTLoginImgRespInfo *wtloginImgRespInfo;
    WxVerifyCodeRespInfo *wxVerifyCodeRespInfo;
    SKBuiltinBuffer_t *cliDbencryptKey;
    SKBuiltinBuffer_t *cliDbencryptInfo;
    NSString *authKey;
    SKBuiltinBuffer_t *a2Key;
    NSString *applyBetaUrl;
    ShowStyleKey *showStyle;
    NSString *authTicket;
    NSString *fsurl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetFsurl:) NSString *fsurl; // @synthesize fsurl;
@property(readonly, nonatomic) BOOL hasFsurl; // @synthesize hasFsurl;
@property(nonatomic, setter=SetAuthResultFlag:) unsigned int authResultFlag; // @synthesize authResultFlag;
@property(readonly, nonatomic) BOOL hasAuthResultFlag; // @synthesize hasAuthResultFlag;
@property(nonatomic, setter=SetUpdateFlag:) unsigned int updateFlag; // @synthesize updateFlag;
@property(readonly, nonatomic) BOOL hasUpdateFlag; // @synthesize hasUpdateFlag;
@property(nonatomic, setter=SetNewVersion:) unsigned int newVersion; // @synthesize newVersion;
@property(readonly, nonatomic) BOOL hasNewVersion; // @synthesize hasNewVersion;
@property(retain, nonatomic, setter=SetAuthTicket:) NSString *authTicket; // @synthesize authTicket;
@property(readonly, nonatomic) BOOL hasAuthTicket; // @synthesize hasAuthTicket;
@property(retain, nonatomic, setter=SetShowStyle:) ShowStyleKey *showStyle; // @synthesize showStyle;
@property(readonly, nonatomic) BOOL hasShowStyle; // @synthesize hasShowStyle;
@property(retain, nonatomic, setter=SetApplyBetaUrl:) NSString *applyBetaUrl; // @synthesize applyBetaUrl;
@property(readonly, nonatomic) BOOL hasApplyBetaUrl; // @synthesize hasApplyBetaUrl;
@property(retain, nonatomic, setter=SetA2Key:) SKBuiltinBuffer_t *a2Key; // @synthesize a2Key;
@property(readonly, nonatomic) BOOL hasA2Key; // @synthesize hasA2Key;
@property(retain, nonatomic, setter=SetAuthKey:) NSString *authKey; // @synthesize authKey;
@property(readonly, nonatomic) BOOL hasAuthKey; // @synthesize hasAuthKey;
@property(retain, nonatomic, setter=SetCliDbencryptInfo:) SKBuiltinBuffer_t *cliDbencryptInfo; // @synthesize cliDbencryptInfo;
@property(readonly, nonatomic) BOOL hasCliDbencryptInfo; // @synthesize hasCliDbencryptInfo;
@property(retain, nonatomic, setter=SetCliDbencryptKey:) SKBuiltinBuffer_t *cliDbencryptKey; // @synthesize cliDbencryptKey;
@property(readonly, nonatomic) BOOL hasCliDbencryptKey; // @synthesize hasCliDbencryptKey;
@property(retain, nonatomic, setter=SetWxVerifyCodeRespInfo:) WxVerifyCodeRespInfo *wxVerifyCodeRespInfo; // @synthesize wxVerifyCodeRespInfo;
@property(readonly, nonatomic) BOOL hasWxVerifyCodeRespInfo; // @synthesize hasWxVerifyCodeRespInfo;
@property(retain, nonatomic, setter=SetWtloginImgRespInfo:) WTLoginImgRespInfo *wtloginImgRespInfo; // @synthesize wtloginImgRespInfo;
@property(readonly, nonatomic) BOOL hasWtloginImgRespInfo; // @synthesize hasWtloginImgRespInfo;
@property(retain, nonatomic, setter=SetWtloginRspBuff:) SKBuiltinBuffer_t *wtloginRspBuff; // @synthesize wtloginRspBuff;
@property(readonly, nonatomic) BOOL hasWtloginRspBuff; // @synthesize hasWtloginRspBuff;
@property(nonatomic, setter=SetWtloginRspBuffFlag:) unsigned int wtloginRspBuffFlag; // @synthesize wtloginRspBuffFlag;
@property(readonly, nonatomic) BOOL hasWtloginRspBuffFlag; // @synthesize hasWtloginRspBuffFlag;
@property(retain, nonatomic, setter=SetAutoAuthKey:) SKBuiltinBuffer_t *autoAuthKey; // @synthesize autoAuthKey;
@property(readonly, nonatomic) BOOL hasAutoAuthKey; // @synthesize hasAutoAuthKey;
@property(retain, nonatomic, setter=SetSessionKey:) SKBuiltinBuffer_t *sessionKey; // @synthesize sessionKey;
@property(readonly, nonatomic) BOOL hasSessionKey; // @synthesize hasSessionKey;
@property(retain, nonatomic, setter=SetSvrPubEcdhkey:) ECDHKey *svrPubEcdhkey; // @synthesize svrPubEcdhkey;
@property(readonly, nonatomic) BOOL hasSvrPubEcdhkey; // @synthesize hasSvrPubEcdhkey;
@property(nonatomic, setter=SetUin:) unsigned int uin; // @synthesize uin;
@property(readonly, nonatomic) BOOL hasUin; // @synthesize hasUin;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

