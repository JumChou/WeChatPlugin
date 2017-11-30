//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMView.h"

@class NSImageView, NSProgressIndicator, NSTextField, NSView, NSVisualEffectView;

__attribute__((visibility("hidden")))
@interface MMToastView : MMView
{
    BOOL _enableUserInteractive;
    NSView *_containerView;
    NSView *_backgroundView;
    NSImageView *_imageView;
    NSProgressIndicator *_activityView;
    NSVisualEffectView *_effectView;
    NSTextField *_textField;
    CDUnknownBlockType _didClickOnToastView;
}

@property(copy, nonatomic) CDUnknownBlockType didClickOnToastView; // @synthesize didClickOnToastView=_didClickOnToastView;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) NSProgressIndicator *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) BOOL enableUserInteractive; // @synthesize enableUserInteractive=_enableUserInteractive;
- (void).cxx_destruct;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)makeToastActivityWithText:(id)arg1;
- (void)makeToastWithText:(id)arg1 duration:(double)arg2 position:(struct CGPoint)arg3 image:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setupImaegViewWithImage:(id)arg1;
- (void)setupTextField;
- (void)setupEffectViewWithCornerRadius:(double)arg1;
- (void)setupActivityView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

