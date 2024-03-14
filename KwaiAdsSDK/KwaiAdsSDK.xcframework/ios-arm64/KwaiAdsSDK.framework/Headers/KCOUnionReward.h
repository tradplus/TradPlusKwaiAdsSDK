//
//  KCOUnionReward.h
//  KwaiAdsUnionReward
//
//  Created by simon on 2023/11/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 激励广告数据
@interface KCOUnionReward : NSObject

/// 当前广告链路追踪 id
@property (nonatomic, copy, readonly) NSString *adTrackId;
/// 当前广告 tag id
@property (nonatomic, copy, readonly) NSString *adTagId;
/// 当前广告的价格，cpm
@property (nonatomic, copy, readonly) NSString *price;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
