//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FavLocationItem : NSObject
{
    double _lng;
    double _lat;
    double _scale;
    NSString *_label;
    NSString *_poiname;
}

@property(retain, nonatomic) NSString *poiname; // @synthesize poiname=_poiname;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) double lng; // @synthesize lng=_lng;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

