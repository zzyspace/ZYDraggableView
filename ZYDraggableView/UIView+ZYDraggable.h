//
//  UIView+ZYDraggable.h
//  DraggableView
//
//  Created by 张志延 on 16/8/25. (https://github.com/zzyspace)
//  Copyright © 2016年 tongbu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Draggable)

/**
 *  Make view draggable.
 *
 *  @param view    Animator reference view, usually is super view.
 *  @param damping Value from 0.0 to 1.0. 0.0 is the least oscillation. default is 0.4.
 */
- (void)makeDraggable;
- (void)makeDraggableInView:(UIView *)view damping:(CGFloat)damping;

/**
 *  Disable view draggable.
 */
- (void)removeDraggable;

/**
 *  If you call make draggable method in the initialize method such as `-initWithFrame:`,
 *  `-viewDidLoad`, the view may not be layout correctly at that time. So you should
 *  update snap point in `-layoutSubviews` or `-viewDidLayoutSubviews`.
 *
 *  By the way, you can call make draggable method in `-layoutSubviews` or
 *  `-viewDidLayoutSubviews` directly instead of update snap point.
 */
- (void)updateSnapPoint;

@end
