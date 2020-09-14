//
//  AiJiaEduSDK.h
//  AiJiaEduSDK
//
//  Created by 刘倩 on 2020/8/14.
//  Copyright © 2020 CMCC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AiJiaEduSDKConstants.h"
#import "AiJiaEduSDKUserInfo.h"

@interface AiJiaEduSDKNavigationBarAppearance : NSObject

/// 标题属性 [ 默认：系统字体、size:17、黑色、加粗 ]
@property (nonnull, nonatomic, strong) NSDictionary<NSAttributedStringKey, id> *titleTextAttributes;
/// 标题 [ 默认：“直播课堂” ]
@property (nonnull, nonatomic, copy) NSString *title;
/// 背景图片 [ 默认：nil ]
@property (nonnull, nonatomic, strong) UIImage *backgroundImage;
/// 背景颜色 [ 默认：白色 ]
@property (nonnull, nonatomic, strong) UIColor *backgroundColor;
/// 返回按钮图片 [ 默认：黑色按钮 ]
@property (nonnull, nonatomic, strong) UIImage *backImage;
/// 阴影图片 [ 默认：浅灰色横线 ]
@property (nonnull, nonatomic, strong) UIImage *shadowImage;

@end


@interface AiJiaEduSDKInitContext : NSObject

/// appId
@property (nonnull, nonatomic, copy) NSString *appId;
/// appKey
@property (nonnull, nonatomic, copy) NSString *appKey;
/// appSecret
@property (nonnull, nonatomic, copy) NSString *appSecret;
/// evn > sdk联调环境
@property (nonatomic, assign) AiJiaEduSDKEvnType evn;
/// 导航视觉
@property (nullable, nonatomic, strong) AiJiaEduSDKNavigationBarAppearance *appearance;

@end


typedef void (^AiJiaCallBack)(BOOL success, NSString * _Nullable message);

@interface AiJiaEduSDK : NSObject

+ (AiJiaEduSDK *_Nonnull)sharedSDK;

/// initialize
- (void)initialize:(AiJiaEduSDKInitContext *_Nonnull)context;

/// login
- (void)loginWithUserInfo:(AiJiaEduSDKUserInfo *_Nonnull)userInfo callBack:(AiJiaCallBack _Nullable)callBack;

/// logout
- (void)logoutWithCallBack:(AiJiaCallBack _Nullable)callBack;

/// log
- (void)enableLog:(BOOL)enable;


#pragma mark - // 进入爱家模块

/// 进入爱家模块（present方式）
- (void)enterAJModule;

/// 进入爱家模块（push方式）
- (void)enterAJModuleByWJJNavigation:(UINavigationController *_Nonnull)navigationController;


#pragma mark - // for AppDelegate [必须要执行哦

/// call the method in AppDelegate "- (void)applicationWillResignActive:(UIApplication *)application".
- (void)appWillResignActive;

/// call the method in AppDelegate "- (void)applicationDidBecomeActive:(UIApplication *)application".
- (void)appDidBecomeActive;

/// call the method in AppDelegate "- (void)applicationDidEnterBackground:(UIApplication *)application".
- (void)appDidEnterBackgroud;

/// call the method in AppDelegate "- (void)applicationWillTerminate:(UIApplication *)application".
- (void)appWillTerminate;

/// call the method in AppDelegate "- (UIInterfaceOrientationMask)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window".
- (UIInterfaceOrientationMask)supportedInterfaceOrientations;

@end

