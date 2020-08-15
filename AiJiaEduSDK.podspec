
Pod::Spec.new do |s|
  s.name             = "AiJiaEduSDK"
  s.version          = "4.6.2"
  s.summary          = "Aijia Education SDK"
  s.homepage         = "https://github.com/ChellyLau/AiJiaEduSDK"
  s.license          = 'MIT'
  s.author           = { "Chelly Lau" => "1625977078@qq.com" }
  s.source           = { :git => "https://github.com/ChellyLau/AiJiaEduSDK.git", :tag => s.version.to_s }
  s.platform         = :ios, '9.0'
  s.requires_arc     = true
  
  
  s.vendored_frameworks    = "AiJiaEduSDK/AiJiaEduSDK.framework"
  s.resource               = "AiJiaEduSDK/AiJiaEduSDKResources.bundle"


  s.dependency 'MobileRTCSDK'
  s.dependency 'AFNetworking', '~> 4.0.0'
  s.dependency 'FMDB', '~> 2.6.2'
  s.dependency 'JSONModel', '~> 1.1.2'
  s.dependency 'Masonry', '~> 1.1.0'
  s.dependency 'SDWebImage', '~> 5.8.4'

end
