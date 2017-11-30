//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMFavoritesDetailBaseCell.h"

@class MMDivider, NSTextField;

__attribute__((visibility("hidden")))
@interface MMFavoritesListBaseCell : MMFavoritesDetailBaseCell
{
    NSTextField *_nickNameLabel;
    NSTextField *_timeLabel;
    MMDivider *_divider;
}

+ (double)getTextStyleActualContent:(id)arg1 inputTitle:(id)arg2 inputDescription:(id)arg3 widthConstrain:(double)arg4 outputTextContent:(id *)arg5;
+ (double)cellHeightWithFavItem:(id)arg1 andWidthConstrain:(double)arg2;
@property(retain, nonatomic) MMDivider *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSTextField *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) NSTextField *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
- (void).cxx_destruct;
- (double)changeNickNameLableY;
- (id)contactDataWithUserName:(id)arg1;
- (double)getSenderInfoTimeLabelWidth;
- (double)getSenderInfoNickNameLabelWidth;
- (double)getSenderInfoWidth;
- (id)genNoImageTextAttrs:(id)arg1;
- (id)genSenderInfoDateAttributedString;
- (id)genSenderInfoNickNameAttributedString;
- (void)layoutSenderInfo;
- (id)favItemDescriptionString;
- (void)layoutFavContentView;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

