//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface LRUCache : NSObject
{
    NSMutableArray *m_objectsList;
    NSRecursiveLock *m_oLock;
    unsigned long long m_nMaxCacheCnt;
}

- (void).cxx_destruct;
- (void)setRecentUsedObject:(id)arg1 forKey:(id)arg2;
- (BOOL)removeObjectForKey:(id)arg1;
- (id)getObjectForKey:(id)arg1;
- (id)initWithMaxCacheCnt:(unsigned long long)arg1;
- (id)init;

@end

