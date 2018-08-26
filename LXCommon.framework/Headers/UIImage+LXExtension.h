//
//  UIImage+LXExtension.h
//  LiangFengYouXin
//
//  Created by 周峻觉 on 16/6/2.
//  Copyright © 2016年 周峻觉. All rights reserved.
//

#import <UIKit/UIKit.h>

//#if LIANG_FENG_YOU_XIN
//#import "LXTextAttribute.h"
//#import "LXPictureAttribute.h"
//#import "LXImageCache.h"
//#endif

@interface UIImage (LXExtension)

/**
 使用新的高度，等比例的放大或缩小图片的大小。返回新的图片大小。

 @param height 新的高度
 @return 缩放后的size
 */
- (CGSize)scaleSizeWithNewHeight:(CGFloat)height;


/**
 使用新的宽度，等比例的放大或缩小图片的大小。返回新的图片大小。

 @param width 新的宽度
 @return 缩放后的size
 */
- (CGSize)scaleSizeWithNewWidth:(CGFloat)width;


/**
 使用新的宽度等比例缩放图片

 @param image 输入的image
 @param height 指定的高度
 @return 缩放后的image
 */
+ (nullable UIImage *)imageWithImage:(nonnull UIImage *)image height:(CGFloat)height;


/**
 使用新的宽度等比例缩放图片

 @param image 输入的image
 @param width 指定的宽度
 @return 缩放后的image
 */
+ (nullable UIImage *)imageWithImage:(nonnull UIImage *)image width:(CGFloat)width;


/**
 使用新的宽-高绘制图片,压缩image

 @param image 输入的image
 @param size 新的size
 @return 缩放后的image
 */
+ (UIImage *_Nullable)scaledImage:(UIImage *_Nullable)image size:(CGSize)size;


/**
 裁剪出最大的方形image

 @param image 输入的image
 @return 裁剪后的image
 */
+ (UIImage*_Nullable)squareImageWithImage:(UIImage *_Nullable)image;


/**
 通过UIBezierPath,裁剪不规则形状的图片

 @param image 输入的image
 @param path 裁剪路径
 @return 裁剪后的image
 */
+ (UIImage* _Nullable)clipedImageWithImage:(UIImage *_Nullable)image path:(UIBezierPath *_Nullable)path;

//#if LIANG_FENG_YOU_XIN
//#pragma mark - 通过给image添加文字，创建一个新的image
////+ (nullable UIImage *)imageWithImage:(nonnull UIImage *)image text:(nullable NSString *)text textAttribute:(nullable LXTextAttribute*)attr textOrigin:(CGPoint)origin;
////
////+ (nullable UIImage *)imageWithImage:(nonnull UIImage *)image textAttributes:(NSArray<LXTextAttribute*>*_Nullable)attrs;
////
////+ (nullable UIImage *)imageWithImage:(nonnull UIImage *)image textAttributes:(NSArray<LXTextAttribute*>*_Nullable)textAttrs pictureAttributes:(NSArray<LXPictureAttribute *> *_Nullable)picAttrs;
//#endif

+ (nullable UIImage *)fliter:(nullable NSString *)filterName image:(nullable UIImage *)image;

#pragma mark - 从视频中摘取图片
+ (UIImage*_Nullable)thumbnailImageForVideo:(NSURL *_Nullable)videoURL atTime:(NSTimeInterval)time;

//如果图片大于2M，会自动旋转90度；否则不旋转
#pragma mark - 照相机获取到的图片自动旋转90度解决办法
+ (nullable UIImage *)fixOrientation:(nullable UIImage *)aImage;

+ (UIImage *_Nullable)imageFromView:(UIView *_Nullable)theView opaque:(BOOL)opaque;

+ (UIImage *_Nullable)imageByApplyingAlpha:(CGFloat )alpha image:(UIImage*_Nullable)image;

+ (UIImage *_Nullable)imageNamed:(NSString *_Nullable)name renderingModel:(UIImageRenderingMode)model;

@end
