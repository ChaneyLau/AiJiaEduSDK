# AiJiaEduSDK

## v1.0.10

开放导航视觉修改。

## v1.0.9

移除原登录方法：

`- (void)login:(NSString *_Nullable)account callBack:(AijiaCallBack _Nullable)callBack;`

添加新登录方法，包含用户信息：

`- (void)loginWithUserInfo:(AiJiaEduSDKUserInfo *)userInfo callBack:(AijiaCallBack)callBack;`


