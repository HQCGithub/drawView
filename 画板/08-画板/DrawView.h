//
//  DrawView.h
//  08-画板
//
//  Created by xiaomage on 15/6/19.
//  Copyright (c) 2015年 xiaomage. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DrawView : UIView

@property (nonatomic, strong) UIColor *pathColor;
@property (nonatomic, assign) NSInteger lineWidth;


@property (nonatomic, strong) UIImage *image;

// 清屏
- (void)clear;

// 撤销
- (void)undo;


@end
