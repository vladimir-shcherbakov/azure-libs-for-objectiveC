/**
 * Code generated by Microsoft (R) AutoRest Code Generator.
 * Changes may cause incorrect behavior and will be lost if the code is
 * regenerated.
 */

#import "Gender.h"

/**
 * Defines values for Gender.
 */
@implementation Gender

    + (NSArray<Gender*>*) enumerate {
        NSArray *array = @[
            @"Male",
            @"Female"
        ];
        return array;
    }

    + (Gender *) fromString: (NSString *) string {
        return (Gender *) string;
    }

    + (NSString *) toStringValue: (Gender *) value {
        return (NSString *) value;
    }

    /** Enum value Male. */
    static Gender* _MALE = (Gender*)@"Male";

    + (Gender*) MALE {
        return _MALE;
    }

    /** Enum value Female. */
    static Gender* _FEMALE = (Gender*)@"Female";

    + (Gender*) FEMALE {
        return _FEMALE;
    }

@end
