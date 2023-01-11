//
//  PrivacyPolicyMoreVC.h
//  Gamedock
//
//  Copyright © 2018 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Gamedock/GamedockEventTracker.h"

@protocol PrivacyPolicyMoreDelegate <NSObject>

-(void)onClosed:(BOOL)changed;

@end

@interface PrivacyPolicyMoreVC : UIViewController

@property (weak, nonatomic) IBOutlet UIView *popupRoot;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *widthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *headerHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomBarHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *scrollContentWidthConstraint;

@property (weak, nonatomic) IBOutlet UIImageView *headerImageView;

@property (weak, nonatomic) IBOutlet UIButton *checkbox0Button;
@property (weak, nonatomic) IBOutlet UIButton *checkbox1Button;

@property (weak, nonatomic) IBOutlet UILabel *topLabel;
@property (weak, nonatomic) IBOutlet UILabel *checkmark0Label;
@property (weak, nonatomic) IBOutlet UILabel *checkmark1Label;
@property (weak, nonatomic) IBOutlet UILabel *bullet0Label;
@property (weak, nonatomic) IBOutlet UILabel *bullet1Label;
@property (weak, nonatomic) IBOutlet UILabel *bullet2Label;
@property (weak, nonatomic) IBOutlet UILabel *bottomLabel;

@property (weak, nonatomic) IBOutlet UILabel *thirdPartyServicesLabel;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *thirdPartyServicesLabelBottomConstraint;
@property (weak, nonatomic) IBOutlet UIView *scrollContentView;

@property (weak, nonatomic) IBOutlet UIButton *learnMoreButton;
@property (weak, nonatomic) IBOutlet UIButton *policyButton;
@property (weak, nonatomic) IBOutlet UIButton *saveButton;

@property (weak, nonatomic) IBOutlet UIScrollView *mainScrollView;

@property (retain, nonatomic) NSString *learnMoreUrl;
@property (retain, nonatomic) NSString *policyUrl;
@property (assign, nonatomic) GamedockPrivacyStatus startPriv;
@property (assign, nonatomic) BOOL triggeredFromStartScreen;

@property (nonatomic, assign) id<PrivacyPolicyMoreDelegate> delegate;

- (IBAction)checkbox0ButtonPressed:(id)sender;
- (IBAction)checkbox1ButtonPressed:(id)sender;

- (IBAction)learnMoreButtonPressed:(id)sender;
- (IBAction)policyButtonPressed:(id)sender;
- (IBAction)saveButtonPressed:(id)sender;

@end
