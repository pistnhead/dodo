//
//  AppDelegate.h
//  dodo
//
//  Created by Harshad Sharma on 25/08/13.
//  Copyright (c) 2013 Harshad Sharma. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (weak) IBOutlet NSMenu *statusMenu;

@property (strong, nonatomic) NSStatusItem *statusBar;

@end
