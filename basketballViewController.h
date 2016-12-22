//
//  basketballViewController.h
//  UCSDAthletics
//
//  Created by Daniel Sung on 12/21/16.
//  Copyright © 2016 Daniel Sung. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "roster.h"

@interface basketballViewController : UIViewController


//Variables
@property(strong, nonatomic) NSString * genderString;
@property roster * teamRoster;



//Methods
-(void)setupMen;
-(void)setupWomen;


@end
