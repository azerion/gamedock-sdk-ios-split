//
//  PrivacyPolicyAdsVC.h
//  Gamedock
//
//  Copyright © 2018 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface PrivacyPolicyAdsVC : UIViewController

@property (weak, nonatomic) IBOutlet UIView *popupRoot;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *widthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *headerHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomBarHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *scrollContentWidthConstraint;

@property (weak, nonatomic) IBOutlet UIImageView *headerImageView;

@property (weak, nonatomic) IBOutlet UIButton *checkbox0Button;

@property (weak, nonatomic) IBOutlet UILabel *topLabel;
@property (weak, nonatomic) IBOutlet UILabel *checkmark0Label;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;

@property (weak, nonatomic) IBOutlet UIButton *saveButton;

@property (weak, nonatomic) IBOutlet UIScrollView *mainScrollView;

@property (assign, nonatomic) int startPriv;

- (IBAction)checkbox0ButtonPressed:(id)sender;

- (IBAction)saveButtonPressed:(id)sender;

@end
