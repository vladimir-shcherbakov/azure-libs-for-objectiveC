//
//  main.m
//  azure-libs-for-objectiveC
//
//  Created by Vladimir Shcherbakov on 9/29/18.
//  Copyright © 2018 Vladimir Shcherbakov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ComputerVisionClient.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");        
        
        // create client
        id<ComputerVisionClientProtocol> client = [ComputerVisionClient createWithEndpoint:@"some endpoing"];
        
        // call operation
        [client recognizePrintedTextWithDetectOrientation :TRUE
                                                  withUrl : @"http://myurl.org"
                                             withLanguage : OcrLanguages.EN
                                             withCallback : ^(OcrResult * res, NSError * err) {
                                                // get result
                                                NSLog(@"Hello, callback! %@", res.language);
                                             }];
    }
    
    return 0;
}
