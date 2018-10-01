/**
 * Code generated by Microsoft (R) AutoRest Code Generator.
 * Changes may cause incorrect behavior and will be lost if the code is
 * regenerated.
*/

#import <Foundation/Foundation.h>

/**
 * An object describing face rectangle.
*/
@interface FaceRectangle : NSObject

    /**
     * X-coordinate of the top left point of the face.
    */
    // json value = "left"
    @property int left;

    /**
     * Y-coordinate of the top left point of the face.
    */
    // json value = "top"
    @property int top;

    /**
     * Width measured from the top-left point of the face.
    */
    // json value = "width"
    @property int width;

    /**
     * Height measured from the top-left point of the face.
    */
    // json value = "height"
    @property int height;


@end
