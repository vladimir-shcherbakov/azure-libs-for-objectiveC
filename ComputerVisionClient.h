/**
 * Code generated by Microsoft (R) AutoRest Code Generator.
 * Changes may cause incorrect behavior and will be lost if the code is
 * regenerated.
 */


#import "Models/Details.h"
#import "Models/DomainModelResults.h"
#import "Models/ImageAnalysis.h"
#import "Models/ImageDescription.h"
#import "Models/ListModelsResult.h"
#import "Models/OcrLanguages.h"
#import "Models/OcrResult.h"
#import "Models/RecognizeTextHeaders.h"
#import "Models/RecognizeTextInStreamHeaders.h"
#import "Models/TagResult.h"
#import "Models/TextOperationResult.h"
#import "Models/TextRecognitionMode.h"
#import "Models/VisualFeatureTypes.h"

/**
 * The interface for ComputerVisionClient class.
 */
@protocol ComputerVisionClientProtocol

    /**
     * This operation returns the list of domain-specific models that are supported by the Computer Vision API.  Currently, the API only supports one domain-specific model: a celebrity recognizer. A successful response will be returned in JSON.  If the request failed, the response will contain an error code and a message to help understand what went wrong.
     *
     * @param callback A block where ListModelsResult* is a result object and NSError* is nil if the operation is successful
     */
    - (void) listModelsWithCallback : (void(^)(ListModelsResult*, NSError*)) callback;

    /**
     * This operation extracts a rich set of visual features based on the image content. Two input methods are supported -- (1) Uploading an image or (2) specifying an image URL.  Within your request, there is an optional parameter to allow you to choose which features to return.  By default, image categories are returned in the response.
     *
     * @param url Publicly reachable URL of an image
     * @param callback A block where ImageAnalysis* is a result object and NSError* is nil if the operation is successful
     * @throws IllegalArgumentException thrown if parameters fail the validation
     */
    - (void) analyzeImageWithUrl : (NSString*) url withCallback : (void(^)(ImageAnalysis*, NSError*)) callback;

    /**
     * This operation extracts a rich set of visual features based on the image content. Two input methods are supported -- (1) Uploading an image or (2) specifying an image URL.  Within your request, there is an optional parameter to allow you to choose which features to return.  By default, image categories are returned in the response.
     *
     * @param url Publicly reachable URL of an image
     * @param visualFeatures A string indicating what visual feature types to return. Multiple values should be comma-separated. Valid visual feature types include:Categories - categorizes image content according to a taxonomy defined in documentation. Tags - tags the image with a detailed list of words related to the image content. Description - describes the image content with a complete English sentence. Faces - detects if faces are present. If present, generate coordinates, gender and age. ImageType - detects if image is clipart or a line drawing. Color - determines the accent color, dominant color, and whether an image is black&amp;white.Adult - detects if the image is pornographic in nature (depicts nudity or a sex act).  Sexually suggestive content is also detected.
     * @param details A string indicating which domain-specific details to return. Multiple values should be comma-separated. Valid visual feature types include:Celebrities - identifies celebrities if detected in the image.
     * @param language The desired language for output generation. If this parameter is not specified, the default value is &amp;quot;en&amp;quot;.Supported languages:en - English, Default. es - Spanish, ja - Japanese, pt - Portuguese, zh - Simplified Chinese. Possible values include: 'en', 'es', 'ja', 'pt', 'zh'
     * @param callback A block where ImageAnalysis* is a result object and NSError* is nil if the operation is successful
     */
    - (void) analyzeImageWithUrl : (NSString*) url withVisualFeatures : (NSArray<VisualFeatureTypes*> *) visualFeatures withDetails : (NSArray<Details*> *) details withLanguage : (NSString*) language withCallback : (void(^)(ImageAnalysis*, NSError*)) callback;

    /**
     * This operation generates a thumbnail image with the user-specified width and height. By default, the service analyzes the image, identifies the region of interest (ROI), and generates smart cropping coordinates based on the ROI. Smart cropping helps when you specify an aspect ratio that differs from that of the input image. A successful response contains the thumbnail image binary. If the request failed, the response contains an error code and a message to help determine what went wrong.
     *
     * @param width Width of the thumbnail. It must be between 1 and 1024. Recommended minimum of 50.
     * @param height Height of the thumbnail. It must be between 1 and 1024. Recommended minimum of 50.
     * @param url Publicly reachable URL of an image
     * @param callback A block where NSInputStream* is a result object and NSError* is nil if the operation is successful
     * @throws IllegalArgumentException thrown if parameters fail the validation
     */
    - (void) generateThumbnailWithWidth : (int) width withHeight : (int) height withUrl : (NSString*) url withCallback : (void(^)(NSInputStream*, NSError*)) callback;

    /**
     * This operation generates a thumbnail image with the user-specified width and height. By default, the service analyzes the image, identifies the region of interest (ROI), and generates smart cropping coordinates based on the ROI. Smart cropping helps when you specify an aspect ratio that differs from that of the input image. A successful response contains the thumbnail image binary. If the request failed, the response contains an error code and a message to help determine what went wrong.
     *
     * @param width Width of the thumbnail. It must be between 1 and 1024. Recommended minimum of 50.
     * @param height Height of the thumbnail. It must be between 1 and 1024. Recommended minimum of 50.
     * @param url Publicly reachable URL of an image
     * @param smartCropping Boolean flag for enabling smart cropping.
     * @param callback A block where NSInputStream* is a result object and NSError* is nil if the operation is successful
     */
    - (void) generateThumbnailWithWidth : (int) width withHeight : (int) height withUrl : (NSString*) url withSmartCropping : (NSNumber*) smartCropping withCallback : (void(^)(NSInputStream*, NSError*)) callback;

    /**
     * Optical Character Recognition (OCR) detects printed text in an image and extracts the recognized characters into a machine-usable character stream.   Upon success, the OCR results will be returned. Upon failure, the error code together with an error message will be returned. The error code can be one of InvalidImageUrl, InvalidImageFormat, InvalidImageSize, NotSupportedImage,  NotSupportedLanguage, or InternalServerError.
     *
     * @param detectOrientation Whether detect the text orientation in the image. With detectOrientation=true the OCR service tries to detect the image orientation and correct it before further processing (e.g. if it's upside-down).
     * @param url Publicly reachable URL of an image
     * @param callback A block where OcrResult* is a result object and NSError* is nil if the operation is successful
     * @throws IllegalArgumentException thrown if parameters fail the validation
     */
    - (void) recognizePrintedTextWithDetectOrientation : (BOOL) detectOrientation withUrl : (NSString*) url withCallback : (void(^)(OcrResult*, NSError*)) callback;

    /**
     * Optical Character Recognition (OCR) detects printed text in an image and extracts the recognized characters into a machine-usable character stream.   Upon success, the OCR results will be returned. Upon failure, the error code together with an error message will be returned. The error code can be one of InvalidImageUrl, InvalidImageFormat, InvalidImageSize, NotSupportedImage,  NotSupportedLanguage, or InternalServerError.
     *
     * @param detectOrientation Whether detect the text orientation in the image. With detectOrientation=true the OCR service tries to detect the image orientation and correct it before further processing (e.g. if it's upside-down).
     * @param url Publicly reachable URL of an image
     * @param language The BCP-47 language code of the text to be detected in the image. The default value is 'unk'. Possible values include: 'unk', 'zh-Hans', 'zh-Hant', 'cs', 'da', 'nl', 'en', 'fi', 'fr', 'de', 'el', 'hu', 'it', 'ja', 'ko', 'nb', 'pl', 'pt', 'ru', 'es', 'sv', 'tr', 'ar', 'ro', 'sr-Cyrl', 'sr-Latn', 'sk'
     * @param callback A block where OcrResult* is a result object and NSError* is nil if the operation is successful
     */
    - (void) recognizePrintedTextWithDetectOrientation : (BOOL) detectOrientation withUrl : (NSString*) url withLanguage : (OcrLanguages*) language withCallback : (void(^)(OcrResult*, NSError*)) callback;

    /**
     * This operation generates a description of an image in human readable language with complete sentences.  The description is based on a collection of content tags, which are also returned by the operation. More than one description can be generated for each image.  Descriptions are ordered by their confidence score. All descriptions are in English. Two input methods are supported -- (1) Uploading an image or (2) specifying an image URL.A successful response will be returned in JSON.  If the request failed, the response will contain an error code and a message to help understand what went wrong.
     *
     * @param url Publicly reachable URL of an image
     * @param callback A block where ImageDescription* is a result object and NSError* is nil if the operation is successful
     * @throws IllegalArgumentException thrown if parameters fail the validation
     */
    - (void) describeImageWithUrl : (NSString*) url withCallback : (void(^)(ImageDescription*, NSError*)) callback;

    /**
     * This operation generates a description of an image in human readable language with complete sentences.  The description is based on a collection of content tags, which are also returned by the operation. More than one description can be generated for each image.  Descriptions are ordered by their confidence score. All descriptions are in English. Two input methods are supported -- (1) Uploading an image or (2) specifying an image URL.A successful response will be returned in JSON.  If the request failed, the response will contain an error code and a message to help understand what went wrong.
     *
     * @param url Publicly reachable URL of an image
     * @param maxCandidates Maximum number of candidate descriptions to be returned.  The default is 1.
     * @param language The desired language for output generation. If this parameter is not specified, the default value is &amp;quot;en&amp;quot;.Supported languages:en - English, Default. es - Spanish, ja - Japanese, pt - Portuguese, zh - Simplified Chinese. Possible values include: 'en', 'es', 'ja', 'pt', 'zh'
     * @param callback A block where ImageDescription* is a result object and NSError* is nil if the operation is successful
     */
    - (void) describeImageWithUrl : (NSString*) url withMaxCandidates : (NSNumber*) maxCandidates withLanguage : (NSString*) language withCallback : (void(^)(ImageDescription*, NSError*)) callback;

    /**
     * This operation generates a list of words, or tags, that are relevant to the content of the supplied image. The Computer Vision API can return tags based on objects, living beings, scenery or actions found in images. Unlike categories, tags are not organized according to a hierarchical classification system, but correspond to image content. Tags may contain hints to avoid ambiguity or provide context, for example the tag 'cello' may be accompanied by the hint 'musical instrument'. All tags are in English.
     *
     * @param url Publicly reachable URL of an image
     * @param callback A block where TagResult* is a result object and NSError* is nil if the operation is successful
     * @throws IllegalArgumentException thrown if parameters fail the validation
     */
    - (void) tagImageWithUrl : (NSString*) url withCallback : (void(^)(TagResult*, NSError*)) callback;

    /**
     * This operation generates a list of words, or tags, that are relevant to the content of the supplied image. The Computer Vision API can return tags based on objects, living beings, scenery or actions found in images. Unlike categories, tags are not organized according to a hierarchical classification system, but correspond to image content. Tags may contain hints to avoid ambiguity or provide context, for example the tag 'cello' may be accompanied by the hint 'musical instrument'. All tags are in English.
     *
     * @param url Publicly reachable URL of an image
     * @param language The desired language for output generation. If this parameter is not specified, the default value is &amp;quot;en&amp;quot;.Supported languages:en - English, Default. es - Spanish, ja - Japanese, pt - Portuguese, zh - Simplified Chinese. Possible values include: 'en', 'es', 'ja', 'pt', 'zh'
     * @param callback A block where TagResult* is a result object and NSError* is nil if the operation is successful
     */
    - (void) tagImageWithUrl : (NSString*) url withLanguage : (NSString*) language withCallback : (void(^)(TagResult*, NSError*)) callback;

    /**
     * This operation recognizes content within an image by applying a domain-specific model.  The list of domain-specific models that are supported by the Computer Vision API can be retrieved using the /models GET request.  Currently, the API only provides a single domain-specific model: celebrities. Two input methods are supported -- (1) Uploading an image or (2) specifying an image URL. A successful response will be returned in JSON.  If the request failed, the response will contain an error code and a message to help understand what went wrong.
     *
     * @param model The domain-specific content to recognize.
     * @param url Publicly reachable URL of an image
     * @param callback A block where DomainModelResults* is a result object and NSError* is nil if the operation is successful
     * @throws IllegalArgumentException thrown if parameters fail the validation
     */
    - (void) analyzeImageByDomainWithModel : (NSString*) model withUrl : (NSString*) url withCallback : (void(^)(DomainModelResults*, NSError*)) callback;

    /**
     * This operation recognizes content within an image by applying a domain-specific model.  The list of domain-specific models that are supported by the Computer Vision API can be retrieved using the /models GET request.  Currently, the API only provides a single domain-specific model: celebrities. Two input methods are supported -- (1) Uploading an image or (2) specifying an image URL. A successful response will be returned in JSON.  If the request failed, the response will contain an error code and a message to help understand what went wrong.
     *
     * @param model The domain-specific content to recognize.
     * @param url Publicly reachable URL of an image
     * @param language The desired language for output generation. If this parameter is not specified, the default value is &amp;quot;en&amp;quot;.Supported languages:en - English, Default. es - Spanish, ja - Japanese, pt - Portuguese, zh - Simplified Chinese. Possible values include: 'en', 'es', 'ja', 'pt', 'zh'
     * @param callback A block where DomainModelResults* is a result object and NSError* is nil if the operation is successful
     */
    - (void) analyzeImageByDomainWithModel : (NSString*) model withUrl : (NSString*) url withLanguage : (NSString*) language withCallback : (void(^)(DomainModelResults*, NSError*)) callback;

    /**
     * Recognize Text operation. When you use the Recognize Text interface, the response contains a field called 'Operation-Location'. The 'Operation-Location' field contains the URL that you must use for your Get Recognize Text Operation Result operation.
     *
     * @param mode Type of text to recognize. Possible values include: 'Handwritten', 'Printed'
     * @param url Publicly reachable URL of an image
     * @param callback A block where NSError* is nil if the operation is successful
     */
    - (void) recognizeTextWithMode : (TextRecognitionMode*) mode withUrl : (NSString*) url withCallback : (void(^)(NSError*)) callback;

    /**
     * This interface is used for getting text operation result. The URL to this interface should be retrieved from 'Operation-Location' field returned from Recognize Text interface.
     *
     * @param operationId Id of the text operation returned in the response of the 'Recognize Text'
     * @param callback A block where TextOperationResult* is a result object and NSError* is nil if the operation is successful
     */
    - (void) getTextOperationResultWithOperationId : (NSString*) operationId withCallback : (void(^)(TextOperationResult*, NSError*)) callback;

    /**
     * This operation extracts a rich set of visual features based on the image content.
     *
     * @param image An image stream.
     * @param callback A block where ImageAnalysis* is a result object and NSError* is nil if the operation is successful
     * @throws IllegalArgumentException thrown if parameters fail the validation
     */
    - (void) analyzeImageInStreamWithImage : (NSData*) image withCallback : (void(^)(ImageAnalysis*, NSError*)) callback;

    /**
     * This operation extracts a rich set of visual features based on the image content.
     *
     * @param image An image stream.
     * @param visualFeatures A string indicating what visual feature types to return. Multiple values should be comma-separated. Valid visual feature types include:Categories - categorizes image content according to a taxonomy defined in documentation. Tags - tags the image with a detailed list of words related to the image content. Description - describes the image content with a complete English sentence. Faces - detects if faces are present. If present, generate coordinates, gender and age. ImageType - detects if image is clipart or a line drawing. Color - determines the accent color, dominant color, and whether an image is black&amp;white.Adult - detects if the image is pornographic in nature (depicts nudity or a sex act).  Sexually suggestive content is also detected.
     * @param details A string indicating which domain-specific details to return. Multiple values should be comma-separated. Valid visual feature types include:Celebrities - identifies celebrities if detected in the image.
     * @param language The desired language for output generation. If this parameter is not specified, the default value is &amp;quot;en&amp;quot;.Supported languages:en - English, Default. es - Spanish, ja - Japanese, pt - Portuguese, zh - Simplified Chinese. Possible values include: 'en', 'es', 'ja', 'pt', 'zh'
     * @param callback A block where ImageAnalysis* is a result object and NSError* is nil if the operation is successful
     */
    - (void) analyzeImageInStreamWithImage : (NSData*) image withVisualFeatures : (NSArray<VisualFeatureTypes*> *) visualFeatures withDetails : (NSArray<Details*> *) details withLanguage : (NSString*) language withCallback : (void(^)(ImageAnalysis*, NSError*)) callback;

    /**
     * This operation generates a thumbnail image with the user-specified width and height. By default, the service analyzes the image, identifies the region of interest (ROI), and generates smart cropping coordinates based on the ROI. Smart cropping helps when you specify an aspect ratio that differs from that of the input image. A successful response contains the thumbnail image binary. If the request failed, the response contains an error code and a message to help determine what went wrong.
     *
     * @param width Width of the thumbnail. It must be between 1 and 1024. Recommended minimum of 50.
     * @param height Height of the thumbnail. It must be between 1 and 1024. Recommended minimum of 50.
     * @param image An image stream.
     * @param callback A block where NSInputStream* is a result object and NSError* is nil if the operation is successful
     * @throws IllegalArgumentException thrown if parameters fail the validation
     */
    - (void) generateThumbnailInStreamWithWidth : (int) width withHeight : (int) height withImage : (NSData*) image withCallback : (void(^)(NSInputStream*, NSError*)) callback;

    /**
     * This operation generates a thumbnail image with the user-specified width and height. By default, the service analyzes the image, identifies the region of interest (ROI), and generates smart cropping coordinates based on the ROI. Smart cropping helps when you specify an aspect ratio that differs from that of the input image. A successful response contains the thumbnail image binary. If the request failed, the response contains an error code and a message to help determine what went wrong.
     *
     * @param width Width of the thumbnail. It must be between 1 and 1024. Recommended minimum of 50.
     * @param height Height of the thumbnail. It must be between 1 and 1024. Recommended minimum of 50.
     * @param image An image stream.
     * @param smartCropping Boolean flag for enabling smart cropping.
     * @param callback A block where NSInputStream* is a result object and NSError* is nil if the operation is successful
     */
    - (void) generateThumbnailInStreamWithWidth : (int) width withHeight : (int) height withImage : (NSData*) image withSmartCropping : (NSNumber*) smartCropping withCallback : (void(^)(NSInputStream*, NSError*)) callback;

    /**
     * Optical Character Recognition (OCR) detects printed text in an image and extracts the recognized characters into a machine-usable character stream.   Upon success, the OCR results will be returned. Upon failure, the error code together with an error message will be returned. The error code can be one of InvalidImageUrl, InvalidImageFormat, InvalidImageSize, NotSupportedImage,  NotSupportedLanguage, or InternalServerError.
     *
     * @param detectOrientation Whether detect the text orientation in the image. With detectOrientation=true the OCR service tries to detect the image orientation and correct it before further processing (e.g. if it's upside-down).
     * @param image An image stream.
     * @param callback A block where OcrResult* is a result object and NSError* is nil if the operation is successful
     * @throws IllegalArgumentException thrown if parameters fail the validation
     */
    - (void) recognizePrintedTextInStreamWithDetectOrientation : (BOOL) detectOrientation withImage : (NSData*) image withCallback : (void(^)(OcrResult*, NSError*)) callback;

    /**
     * Optical Character Recognition (OCR) detects printed text in an image and extracts the recognized characters into a machine-usable character stream.   Upon success, the OCR results will be returned. Upon failure, the error code together with an error message will be returned. The error code can be one of InvalidImageUrl, InvalidImageFormat, InvalidImageSize, NotSupportedImage,  NotSupportedLanguage, or InternalServerError.
     *
     * @param detectOrientation Whether detect the text orientation in the image. With detectOrientation=true the OCR service tries to detect the image orientation and correct it before further processing (e.g. if it's upside-down).
     * @param image An image stream.
     * @param language The BCP-47 language code of the text to be detected in the image. The default value is 'unk'. Possible values include: 'unk', 'zh-Hans', 'zh-Hant', 'cs', 'da', 'nl', 'en', 'fi', 'fr', 'de', 'el', 'hu', 'it', 'ja', 'ko', 'nb', 'pl', 'pt', 'ru', 'es', 'sv', 'tr', 'ar', 'ro', 'sr-Cyrl', 'sr-Latn', 'sk'
     * @param callback A block where OcrResult* is a result object and NSError* is nil if the operation is successful
     */
    - (void) recognizePrintedTextInStreamWithDetectOrientation : (BOOL) detectOrientation withImage : (NSData*) image withLanguage : (OcrLanguages*) language withCallback : (void(^)(OcrResult*, NSError*)) callback;

    /**
     * This operation generates a description of an image in human readable language with complete sentences.  The description is based on a collection of content tags, which are also returned by the operation. More than one description can be generated for each image.  Descriptions are ordered by their confidence score. All descriptions are in English. Two input methods are supported -- (1) Uploading an image or (2) specifying an image URL.A successful response will be returned in JSON.  If the request failed, the response will contain an error code and a message to help understand what went wrong.
     *
     * @param image An image stream.
     * @param callback A block where ImageDescription* is a result object and NSError* is nil if the operation is successful
     * @throws IllegalArgumentException thrown if parameters fail the validation
     */
    - (void) describeImageInStreamWithImage : (NSData*) image withCallback : (void(^)(ImageDescription*, NSError*)) callback;

    /**
     * This operation generates a description of an image in human readable language with complete sentences.  The description is based on a collection of content tags, which are also returned by the operation. More than one description can be generated for each image.  Descriptions are ordered by their confidence score. All descriptions are in English. Two input methods are supported -- (1) Uploading an image or (2) specifying an image URL.A successful response will be returned in JSON.  If the request failed, the response will contain an error code and a message to help understand what went wrong.
     *
     * @param image An image stream.
     * @param maxCandidates Maximum number of candidate descriptions to be returned.  The default is 1.
     * @param language The desired language for output generation. If this parameter is not specified, the default value is &amp;quot;en&amp;quot;.Supported languages:en - English, Default. es - Spanish, ja - Japanese, pt - Portuguese, zh - Simplified Chinese. Possible values include: 'en', 'es', 'ja', 'pt', 'zh'
     * @param callback A block where ImageDescription* is a result object and NSError* is nil if the operation is successful
     */
    - (void) describeImageInStreamWithImage : (NSData*) image withMaxCandidates : (NSNumber*) maxCandidates withLanguage : (NSString*) language withCallback : (void(^)(ImageDescription*, NSError*)) callback;

    /**
     * This operation generates a list of words, or tags, that are relevant to the content of the supplied image. The Computer Vision API can return tags based on objects, living beings, scenery or actions found in images. Unlike categories, tags are not organized according to a hierarchical classification system, but correspond to image content. Tags may contain hints to avoid ambiguity or provide context, for example the tag 'cello' may be accompanied by the hint 'musical instrument'. All tags are in English.
     *
     * @param image An image stream.
     * @param callback A block where TagResult* is a result object and NSError* is nil if the operation is successful
     * @throws IllegalArgumentException thrown if parameters fail the validation
     */
    - (void) tagImageInStreamWithImage : (NSData*) image withCallback : (void(^)(TagResult*, NSError*)) callback;

    /**
     * This operation generates a list of words, or tags, that are relevant to the content of the supplied image. The Computer Vision API can return tags based on objects, living beings, scenery or actions found in images. Unlike categories, tags are not organized according to a hierarchical classification system, but correspond to image content. Tags may contain hints to avoid ambiguity or provide context, for example the tag 'cello' may be accompanied by the hint 'musical instrument'. All tags are in English.
     *
     * @param image An image stream.
     * @param language The desired language for output generation. If this parameter is not specified, the default value is &amp;quot;en&amp;quot;.Supported languages:en - English, Default. es - Spanish, ja - Japanese, pt - Portuguese, zh - Simplified Chinese. Possible values include: 'en', 'es', 'ja', 'pt', 'zh'
     * @param callback A block where TagResult* is a result object and NSError* is nil if the operation is successful
     */
    - (void) tagImageInStreamWithImage : (NSData*) image withLanguage : (NSString*) language withCallback : (void(^)(TagResult*, NSError*)) callback;

    /**
     * This operation recognizes content within an image by applying a domain-specific model.  The list of domain-specific models that are supported by the Computer Vision API can be retrieved using the /models GET request.  Currently, the API only provides a single domain-specific model: celebrities. Two input methods are supported -- (1) Uploading an image or (2) specifying an image URL. A successful response will be returned in JSON.  If the request failed, the response will contain an error code and a message to help understand what went wrong.
     *
     * @param model The domain-specific content to recognize.
     * @param image An image stream.
     * @param callback A block where DomainModelResults* is a result object and NSError* is nil if the operation is successful
     * @throws IllegalArgumentException thrown if parameters fail the validation
     */
    - (void) analyzeImageByDomainInStreamWithModel : (NSString*) model withImage : (NSData*) image withCallback : (void(^)(DomainModelResults*, NSError*)) callback;

    /**
     * This operation recognizes content within an image by applying a domain-specific model.  The list of domain-specific models that are supported by the Computer Vision API can be retrieved using the /models GET request.  Currently, the API only provides a single domain-specific model: celebrities. Two input methods are supported -- (1) Uploading an image or (2) specifying an image URL. A successful response will be returned in JSON.  If the request failed, the response will contain an error code and a message to help understand what went wrong.
     *
     * @param model The domain-specific content to recognize.
     * @param image An image stream.
     * @param language The desired language for output generation. If this parameter is not specified, the default value is &amp;quot;en&amp;quot;.Supported languages:en - English, Default. es - Spanish, ja - Japanese, pt - Portuguese, zh - Simplified Chinese. Possible values include: 'en', 'es', 'ja', 'pt', 'zh'
     * @param callback A block where DomainModelResults* is a result object and NSError* is nil if the operation is successful
     */
    - (void) analyzeImageByDomainInStreamWithModel : (NSString*) model withImage : (NSData*) image withLanguage : (NSString*) language withCallback : (void(^)(DomainModelResults*, NSError*)) callback;

    /**
     * Recognize Text operation. When you use the Recognize Text interface, the response contains a field called 'Operation-Location'. The 'Operation-Location' field contains the URL that you must use for your Get Recognize Text Operation Result operation.
     *
     * @param image An image stream.
     * @param mode Type of text to recognize. Possible values include: 'Handwritten', 'Printed'
     * @param callback A block where NSError* is nil if the operation is successful
     */
    - (void) recognizeTextInStreamWithImage : (NSData*) image withMode : (TextRecognitionMode*) mode withCallback : (void(^)(NSError*)) callback;

@end

@interface ComputerVisionClient : NSObject <ComputerVisionClientProtocol>

    /**
        The default base URL. https://{Endpoint}/vision/v2.0
    */
    @property (readonly) NSString* DEFAULT_BASE_URL;

    /**
        Supported Cognitive Services endpoints.
    */
    @property  NSString* endpoint;

    + (id<ComputerVisionClientProtocol>) createWithEndpoint: (NSString*) endpoint;

@end
