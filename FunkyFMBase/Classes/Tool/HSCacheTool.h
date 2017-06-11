//
//  HSCacheTool.h
//  FunkyFM
//
//  Created by 胡晟 on 2017/6/11.
//  Copyright © 2017年 胡晟. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HSCacheTool : NSObject

+ (NSString *)getSizeWithPath: (NSString *)path;

+ (void)clearCacheWithPath: (NSString *)path;


@end
