//
//  ViewController.h
//  TextField
//
//  Created by Alexey Baryshnikov on 07.06.2020.
//  Copyright © 2020 Alexey Baryshnikov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, weak) IBOutlet UITextField *firstNameField;
@property (nonatomic, weak) IBOutlet UITextField *lastNameField;

- (IBAction)actionLog:(id)sender;

@end

