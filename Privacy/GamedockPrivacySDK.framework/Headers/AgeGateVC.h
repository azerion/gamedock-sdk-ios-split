//
//  PrivacyPolicyVC.h
//  Gamedock
//
//  Copyright © 2018 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PrivacyPolicyMoreVC.h"

@interface AgeGateVC : UIViewController<PrivacyPolicyMoreDelegate>

@property (weak, nonatomic) IBOutlet UIView *popupRoot;
@property (weak, nonatomic) IBOutlet UIImageView *headerImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UITextView *descriptionTextView;
@property (weak, nonatomic) IBOutlet UITextView *verificationTextView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *widthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *headerHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomBarHeightConstraint;
@property (nonatomic) int state;
@property (assign, nonatomic) int requiredAge;
@property (assign, nonatomic) BOOL shouldBlock;

- (IBAction)ageGroup1ButtonPressed:(id)sender;
- (IBAction)ageGroup2ButtonPressed:(id)sender;
- (IBAction)ageGroup3ButtonPressed:(id)sender;

@end
