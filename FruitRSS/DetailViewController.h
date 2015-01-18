//
//  DetailViewController.h
//  FruitRSS
//
//  Created by Alex on 18/01/15.
//  Copyright (c) 2015 AlexLesnenko. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSString *urlString;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
