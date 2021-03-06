//
//  Player.h
//  StoryboardTutorial
//
//  Created by Hannah Carney on 6/8/15.
//  Copyright (c) 2015 Hannah Carney. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
