//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface MMCGIConfig : NSObject
{
    unsigned long long m_itemCount;
    struct unordered_map<int, const MMCGIItem *, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, const MMCGIItem *>>> m_functionIdMap;
    struct unordered_map<int, const MMCGIItem *, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, const MMCGIItem *>>> m_cmdIdMap;
}

+ (const struct MMCGIItem *)findItemWithCmdID:(int)arg1;
+ (const struct MMCGIItem *)findItemWithFunc:(int)arg1;
+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct MMCGIItem *)findItemWithCmdIDInternal:(int)arg1;
- (const struct MMCGIItem *)findItemWithFuncInternal:(int)arg1;
- (void)config;

@end

