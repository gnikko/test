//
//  MasterViewController.h
//  testDemo
//
//  Created by huyd on 12/13/13.
//  Copyright (c) 2013 huyd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
