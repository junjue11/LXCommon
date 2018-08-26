//
//  NSString+LXExtension.h
//  LiangFengYouXin
//
//  Created by 周峻觉 on 16/8/23.
//  Copyright © 2016年 周峻觉. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (LXExtension)


/**
 获取一个指定长度的随机字符串

 @param len 指定长度
 @return 返回的字符串
 */
+ (NSString *)randomStringWithLength:(NSUInteger)len;


/**
 使用新的字体(大小)，计算字符串所占空间大小

 @param maxSize 字符最大显示范围
 @param font 新字体
 @param pointSize 备用字体大小。有些字体用户手机可能没有下载，将使用系统默认字体和size计算。
 @return 字符串所占空间大小
 */
- (CGSize)textWithMaxSize:(CGSize)maxSize withFont:(UIFont *)font spareFontSize:(CGFloat)pointSize;


/**
 将字符串从后往前，递增ASCII的值。

 @param base 用于递增的字符串
 @param count 递增的幅度。
 @return 递增后的字符串。
 */
+ (NSString *)stringByIncrease:(NSString *)base count:(NSUInteger)count;


/**
 给字符串设置行间隔. 以第一个字符的字体，做为字符串的字体。考虑如何优化

 @param space 行间隔
 @return 返回可变的属性化字符串。
 */
- (NSMutableAttributedString *)attributedStringWithLineSpace:(CGFloat)space;


/**
 给字符串设置字间隔。以第一个字符的字体，做为字符串的字体。考虑如何优化

 @param space 字间隔
 @return 返回的可变的属性化字符串。
 */
- (NSMutableAttributedString *)attributedStringWithWordSpace:(CGFloat)space;


/**
 给字符串设置行间隔和字间隔。以第一个字符的字体，做为字符串的字体。考虑如何优化

 @param lineSpace 行间隔
 @param wordSpace 字间隔
 @return 返回的可变属性化字符串。
 */
- (NSMutableAttributedString *)attributedStringWithLineSpace:(CGFloat)lineSpace wordSpace:(CGFloat)wordSpace;


/**
 给字符串设置行间隔，并使用新字体。

 @param space 行间隔
 @param font 新字体
 @return 返回的可变属性化字符串。
 */
- (NSMutableAttributedString *)attributedStringWithLineSpace:(CGFloat)space font:(UIFont *)font;


/**
 给字符串设置字间隔，并使用新的字体。

 @param space 字间隔
 @param font 新字体
 @return 返回的可变属性化字符串。
 */
- (NSMutableAttributedString *)attributedStringWithWordSpace:(CGFloat)space font:(UIFont *)font;


/**
 给字符串设置行间隔和字间隔,并使用新字体。

 @param lineSpace 行间隔
 @param wordSpace 字间隔
 @param font 新字体
 @return 返回的可变属性化字符串。
 */
- (NSMutableAttributedString *)attributedStringWithLineSpace:(CGFloat)lineSpace wordSpace:(CGFloat)wordSpace font:(UIFont *)font;


/**
 判断手机号是否是有效的手机号。

 @param phone 手机号
 @return 是有效的手机号，返回YES，反之，返回NO。
 */
+ (BOOL)isPhone:(NSString *_Nullable)phone;


/**
 判断手机号是否是有效的手机号。

 @return 是有效的手机号，返回YES，反之，返回NO。
 */
- (BOOL)isPhone;


/**
 判断字符串是否是字符和数字的组合。

 @param content 输入的字符串
 @return 如果只是字符和数字组合，返回YES；反之，返回NO。
 */
+ (BOOL)isCharOrNumber:(NSString *_Nullable)content;



/**
 判断字符串是否都是字母

 @param content 输入的字符串
 @return 如果都是字符，返回YES；反之，返回NO。
 */
+ (BOOL)isChar:(NSString *_Nullable)content;



/**
 判断字符串是否都是数字

 @param content 输入的字符串
 @return 如果都是数字，返回YES；反之，返回NO。
 */
+ (BOOL)isNumber:(NSString *_Nullable)content;



/**
 判断字符串是否是字符和数字的组合。

 @return 如果只是字符和数字组合，返回YES；反之，返回NO。
 */
- (BOOL)isCharOrNumber;



/**
 判断字符串是否都是字母

 @return 如果都是字符，返回YES；反之，返回NO。
 */
- (BOOL)isChar;



/**
 判断字符串是否都是数字

 @return 如果都是数字，返回YES；反之，返回NO。
 */
- (BOOL)isNumber;


/**
 判断字符串是不是空的，会过滤掉头尾的空格符和换行符。如果 value == NSNull,也为空。

 @param value 输入的字符串。
 @return 字符串为空，返回YES；反之，返回NO。
 */
+ (BOOL)isEmpty:(NSString *_Nullable)value;

#pragma mark - 获取1970到当前的毫秒数

/**
 获取1970年到当前的毫秒数，字符串表示。

 @return 1970年到当前的毫秒数，字符串表示。
 */
+(NSString *_Nullable)stringFrom1970ToNowMillisecond;


/**
 获取1970年到当前的秒数，字符串表示。

 @return 1970年到当前的秒数，字符串表示。
 */
+(NSString *_Nullable)stringFrom1970ToNowSecond;


/**
 YYYY/MM/dd HH:mm:ss 格式的当前时间。

 @return 当前时间的格式化字符串
 */
+(NSString*_Nullable)stringFromCurrentTimes;

#pragma mark - 计算文本的矩形大小

/**
 计算字符串的size。

 @param text 输入的字符串
 @param font 字符串采用的字体
 @param size 最大size
 @return 字符串的实际size。
 */
+(CGSize)stringSize:(NSString *_Nullable)text font:(UIFont *)font maxSize:(CGSize)size;


/**
 将 "YYYY-MM-dd HH:mm" 格式的时间，传化成时间戳字符串

 @param dateStr 格式化时间
 @return 时间戳字符串
 */
+(NSString *_Nullable)timestampStringWithFormatDateString:(NSString *_Nullable)dateStr;


/**
 将描述格式化：00:00:00

 @param seconds 输入的描述
 @return 格式化秒数
 */
+ (NSString *)stringFormatSeconds:(NSUInteger)seconds;

@end
