//
//  PybVlcStreamPlayerViewController.h
//  MobileVLCKiteTest
//
//  Created by Yanbing Peng on 9/02/16.
//  Copyright © 2016 Yanbing Peng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PybVlcStreamPlayerViewController : UIViewController
@property(nonatomic) BOOL playOnStart;
@property(strong, nonatomic) NSString *urlString;
@end
