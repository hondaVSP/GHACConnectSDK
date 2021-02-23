
Pod::Spec.new do |s|
  s.name             = 'GHACConnectSDK'
  s.version = '0.0.4'
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
  s.vendored_frameworks = 'GHACConnectSDK.framework'
  s.frameworks = 'Foundation','UIKit','CoreLocation','Security','CoreTelephony','SystemConfiguration','JavaScriptCore','WebKit'
  s.static_framework = true

  s.dependency 'SDWebImage'
  s.dependency 'MJExtension', '3.0.13'
  s.dependency 'AFNetworking/Reachability', '4.0'
  s.dependency 'AFNetworking/Serialization', '4.0'
  s.dependency 'AFNetworking/Security', '4.0'
  s.dependency 'AFNetworking/NSURLSession', '4.0'
  s.dependency 'Masonry'
  s.dependency 'KVOController'
  s.dependency 'FDFullscreenPopGesture'
  s.dependency 'IQKeyboardManager'
  s.dependency 'Nimbus/Models'
  s.dependency 'MJRefresh'
  s.dependency 'DZNEmptyDataSet'
  s.dependency 'MMMaterialDesignSpinner'
  s.dependency 'HondaConnectSDK'


end
