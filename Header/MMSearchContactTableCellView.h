//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchTableCellView.h"

@class MMAvatarImageView, MMTextField;

__attribute__((visibility("hidden")))
@interface MMSearchContactTableCellView : MMSearchTableCellView
{
    MMAvatarImageView *_avatarImageView;
    MMTextField *_nicknameLabel;
    MMTextField *_descriptionLabel;
}

@property(retain, nonatomic) MMTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMTextField *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)layoutAvatar;
- (id)prefixStringFormatWithType:(unsigned long long)arg1;
- (id)matchedStringWithContact:(id)arg1 type:(unsigned long long)arg2;
- (void)layoutLabels;
- (id)makeNameLabelAttrString:(id)arg1;
- (id)makeDescLabelAttrString:(id)arg1;
- (id)getCurrentContact;
- (void)populateWithResultItem:(id)arg1 keyword:(id)arg2;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

