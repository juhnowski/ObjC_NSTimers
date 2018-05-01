//
//  ViewController.h
//  NSTimers
//
//  Created by SBT on 01/05/2018.
//  Copyright © 2018 SBT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    
    NSTimer *timer;
    int countInt;
}
@property (weak, nonatomic) IBOutlet UILabel *Label;
- (IBAction)startCount:(id)sender;
- (IBAction)stopButton:(id)sender;

@end

