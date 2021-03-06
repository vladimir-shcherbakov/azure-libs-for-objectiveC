/**
 * Code generated by Microsoft (R) AutoRest Code Generator.
 * Changes may cause incorrect behavior and will be lost if the code is
 * regenerated.
 */

#import "Details.h"

/**
 * Defines values for Details.
 */
@implementation Details

    + (NSArray<Details*>*) enumerate {
        NSArray *array = @[
            @"Celebrities",
            @"Landmarks"
        ];
        return array;
    }

    + (Details *) fromString: (NSString *) string {
        return (Details *) string;
    }

    + (NSString *) toStringValue: (Details *) value {
        return (NSString *) value;
    }

    /** Enum value Celebrities. */
    static Details* _CELEBRITIES = (Details*)@"Celebrities";

    + (Details*) CELEBRITIES {
        return _CELEBRITIES;
    }

    /** Enum value Landmarks. */
    static Details* _LANDMARKS = (Details*)@"Landmarks";

    + (Details*) LANDMARKS {
        return _LANDMARKS;
    }

@end
