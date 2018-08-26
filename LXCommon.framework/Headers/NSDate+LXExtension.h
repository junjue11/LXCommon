//
//  NSDate+LXExtension.h
//  
//
//  Created by 周峻觉 on 2018/6/14.
//

#import <Foundation/Foundation.h>

@interface NSDate (LXExtension)

#pragma mark - 判断是否是同一天

/**
 比较两个date是不是同一天

 @param date1 比较参数1
 @param date2 比较参数2
 @return 相同返回YES，不同返回NO。
 */
+ (BOOL)lx_isSameDateWithDate1:(NSDate*_Nullable)date1 date2:(NSDate*_Nullable)date2;


/**
 比较两个date是不是同一天

 @param date 用于比较的date
 @return 相同返回YES，不同返回NO。
 */
- (BOOL)lx_isSameDateWithDate:(NSDate* _Nullable)date;

@end
