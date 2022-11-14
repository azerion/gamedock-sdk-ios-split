//
//  PrivacyPolicyInfoVC.h
//  Gamedock
//
//  Copyright © 2018 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface PrivacyPolicyInfoVC : UIViewController

@property (weak, nonatomic) IBOutlet UIView *popupRoot;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *widthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *headerHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomBarHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *scrollContentWidthConstraint;

@property (weak, nonatomic) IBOutlet UIImageView *headerImageView;

@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;

@property (weak, nonatomic) IBOutlet UIButton *okButton;

@property (weak, nonatomic) IBOutlet UIScrollView *mainScrollView;

- (IBAction)okButtonPressed:(id)sender;

@end
