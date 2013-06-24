//
//  HelloAppDelegate.h
//  Hello
//
//  Created by Sahithi Patibandla on 6/24/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

@class Isgl3dViewController;

@interface HelloAppDelegate : NSObject <UIApplicationDelegate> {

@private
	Isgl3dViewController * _viewController;
	UIWindow * _window;
}

@property (nonatomic, retain) UIWindow * window;

@end
