//
//  MenuTableViewController.h
//  HollywoodSharkDemo
//
//  Created by Ryan Hittner on 4/12/13.
//  Copyright (c) 2013 Ryan Hittner. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ECSlidingViewController.h"
#import "MenuFeedCell.h"

@interface MenuTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *tableViewNews;
    UITableView *tableViewMessages;
}

@property (nonatomic, retain) IBOutlet UITableView * tableViewNews;
@property (nonatomic, retain) IBOutlet UITableView * tableViewMessages;

@property (strong, nonatomic) NSMutableArray *feedItems;

@end
