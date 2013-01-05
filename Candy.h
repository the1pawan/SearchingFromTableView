//
//  Candy.h
//  SearchingDemo
//
//  Created by Shreekant Pawar on 30/10/12.
//  Copyright (c) 2012 shreekant@farasbee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Candy : NSObject
{
    NSString *category;
    NSString *name;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *name;

+ (id)candyOfCategory:(NSString*)category name:(NSString*)name;

@end
