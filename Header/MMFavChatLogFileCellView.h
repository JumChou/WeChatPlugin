//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatLogFileCellView.h"

#import "IMMFavRecordDownloadMgrExt.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MMFavChatLogFileCellView : MMChatLogFileCellView <IMMFavRecordDownloadMgrExt>
{
}

- (void)OnDownloadFavItemRecordPart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnDownloadFavItemRecordOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadFavItemRecordFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadFavItemRecordExpired:(id)arg1 DataId:(id)arg2;
- (void)layoutFileContentView;
- (void)populateWithFavItemDataField:(id)arg1 parentFavItem:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

