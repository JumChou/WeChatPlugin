//
//  TKIgnoreSessonModel.h
//  WeChatPlugin
//
//  Created by nato on 2017/9/15.
//  Copyright © 2017年 github:natototo. All rights reserved.
//

#import "TKBaseModel.h"

@interface TKIgnoreSessonModel : TKBaseModel

@property (nonatomic, copy) NSString *selfContact;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, assign) BOOL ignore;

@end
