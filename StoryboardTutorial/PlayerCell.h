//
//  PlayerCell.h
//  StoryboardTutorial
//
//  Created by Hannah Carney on 6/8/15.
//  Copyright (c) 2015 Hannah Carney. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;

@end
