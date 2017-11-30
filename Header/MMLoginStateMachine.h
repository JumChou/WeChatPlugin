//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TKStateMachine.h"

@class TKEvent, TKState;

__attribute__((visibility("hidden")))
@interface MMLoginStateMachine : TKStateMachine
{
    TKState *_stateStart;
    TKState *_stateLoadingQRCode;
    TKState *_stateWaittingRefreshQRCode;
    TKState *_stateShowingQRCode;
    TKState *_stateWaittingConfirm;
    TKState *_stateShowingPairedInterstitialAnimation;
    TKState *_stateLoggingIn;
    TKState *_stateInitializingData;
    TKState *_stateShowingOneClick;
    TKState *_stateTryingAutoLogin;
    TKState *_stateCheckingOnlineState;
    TKEvent *_cancelLogin;
    TKEvent *_confirmLogIn;
    TKEvent *_loginFailed;
    TKEvent *_useQRCodeLogin;
    TKEvent *_loadQRCodeSucc;
    TKEvent *_loadQRCodeFailed;
    TKEvent *_qrCodeScanned;
    TKEvent *_qrCodeExpired;
    TKEvent *_refreshQRCode;
    TKEvent *_goBackToIntro;
    TKEvent *_useOneClickLogin;
    TKEvent *_unlinkOneClick;
    TKEvent *_oneClickRequestFailed;
    TKEvent *_oneClickRequestSent;
    TKEvent *_useAutoLogin;
    TKEvent *_autoLoginFailed;
    TKEvent *_sendInitCGI;
    TKEvent *_sendGetOnlineInfoCGI;
}

@property(retain, nonatomic) TKEvent *sendGetOnlineInfoCGI; // @synthesize sendGetOnlineInfoCGI=_sendGetOnlineInfoCGI;
@property(retain, nonatomic) TKEvent *sendInitCGI; // @synthesize sendInitCGI=_sendInitCGI;
@property(retain, nonatomic) TKEvent *autoLoginFailed; // @synthesize autoLoginFailed=_autoLoginFailed;
@property(retain, nonatomic) TKEvent *useAutoLogin; // @synthesize useAutoLogin=_useAutoLogin;
@property(retain, nonatomic) TKEvent *oneClickRequestSent; // @synthesize oneClickRequestSent=_oneClickRequestSent;
@property(retain, nonatomic) TKEvent *oneClickRequestFailed; // @synthesize oneClickRequestFailed=_oneClickRequestFailed;
@property(retain, nonatomic) TKEvent *unlinkOneClick; // @synthesize unlinkOneClick=_unlinkOneClick;
@property(retain, nonatomic) TKEvent *useOneClickLogin; // @synthesize useOneClickLogin=_useOneClickLogin;
@property(retain, nonatomic) TKEvent *goBackToIntro; // @synthesize goBackToIntro=_goBackToIntro;
@property(retain, nonatomic) TKEvent *refreshQRCode; // @synthesize refreshQRCode=_refreshQRCode;
@property(retain, nonatomic) TKEvent *qrCodeExpired; // @synthesize qrCodeExpired=_qrCodeExpired;
@property(retain, nonatomic) TKEvent *qrCodeScanned; // @synthesize qrCodeScanned=_qrCodeScanned;
@property(retain, nonatomic) TKEvent *loadQRCodeFailed; // @synthesize loadQRCodeFailed=_loadQRCodeFailed;
@property(retain, nonatomic) TKEvent *loadQRCodeSucc; // @synthesize loadQRCodeSucc=_loadQRCodeSucc;
@property(retain, nonatomic) TKEvent *useQRCodeLogin; // @synthesize useQRCodeLogin=_useQRCodeLogin;
@property(retain, nonatomic) TKEvent *loginFailed; // @synthesize loginFailed=_loginFailed;
@property(retain, nonatomic) TKEvent *confirmLogIn; // @synthesize confirmLogIn=_confirmLogIn;
@property(retain, nonatomic) TKEvent *cancelLogin; // @synthesize cancelLogin=_cancelLogin;
@property(retain, nonatomic) TKState *stateCheckingOnlineState; // @synthesize stateCheckingOnlineState=_stateCheckingOnlineState;
@property(retain, nonatomic) TKState *stateTryingAutoLogin; // @synthesize stateTryingAutoLogin=_stateTryingAutoLogin;
@property(retain, nonatomic) TKState *stateShowingOneClick; // @synthesize stateShowingOneClick=_stateShowingOneClick;
@property(retain, nonatomic) TKState *stateInitializingData; // @synthesize stateInitializingData=_stateInitializingData;
@property(retain, nonatomic) TKState *stateLoggingIn; // @synthesize stateLoggingIn=_stateLoggingIn;
@property(retain, nonatomic) TKState *stateShowingPairedInterstitialAnimation; // @synthesize stateShowingPairedInterstitialAnimation=_stateShowingPairedInterstitialAnimation;
@property(retain, nonatomic) TKState *stateWaittingConfirm; // @synthesize stateWaittingConfirm=_stateWaittingConfirm;
@property(retain, nonatomic) TKState *stateShowingQRCode; // @synthesize stateShowingQRCode=_stateShowingQRCode;
@property(retain, nonatomic) TKState *stateWaittingRefreshQRCode; // @synthesize stateWaittingRefreshQRCode=_stateWaittingRefreshQRCode;
@property(retain, nonatomic) TKState *stateLoadingQRCode; // @synthesize stateLoadingQRCode=_stateLoadingQRCode;
@property(retain, nonatomic) TKState *stateStart; // @synthesize stateStart=_stateStart;
- (void).cxx_destruct;
- (void)onTKStateMachineDidChangeStateNotification:(id)arg1;
- (BOOL)fireEvent:(id)arg1;
- (void)setupEvents;
- (void)setupStates;
- (void)dealloc;
- (id)init;

@end

