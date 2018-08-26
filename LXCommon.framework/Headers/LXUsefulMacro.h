//
//  LXUsefulMacro.h
//  LXCommonService
//
//  Created by 周峻觉 on 2018/8/12.
//  Copyright © 2018年 周峻觉. All rights reserved.
//

#ifndef LXUsefulMacro_h
#define LXUsefulMacro_h

#ifdef DEBUG
#define NSLog(format, ...) printf("\n%s [第%d行] %s\n",__FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ## __VA_ARGS__] UTF8String]);
#else
#define NSLog(format, ...)
#endif


#define DocumentDirectory   NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0]
#define CacheDirectory      NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES)[0]
#define TempDirectory       [NSTemporaryDirectory() substringToIndex:[NSTemporaryDirectory() length]-1]


#define kKeyWindow                      [UIApplication sharedApplication].keyWindow
#define kScreenBounds                   [UIScreen mainScreen].bounds
#define kScreenSize                     [UIScreen mainScreen].bounds.size
#define kScreenWidth                    [UIScreen mainScreen].bounds.size.width
#define kScreenHeight                   [UIScreen mainScreen].bounds.size.height
#define kScreenScale                    [UIScreen mainScreen].scale
#define kStatusHeight                   [UIApplication sharedApplication].statusBarFrame.size.height
#define kNavBarHeight                   44
#define kStatusAndNavBarHeight          (kStatusHeight+kNavBarHeight)
#define kExtendedHeightAtIphoneXBottom  (kStatusHeight>20?34:0)

#define Font(size)                      [UIFont systemFontOfSize:size]
#define Color(r,g,b,a)                  [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
#define RGB(r,g,b)                      [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define RGBA(r,g,b,a)                   [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]


#endif /* LXUsefulMacro_h */
