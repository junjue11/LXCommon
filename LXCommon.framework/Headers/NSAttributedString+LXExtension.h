//
//  NSAttributedString+LXExtension.h
//  LiangFengYouXin
//
//  Created by 周峻觉 on 2017/9/9.
//  Copyright © 2017年 周峻觉. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSAttributedString (LXExtension)


/**
 使用新的字符串，新的属性，替换原有的属性化字符串。如果新的字符串为空，则不替换。如果新的属性字典为空，则用原属性。

 @param string 用于替换的字符串。如果为空，则不替换。
 @param attribute 用于替换的属性。如果为空，则不替换。
 @return 返回新的属性化字符串。
 */
- (NSAttributedString *)lx_replaceString:(NSString *_Nullable)string attribute:(NSDictionary *_Nullable)attribute;

#pragma mark - 计算属性化文本的矩形大小

/**
 计算属性化字符串的size

 @param size 最大范围的size
 @return 属性化字符串的size
 */
- (CGSize)lx_fixedSizeWithMaxSize:(CGSize)size;

@end
