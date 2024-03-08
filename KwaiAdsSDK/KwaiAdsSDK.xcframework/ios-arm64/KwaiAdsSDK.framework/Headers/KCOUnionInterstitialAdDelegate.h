//
//  KCOUnionInterstitialAdDelegate.h
//  AFNetworking
//
//  Created by WANGDONGLIANG on 2023/11/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol KCOUnionInterstitialAdDelegate <NSObject>

@optional
/// 页面打开成功
- (void)didInterstitialShow;

/// 页面展示失败
- (void)didInterstitialShowFail:(NSError *)error;

/// 页面发生点击
- (void)didInterstitialClick;

/// 视频播放完成
- (void)didInterstitialPlayComplete;

/// 页面关闭
- (void)didInterstitialClose;

@end

NS_ASSUME_NONNULL_END
