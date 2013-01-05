//
//  detailAppDelegate.h
//  SearchingDemo
//
//  Created by Shreekant Pawar on 30/10/12.
//  Copyright (c) 2012 shreekant@farasbee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableViewController.h"
@interface detailAppDelegate : UIResponder <UIApplicationDelegate>
{
    TableViewController *tableView;
}
@property (strong, nonatomic) UIWindow *window;

@end
