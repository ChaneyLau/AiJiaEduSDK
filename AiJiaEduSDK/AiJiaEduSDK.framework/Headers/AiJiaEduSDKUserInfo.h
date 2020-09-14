//
//  AiJiaEduSDKUserInfo.h
//  AiJiaEduSDK
//
//  Created by 刘倩 on 2020/9/8.
//  Copyright © 2020 CMCC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AiJiaEduSDKUserInfo : NSObject

/// 用户手机号
@property (nonnull, nonatomic, copy) NSString *userPhone;
/// 用户名称
@property (nonnull, nonatomic, copy) NSString *userName;
/// 用户头像（网络路径）
@property (nullable, nonatomic, copy) NSString *userAvatar;

@end

NS_ASSUME_NONNULL_END
