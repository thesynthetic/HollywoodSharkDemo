//
//  InitialSlidingViewController.m
//  ECSlidingViewController
//
//  Created by Michael Enriquez on 1/25/12.
//  Copyright (c) 2012 EdgeCase. All rights reserved.
//

#import "InitialViewController.h"

@implementation InitialViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIStoryboard *storyboard;
    storyboard = [UIStoryboard storyboardWithName:@"iPad" bundle:nil];
    
    
    
    ECSlidingViewController *slidingViewController = (ECSlidingViewController *)self.window.rootViewController;
    
    slidingViewController.topViewController = [storyboard instantiateViewControllerWithIdentifier:@"FirstTop"];
    
    
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation
{
    return YES;
}

@end
