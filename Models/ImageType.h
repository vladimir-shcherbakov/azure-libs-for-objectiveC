/**
 * Code generated by Microsoft (R) AutoRest Code Generator.
 * Changes may cause incorrect behavior and will be lost if the code is
 * regenerated.
*/

#import <Foundation/Foundation.h>

/**
 * An object providing possible image types and matching confidence levels.
*/
@interface ImageType : NSObject

    /**
     * Confidence level that the image is a clip art.
    */
    // json value = "clipArtType"
    @property int clipArtType;

    /**
     * Confidence level that the image is a line drawing.
    */
    // json value = "lineDrawingType"
    @property int lineDrawingType;


@end
