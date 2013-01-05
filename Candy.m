//
//  Candy.m
//  SearchingDemo
//
//  Created by Shreekant Pawar on 30/10/12.
//  Copyright (c) 2012 shreekant@farasbee.com. All rights reserved.
//

#import "Candy.h"

@implementation Candy

@synthesize category;
@synthesize name;

+ (id)candyOfCategory:(NSString *)category name:(NSString *)name
{
    Candy *newCandy = [[self alloc] init];
    newCandy.category = category;
    newCandy.name = name;
    return newCandy;
}

@end
