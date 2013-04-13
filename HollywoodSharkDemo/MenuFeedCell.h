//
//  MenuFeedCell.h
//  HollywoodSharkDemo
//
//  Created by Ryan Hittner on 4/12/13.
//  Copyright (c) 2013 Ryan Hittner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MenuFeedCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UIImageView *image;
@property (nonatomic, strong) IBOutlet UITextView *text;
@property (nonatomic, strong) IBOutlet UILabel *timestamp;

@end
