//
//  DetailViewController.h
//  testDemo
//
//  Created by huyd on 12/13/13.
//  Copyright (c) 2013 huyd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
