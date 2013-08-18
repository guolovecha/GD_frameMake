//
//  NSDate+Extensions.h
//  GD_frameMake
//
//  Created by 东 on 8/18/13.
//  Copyright (c) 2013 东. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (GD_Extensions)

-(NSString *)timeInterval;

-(NSDate*)timeIntervalToDate:(NSString*)terval;

@end
