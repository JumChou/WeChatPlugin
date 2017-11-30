//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

__attribute__((visibility("hidden")))
@interface PreparePurchaseRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasProductId:1;
    unsigned int hasPrice:1;
    unsigned int hasCurrencyType:1;
    unsigned int hasPayType:1;
    unsigned int hasExtInfo:1;
    unsigned int hasQuantity:1;
    unsigned int payType;
    unsigned int quantity;
    BaseRequest *baseRequest;
    NSString *productId;
    NSString *price;
    NSString *currencyType;
    NSString *extInfo;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetQuantity:) unsigned int quantity; // @synthesize quantity;
@property(readonly, nonatomic) BOOL hasQuantity; // @synthesize hasQuantity;
@property(retain, nonatomic, setter=SetExtInfo:) NSString *extInfo; // @synthesize extInfo;
@property(readonly, nonatomic) BOOL hasExtInfo; // @synthesize hasExtInfo;
@property(nonatomic, setter=SetPayType:) unsigned int payType; // @synthesize payType;
@property(readonly, nonatomic) BOOL hasPayType; // @synthesize hasPayType;
@property(retain, nonatomic, setter=SetCurrencyType:) NSString *currencyType; // @synthesize currencyType;
@property(readonly, nonatomic) BOOL hasCurrencyType; // @synthesize hasCurrencyType;
@property(retain, nonatomic, setter=SetPrice:) NSString *price; // @synthesize price;
@property(readonly, nonatomic) BOOL hasPrice; // @synthesize hasPrice;
@property(retain, nonatomic, setter=SetProductId:) NSString *productId; // @synthesize productId;
@property(readonly, nonatomic) BOOL hasProductId; // @synthesize hasProductId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

