//
//  AirplayKitAppDelegate.h
//  AirplayKit
//
//  Created by Andy Roth on 1/18/11.
//  Copyright 2011 Resource Interactive. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AirplayKitAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end