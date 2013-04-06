//
//  FirstTopViewController.h
//  HollywoodSharkDemo
//
//  Created by Ryan Hittner on 4/5/13.
//  Copyright (c) 2013 Ryan Hittner. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "ECSlidingViewController.h"
#import "MenuViewController.h"


@interface FirstTopViewController : ECSlidingViewController

- (IBAction)revealMenu:(id)sender;
- (IBAction)revealUnderRight:(id)sender;

@end
