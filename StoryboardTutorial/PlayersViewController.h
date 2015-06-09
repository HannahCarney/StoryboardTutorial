//
//  PlayersViewController.h
//  StoryboardTutorial
//
//  Created by Hannah Carney on 6/8/15.
//  Copyright (c) 2015 Hannah Carney. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *players;

@end
