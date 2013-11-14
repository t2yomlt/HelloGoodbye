//
//  ViewController.h
//  HelloGoodbye
//
//  Created by 越智　達也 on 13/10/10.
//  Copyright (c) 2013年 Univercity of Kitakyushu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloGoodByeViewController :UIViewController

@property (weak, nonatomic) IBOutlet UILabel *label; @property enum {Hello, GoodBye} state;

- (IBAction)push:(id)sender;

@end