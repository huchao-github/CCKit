Pod::Spec.new do |s|
  s.name         = "CCKit"
  s.version      = "1.4.0"
  s.summary      = "概要"
  s.description  = "描述"
  s.homepage     = "https://github.com/huchao-github/CCKit"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "胡超" => "thinkorz@foxmail.com" }
  s.platform     = :ios
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/huchao-github/CCKit.git", :tag => "{s.version}" }
  s.requires_arc = true
  s.dependency "Masonry", "1.1.0"

  s.source_files = "CCKit/**/*.{h}"
  s.vendored_libraries = 'CCKit/libCCKit.a'

end
