 /***************************************************************
 * Copyright © 2017 HERE Global B.V. All rights reserved. *
 **************************************************************/

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 A class containing driver details.
 */
@interface HereSDKDemandDriver : NSObject

/** Driver's name */
@property (nonatomic, readonly) NSString *name;

/** Driver's phone number */
@property (nonatomic, readonly) NSString *phoneNumber;

/** Driver's photo URL */
@property (nonatomic, readonly, nullable) NSString *photoURL;

/** Driver's driving license ID */
@property (nonatomic, readonly, nullable) NSString *drivingLicenseId;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;
/// :nodoc:
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
