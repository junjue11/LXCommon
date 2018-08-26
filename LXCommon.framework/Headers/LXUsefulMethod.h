//
//  LXUsefulMethod.h
//  LiangFengYouXin
//
//  Created by facingsun on 2017/3/19.
//  Copyright © 2017年 周峻觉. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LXUsefulMethod : NSObject

/**
 获取app的版本号

 @return app的版本号
 */
+ (NSString *)appVersion;


/**
 判断账号是否是凉信的规范账号。
 凉信的有效账号为10位数字，不以0开头。

 @param account 账号
 @return 是凉信规范的账号，返回YES；反之，返回NO。
 */
+ (BOOL)isLXAccount:(NSString *_Nullable)account;


/**
 判断密码是否是凉信的规范密码。
 凉信规范密码位6-20位数字和字母的组合。

 @param password 密码
 @return 是凉信的规范密码，返回YES；反之，返回NO。
 */
+ (BOOL)isLXPassword:(NSString *_Nullable)password;

#pragma mark - 将图片保存到document中,返回图片的路径。
//format: jpg 或 png

/**
 将image保存到文件夹中，并返回保存后的路径。

 @param image 将要保存的image
 @param name image的名字。为空时，名字随机。
 @param format image保存的格式：jpg/jpge 和 png。所以format的取值为 @"jpg"/@"jpge"和@"png"。image的默认保存格式为jpg。如果为空，或传值错误，将使用默认格式。
 @param folder image将要保存的文件夹。如果文件夹不存在，将保存失败。
 @return 保存成功，返回路径。保存失败，返回空。
 */
+ (NSString *_Nullable)saveImage:(UIImage *)image name:(NSString *_Nullable)name format:(NSString *_Nullable)format destinationFolder:(NSString *_Nullable)folder;


/**
 将image保存到手机本地

 @param image 将要保存的image
 @param completion 保存完成的回调。
 */
+ (void)saveImageToPhone:(UIImage *)image completion:(nullable void(^)(BOOL success, NSError *__nullable error))completion;


/**
 将image file 保存到手机本地

 @param imageFile 将要保存的image file.
 @param completion 保存完成的回调。
 */
+ (void)saveImageFileToPhone:(NSString *)imageFile completion:(nullable void(^)(BOOL success, NSError *__nullable error))completion;


/**
 将image url 保存到手机本地

 @param imageURL 将要保存的image url
 @param completion 保存完成的回调。
 */
+ (void)saveImageURLToPhone:(NSURL *)imageURL completion:(nullable void(^)(BOOL success, NSError *__nullable error))completion;


/**
 将视频保存到手机本地
 
 @param videoFile 将要保存的video file
 @param completion 保存完成的回调
 */
+ (void)saveVideoFileToPhone:(NSString *)videoFile completion:(nullable void(^)(BOOL success, NSError *__nullable error))completion;


/**
 将视频保存到手机本地

 @param videoUrl 将要保存的video url
 @param completion 保存完成的回调
 */
+ (void)saveVideoURLToPhone:(NSURL *)videoUrl completion:(nullable void(^)(BOOL success, NSError *__nullable error))completion;

#pragma mark - 删除document中的图片

/**
 删除文件，文本、图片、音频、视频等

 @param path 文件路径
 @param error error
 @return 删除文件是否成功。
 */
+ (BOOL)deleteFileAtPath:(NSString * _Nullable)path error:(NSError **)error;



/**
 删除文件，文本、图片、音频、视频等

 @param url 文件url
 @param error error
 @return 删除文件是否成功过。
 */
+ (BOOL)deleteFileAtURL:(NSURL * _Nullable)url error:(NSError **)error;


/**
 判断文件是否存在

 @param path 文件路径
 @return 存在返回YES；反之，返回NO。
 */
+ (BOOL)fileExistAtPath:(NSString *)path;


/**
 判断文件是否存在，同时，判断文件是否是文件夹

 @param path 文件路径
 @param isDirectory 是否是文件夹
 @return 存在返回YES；反之，返回NO。
 */
+ (BOOL)fileExistAtPath:(NSString *)path isDirectory:(nullable BOOL *)isDirectory;


/**
 MD5加密

 @param input 需要加密的字符串
 @return 加密后的输出。
 */
+ (NSString *_Nullable) md5:(NSString *_Nullable) input;


#pragma mark - Find ViewController

/**
 获取当前视图所在的视图控制器。

 @param currentView 当前视图。
 @return 视图所在的视图控制器
 */
+ (UIViewController*_Nullable)getViewControllerOfView:(UIView *_Nullable)currentView;

#pragma mark - 添加子视图控制器到根视图中
//+ (void)addChildViewControllerToRoot:(UIViewController *_Nullable)childController;


#pragma mark - 解析json格式的字符串

/**
 将jsonString解析为json对象。对象为不可变对象。

 @param jsonString jsonString
 @return json对象
 */
+ (nullable id)JSONObjectWithString:(NSString* _Nullable)jsonString;


/**
 将jsonData解析为json对象。对象为不可变对象。

 @param jsonData jsonData
 @return json对象
 */
+ (nullable id)JSONObjectWithData:(NSData *_Nullable)jsonData;


/**
 获取键盘

 @return 键盘视图
 */
+ ( UIView * _Nullable )keyboardView;

#pragma mark - 简单的通知视图

/**
 弹出提示信息

 @param title 信息
 @param duration 弹出框的持续时间
 @param size 弹出框大小
 @param superView 弹出框所在的父视图
 */
+ (void)informViewWithTitle:(NSString *_Nullable)title animateDuration:(CGFloat)duration size:(CGSize)size superView:(UIView *_Nullable)superView;


/**
 弹出提示信息

 @param title 信息
 @param duration 弹出框的持续时间
 @param size 弹出框大小
 @param viewController 弹出框所在的视图控制器
 */
+ (void)informViewWithTitle:(NSString *_Nullable)title animateDuration:(CGFloat)duration size:(CGSize)size viewController:(UIViewController *_Nullable)viewController;

#if LIANG_FENG_YOU_XIN
#pragma mark - 分享文本到第三方平台，platform: "qq"  "weibo"  "wx.session"  "wx.timeline"
+ (void)shareWithText:(NSString *_Nullable)text toPlatform:(NSString *_Nullable)platform;

#pragma mark - 分享图片到第三方平台，platform: "qq"  "weibo"  "wx.session"  "wx.timeline"
+ (void)shareWithImage:(UIImage *_Nullable)image toPlatform:(NSString *_Nullable)platform;

#pragma mark - 分享视频到第三方平台，platform: "qq"  "weibo"  "wx.session"  "wx.timeline"
+ (void)shareWithVideoPath:(NSString *_Nullable)path title:(NSString *_Nullable)title description:(NSString *_Nullable)description toPlatform:(NSString *_Nullable)platform;
#endif


/**
 在maxSize范围内，等比例缩放size,得到一个最大的size

 @param size 需要被缩放的size
 @param maxSize 最大的size
 @return 返回合适大小的size
 */
+ (CGSize)proportionScaleSize:(CGSize)size maxSize:(CGSize)maxSize;


/**
 打开scheme

 @param scheme 目标scheme
 */
+ (void)openScheme:(NSString *_Nullable)scheme;


/**
 请求相册的访问权限

 @param complation 用户拒绝时，会回调。用户同意时，不调用回调。
 */
+ (void)requestPhotoAlbumAuthorizationWithComplation:(void(^)(BOOL userDenied))complation;


/**
 请求麦克风访问权限

 @param complation 用户拒绝时，会回调。用户同意时，不调用回调。
 */
+ (void)requestMicphoneAuthorizationWithComplation:(void(^)(BOOL userDenied))complation;


/**
 请求相机访问权限

 @param complation 用户拒绝时，会回调。用户同意时，不调用回调。
 */
+ (void)requestCameraAuthorizationWithComplation:(void(^)(BOOL userDenied))complation;

@end

NS_ASSUME_NONNULL_END
