//
//  HSDeviceMessage.h
//  FunkyFM
//
//  Created by 胡晟 on 2017/6/11.
//  Copyright © 2017年 胡晟. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HSDeviceMessage : NSObject


/**
 *  设备剩余存储空间
 *
 *  @return 剩余存储空间
 */
+ (NSString *)freeDiskSpaceInBytes;


@end
