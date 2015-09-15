//
//  KCContact.h
//  hhching
//
//  Created by apple on 15/6/5.
//  Copyright (c) 2015年 com.h.limited. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KCContact : NSObject

@property (nonatomic, copy) NSString * firstName;

@property (nonatomic,copy) NSString * lastName;

@property (nonatomic,copy) NSString * phoneNumber;


-(KCContact *) initWithFirstName:(NSString *) firstName andLastName:(NSString *) lastName andPhoneNumber:(NSString *) phoneNumber;

-(NSString *) getName;


+(KCContact *) initWithFirstName:(NSString *) firstName andLastName:(NSString *) lastName andPhoneNumber:
(NSString *) phoneNumber;

@end
