//
//  BLCWebBrowserViewController.h
//  BlocBrowser
//
//  Created by Andy Bradbury on 11/08/2014.
//  Copyright (c) 2014 Tin Bear Studios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BLCWebBrowserViewController : UIViewController

/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */

- (void) resetWebView;

@end
