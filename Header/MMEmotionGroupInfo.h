//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface MMEmotionGroupInfo : NSObject
{
    BOOL _shouldDisplayCaptions;
    int _type;
    NSString *_title;
    NSString *_identifier;
    NSArray *_children;
    NSImage *_icon;
    NSString *_introduction;
    NSString *_author;
    NSString *_fullDescription;
    NSString *_copyright;
    NSString *_storeIconURL;
}

@property(retain, nonatomic) NSString *storeIconURL; // @synthesize storeIconURL=_storeIconURL;
@property(retain, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(retain, nonatomic) NSString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(nonatomic) BOOL shouldDisplayCaptions; // @synthesize shouldDisplayCaptions=_shouldDisplayCaptions;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;

@end

