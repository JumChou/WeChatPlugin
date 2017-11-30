//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMBasicSearchResult.h"

@class MMComplexContactSearchResult, MMComplexGroupContactMembersSearchResult, NSString, WCContactData;

__attribute__((visibility("hidden")))
@interface MMComplexGroupContactSearchResult : MMBasicSearchResult
{
    BOOL _isMatched;
    unsigned int _lastMsgCreateTime;
    unsigned long long _searchType;
    MMComplexContactSearchResult *_groupNameResult;
    MMComplexGroupContactMembersSearchResult *_groupMembersResult;
    WCContactData *_groupContact;
    NSString *_keyword;
}

+ (id)UnmatchedInstance;
@property(nonatomic) unsigned int lastMsgCreateTime; // @synthesize lastMsgCreateTime=_lastMsgCreateTime;
@property(retain) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain) WCContactData *groupContact; // @synthesize groupContact=_groupContact;
@property(retain, nonatomic) MMComplexGroupContactMembersSearchResult *groupMembersResult; // @synthesize groupMembersResult=_groupMembersResult;
@property(retain, nonatomic) MMComplexContactSearchResult *groupNameResult; // @synthesize groupNameResult=_groupNameResult;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(nonatomic) BOOL isMatched; // @synthesize isMatched=_isMatched;
- (void).cxx_destruct;
- (id)identifier;
- (id)description;

@end

