# AiJiaEduSDK

[![CocoaPods](http://img.shields.io/cocoapods/v/AiJiaEduSDK.svg?style=flat)](http://cocoapods.org/?q=AiJiaEduSDK)&nbsp;
[![License MIT](https://img.shields.io/badge/license-MIT-green.svg?style=flat)](https://raw.githubusercontent.com/ChaneyLau/AiJiaEduSDK/master/LICENSE)&nbsp;
[![CocoaPods](http://img.shields.io/cocoapods/p/AiJiaEduSDK.svg?style=flat)](http://cocoapods.org/?q=AiJiaEduSDK)&nbsp;
[![Support](https://img.shields.io/badge/support-iOS%209.0%2B%20-blue.svg?style=flat)](https://www.apple.com/nl/ios/)&nbsp;

## Cocoapods安装

支持Cocoapods安装，将如下语句加入Podfile:

```objc
pod 'AiJiaEduSDK'
```

## Release Notes

### v1.0.11

内部逻辑优化

### v1.0.10 

开放导航视觉修改：`AiJiaEduSDKNavigationBarAppearance`

### v1.0.9 

移除原登录方法：
```objc
- (void)login:(NSString *_Nonnull)account callBack:(AiJiaCallBack _Nullable)callBack;
```

添加新登录方法，包含用户信息：
```objc
- (void)loginWithUserInfo:(AiJiaEduSDKUserInfo *_Nonnull)userInfo callBack:(AiJiaCallBack _Nullable)callBack;
```

