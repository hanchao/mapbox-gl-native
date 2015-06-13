#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString * const MGLErrorDomain;

/** The mode used to track the user location on the map. */
typedef NS_ENUM(NSUInteger, MGLUserTrackingMode)
{
    /** The map does not follow the user location. */
    MGLUserTrackingModeNone              = 0,
    /** The map follows the user location. */
    MGLUserTrackingModeFollow,
    /** The map follows the user location and rotates when the heading changes. */
    MGLUserTrackingModeFollowWithHeading
};

NS_ASSUME_NONNULL_END

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wvariadic-macros"
    #if __has_feature(objc_generics)
        /** Inserts a type specifier for a pointer to a lightweight generic with the given collection and object classes. Use a `*` for any non-`id` object classes but no `*` for the collection class. */
        #define MGL_COLLECTION(CollectionClass, ObjectClass...) CollectionClass <ObjectClass>
    #else
        #define MGL_COLLECTION(CollectionClass, ObjectClass...) CollectionClass
    #endif
#pragma clang diagnostic pop
