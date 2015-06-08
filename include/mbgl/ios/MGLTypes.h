#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

extern NSString * const MGLErrorDomain;

/** The mode used to track the user location on the map. */
typedef NS_ENUM(NSUInteger, MGLUserTrackingMode) {
    /** The map does not follow the user location. */
    MGLUserTrackingModeNone              = 0,
    /** The map follows the user location. */
    MGLUserTrackingModeFollow,
    /** The map follows the user location and rotates when the heading changes. */
    MGLUserTrackingModeFollowWithHeading
};

typedef struct {
    CLLocationCoordinate2D sw;
    CLLocationCoordinate2D ne;
} MGLCoordinateBounds;
