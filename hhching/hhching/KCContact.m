//
//  KCContact.m
//  hhching
//
//  Created by apple on 15/6/5.
//  Copyright (c) 2015年 com.h.limited. All rights reserved.
//

#import "KCContact.h"

@implementation KCContact

-(KCContact *) initWithFirstName:(NSString *)firstName andLastName:(NSString *)lastName andPhoneNumber:(NSString *)phoneNumber{
    
    if (self=[super init]) {
        self.firstName=firstName;
        self.lastName= lastName;
        self.phoneNumber = phoneNumber;
        
    }
    return self;

}

-(NSString *) getName{

    return [NSString stringWithFormat:@"%@ , %@", _firstName,_lastName];

}

+(KCContact *) initWithFirstName:(NSString *)firstName andLastName:(NSString *)lastName andPhoneNumber:(NSString *)phoneNumber{

    KCContact * contact1 = [[KCContact alloc]initWithFirstName:firstName andLastName:lastName andPhoneNumber:phoneNumber];
    
    return contact1;

}


@end
