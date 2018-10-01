/**
 * Code generated by Microsoft (R) AutoRest Code Generator.
 * Changes may cause incorrect behavior and will be lost if the code is
 * regenerated.
*/

#import <Foundation/Foundation.h>
#import "ModelDescription.h"

/**
 * Result of the List Domain Models operation.
*/
@interface ListModelsResult : NSObject

    /**
     * An array of supported models.
    */
    // json value = "models", access = JsonProperty.Access.WRITE_ONLY
    @property NSArray<ModelDescription*> * modelsProperty;


@end