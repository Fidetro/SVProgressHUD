//
//  ViewController.h
//  SVProgressHUD, https://github.com/SVProgressHUD/SVProgressHUD
//
//  Copyright (c) 2011-2023 Sam Vermette and contributors. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)show;
- (IBAction)showWithStatus;

- (IBAction)dismiss;
- (IBAction)popActivity;
- (IBAction)showInfoWithStatus;
- (IBAction)showSuccessWithStatus;
- (IBAction)showErrorWithStatus;
- (IBAction)showTextWithStatus;

- (IBAction)changeStyle:(id)sender;
- (IBAction)changeAnimationType:(id)sender;
- (IBAction)changeMaskType:(id)sender;

@end

