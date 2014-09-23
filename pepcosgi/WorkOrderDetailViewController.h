//
//  WorkOrderDetailViewController.h
//  pepcosgi
//
//  Created by Admin on 9/23/14.
//  Copyright (c) 2014 Collabera. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WorkOrderDetailViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,UITextViewDelegate>

@property (weak, nonatomic) IBOutlet UIView *leftView;
@property (weak, nonatomic) IBOutlet UIView *workOrderDetailView;
- (IBAction)collapseView:(id)sender;
@property (weak, nonatomic) IBOutlet UINavigationItem *workOrderNoTitle;

@end
