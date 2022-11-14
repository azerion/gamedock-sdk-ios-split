//
//  PrivacyPolicyVC.h
//  Gamedock
//
//  Copyright © 2018 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PrivacyPolicyMoreVC.h"

@interface PrivacyPolicyVC : UIViewController<PrivacyPolicyMoreDelegate>

@property (weak, nonatomic) IBOutlet UIView *popupRoot;
@property (weak, nonatomic) IBOutlet UIImageView *headerImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UITextView *descriptionTextView;
@property (weak, nonatomic) IBOutlet UIButton *acceptButton;
@property (weak, nonatomic) IBOutlet UIButton *moreInfoButton;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *widthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *headerHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomBarHeightConstraint;
@property (nonatomic) int state;

- (IBAction)acceptButtonPressed:(id)sender;
- (IBAction)settingsButtonPressed:(id)sender;

@end
