//
//  TableViewController.h
//  sqlitesample
//
//  Created by SENTHILKUMAR on 29/01/19.
//  Copyright © 2019 Personal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EditInfoViewController.h"

@interface TableViewController : UITableViewController
<EditInfoViewControllerDelegate>

- (IBAction)addNewRecord:(id)sender;
@end
