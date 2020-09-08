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

NS_ASSUME_NONNULL_BEGIN

@interface AiJiaEduSDKInitContext : NSObject

// appId
@property (nonatomic, copy) NSString *appId;
// appKey
@property (nonatomic, copy) NSString *appKey;
// appSecret
@property (nonatomic, copy) NSString *appSecret;
// evn > sdk联调环境
@property (nonatomic, assign) AiJiaEduSDKEvnType evn;

@end


typedef void (^AijiaCallBack)(BOOL success, NSString *message);

@interface AiJiaEduSDK : NSObject

+ (AiJiaEduSDK *)sharedSDK;

// initialize
- (void)initialize:(AiJiaEduSDKInitContext *)context;

// login
- (void)loginWithUserInfo:(AiJiaEduSDKUserInfo *)userInfo callBack:(AijiaCallBack)callBack;

// logout
- (void)logoutWithCallBack:(AijiaCallBack)callBack;

// log
- (void)enableLog:(BOOL)enable;


#pragma mark - // 进入爱家模块

// 进入爱家模块（present方式）
- (void)enterAJModule;

// 进入爱家模块（push方式）
- (void)enterAJModuleByWJJNavigation:(UINavigationController *)navigationController;


#pragma mark - // for AppDelegate [必须要执行哦

// call the method in AppDelegate "- (void)applicationWillResignActive:(UIApplication *)application".
- (void)appWillResignActive;

// call the method in AppDelegate "- (void)applicationDidBecomeActive:(UIApplication *)application".
- (void)appDidBecomeActive;

// call the method in AppDelegate "- (void)applicationDidEnterBackground:(UIApplication *)application".
- (void)appDidEnterBackgroud;

// call the method in AppDelegate "- (void)applicationWillTerminate:(UIApplication *)application".
- (void)appWillTerminate;

// call the method in AppDelegate "- (UIInterfaceOrientationMask)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window".
- (UIInterfaceOrientationMask)supportedInterfaceOrientations;

@end

NS_ASSUME_NONNULL_END
