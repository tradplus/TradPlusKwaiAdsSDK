//
//  KCOUnionRewardAdDelegate.h
//  AFNetworking
//
//  Created by simon on 2023/11/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 激励广告回调
@protocol KCOUnionRewardAdDelegate <NSObject>

@optional
/// 页面展示
- (void)didRewardShow;

/// 页面展示失败
- (void)didRewardShowFail:(NSError *)error;

/// 页面发生点击
- (void)didRewardClick;

/// 视频播放完成
- (void)didRewardPlayComplete;

/// 获得奖励
- (void)didRewardEarned;

/// 页面关闭
- (void)didRewardClose;


@end

NS_ASSUME_NONNULL_END
