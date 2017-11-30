//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AppMessageHandlerDelegate.h"
#import "EmoticonMessageHandlerDelegate.h"
#import "IVideoExt.h"
#import "ImgMessageHandlerDelegate.h"
#import "MMService.h"
#import "TextMessageHandlerDelegate.h"
#import "VideoMessageHandlerDelegate.h"
#import "VoiceMessageHandlerDelegate.h"

@class AppMessageHandler, EmoticonMessageHandler, ImgMessageHandler, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, TextMessageHandler, ThumbDownloadMgr, VideoDownloadMgr, VideoMessageHandler, VoiceMessageHandler;

__attribute__((visibility("hidden")))
@interface MessageService : MMService <TextMessageHandlerDelegate, ImgMessageHandlerDelegate, VideoMessageHandlerDelegate, VoiceMessageHandlerDelegate, AppMessageHandlerDelegate, EmoticonMessageHandlerDelegate, IVideoExt, MMService>
{
    NSRecursiveLock *m_dbCacheLock;
    NSMutableDictionary *m_dictMsgDB;
    TextMessageHandler *m_textMsgHandler;
    VoiceMessageHandler *m_voiceMsgHandler;
    ImgMessageHandler *m_imgMsgHandler;
    VideoMessageHandler *m_videoMsgHandler;
    AppMessageHandler *m_appMsgHandler;
    EmoticonMessageHandler *m_emoticonMsgHandler;
    ThumbDownloadMgr *m_thumbDownloadMgr;
    VideoDownloadMgr *m_videoDonwloadMgr;
    NSRecursiveLock *m_oLockForVideoCompress;
    BOOL _isMacHelperHasNewChanges;
    BOOL _m_hasClearData;
    NSMutableSet *_revokingMessages;
    NSMutableSet *_translatingMessages;
    NSMutableSet *_transcribCGIs;
    NSMutableSet *_transcribingMessages;
}

+ (void)DeleteMessageDatabase;
+ (void)registerClsMethod_MessageDataExt;
+ (void)RegisterClsMethod;
+ (BOOL)savesMessagesToDisk;
+ (void)setSavesMessagesToDisk:(BOOL)arg1;
+ (void)delMsgDBs;
+ (id)ConvertVideoFavItem2MsgWrap:(id)arg1;
+ (id)ConvertFavData2FavItem:(id)arg1;
@property BOOL m_hasClearData; // @synthesize m_hasClearData=_m_hasClearData;
@property(retain, nonatomic) NSMutableSet *transcribingMessages; // @synthesize transcribingMessages=_transcribingMessages;
@property(retain, nonatomic) NSMutableSet *transcribCGIs; // @synthesize transcribCGIs=_transcribCGIs;
@property(retain, nonatomic) NSMutableSet *translatingMessages; // @synthesize translatingMessages=_translatingMessages;
@property(retain, nonatomic) NSMutableSet *revokingMessages; // @synthesize revokingMessages=_revokingMessages;
@property(nonatomic) BOOL isMacHelperHasNewChanges; // @synthesize isMacHelperHasNewChanges=_isMacHelperHasNewChanges;
- (void).cxx_destruct;
- (id)sendWebStreamVideoMessage:(id)arg1 toUsrName:(id)arg2;
- (id)forwardVideoMessage:(id)arg1 toUser:(id)arg2 extType:(int)arg3 errMsg:(id *)arg4;
- (id)SendVideoMessage:(id)arg1 toUsrName:(id)arg2 videoInfo:(id)arg3 msgType:(unsigned int)arg4 refMesageData:(id)arg5;
- (void)asyncCompressVideoInGlobalQueue:(id)arg1 videoDataInfo:(id)arg2 toUsrName:(id)arg3;
- (BOOL)updateUploadAndDownloadStatusInDBWithMessage:(id)arg1;
- (BOOL)updateFileInformationInDBWithMessage:(id)arg1;
- (BOOL)updateTranslateStatusInDBWithMessage:(id)arg1;
- (BOOL)updateVoiceTextInDBWithMessage:(id)arg1;
- (void)RemoveTranslationForMessage:(id)arg1;
- (void)TranslateMsg:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)TranscribeVoiceMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)notifyAppMsgUploadProgress:(id)arg1 msgData:(id)arg2 uploadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)onAppMsgSendFinish:(id)arg1 msgData:(id)arg2;
- (void)onFailedToParseXMLWhenDownloading:(id)arg1;
- (void)onVoiceDowloadFinished:(id)arg1 isSuccess:(BOOL)arg2 isNeedSave:(BOOL)arg3 offset:(unsigned long long)arg4;
- (void)onVoiceUploadCanceledWhenDownloading:(id)arg1;
- (void)notifyUpdateVideoStatus:(id)arg1 msgData:(id)arg2;
- (void)onVideoMsgSendFinish:(id)arg1 msgData:(id)arg2;
- (void)notifyCheckQQ;
- (void)notifyUploadProgress:(id)arg1 msgData:(id)arg2;
- (void)onImgMsgSendFinish:(id)arg1 msgData:(id)arg2;
- (void)onTextMsgSendFinish:(id)arg1 msgData:(id)arg2;
- (void)onEmoticonMsgSendFailed:(id)arg1 msgData:(id)arg2;
- (void)onEmoticonMsgSendFinish:(id)arg1 msgData:(id)arg2;
- (BOOL)isAppMsgDownloading:(id)arg1;
- (BOOL)isVideoMsgDownloading:(id)arg1;
- (BOOL)isAppMsgUploading:(id)arg1;
- (BOOL)isImgMsgUploading:(id)arg1;
- (void)UpdateVideoMsg:(id)arg1;
- (void)cancelUploadVideoMsg:(id)arg1 msgData:(id)arg2;
- (void)cancelUploadAppMsg:(id)arg1 msgData:(id)arg2;
- (void)cancelDownloadAppMsg:(id)arg1 msgData:(id)arg2;
- (void)StartDownloadAppMsg:(id)arg1 msgData:(id)arg2;
- (void)StartDownloadVoice:(id)arg1;
- (void)AddRevokePromptMsg:(id)arg1 msgData:(id)arg2;
- (void)AddLocalMsg:(id)arg1 msgData:(id)arg2;
- (id)ForwardMessage:(id)arg1 withReaderWrap:(id)arg2 toUser:(id)arg3;
- (id)ForwardMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (void)ResendMsg:(id)arg1 toUser:(id)arg2;
- (id)SendNoteAppMsgTo:(id)arg1 withFavoritesItem:(id)arg2;
- (id)SendRecordAppMsgTo:(id)arg1 withMsg:(id)arg2;
- (id)SendRecordAppMsgTo:(id)arg1 withFavoritesItem:(id)arg2;
- (id)SendFileAppMsgTo:(id)arg1 fileName:(id)arg2 filePath:(id)arg3;
- (id)SendGifFileMsgFromUsr:(id)arg1 toUser:(id)arg2 gifFileName:(id)arg3 gifFilePath:(id)arg4;
- (id)getEmoticonMsgContentWithMD5:(id)arg1 emoticonType:(unsigned int)arg2;
- (id)_getNamecardMsgContentForContact:(id)arg1;
- (id)SendLocationMsgFromUser:(id)arg1 toUser:(id)arg2 withLatitude:(double)arg3 longitude:(double)arg4 poiName:(id)arg5 label:(id)arg6;
- (id)SendNamecardMsgFromUser:(id)arg1 toUser:(id)arg2 containingContact:(id)arg3;
- (id)SendStickerStoreEmoticonMsgFromUsr:(id)arg1 toUsrName:(id)arg2 md5:(id)arg3 productID:(id)arg4;
- (id)SendEmoticonMsgFromUsr:(id)arg1 toUsrName:(id)arg2 md5:(id)arg3 emoticonType:(unsigned int)arg4;
- (void)AddShortVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)AddShortVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 isKFSession:(BOOL)arg4;
- (id)SendImgMessage:(id)arg1 toUsrName:(id)arg2 thumbImgData:(id)arg3 midImgData:(id)arg4 imgData:(id)arg5 imgInfo:(id)arg6;
- (id)SendTextMessage:(id)arg1 toUsrName:(id)arg2 msgText:(id)arg3 atUserList:(id)arg4;
- (id)SendAppMusicMessageFromUser:(id)arg1 toUsrName:(id)arg2 withTitle:(id)arg3 url:(id)arg4 description:(id)arg5 thumbnailData:(id)arg6;
- (id)SendAppURLMessageFromUser:(id)arg1 toUsrName:(id)arg2 withTitle:(id)arg3 url:(id)arg4 description:(id)arg5 thumbnailData:(id)arg6;
- (void)DelMsg:(id)arg1 msgList:(id)arg2 isDelAll:(BOOL)arg3;
- (BOOL)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)MarkMsgRead:(id)arg1 msgData:(id)arg2;
- (BOOL)RecallMsgWithChatName:(id)arg1 msgData:(id)arg2 erroHandler:(CDUnknownBlockType)arg3;
- (void)ModifyMsgDataInDBWithMessage:(id)arg1 chatName:(id)arg2;
- (void)ModifyMsgDataField:(id)arg1 msgData:(id)arg2 bitSet:(unsigned int)arg3;
- (void)checkDownloadStatus:(id)arg1;
- (void)checkUploadStatus:(id)arg1;
- (void)CheckMessageStatus:(id)arg1;
- (BOOL)hasMsgInChat:(id)arg1;
- (unsigned int)GetUnReadCount:(id)arg1;
- (id)GetMsgData:(id)arg1 svrId:(unsigned long long)arg2;
- (id)GetMsgData:(id)arg1 localId:(unsigned int)arg2;
- (id)GetAllMsgWithChatName:(id)arg1 messageType:(unsigned int)arg2;
- (unsigned int)GetImgMsgCountWithChatName:(id)arg1;
- (id)GetMsgListWithChatName:(id)arg1 fromLocalId:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limitCnt:(unsigned int)arg4 isHasMore:(char *)arg5;
- (id)GetLastMsg:(id)arg1;
- (void)onServiceClearData;
- (void)setupMacHelperOnMainThread;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (id)getMsgDBWithIdentifier:(id)arg1;
- (id)getMsgDB:(id)arg1;
- (void)notifyCheckQQOnMainThread;
- (void)notifyImgUploadProgressOnMainThread:(id)arg1 msgData:(id)arg2;
- (void)notifyImgMsgSendFinishOnMainThread:(id)arg1 msgData:(id)arg2;
- (void)notifyUnreadCntChangeOnMainThread:(id)arg1;
- (void)notifyAddMsgListForSessionOnMainThread:(id)arg1 setUsrNames:(id)arg2;
- (void)notifyDelAllMsgOnMainThread:(id)arg1;
- (void)notifyDelMsgOnMainThread:(id)arg1 msgData:(id)arg2;
- (void)notifyAddRevokePromptMsgOnMainThread:(id)arg1 msgData:(id)arg2;
- (void)notifyModMsgOnMainThread:(id)arg1 msgData:(id)arg2;
- (void)notifyAddMsgOnMainThread:(id)arg1 msgData:(id)arg2;
- (id)ForwardFavoritesItem:(id)arg1 withThumbnailData:(id)arg2 thumbnailSize:(struct CGSize)arg3 imageData:(id)arg4 toUserName:(id)arg5;
- (id)ForwardFavoritesItem:(id)arg1 toUserName:(id)arg2;
- (void)notifyMsgStatus:(id)arg1;
- (void)notifyAddMsg:(id)arg1 isFirstSync:(BOOL)arg2;
- (void)markChatRead:(id)arg1 dicNotify:(id)arg2;
- (void)handleMarkFunction:(id)arg1 dicNotify:(id)arg2;
- (void)statusCommand:(id)arg1 dicNotify:(id)arg2;
- (void)doMsgStatusNotify:(id)arg1;
- (BOOL)addNewSyncMsg:(id)arg1 chatName:(id)arg2 msgDb:(id)arg3 bModifyDbRes:(char *)arg4 duplicateMsgList:(id)arg5;
- (void)addMsgList:(id)arg1 toDb:(id)arg2 dicNotify:(id)arg3;
- (void)processMsgListAddToDB:(id)arg1 dicNotify:(id)arg2;
- (void)fillMsg:(id)arg1 toAddDbDic:(id)arg2;
- (BOOL)isCanAddToDB:(id)arg1;
- (void)addChatList:(id)arg1 inDic:(id)arg2;
- (void)addMarkFunction:(id)arg1 createTime:(unsigned int)arg2 inDic:(id)arg3;
- (void)addMarkRead:(id)arg1 createTime:(unsigned int)arg2 inDic:(id)arg3;
- (void)addQuitSession:(id)arg1 setQuitSession:(id)arg2 inDic:(id)arg3;
- (void)addEnterSession:(id)arg1 setEnterSession:(id)arg2 inDic:(id)arg3;
- (void)processStatusNotifyOpCode:(unsigned int)arg1 userName:(id)arg2 msgData:(id)arg3 dicStatusNofity:(id)arg4;
- (void)processStatusNotifyMsg:(id)arg1 dicMsgStatus:(id)arg2;
- (void)onRevokeMsg:(id)arg1;
- (void)processVoipInviteMsg:(id)arg1;
- (void)processYoMsg:(id)arg1;
- (void)processNewXMLMsg:(id)arg1;
- (void)processMacHelperCommandIfNeeded:(id)arg1;
- (BOOL)isFilterMsg:(id)arg1;
- (BOOL)isMsgSpecialProcess:(id)arg1;
- (id)genMsgDataFromAddMsg:(id)arg1;
- (id)filterAddMsg:(id)arg1;
- (void)OnSynDelMsg:(id)arg1;
- (void)OnSyncModMsgStatus:(id)arg1;
- (void)OnSyncBatchAddMsgs:(id)arg1 isFirstSync:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

