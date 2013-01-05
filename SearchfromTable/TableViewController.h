//
//  TableViewController.h
//  SearchingDemo
//
//  Created by Shreekant Pawar on 30/10/12.
//  Copyright (c) 2012 shreekant@farasbee.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Candy.h"
@interface TableViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,UISearchBarDelegate,UISearchDisplayDelegate>
{
    NSArray *candyArray;
    NSMutableArray *filteredCandyArray;
    IBOutlet UITableView *tableView;
    IBOutlet UIView *CandySearchBar;
}
@property(nonatomic, retain)NSArray *candyArray;
@property (strong,nonatomic) NSMutableArray *filteredCandyArray;
@property IBOutlet UISearchBar *candySearchBar;
@end
