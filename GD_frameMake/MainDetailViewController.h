//
//  MainDetailViewController.h
//  GD_frameMake
//
//  Created by 东 on 8/17/13.
//  Copyright (c) 2013 东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
