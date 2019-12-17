//
//  AppDelegate.h
//  pass
//
//  Created by 李子强 on 2019/12/17.
//  Copyright © 2019 李子强. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

