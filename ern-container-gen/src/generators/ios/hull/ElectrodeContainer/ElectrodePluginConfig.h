//
//  ElectrodePluginConfig.h
//  ElectrodeContainer
//
//  Created by Claire Weijie Li on 2/20/18.
//  Copyright © 2018 Walmart. All rights reserved.
//

#ifndef ElectrodePluginConfig_h
#define ElectrodePluginConfig_h


#endif /* ElectrodePluginConfig_h */
@protocol RCTBridgeDelegate;
////////////////////////////////////////////////////////////////////////////////
#pragma mark - ElectrodePluginConfigurator
/**
 Used as configuration for the start up of the ElectrodeReactNative system. Build
 a class that adheres to this
 */
@protocol ElectrodePluginConfig <NSObject>
-(void)setupConfigWithDelegate: (id<RCTBridgeDelegate>) delegate;

@optional
// Optional Instance Methods
- (instancetype)initWithIsDebugEnabled: (BOOL) enabled;
/**
 Builds an instance of the configurator based off of a plist of configuration.
 
 @param plist A string of the name of the plist with configuration in it.
 @return instancetype of the class that adheres to the protocol.
 */
- (instancetype)initWithPlist:(NSString *)plist;
- (instancetype)initWithDeploymentKey: (NSString *)deploymentKey;

// Optional Properties
@property (nonatomic, copy, readonly) NSString *codePushWithServerURLString;
@property (nonatomic, copy, readonly) NSString *codePushWithIDString;

@end
