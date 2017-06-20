//
//  HSFileTool.h
//  FunkyFMDownLoad
//
//  Created by 胡晟 on 2017/6/19.
//  Copyright © 2017年 funkyHS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HSFileTool : NSObject

// 根据传入的字节大小，转换成合适的单位大小 1024 --> 1
+ (float)calculateFileSizeInUnit:(unsigned long long)contentLength;

// 根据传入的字节大小，转换成合适具体单位 1024 --> KB
+ (NSString *)calculateUnit:(unsigned long long)contentLength;

// filePath下文件是否存在
+ (BOOL)fileExists:(NSString *)filePath;

// filePath下文件的大小
+ (long long)fileSize:(NSString *)filePath;

// 移动 fromPath 路径下的文件到 toPath 下
+ (void)moveFile:(NSString *)fromPath toPath:(NSString *)toPath;

// 移除 filePath 路径下的文件
+ (void)removeFile:(NSString *)filePath;


@end
