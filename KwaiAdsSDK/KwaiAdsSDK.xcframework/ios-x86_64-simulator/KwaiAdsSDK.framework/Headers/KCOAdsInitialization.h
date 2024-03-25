//
//  KCOAdsInitialization.h
//  Pods
//
//  Created by WANGDONGLIANG on 2023/10/20.
//

#import <Foundation/Foundation.h>

@protocol KCODevicePermissionProtocol;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KCOMediationType) {
    /** 单独接入联盟SDK */
    KCOMediationTypeSDK = 0,
    /** Max Adapter方式接入 */
    KCOMediationTypeMaxAdapter = 1,
    /** TopOn方式接入 */
    KCOMediationTypeMaxTopOn = 2,
    /** TradPlus方式接入 */
    KCOMediationTypeMaxTradPlus = 3
};

typedef void (^KCOAdsUInitializationCompletionHandler)(NSError * _Nullable error);

/// SDK 初始化对象，用于构建 SDK 初始化参数
@interface KCOAdsInitOption : NSObject

/// 用于请求广告的 AppId
///
/// 请联系快手平台申请正式AppId【必填】
@property (nonatomic, copy) NSString *appId;
/// SDK 请求 token
///
/// 请联系快手平台申请正式token【必填】
@property (nonatomic, copy) NSString *token;
/// 媒体接入类型
///
/// 请填写媒体接入类型，非必填
@property (nonatomic, assign) KCOMediationType mediationType;
/// App 名称
///
/// 请填写您应用的名，非必填
@property (nonatomic, copy) NSString *appName;
/// App 域
///
/// App 定义的域，非必填
@property (nonatomic, copy) NSString *appDomain;
/// App 商店地址
///
/// 非必填
@property (nonatomic, copy) NSString *appStoreUrl;
/// 是否开启调试模式
///
/// 控制 SDK 日志输出，【默认NO】
@property (nonatomic, assign) BOOL debug;
/// 设备权限接口
///
/// 用于控制 SDK 内的设备权限获取
@property (nonatomic, strong) id<KCODevicePermissionProtocol> devicePermission;

@end

/// SDK 初始化类，用于进行广告 SDK 的初始化
@interface KCOAdsInitialization : NSObject

/// 构建一个 SDK 初始化单例
///
/// - Returns: 初始化单例
+ (instancetype)sharedInstance;

/// 开始进行 SDK 的初始化
/// - Parameters:
///   - option: 初始化参数
///   - completeHandler: 初始化结果回调
- (void)startOption:(KCOAdsInitOption *)option completionHandler:(KCOAdsUInitializationCompletionHandler)completeHandler;

@end

NS_ASSUME_NONNULL_END
