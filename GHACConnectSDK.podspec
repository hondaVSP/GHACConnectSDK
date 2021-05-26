
Pod::Spec.new do |s|
  s.name             = 'GHACConnectSDK'
  s.version = '1.2.17.1'
  s.summary          = 'GHACConnectSDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
                        GHACConnectSDK
                       DESC

  s.homepage         = 'https://github.com/hondaVSP/GHACConnectSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.authors          = {"445878662@qq.com"=>"gongm@reachauto.com"}
  s.source           = { :git => 'https://github.com/hondaVSP/GHACConnectSDK.git', :tag => s.version }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  s.requires_arc = true
  s.vendored_frameworks = 'GHACConnectSDK.framework','TencentLBS.framework'
  # s.frameworks = 'Foundaxtion','UIKit','CoreLocation','Security','CoreTelephony','SystemConfiguration','JavaScriptCore','WebKit'
  s.static_framework = true
  s.resource = 'GHACConnectSDK.bundle'
  
  s.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => '-lObjC',
    'VALID_ARCHS' => 'x86_64 armv7 arm64'
  }

  s.dependency 'SDWebImage'
  s.dependency 'MJExtension'
  s.dependency 'AFNetworking/Reachability'
  s.dependency 'AFNetworking/Serialization'
  s.dependency 'AFNetworking/Security'
  s.dependency 'AFNetworking/NSURLSession'
  s.dependency 'Masonry'
  s.dependency 'KVOController'
  s.dependency 'HCFullscreenPopGesture'
  s.dependency 'IQKeyboardManager'
  s.dependency 'Nimbus/Models'
  s.dependency 'MJRefresh'
  s.dependency 'DZNEmptyDataSet'
  s.dependency 'MMMaterialDesignSpinner'
  s.dependency 'HondaConnectSDK'
  s.dependency 'Tencent-MapSDK'
  s.dependency 'FMDB'
  s.dependency 'lottie-ios','2.5.3'
  s.dependency 'CocoaAsyncSocket'
  s.dependency 'HCPayModule'




end
