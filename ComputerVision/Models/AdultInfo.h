/**
 * Code generated by Microsoft (R) AutoRest Code Generator.
 * Changes may cause incorrect behavior and will be lost if the code is
 * regenerated.
*/

#import <Foundation/Foundation.h>

/**
 * An object describing whether the image contains adult-oriented content
 * and/or is racy.
*/
@interface AdultInfo : NSObject

    /**
     * A value indicating if the image contains adult-oriented content.
    */
    // json value = "isAdultContent"
    @property BOOL isAdultContent;

    /**
     * A value indicating if the image is race.
    */
    // json value = "isRacyContent"
    @property BOOL isRacyContent;

    /**
     * Score from 0 to 1 that indicates how much of adult content is within the
     * image.
    */
    // json value = "adultScore"
    @property double adultScore;

    /**
     * Score from 0 to 1 that indicates how suggestive is the image.
    */
    // json value = "racyScore"
    @property double racyScore;


@end
