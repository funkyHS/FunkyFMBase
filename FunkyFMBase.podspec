
Pod::Spec.new do |s|
  s.name             = 'FunkyFMBase'
  s.version          = '0.1.0'
  s.summary          = 'FunkyFMBase'


  s.description      = <<-DESC
FunkyFMBase 基础组件，包含分类，工具类，网络相关
                       DESC

  s.homepage         = 'https://github.com/funkyHS/FunkyFMBase'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'funkyHS' => 'hs1024942667@163.com' }
  s.source           = { :git => 'https://github.com/funkyHS/FunkyFMBase.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

#s.source_files = 'FunkyFMBase/Classes/**/*'


s.subspec 'Base' do |sb|
    sb.source_files = 'FunkyFMBase/Classes/Base/**/*'
end

s.subspec 'Category' do |sb|
    sb.source_files = 'FunkyFMBase/Classes/Category/**/*'
end

s.subspec 'Network' do |sb|
    sb.source_files = 'FunkyFMBase/Classes/Network/**/*'
    sb.dependency 'AFNetworking'
    sb.dependency 'SDWebImage'
    sb.dependency 'FunkyFMBase/Category'
end

s.subspec 'Tool' do |sb|
    sb.source_files = 'FunkyFMBase/Classes/Tool/**/*'
end




  # s.resource_bundles = {
  #   'FunkyFMBase' => ['FunkyFMBase/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'

end
