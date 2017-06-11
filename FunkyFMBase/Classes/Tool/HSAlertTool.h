//
//  HSAlertTool.h
//  FunkyFM
//
//  Created by 胡晟 on 2017/6/11.
//  Copyright © 2017年 胡晟. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSAlertTool : NSObject

+ (void)alertTitle:(NSString *)titile type:(UIAlertControllerStyle)alertType message:(NSString *)message didTask:(void(^)())task;


@end
