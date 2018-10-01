/**
 * Code generated by Microsoft (R) AutoRest Code Generator.
 * Changes may cause incorrect behavior and will be lost if the code is
 * regenerated.
*/

#import <Foundation/Foundation.h>
#import "ImageTag.h"
#import "ImageMetadata.h"

/**
 * The results of a image tag operation, including any tags and image metadata.
*/
@interface TagResult : NSObject

    /**
     * A list of tags with confidence level.
    */
    // json value = "tags"
    @property NSArray<ImageTag*> * tags;

    /**
     * Id of the REST API request.
    */
    // json value = "requestId"
    @property NSString* requestId;

    /**
     * The metadata property.
    */
    // json value = "metadata"
    @property ImageMetadata* metadata;


@end
