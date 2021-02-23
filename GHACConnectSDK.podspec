
Pod::Spec.new do |s|
  s.name             = 'GHACConnectSDK'
  s.version = '0.0.2'
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
  s.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => '-lObjC',
    'VALID_ARCHS' => 'x86_64 armv7 arm64'

  }
  s.static_framework = true

end
