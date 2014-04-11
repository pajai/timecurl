//
//  TimeSlot.h
//  TimeWarp
//
//  Created by pat on 17.06.2013.
//  Copyright (c) 2013 zuehlke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Activity;

@interface TimeSlot : NSManagedObject

@property (nonatomic, retain) NSNumber * start;
@property (nonatomic, retain) NSNumber * end;
@property (nonatomic, retain) Activity * activity;

@end
