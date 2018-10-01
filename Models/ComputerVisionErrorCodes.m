/**
 * Code generated by Microsoft (R) AutoRest Code Generator.
 * Changes may cause incorrect behavior and will be lost if the code is
 * regenerated.
 */

#import "ComputerVisionErrorCodes.h"

/**
 * Defines values for ComputerVisionErrorCodes.
 */
@implementation ComputerVisionErrorCodes

    + (NSArray<ComputerVisionErrorCodes*>*) enumerate {
        NSArray *array = @[
            @"InvalidImageUrl",
            @"InvalidImageFormat",
            @"InvalidImageSize",
            @"NotSupportedVisualFeature",
            @"NotSupportedImage",
            @"InvalidDetails",
            @"NotSupportedLanguage",
            @"BadArgument",
            @"FailedToProcess",
            @"Timeout",
            @"InternalServerError",
            @"Unspecified",
            @"StorageException"
        ];
        return array;
    }

    + (ComputerVisionErrorCodes *) fromString: (NSString *) string {
        return (ComputerVisionErrorCodes *) string;
    }

    + (NSString *) toStringValue: (ComputerVisionErrorCodes *) value {
        return (NSString *) value;
    }

    /** Enum value InvalidImageUrl. */
    static ComputerVisionErrorCodes* _INVALID_IMAGE_URL = (ComputerVisionErrorCodes*)@"InvalidImageUrl";

    + (ComputerVisionErrorCodes*) INVALID_IMAGE_URL {
        return _INVALID_IMAGE_URL;
    }

    /** Enum value InvalidImageFormat. */
    static ComputerVisionErrorCodes* _INVALID_IMAGE_FORMAT = (ComputerVisionErrorCodes*)@"InvalidImageFormat";

    + (ComputerVisionErrorCodes*) INVALID_IMAGE_FORMAT {
        return _INVALID_IMAGE_FORMAT;
    }

    /** Enum value InvalidImageSize. */
    static ComputerVisionErrorCodes* _INVALID_IMAGE_SIZE = (ComputerVisionErrorCodes*)@"InvalidImageSize";

    + (ComputerVisionErrorCodes*) INVALID_IMAGE_SIZE {
        return _INVALID_IMAGE_SIZE;
    }

    /** Enum value NotSupportedVisualFeature. */
    static ComputerVisionErrorCodes* _NOT_SUPPORTED_VISUAL_FEATURE = (ComputerVisionErrorCodes*)@"NotSupportedVisualFeature";

    + (ComputerVisionErrorCodes*) NOT_SUPPORTED_VISUAL_FEATURE {
        return _NOT_SUPPORTED_VISUAL_FEATURE;
    }

    /** Enum value NotSupportedImage. */
    static ComputerVisionErrorCodes* _NOT_SUPPORTED_IMAGE = (ComputerVisionErrorCodes*)@"NotSupportedImage";

    + (ComputerVisionErrorCodes*) NOT_SUPPORTED_IMAGE {
        return _NOT_SUPPORTED_IMAGE;
    }

    /** Enum value InvalidDetails. */
    static ComputerVisionErrorCodes* _INVALID_DETAILS = (ComputerVisionErrorCodes*)@"InvalidDetails";

    + (ComputerVisionErrorCodes*) INVALID_DETAILS {
        return _INVALID_DETAILS;
    }

    /** Enum value NotSupportedLanguage. */
    static ComputerVisionErrorCodes* _NOT_SUPPORTED_LANGUAGE = (ComputerVisionErrorCodes*)@"NotSupportedLanguage";

    + (ComputerVisionErrorCodes*) NOT_SUPPORTED_LANGUAGE {
        return _NOT_SUPPORTED_LANGUAGE;
    }

    /** Enum value BadArgument. */
    static ComputerVisionErrorCodes* _BAD_ARGUMENT = (ComputerVisionErrorCodes*)@"BadArgument";

    + (ComputerVisionErrorCodes*) BAD_ARGUMENT {
        return _BAD_ARGUMENT;
    }

    /** Enum value FailedToProcess. */
    static ComputerVisionErrorCodes* _FAILED_TO_PROCESS = (ComputerVisionErrorCodes*)@"FailedToProcess";

    + (ComputerVisionErrorCodes*) FAILED_TO_PROCESS {
        return _FAILED_TO_PROCESS;
    }

    /** Enum value Timeout. */
    static ComputerVisionErrorCodes* _TIMEOUT = (ComputerVisionErrorCodes*)@"Timeout";

    + (ComputerVisionErrorCodes*) TIMEOUT {
        return _TIMEOUT;
    }

    /** Enum value InternalServerError. */
    static ComputerVisionErrorCodes* _INTERNAL_SERVER_ERROR = (ComputerVisionErrorCodes*)@"InternalServerError";

    + (ComputerVisionErrorCodes*) INTERNAL_SERVER_ERROR {
        return _INTERNAL_SERVER_ERROR;
    }

    /** Enum value Unspecified. */
    static ComputerVisionErrorCodes* _UNSPECIFIED = (ComputerVisionErrorCodes*)@"Unspecified";

    + (ComputerVisionErrorCodes*) UNSPECIFIED {
        return _UNSPECIFIED;
    }

    /** Enum value StorageException. */
    static ComputerVisionErrorCodes* _STORAGE_EXCEPTION = (ComputerVisionErrorCodes*)@"StorageException";

    + (ComputerVisionErrorCodes*) STORAGE_EXCEPTION {
        return _STORAGE_EXCEPTION;
    }

@end
