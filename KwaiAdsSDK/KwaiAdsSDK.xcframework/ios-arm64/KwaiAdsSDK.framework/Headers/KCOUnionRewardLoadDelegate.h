//
//  KCOUnionRewardLoadDelegate.h
//  KwaiAdsUnionReward
//
//  Created by simon on 2023/11/30.
//

#import <Foundation/Foundation.h>

@class KCOUnionReward;

NS_ASSUME_NONNULL_BEGIN

/// 激励广告加载回调
@protocol KCOUnionRewardLoadDelegate <NSObject>

/// 加载完成
- (void)didLoadAd:(KCOUnionReward *)ad;
/// 加载失败
- (void)didLoadAdFail:(NSError *)error trackId:(nullable NSString *)trackId;

@end

NS_ASSUME_NONNULL_END
