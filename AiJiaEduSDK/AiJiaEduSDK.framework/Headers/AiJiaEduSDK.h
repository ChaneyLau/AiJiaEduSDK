//
//  AiJiaEduSDK.h
//  AiJiaEduSDK
//
//  Created by 刘倩 on 2020/8/14.
//  Copyright © 2020 CMCC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


//! Project version number for AiJiaEduSDK.
FOUNDATION_EXPORT double AiJiaEduSDKVersionNumber;

//! Project version string for AiJiaEduSDK.
FOUNDATION_EXPORT const unsigned char AiJiaEduSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AiJiaEduSDK/PublicHeader.h>


@interface AiJiaEduSDKInitContext : NSObject

// appId
@property (nonatomic, copy) NSString * _Nullable appId;
// appKey
@property (nonatomic, copy) NSString * _Nullable appKey;
// appSecret
@property (nonatomic, copy) NSString * _Nullable appSecret;
// evn > sdk联调环境(”dev”,”test”,”online”)
@property (nonatomic, copy) NSString * _Nullable evn;

@end


@interface AiJiaEduSDK : NSObject

typedef void (^AijiaCallBack)(BOOL success, NSString *_Nonnull message);


+ (AiJiaEduSDK *_Nullable)sharedSDK;

// initialize
- (void)initialize:(AiJiaEduSDKInitContext * _Nonnull)context;

// login
- (void)login:(NSString *_Nullable)account callBack:(AijiaCallBack _Nullable)callBack;

// logout
- (void)logoutWithCallBack:(AijiaCallBack _Nullable)callBack;

// log
- (void)enableLog:(BOOL)enable;

// start aijia module
- (void)enterHomePage;



// -- for AppDelegate

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
