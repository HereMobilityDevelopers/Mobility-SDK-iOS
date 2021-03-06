/***************************************************************
 * Copyright © 2017 HERE Global B.V. All rights reserved. *
 **************************************************************/

#import <Foundation/Foundation.h>

#import <HereSDKDemandKit/HereSDKDemandRoute.h>
#import <HereSDKDemandKit/HereSDKDemandPriceEstimate.h>
#import <HereSDKDemandKit/HereSDKDemandPaymentOption.h>

NS_ASSUME_NONNULL_BEGIN

/**
 A class representing a ride offer, returned in response to requestRide.
 */
@interface HereSDKDemandRideOffer : NSObject

/** The ride route */
@property (nonatomic, readonly) HereSDKDemandRoute *route;

/** Time estimate for pick up */
@property (nonatomic, readonly, nullable) NSDate *estimatedPickupTime DEPRECATED_MSG_ATTRIBUTE("This property is deprecated, please use estimatedPickupTimeSeconds instead to avoid timezone differences issues.");

/** Time estimate for drop off */
@property (nonatomic, readonly, nullable) NSDate *estimatedDropoffTime DEPRECATED_MSG_ATTRIBUTE("This property is deprecated, please use estimatedRideDurationSeconds instead to avoid timezone differences issues.");

/** Price estimate for the ride */
@property (nonatomic, readonly, nullable) HereSDKDemandPriceEstimate *estimatedPrice;

/** The time the offer will expire */
@property (nonatomic, readonly, nullable) NSNumber *duration DEPRECATED_MSG_ATTRIBUTE("This property is deprecated, please use estimatedRideDurationSeconds instead.");

/** Pickup time estimate sent by the supplier (number of second from the time of the offer to the pickup time) */
@property (nonatomic, readonly, nullable) NSNumber * estimatedPickupTimeSeconds;

/** This is the number of seconds between pickup to drop-off. 
 It does not include the time it takes for the driver to arrive at the pickup location. 
 */
@property (nonatomic, readonly, nullable) NSNumber * estimatedRideDurationSeconds;

/** Supported payment options. */
@property (nonatomic, readonly) HereSDKDemandPaymentOption paymentOptions;

/// :nodoc:
+ (instancetype)new NS_UNAVAILABLE;
/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
