//
//  KCOUnionInterstitialAd.h
//  AFNetworking
//
//  Created by WANGDONGLIANG on 2023/11/21.
//

#import <UIKit/UIKit.h>

#import "KCOUnionInterstitialAdDelegate.h"
#import "KCOUnionInterstitialLoadDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface KCOUnionInterstitialAd : NSObject

/// A delegate that will be notified about ad events.
@property (nonatomic, weak) id<KCOUnionInterstitialAdDelegate> delegate;
/// A delegate that will be notified about ad load events.
@property (nonatomic, weak) id<KCOUnionInterstitialLoadDelegate> loadDelegate;
/// Whether or not this ad is ready to be shown.
@property (nonatomic, assign, readonly, getter=isReady) BOOL ready;

/// Gets an instance of a Kwai interstitial ad.
/// - Parameter adUnitIdentifier: Interstitial Ad tag ID for which to get the ad instance.
///
/// - Return: An instance of a interstitial ad tied to the specified interstitial tag id.
+ (instancetype)generateWithAdTagId:(NSString *)tagId;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

/// Load ad, Initialize once, load multiple times
- (void)loadAd;
/// Show ad, [Must] in main thread
- (void)showAdWithViewController:(UIViewController *)viewController;
/// Kwai bid win
- (void)bidWin;
/// Kwai bid lose
- (void)bidLose;

///[optional] Set bid floor price
- (void)setupBidFloorPrice:(CGFloat)floorPrice;

///[optional] Currency specified using ISO-4217 alpha codes , default is USD
- (void)setupBidFloorCur:(NSString *)currency;

@end

NS_ASSUME_NONNULL_END
