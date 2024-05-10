
  Pod::Spec.new do |s|
  s.name             = 'TradPlusKwaiAdsSDK'
  s.version          = '1.0.8'
  s.summary          = 'TradPlusKwaiAdsSDK'
  s.description      = <<-DESC
      TradPlusKwaiAdsSDK,TradPlusKwaiAdsSDK
                       DESC
  s.homepage         = 'https://github.com/tradplus/TradPlusKwaiAdsSDK'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'TradPlus' => 'ios' }
  s.source           = { :git => 'https://github.com/tradplus/TradPlusKwaiAdsSDK.git', :tag => s.version }
  
  s.ios.deployment_target = '12.0'
  
  s.ios.vendored_frameworks = 'KwaiAdsSDK/KwaiAdsSDK.xcframework'
  s.frameworks = 'Foundation', 'UIKit', 'MobileCoreServices', 'CoreGraphics', 'Security', 'SystemConfiguration', 'CoreTelephony', 'AdSupport', 'CoreData', 'StoreKit', 'AVFoundation', 'MediaPlayer', 'CoreMedia', 'WebKit', 'Accelerate', 'CoreLocation', 'AVKit','MessageUI','QuickLook','AudioToolBox','JavaScriptCore', 'CoreMotion'
  s.libraries = 'z', 'resolv.9', 'sqlite3','c++','c++abi'
  
  valid_archs = ['x86_64','arm64']
  
end
