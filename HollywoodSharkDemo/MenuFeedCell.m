//
//  MenuFeedCell.m
//  HollywoodSharkDemo
//
//  Created by Ryan Hittner on 4/12/13.
//  Copyright (c) 2013 Ryan Hittner. All rights reserved.
//

#import "MenuFeedCell.h"

@implementation MenuFeedCell

@synthesize image;
@synthesize text;
@synthesize timestamp;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
