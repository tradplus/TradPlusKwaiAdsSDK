//
//  KCOUnionInterstitialLoadDelegate.h
//  KwaiAdsUnionInterstitial
//
//  Created by simon on 2023/12/1.
//

#import <Foundation/Foundation.h>

@class KCOUnionInterstitial;

NS_ASSUME_NONNULL_BEGIN

@protocol KCOUnionInterstitialLoadDelegate <NSObject>

- (void)didLoadAd:(KCOUnionInterstitial *)ad;
/// 加载失败
- (void)didLoadAdFail:(NSError *)error trackId:(nullable NSString *)trackId;

@end

NS_ASSUME_NONNULL_END
