//
//  UIFont+Sets.h
//  LiangFengYouXin
//
//  Created by 周峻觉 on 2016/11/19.
//  Copyright © 2016年 周峻觉. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (LXExtension)

////通用的方法，可以传入第三方字体库中字体的名字。
//+ (UIFont *)fontWithCommonName:(NSString *)fontName size:(CGFloat)fontSize;
//
////判断字体是否存在在apple字体预装列表中
//+ (BOOL)isFontIsExist:(NSString *)fontName;
//
////从苹果官方的公共字体库下载字体。下载的字体，不占用app的大小
//+ (void)asynchronouslySetFontName:(NSString *)fontName  downloaded:(void(^)(void))downloaded finish:(void(^)(void))finish  progressIndicator:(UILabel *)indicator;
//
////如果第三方字体库通过应用下载。则将字体库的存储路径作为参数传给方法，以获得字体
////path:字体库路径
////size:字体大小
//+ (UIFont*)customFontWithPath:(NSString*)path size:(CGFloat)size;

@end
