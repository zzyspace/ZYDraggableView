//
//  ViewController.m
//  ZYDraggableViewDemo
//
//  Created by 张志延 on 16/8/26.
//  Copyright © 2016年 tongbu. All rights reserved.
//

#import "ViewController.h"
#import "UIView+ZYDraggable.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UIImageView *avatarView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // UIImageView ignored user events by default, so set
    // `userInteractionEnabled` to YES for receive touch events.
    self.avatarView.userInteractionEnabled = YES;
    
    // Make avatarView draggable
    [self.avatarView makeDraggable];
    self.view.backgroundColor = [UIColor redColor];
}

- (void)viewDidLayoutSubviews
{
    [super viewDidLayoutSubviews];
    
    // Update snap point when layout occured
    [self.avatarView updateSnapPoint];
}

@end
