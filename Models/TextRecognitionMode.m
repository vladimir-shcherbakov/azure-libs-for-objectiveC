/**
 * Code generated by Microsoft (R) AutoRest Code Generator.
 * Changes may cause incorrect behavior and will be lost if the code is
 * regenerated.
 */

#import "TextRecognitionMode.h"

/**
 * Defines values for TextRecognitionMode.
 */
@implementation TextRecognitionMode

    + (NSArray<TextRecognitionMode*>*) enumerate {
        NSArray *array = @[
            @"Handwritten",
            @"Printed"
        ];
        return array;
    }

    + (TextRecognitionMode *) fromString: (NSString *) string {
        return (TextRecognitionMode *) string;
    }

    + (NSString *) toStringValue: (TextRecognitionMode *) value {
        return (NSString *) value;
    }

    /** Enum value Handwritten. */
    static TextRecognitionMode* _HANDWRITTEN = (TextRecognitionMode*)@"Handwritten";

    + (TextRecognitionMode*) HANDWRITTEN {
        return _HANDWRITTEN;
    }

    /** Enum value Printed. */
    static TextRecognitionMode* _PRINTED = (TextRecognitionMode*)@"Printed";

    + (TextRecognitionMode*) PRINTED {
        return _PRINTED;
    }

@end
