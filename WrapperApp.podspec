#
# Be sure to run `pod lib lint WrapperApp.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'WrapperApp'
  s.version          = '0.1.0'
  s.summary          = 'A short description of WrapperApp.This description is used to generate tags and improve search results'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = '* Think: What does it do? Why did you write it? What is the focus?* Try to keep it short, snappy and to the point.Finally, dont worry about the indent, CocoaPods strips it!'

  s.homepage         = 'https://github.com/satish424k/WrapperApp'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'satish424k' => 'Sathish.Kotturu@Honeywell.com' }
  s.source           = { :git => 'https://github.com/satish424k/WrapperApp.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'WrapperApp/Classes/**/*'
  
  # s.resource_bundles = {
  #   'WrapperApp' => ['WrapperApp/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
