//
//  NSURL+LXExtension.h
//  LiangFengYouXin
//
//  Created by 周峻觉 on 2016/11/9.
//  Copyright © 2016年 周峻觉. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (LXExtension)

//+ (NSURL *)urlWithQiniu:(NSString *)imageName;



/**
 将字符串路径转化为URL

 @param path 路径
 @return URL
 */
+ (NSURL *_Nullable)commonURLWithPath:(NSString *_Nullable)path;


/**
 转译特殊字符

 @param urlString 输入的usl字符串
 @return 转义后的URL
 */
+ (NSURL *_Nullable)URLTranslateIllegalCharacter:(NSString *_Nullable)urlString;

@end
