//
//  PrivacyPolicyThirdPartyVC.h
//  Gamedock
//
//  Copyright © 2019 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PrivacyPolicyMoreVC.h"

@interface PrivacyPolicyThirdPartyVC : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *urlLabel;
@property (weak, nonatomic) IBOutlet UIImageView *arrowImage;
@property (weak, nonatomic) IBOutlet UIButton *openButton;

-(void)setup:(NSString*)title url:(NSString*)url vc:(PrivacyPolicyMoreVC*)parentVc;

-(IBAction)onPrivacyPolicyLinkPressed:(id)sender;

@end
