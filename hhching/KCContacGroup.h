//
//  KCContacGroup.h
//  hhching
//
//  Created by apple on 15/6/5.
//  Copyright (c) 2015年 com.h.limited. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KCContacGroup : NSObject

@property(nonatomic,copy) NSString *name;

@property(nonatomic, copy) NSString *detail;


@property (nonatomic,strong) NSMutableArray *contacts;


-(KCContacGroup *) initWithName:(NSString *) name andDetail:(NSString *) detail andContacts:(NSMutableArray *) contacts;


+(KCContacGroup *) initWithName:(NSString *) name andDetail:(NSString *) detail andContacts:
(NSMutableArray *) contacts;


@end
