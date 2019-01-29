//
//  EditInfoViewController.h
//  sqlitesample
//
//  Created by SENTHILKUMAR on 29/01/19.
//  Copyright © 2019 Personal. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EditInfoViewControllerDelegate
-(void)editingInfoWasFinished;
@end


@interface EditInfoViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *txtFirstname;
@property (weak, nonatomic) IBOutlet UITextField *txtLastname;
@property (weak, nonatomic) IBOutlet UITextField *txtAge;
@property (nonatomic, strong) id<EditInfoViewControllerDelegate> delegate;
@property (nonatomic) int recordIDToEdit;

- (IBAction)saveInfo:(id)sender;
@end
