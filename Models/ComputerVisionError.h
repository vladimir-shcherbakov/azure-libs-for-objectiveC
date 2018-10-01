/**
 * Code generated by Microsoft (R) AutoRest Code Generator.
 * Changes may cause incorrect behavior and will be lost if the code is
 * regenerated.
*/

#import <Foundation/Foundation.h>
#import "ComputerVisionErrorCodes.h"

/**
 * The ComputerVisionError model.
*/
@interface ComputerVisionError : NSObject

    /**
     * The error code. Possible values include: 'InvalidImageUrl',
     * 'InvalidImageFormat', 'InvalidImageSize', 'NotSupportedVisualFeature',
     * 'NotSupportedImage', 'InvalidDetails', 'NotSupportedLanguage',
     * 'BadArgument', 'FailedToProcess', 'Timeout', 'InternalServerError',
     * 'Unspecified', 'StorageException'.
    */
    // json value = "code", required = true
    @property ComputerVisionErrorCodes* code;

    /**
     * A message explaining the error reported by the service.
    */
    // json value = "message", required = true
    @property NSString* message;

    /**
     * A unique request identifier.
    */
    // json value = "requestId"
    @property NSString* requestId;

    /**
    * Creates an instance of ComputerVisionError class.
    * @param code the error code. Possible values include: 'InvalidImageUrl', 'InvalidImageFormat', 'InvalidImageSize', 'NotSupportedVisualFeature', 'NotSupportedImage', 'InvalidDetails', 'NotSupportedLanguage', 'BadArgument', 'FailedToProcess', 'Timeout', 'InternalServerError', 'Unspecified', 'StorageException'.
    * @param message a message explaining the error reported by the service.
    */
    - (id) initCode: (ComputerVisionErrorCodes*) code message: (NSString*) message;


@end