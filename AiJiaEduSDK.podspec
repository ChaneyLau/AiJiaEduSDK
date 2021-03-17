
Pod::Spec.new do |s|
  s.name             = "AiJiaEduSDK"
  s.version          = "1.1.0"
  s.summary          = "AiJia Education SDK"
  s.homepage         = "https://github.com/ChaneyLau/AiJiaEduSDK"
  s.license          = 'MIT'
  s.author           = { "Chaney Lau" => "1625977078@qq.com" }
  s.source           = { :git => "https://github.com/ChaneyLau/AiJiaEduSDK.git", :tag => s.version.to_s }
  s.platform         = :ios, '9.0'
  s.requires_arc     = true
  
  
  s.vendored_frameworks    = "AiJiaEduSDK/AiJiaEduSDK.framework"
  s.resource               = "AiJiaEduSDK/AiJiaEduSDKResources.bundle"


  s.dependency 'MobileRTCSDK', '4.6.5'
  s.dependency 'KSYPlayer', '3.0.4'
  s.dependency 'lottie-ios', '2.5.0'
  s.dependency 'FMDB', '2.7.5'

end
