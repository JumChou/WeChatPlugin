//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RecordMsgLocationItem : NSObject
{
    int _m_scale;
    double _m_latitude;
    double _m_longitude;
    NSString *_m_nsLabel;
    NSString *_m_nsPoiName;
}

@property(retain, nonatomic) NSString *m_nsPoiName; // @synthesize m_nsPoiName=_m_nsPoiName;
@property(retain, nonatomic) NSString *m_nsLabel; // @synthesize m_nsLabel=_m_nsLabel;
@property(nonatomic) int m_scale; // @synthesize m_scale=_m_scale;
@property(nonatomic) double m_longitude; // @synthesize m_longitude=_m_longitude;
@property(nonatomic) double m_latitude; // @synthesize m_latitude=_m_latitude;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

