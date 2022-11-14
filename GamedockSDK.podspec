Pod::Spec.new do |s|
  s.name             = 'GamedockSDK'
  s.version          = '0.1.0'
  s.summary          = 'Gamedock ios splitted sdk'
 
  s.description      = <<-DESC
iOS SDK of the Gamedock
                       DESC
 
  s.homepage         = 'https://gitlab.azerdev.com/gamedock/sdk/gamedock-sdk-ios'
  s.license          = {
    type: 'Gamedock License',
    text: <<-LICENSE
    All rights reserved.
    You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
    copy, modify, and distribute this software in source code or binary form for use
    in connection with the web services and APIs provided by Gamedock.
    As with any software that integrates with the Gamedock platform, your use of
    this software is subject to the Gamedock Platform Policy
    . This copyright notice shall be
    included in all copies or substantial portions of the software.
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
    FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
    COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
    IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
    CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
    LICENSE
  }
  s.author           = 'Gamedock'

  s.source           = { :git => 'https://github.com/azerion/gamedock-sdk-ios-split.git', :tag => '0.1.0' }
  s.ios.deployment_target   = '9.0'
  s.requires_arc     = true
  s.static_framework = true
  s.platform = :ios


  

   s.subspec "User" do |spec|
    spec.public_header_files = "User/GamedockUserSDK.framework/Headers/*.h"
  spec.source_files = "User/GamedockUserSDK.framework/Headers/*.h"
  spec.vendored_frameworks = "User/GamedockUserSDK.framework"
  spec.platform = :ios


  spec.xcconfig = { 
  'IPHONEOS_DEPLOYMENT_TARGET' => "9.0" 
  }
  spec.requires_arc     = true

  spec.user_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  end

  
  


end