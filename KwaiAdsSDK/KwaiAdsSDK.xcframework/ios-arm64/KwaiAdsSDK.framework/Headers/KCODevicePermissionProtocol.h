//
//  KCODevicePermissionProtocol.h
//  KwaiAdsInitialization
//
//  Created by simon on 2023/12/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 设备权限协议
///
/// 若需要对 SDK 的权限进行管控，需要遵循该协议创建一个权限管理类，并通过`KCOAdsInitialization`初始化传入 SDK。
///
/// 所有的权限属性，当返回`true`时，SDK 会继续获取对应权限。当返回`false`时，SDK 将停止获取对应权限
@protocol KCODevicePermissionProtocol <NSObject>

@optional
/// IDFA 权限
- (BOOL)advertisingIdentifierPermission;

@end

NS_ASSUME_NONNULL_END
